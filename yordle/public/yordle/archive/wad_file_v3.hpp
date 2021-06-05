//
// Created by Lilith on 2020-09-09.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include <cstdint>
#include <filesystem>
#include <istream>

#include <yordle/archive/wad_file_common.hpp>
#include <yordle/archive/wad_file_v2.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::archive {
    class YORDLE_EXPORT wad_file_v3 : public wad_file_v2 {
    private:
        static constexpr uint32_t FOURCC = DRAGON_MAGIC32('R', 'W', 3, 0);
        static constexpr uintptr_t EXPECTED_DATA_SIZE = 0x10C;

    public:
        explicit wad_file_v3() = default;
        explicit wad_file_v3(std::istream &stream);
        ~wad_file_v3() = default;

#pragma pack(push, 1)
        struct {
            uint8_t signature[256] = {};
            uint64_t checksum = 0;
            uint32_t entry_count = 0;
        };
#pragma pack(pop)
    };
} // namespace yordle::archive

#pragma clang diagnostic pop
