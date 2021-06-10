//
// Created by Lilith on 2020-09-10.
//

#include <sstream>

#include <yordle/cdtb/xxhashlist.hpp>

#include <xxhash.h>

using namespace dragon;
using namespace std;

namespace yordle::cdtb {
    xxhashlist::xxhashlist(Array<uint8_t> &buffer) {
        string line;

        uint64_t hash;
        auto stream = buffer.to_string_stream();
        while (getline(stream, line, '\n')) {
            istringstream line_stream = istringstream(line);
            line_stream >> hex >> hash;
            line_stream >> hashes[hash];
        }
    }

    void xxhashlist::validate() {
        uint64_t hash;
        for (const auto &pair : hashes) {
            string data = pair.second;
            str_to_lower(data);
            hash = XXH64(data.data(), data.length(), 0);
            if (hash != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG64 << pair.first << " instead got " << HEXLOG64 << hash);
            }
        }
    }

    string xxhashlist::get_string(uint64_t hash) const {
        if (!hashes.contains(hash)) {
            stringstream stream;
            stream << "0x" << hex << hash;
            return stream.str();
        }

        return hashes.at(hash);
    }

    filesystem::path xxhashlist::get_path(uint64_t hash) const {
        if (!hashes.contains(hash)) {
            return filesystem::path("__unknown") / get_string(hash);
        }

        return hashes.at(hash);
    }

    void xxhashlist::combine(hashlist<uint64_t> &hashlist) {
        hashes.merge(hashlist.hashes);
    }
} // namespace yordle::cdtb
