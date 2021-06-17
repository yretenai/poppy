//
// Created by Lilith on 2020-09-10.
//

#include <sstream>

#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/cdtb/xxhashlist.hpp>

#include <xxhash.h>

using namespace dragon;
using namespace std;

namespace yordle::cdtb {
    xxhashlist::xxhashlist(Array<uint8_t> &buffer) {
        string line;

        uint64_t hash_value;
        auto stream = buffer.to_string_stream();
        while (getline(stream, line, '\n')) {
            istringstream line_stream = istringstream(line);
            line_stream >> hex >> hash_value;
            line_stream >> hashes[hash_value];
        }
    }

    void xxhashlist::validate() {
        uint64_t test;
        for (const auto &pair : hashes) {
            test = hash(pair.second);
            if (test != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG64 << pair.first << " instead got " << HEXLOG64 << test);
            }
        }
    }

    string xxhashlist::get_string(uint64_t hash) const {
        if (!hashes.contains(hash)) {
            return hashlist_collection::hex_hash(hash);
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

    uint64_t xxhashlist::hash(std::string str) {
        str_to_lower(str);
        return XXH64(str.data(), str.length(), 0);
    }

    shared_ptr<hashlist<uint64_t>> xxhashlist::restrict_bits(uint8_t bits) const {
        auto list = make_shared<xxhashlist>();
        auto mask = (1u << bits) - 1;
        for (const auto &hash : hashes) {
            list->hashes[hash.first & mask] = hash.second;
        }
        return list;
    }
} // namespace yordle::cdtb
