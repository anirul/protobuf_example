// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: store.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_store_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_store_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_store_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_store_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_store_2eproto;
namespace store {
class player;
class playerDefaultTypeInternal;
extern playerDefaultTypeInternal _player_default_instance_;
}  // namespace store
PROTOBUF_NAMESPACE_OPEN
template<> ::store::player* Arena::CreateMaybeMessage<::store::player>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace store {

// ===================================================================

class player :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:store.player) */ {
 public:
  player();
  virtual ~player();

  player(const player& from);
  player(player&& from) noexcept
    : player() {
    *this = ::std::move(from);
  }

  inline player& operator=(const player& from) {
    CopyFrom(from);
    return *this;
  }
  inline player& operator=(player&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const player& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const player* internal_default_instance() {
    return reinterpret_cast<const player*>(
               &_player_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(player& a, player& b) {
    a.Swap(&b);
  }
  inline void Swap(player* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline player* New() const final {
    return CreateMaybeMessage<player>(nullptr);
  }

  player* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<player>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const player& from);
  void MergeFrom(const player& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(player* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "store.player";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_store_2eproto);
    return ::descriptor_table_store_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdCharactersFieldNumber = 4,
    kNameFieldNumber = 1,
    kPasswordHashFieldNumber = 2,
    kIdFieldNumber = 3,
  };
  // repeated int64 id_characters = 4;
  int id_characters_size() const;
  private:
  int _internal_id_characters_size() const;
  public:
  void clear_id_characters();
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_id_characters(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      _internal_id_characters() const;
  void _internal_add_id_characters(::PROTOBUF_NAMESPACE_ID::int64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      _internal_mutable_id_characters();
  public:
  ::PROTOBUF_NAMESPACE_ID::int64 id_characters(int index) const;
  void set_id_characters(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_id_characters(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      id_characters() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_id_characters();

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string password_hash = 2;
  void clear_password_hash();
  const std::string& password_hash() const;
  void set_password_hash(const std::string& value);
  void set_password_hash(std::string&& value);
  void set_password_hash(const char* value);
  void set_password_hash(const char* value, size_t size);
  std::string* mutable_password_hash();
  std::string* release_password_hash();
  void set_allocated_password_hash(std::string* password_hash);
  private:
  const std::string& _internal_password_hash() const;
  void _internal_set_password_hash(const std::string& value);
  std::string* _internal_mutable_password_hash();
  public:

  // int64 id = 3;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int64 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:store.player)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > id_characters_;
  mutable std::atomic<int> _id_characters_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_hash_;
  ::PROTOBUF_NAMESPACE_ID::int64 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_store_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// player

// string name = 1;
inline void player::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& player::name() const {
  // @@protoc_insertion_point(field_get:store.player.name)
  return _internal_name();
}
inline void player::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:store.player.name)
}
inline std::string* player::mutable_name() {
  // @@protoc_insertion_point(field_mutable:store.player.name)
  return _internal_mutable_name();
}
inline const std::string& player::_internal_name() const {
  return name_.GetNoArena();
}
inline void player::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void player::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:store.player.name)
}
inline void player::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:store.player.name)
}
inline void player::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:store.player.name)
}
inline std::string* player::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* player::release_name() {
  // @@protoc_insertion_point(field_release:store.player.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void player::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:store.player.name)
}

// string password_hash = 2;
inline void player::clear_password_hash() {
  password_hash_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& player::password_hash() const {
  // @@protoc_insertion_point(field_get:store.player.password_hash)
  return _internal_password_hash();
}
inline void player::set_password_hash(const std::string& value) {
  _internal_set_password_hash(value);
  // @@protoc_insertion_point(field_set:store.player.password_hash)
}
inline std::string* player::mutable_password_hash() {
  // @@protoc_insertion_point(field_mutable:store.player.password_hash)
  return _internal_mutable_password_hash();
}
inline const std::string& player::_internal_password_hash() const {
  return password_hash_.GetNoArena();
}
inline void player::_internal_set_password_hash(const std::string& value) {
  
  password_hash_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void player::set_password_hash(std::string&& value) {
  
  password_hash_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:store.player.password_hash)
}
inline void player::set_password_hash(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_hash_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:store.player.password_hash)
}
inline void player::set_password_hash(const char* value, size_t size) {
  
  password_hash_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:store.player.password_hash)
}
inline std::string* player::_internal_mutable_password_hash() {
  
  return password_hash_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* player::release_password_hash() {
  // @@protoc_insertion_point(field_release:store.player.password_hash)
  
  return password_hash_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void player::set_allocated_password_hash(std::string* password_hash) {
  if (password_hash != nullptr) {
    
  } else {
    
  }
  password_hash_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password_hash);
  // @@protoc_insertion_point(field_set_allocated:store.player.password_hash)
}

// int64 id = 3;
inline void player::clear_id() {
  id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 player::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 player::id() const {
  // @@protoc_insertion_point(field_get:store.player.id)
  return _internal_id();
}
inline void player::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  id_ = value;
}
inline void player::set_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:store.player.id)
}

// repeated int64 id_characters = 4;
inline int player::_internal_id_characters_size() const {
  return id_characters_.size();
}
inline int player::id_characters_size() const {
  return _internal_id_characters_size();
}
inline void player::clear_id_characters() {
  id_characters_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 player::_internal_id_characters(int index) const {
  return id_characters_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 player::id_characters(int index) const {
  // @@protoc_insertion_point(field_get:store.player.id_characters)
  return _internal_id_characters(index);
}
inline void player::set_id_characters(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  id_characters_.Set(index, value);
  // @@protoc_insertion_point(field_set:store.player.id_characters)
}
inline void player::_internal_add_id_characters(::PROTOBUF_NAMESPACE_ID::int64 value) {
  id_characters_.Add(value);
}
inline void player::add_id_characters(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_add_id_characters(value);
  // @@protoc_insertion_point(field_add:store.player.id_characters)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
player::_internal_id_characters() const {
  return id_characters_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
player::id_characters() const {
  // @@protoc_insertion_point(field_list:store.player.id_characters)
  return _internal_id_characters();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
player::_internal_mutable_id_characters() {
  return &id_characters_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
player::mutable_id_characters() {
  // @@protoc_insertion_point(field_mutable_list:store.player.id_characters)
  return _internal_mutable_id_characters();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace store

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_store_2eproto