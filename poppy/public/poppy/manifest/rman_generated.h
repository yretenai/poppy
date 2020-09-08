// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RMAN_POPPY_MANIFEST_GENERATED_H_
#define FLATBUFFERS_GENERATED_RMAN_POPPY_MANIFEST_GENERATED_H_

#include "flatbuffers/flatbuffers.h"

namespace poppy {
namespace manifest {
namespace generated {

struct rman;

struct riot_manifest_chunk;

struct riot_manifest_block;

struct riot_manifest_language;

struct riot_manifest_file;

struct riot_manifest_directory;

struct rman FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CHUNKS = 4,
    VT_LANGUAGES = 6,
    VT_FILES = 8,
    VT_DIRECTORIES = 10,
    VT_UNKNOWN1 = 12,
    VT_UNKNOWN2 = 14
  };
  int32_t chunks() const {
    return GetField<int32_t>(VT_CHUNKS, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_language>> *languages() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_language>> *>(VT_LANGUAGES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_file>> *files() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_file>> *>(VT_FILES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_directory>> *directories() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_directory>> *>(VT_DIRECTORIES);
  }
  const flatbuffers::String *unknown1() const {
    return GetPointer<const flatbuffers::String *>(VT_UNKNOWN1);
  }
  const flatbuffers::Vector<uint32_t> *unknown2() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_UNKNOWN2);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_CHUNKS) &&
           VerifyOffset(verifier, VT_LANGUAGES) &&
           verifier.VerifyVector(languages()) &&
           verifier.VerifyVectorOfTables(languages()) &&
           VerifyOffset(verifier, VT_FILES) &&
           verifier.VerifyVector(files()) &&
           verifier.VerifyVectorOfTables(files()) &&
           VerifyOffset(verifier, VT_DIRECTORIES) &&
           verifier.VerifyVector(directories()) &&
           verifier.VerifyVectorOfTables(directories()) &&
           VerifyOffset(verifier, VT_UNKNOWN1) &&
           verifier.VerifyString(unknown1()) &&
           VerifyOffset(verifier, VT_UNKNOWN2) &&
           verifier.VerifyVector(unknown2()) &&
           verifier.EndTable();
  }
};

struct rmanBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_chunks(int32_t chunks) {
    fbb_.AddElement<int32_t>(rman::VT_CHUNKS, chunks, 0);
  }
  void add_languages(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_language>>> languages) {
    fbb_.AddOffset(rman::VT_LANGUAGES, languages);
  }
  void add_files(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_file>>> files) {
    fbb_.AddOffset(rman::VT_FILES, files);
  }
  void add_directories(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_directory>>> directories) {
    fbb_.AddOffset(rman::VT_DIRECTORIES, directories);
  }
  void add_unknown1(flatbuffers::Offset<flatbuffers::String> unknown1) {
    fbb_.AddOffset(rman::VT_UNKNOWN1, unknown1);
  }
  void add_unknown2(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> unknown2) {
    fbb_.AddOffset(rman::VT_UNKNOWN2, unknown2);
  }
  explicit rmanBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  rmanBuilder &operator=(const rmanBuilder &);
  flatbuffers::Offset<rman> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<rman>(end);
    return o;
  }
};

inline flatbuffers::Offset<rman> Createrman(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t chunks = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_language>>> languages = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_file>>> files = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_directory>>> directories = 0,
    flatbuffers::Offset<flatbuffers::String> unknown1 = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> unknown2 = 0) {
  rmanBuilder builder_(_fbb);
  builder_.add_unknown2(unknown2);
  builder_.add_unknown1(unknown1);
  builder_.add_directories(directories);
  builder_.add_files(files);
  builder_.add_languages(languages);
  builder_.add_chunks(chunks);
  return builder_.Finish();
}

inline flatbuffers::Offset<rman> CreatermanDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t chunks = 0,
    const std::vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_language>> *languages = nullptr,
    const std::vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_file>> *files = nullptr,
    const std::vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_directory>> *directories = nullptr,
    const char *unknown1 = nullptr,
    const std::vector<uint32_t> *unknown2 = nullptr) {
  auto languages__ = languages ? _fbb.CreateVector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_language>>(*languages) : 0;
  auto files__ = files ? _fbb.CreateVector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_file>>(*files) : 0;
  auto directories__ = directories ? _fbb.CreateVector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_directory>>(*directories) : 0;
  auto unknown1__ = unknown1 ? _fbb.CreateString(unknown1) : 0;
  auto unknown2__ = unknown2 ? _fbb.CreateVector<uint32_t>(*unknown2) : 0;
  return poppy::manifest::generated::Createrman(
      _fbb,
      chunks,
      languages__,
      files__,
      directories__,
      unknown1__,
      unknown2__);
}

struct riot_manifest_chunk FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CHUNK_ID = 4,
    VT_BLOCKS = 6
  };
  uint64_t chunk_id() const {
    return GetField<uint64_t>(VT_CHUNK_ID, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_block>> *blocks() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_block>> *>(VT_BLOCKS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_CHUNK_ID) &&
           VerifyOffset(verifier, VT_BLOCKS) &&
           verifier.VerifyVector(blocks()) &&
           verifier.VerifyVectorOfTables(blocks()) &&
           verifier.EndTable();
  }
};

struct riot_manifest_chunkBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_chunk_id(uint64_t chunk_id) {
    fbb_.AddElement<uint64_t>(riot_manifest_chunk::VT_CHUNK_ID, chunk_id, 0);
  }
  void add_blocks(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_block>>> blocks) {
    fbb_.AddOffset(riot_manifest_chunk::VT_BLOCKS, blocks);
  }
  explicit riot_manifest_chunkBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  riot_manifest_chunkBuilder &operator=(const riot_manifest_chunkBuilder &);
  flatbuffers::Offset<riot_manifest_chunk> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<riot_manifest_chunk>(end);
    return o;
  }
};

inline flatbuffers::Offset<riot_manifest_chunk> Createriot_manifest_chunk(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t chunk_id = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_block>>> blocks = 0) {
  riot_manifest_chunkBuilder builder_(_fbb);
  builder_.add_chunk_id(chunk_id);
  builder_.add_blocks(blocks);
  return builder_.Finish();
}

inline flatbuffers::Offset<riot_manifest_chunk> Createriot_manifest_chunkDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t chunk_id = 0,
    const std::vector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_block>> *blocks = nullptr) {
  auto blocks__ = blocks ? _fbb.CreateVector<flatbuffers::Offset<poppy::manifest::generated::riot_manifest_block>>(*blocks) : 0;
  return poppy::manifest::generated::Createriot_manifest_chunk(
      _fbb,
      chunk_id,
      blocks__);
}

struct riot_manifest_block FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BLOCK_ID = 4,
    VT_COMPRESSED_SIZE = 6,
    VT_SIZE = 8
  };
  uint64_t block_id() const {
    return GetField<uint64_t>(VT_BLOCK_ID, 0);
  }
  uint32_t compressed_size() const {
    return GetField<uint32_t>(VT_COMPRESSED_SIZE, 0);
  }
  int32_t size() const {
    return GetField<int32_t>(VT_SIZE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_BLOCK_ID) &&
           VerifyField<uint32_t>(verifier, VT_COMPRESSED_SIZE) &&
           VerifyField<int32_t>(verifier, VT_SIZE) &&
           verifier.EndTable();
  }
};

struct riot_manifest_blockBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_block_id(uint64_t block_id) {
    fbb_.AddElement<uint64_t>(riot_manifest_block::VT_BLOCK_ID, block_id, 0);
  }
  void add_compressed_size(uint32_t compressed_size) {
    fbb_.AddElement<uint32_t>(riot_manifest_block::VT_COMPRESSED_SIZE, compressed_size, 0);
  }
  void add_size(int32_t size) {
    fbb_.AddElement<int32_t>(riot_manifest_block::VT_SIZE, size, 0);
  }
  explicit riot_manifest_blockBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  riot_manifest_blockBuilder &operator=(const riot_manifest_blockBuilder &);
  flatbuffers::Offset<riot_manifest_block> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<riot_manifest_block>(end);
    return o;
  }
};

inline flatbuffers::Offset<riot_manifest_block> Createriot_manifest_block(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t block_id = 0,
    uint32_t compressed_size = 0,
    int32_t size = 0) {
  riot_manifest_blockBuilder builder_(_fbb);
  builder_.add_block_id(block_id);
  builder_.add_size(size);
  builder_.add_compressed_size(compressed_size);
  return builder_.Finish();
}

struct riot_manifest_language FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LANGUAGE_ID = 4,
    VT_NAME = 6
  };
  int8_t language_id() const {
    return GetField<int8_t>(VT_LANGUAGE_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_LANGUAGE_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
};

struct riot_manifest_languageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_language_id(int8_t language_id) {
    fbb_.AddElement<int8_t>(riot_manifest_language::VT_LANGUAGE_ID, language_id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(riot_manifest_language::VT_NAME, name);
  }
  explicit riot_manifest_languageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  riot_manifest_languageBuilder &operator=(const riot_manifest_languageBuilder &);
  flatbuffers::Offset<riot_manifest_language> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<riot_manifest_language>(end);
    return o;
  }
};

inline flatbuffers::Offset<riot_manifest_language> Createriot_manifest_language(
    flatbuffers::FlatBufferBuilder &_fbb,
    int8_t language_id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  riot_manifest_languageBuilder builder_(_fbb);
  builder_.add_name(name);
  builder_.add_language_id(language_id);
  return builder_.Finish();
}

inline flatbuffers::Offset<riot_manifest_language> Createriot_manifest_languageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int8_t language_id = 0,
    const char *name = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return poppy::manifest::generated::Createriot_manifest_language(
      _fbb,
      language_id,
      name__);
}

struct riot_manifest_file FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FILE_ID = 4,
    VT_DIRECTORY_ID = 6,
    VT_SIZE = 8,
    VT_NAME = 10,
    VT_LANGUAGE_FLAGS = 12,
    VT_UNKNOWN3 = 14,
    VT_UNKNOWN4 = 16,
    VT_BLOCK_IDS = 18,
    VT_UNKNOWN6 = 20,
    VT_UNKNOWN7 = 22,
    VT_UNKNOWN8 = 24,
    VT_UNKNOWN9 = 26,
    VT_UNKNOWN10 = 28
  };
  uint64_t file_id() const {
    return GetField<uint64_t>(VT_FILE_ID, 0);
  }
  uint64_t directory_id() const {
    return GetField<uint64_t>(VT_DIRECTORY_ID, 0);
  }
  uint32_t size() const {
    return GetField<uint32_t>(VT_SIZE, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  uint32_t language_flags() const {
    return GetField<uint32_t>(VT_LANGUAGE_FLAGS, 0);
  }
  uint32_t unknown3() const {
    return GetField<uint32_t>(VT_UNKNOWN3, 0);
  }
  uint32_t unknown4() const {
    return GetField<uint32_t>(VT_UNKNOWN4, 0);
  }
  int32_t block_ids() const {
    return GetField<int32_t>(VT_BLOCK_IDS, 0);
  }
  uint32_t unknown6() const {
    return GetField<uint32_t>(VT_UNKNOWN6, 0);
  }
  const flatbuffers::String *unknown7() const {
    return GetPointer<const flatbuffers::String *>(VT_UNKNOWN7);
  }
  uint32_t unknown8() const {
    return GetField<uint32_t>(VT_UNKNOWN8, 0);
  }
  uint16_t unknown9() const {
    return GetField<uint16_t>(VT_UNKNOWN9, 0);
  }
  int8_t unknown10() const {
    return GetField<int8_t>(VT_UNKNOWN10, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_FILE_ID) &&
           VerifyField<uint64_t>(verifier, VT_DIRECTORY_ID) &&
           VerifyField<uint32_t>(verifier, VT_SIZE) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint32_t>(verifier, VT_LANGUAGE_FLAGS) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN3) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN4) &&
           VerifyField<int32_t>(verifier, VT_BLOCK_IDS) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN6) &&
           VerifyOffset(verifier, VT_UNKNOWN7) &&
           verifier.VerifyString(unknown7()) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN8) &&
           VerifyField<uint16_t>(verifier, VT_UNKNOWN9) &&
           VerifyField<int8_t>(verifier, VT_UNKNOWN10) &&
           verifier.EndTable();
  }
};

struct riot_manifest_fileBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_file_id(uint64_t file_id) {
    fbb_.AddElement<uint64_t>(riot_manifest_file::VT_FILE_ID, file_id, 0);
  }
  void add_directory_id(uint64_t directory_id) {
    fbb_.AddElement<uint64_t>(riot_manifest_file::VT_DIRECTORY_ID, directory_id, 0);
  }
  void add_size(uint32_t size) {
    fbb_.AddElement<uint32_t>(riot_manifest_file::VT_SIZE, size, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(riot_manifest_file::VT_NAME, name);
  }
  void add_language_flags(uint32_t language_flags) {
    fbb_.AddElement<uint32_t>(riot_manifest_file::VT_LANGUAGE_FLAGS, language_flags, 0);
  }
  void add_unknown3(uint32_t unknown3) {
    fbb_.AddElement<uint32_t>(riot_manifest_file::VT_UNKNOWN3, unknown3, 0);
  }
  void add_unknown4(uint32_t unknown4) {
    fbb_.AddElement<uint32_t>(riot_manifest_file::VT_UNKNOWN4, unknown4, 0);
  }
  void add_block_ids(int32_t block_ids) {
    fbb_.AddElement<int32_t>(riot_manifest_file::VT_BLOCK_IDS, block_ids, 0);
  }
  void add_unknown6(uint32_t unknown6) {
    fbb_.AddElement<uint32_t>(riot_manifest_file::VT_UNKNOWN6, unknown6, 0);
  }
  void add_unknown7(flatbuffers::Offset<flatbuffers::String> unknown7) {
    fbb_.AddOffset(riot_manifest_file::VT_UNKNOWN7, unknown7);
  }
  void add_unknown8(uint32_t unknown8) {
    fbb_.AddElement<uint32_t>(riot_manifest_file::VT_UNKNOWN8, unknown8, 0);
  }
  void add_unknown9(uint16_t unknown9) {
    fbb_.AddElement<uint16_t>(riot_manifest_file::VT_UNKNOWN9, unknown9, 0);
  }
  void add_unknown10(int8_t unknown10) {
    fbb_.AddElement<int8_t>(riot_manifest_file::VT_UNKNOWN10, unknown10, 0);
  }
  explicit riot_manifest_fileBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  riot_manifest_fileBuilder &operator=(const riot_manifest_fileBuilder &);
  flatbuffers::Offset<riot_manifest_file> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<riot_manifest_file>(end);
    return o;
  }
};

inline flatbuffers::Offset<riot_manifest_file> Createriot_manifest_file(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t file_id = 0,
    uint64_t directory_id = 0,
    uint32_t size = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    uint32_t language_flags = 0,
    uint32_t unknown3 = 0,
    uint32_t unknown4 = 0,
    int32_t block_ids = 0,
    uint32_t unknown6 = 0,
    flatbuffers::Offset<flatbuffers::String> unknown7 = 0,
    uint32_t unknown8 = 0,
    uint16_t unknown9 = 0,
    int8_t unknown10 = 0) {
  riot_manifest_fileBuilder builder_(_fbb);
  builder_.add_directory_id(directory_id);
  builder_.add_file_id(file_id);
  builder_.add_unknown8(unknown8);
  builder_.add_unknown7(unknown7);
  builder_.add_unknown6(unknown6);
  builder_.add_block_ids(block_ids);
  builder_.add_unknown4(unknown4);
  builder_.add_unknown3(unknown3);
  builder_.add_language_flags(language_flags);
  builder_.add_name(name);
  builder_.add_size(size);
  builder_.add_unknown9(unknown9);
  builder_.add_unknown10(unknown10);
  return builder_.Finish();
}

inline flatbuffers::Offset<riot_manifest_file> Createriot_manifest_fileDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t file_id = 0,
    uint64_t directory_id = 0,
    uint32_t size = 0,
    const char *name = nullptr,
    uint32_t language_flags = 0,
    uint32_t unknown3 = 0,
    uint32_t unknown4 = 0,
    int32_t block_ids = 0,
    uint32_t unknown6 = 0,
    const char *unknown7 = nullptr,
    uint32_t unknown8 = 0,
    uint16_t unknown9 = 0,
    int8_t unknown10 = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto unknown7__ = unknown7 ? _fbb.CreateString(unknown7) : 0;
  return poppy::manifest::generated::Createriot_manifest_file(
      _fbb,
      file_id,
      directory_id,
      size,
      name__,
      language_flags,
      unknown3,
      unknown4,
      block_ids,
      unknown6,
      unknown7__,
      unknown8,
      unknown9,
      unknown10);
}

struct riot_manifest_directory FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_PARENT_ID = 6,
    VT_NAME = 8
  };
  uint64_t id() const {
    return GetField<uint64_t>(VT_ID, 0);
  }
  uint64_t parent_id() const {
    return GetField<uint64_t>(VT_PARENT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_ID) &&
           VerifyField<uint64_t>(verifier, VT_PARENT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
};

struct riot_manifest_directoryBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint64_t id) {
    fbb_.AddElement<uint64_t>(riot_manifest_directory::VT_ID, id, 0);
  }
  void add_parent_id(uint64_t parent_id) {
    fbb_.AddElement<uint64_t>(riot_manifest_directory::VT_PARENT_ID, parent_id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(riot_manifest_directory::VT_NAME, name);
  }
  explicit riot_manifest_directoryBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  riot_manifest_directoryBuilder &operator=(const riot_manifest_directoryBuilder &);
  flatbuffers::Offset<riot_manifest_directory> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<riot_manifest_directory>(end);
    return o;
  }
};

inline flatbuffers::Offset<riot_manifest_directory> Createriot_manifest_directory(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t id = 0,
    uint64_t parent_id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  riot_manifest_directoryBuilder builder_(_fbb);
  builder_.add_parent_id(parent_id);
  builder_.add_id(id);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<riot_manifest_directory> Createriot_manifest_directoryDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t id = 0,
    uint64_t parent_id = 0,
    const char *name = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return poppy::manifest::generated::Createriot_manifest_directory(
      _fbb,
      id,
      parent_id,
      name__);
}

inline const poppy::manifest::generated::rman *Getrman(const void *buf) {
  return flatbuffers::GetRoot<poppy::manifest::generated::rman>(buf);
}

inline const poppy::manifest::generated::rman *GetSizePrefixedrman(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<poppy::manifest::generated::rman>(buf);
}

inline bool VerifyrmanBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<poppy::manifest::generated::rman>(nullptr);
}

inline bool VerifySizePrefixedrmanBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<poppy::manifest::generated::rman>(nullptr);
}

inline void FinishrmanBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<poppy::manifest::generated::rman> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedrmanBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<poppy::manifest::generated::rman> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace generated
}  // namespace manifest
}  // namespace poppy

#endif  // FLATBUFFERS_GENERATED_RMAN_POPPY_MANIFEST_GENERATED_H_