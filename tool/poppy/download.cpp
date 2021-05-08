//
// Created by Lilith on 3/24/2021.
//

#include "download.hpp"

#include <mutex>

#include <fmt/core.h>

#include "deploy.hpp"

using namespace std;
using namespace yordle::manifest;
using namespace dragon;

static mutex print_lock;

namespace poppy {
    void download(PoppyConfiguration &poppy, Array<uint8_t> &manifest_data, filesystem::path &target) {
        auto manifest = riot_manifest(manifest_data);

        auto cache = poppy.cache_dir / "bundles";
        if (!filesystem::exists(cache)) {
            filesystem::create_directories(cache);
        }

        // why not just do execution::unseq -> both unseq and par_unseq are defined in pstl
        // if POPPY_THREADING is undefined because the system does not have PSTL, execution::unseq will also be undefined.
#ifdef POPPY_THREADING
        for_each(execution::par_unseq, manifest.bundles.cbegin(), manifest.bundles.cend(), [poppy, cache](const auto &bundle_pair) {
#else
        for (const auto &bundle_pair : manifest.bundles) {
#endif
            auto url = fmt::format(poppy.bundle_url, bundle_pair.first);
            auto filename = fmt::format(POPPY_BUNDLE_FILENAME_FORMAT, bundle_pair.first);
            auto cache_path = cache / filename;
            if (filesystem::exists(cache_path)) {
                print_lock.lock();
                cout << "already downloaded " << url << endl;
                print_lock.unlock();
#ifdef POPPY_THREADING
                return;
#else
                continue;
#endif
            }

            print_lock.lock();
            cout << "downloading " << url << endl;
            print_lock.unlock();

            for (auto i = 0; i < 3; ++i) {
                auto bundle_data = download_curl(url, poppy.max_speed);
                if (bundle_data == nullptr) {
                    print_lock.lock();
                    cerr << "err: can't download bundle! attempt " << i + 1 << " of 3" << endl;
                    print_lock.unlock();
                    continue;
                }

                auto array = Array<uint8_t>(*bundle_data);
                write_file(cache_path, array);
                break;
            }
#ifdef POPPY_THREADING
        });
#else
        }
#endif

        auto path = poppy.output_dir / target;
        deploy(poppy, manifest, path);
    }
} // namespace poppy
