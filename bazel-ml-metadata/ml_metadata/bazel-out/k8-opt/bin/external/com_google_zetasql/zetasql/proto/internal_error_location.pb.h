// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/proto/internal_error_location.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "zetasql/public/error_location.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto;
namespace zetasql {
class InternalErrorLocation;
struct InternalErrorLocationDefaultTypeInternal;
extern InternalErrorLocationDefaultTypeInternal _InternalErrorLocation_default_instance_;
}  // namespace zetasql
PROTOBUF_NAMESPACE_OPEN
template<> ::zetasql::InternalErrorLocation* Arena::CreateMaybeMessage<::zetasql::InternalErrorLocation>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace zetasql {

// ===================================================================

class InternalErrorLocation final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:zetasql.InternalErrorLocation) */ {
 public:
  inline InternalErrorLocation() : InternalErrorLocation(nullptr) {}
  ~InternalErrorLocation() override;
  explicit PROTOBUF_CONSTEXPR InternalErrorLocation(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  InternalErrorLocation(const InternalErrorLocation& from);
  InternalErrorLocation(InternalErrorLocation&& from) noexcept
    : InternalErrorLocation() {
    *this = ::std::move(from);
  }

  inline InternalErrorLocation& operator=(const InternalErrorLocation& from) {
    CopyFrom(from);
    return *this;
  }
  inline InternalErrorLocation& operator=(InternalErrorLocation&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const InternalErrorLocation& default_instance() {
    return *internal_default_instance();
  }
  static inline const InternalErrorLocation* internal_default_instance() {
    return reinterpret_cast<const InternalErrorLocation*>(
               &_InternalErrorLocation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InternalErrorLocation& a, InternalErrorLocation& b) {
    a.Swap(&b);
  }
  inline void Swap(InternalErrorLocation* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(InternalErrorLocation* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  InternalErrorLocation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<InternalErrorLocation>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const InternalErrorLocation& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const InternalErrorLocation& from) {
    InternalErrorLocation::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(InternalErrorLocation* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "zetasql.InternalErrorLocation";
  }
  protected:
  explicit InternalErrorLocation(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorSourceFieldNumber = 5,
    kFilenameFieldNumber = 4,
    kByteOffsetFieldNumber = 3,
  };
  // repeated .zetasql.ErrorSource error_source = 5;
  int error_source_size() const;
  private:
  int _internal_error_source_size() const;
  public:
  void clear_error_source();
  ::zetasql::ErrorSource* mutable_error_source(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::zetasql::ErrorSource >*
      mutable_error_source();
  private:
  const ::zetasql::ErrorSource& _internal_error_source(int index) const;
  ::zetasql::ErrorSource* _internal_add_error_source();
  public:
  const ::zetasql::ErrorSource& error_source(int index) const;
  ::zetasql::ErrorSource* add_error_source();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::zetasql::ErrorSource >&
      error_source() const;

  // optional string filename = 4;
  bool has_filename() const;
  private:
  bool _internal_has_filename() const;
  public:
  void clear_filename();
  const std::string& filename() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_filename(ArgT0&& arg0, ArgT... args);
  std::string* mutable_filename();
  PROTOBUF_NODISCARD std::string* release_filename();
  void set_allocated_filename(std::string* filename);
  private:
  const std::string& _internal_filename() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_filename(const std::string& value);
  std::string* _internal_mutable_filename();
  public:

  // optional int32 byte_offset = 3;
  bool has_byte_offset() const;
  private:
  bool _internal_has_byte_offset() const;
  public:
  void clear_byte_offset();
  int32_t byte_offset() const;
  void set_byte_offset(int32_t value);
  private:
  int32_t _internal_byte_offset() const;
  void _internal_set_byte_offset(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:zetasql.InternalErrorLocation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::zetasql::ErrorSource > error_source_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr filename_;
    int32_t byte_offset_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InternalErrorLocation

// optional int32 byte_offset = 3;
inline bool InternalErrorLocation::_internal_has_byte_offset() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool InternalErrorLocation::has_byte_offset() const {
  return _internal_has_byte_offset();
}
inline void InternalErrorLocation::clear_byte_offset() {
  _impl_.byte_offset_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t InternalErrorLocation::_internal_byte_offset() const {
  return _impl_.byte_offset_;
}
inline int32_t InternalErrorLocation::byte_offset() const {
  // @@protoc_insertion_point(field_get:zetasql.InternalErrorLocation.byte_offset)
  return _internal_byte_offset();
}
inline void InternalErrorLocation::_internal_set_byte_offset(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.byte_offset_ = value;
}
inline void InternalErrorLocation::set_byte_offset(int32_t value) {
  _internal_set_byte_offset(value);
  // @@protoc_insertion_point(field_set:zetasql.InternalErrorLocation.byte_offset)
}

// optional string filename = 4;
inline bool InternalErrorLocation::_internal_has_filename() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool InternalErrorLocation::has_filename() const {
  return _internal_has_filename();
}
inline void InternalErrorLocation::clear_filename() {
  _impl_.filename_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& InternalErrorLocation::filename() const {
  // @@protoc_insertion_point(field_get:zetasql.InternalErrorLocation.filename)
  return _internal_filename();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void InternalErrorLocation::set_filename(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.filename_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:zetasql.InternalErrorLocation.filename)
}
inline std::string* InternalErrorLocation::mutable_filename() {
  std::string* _s = _internal_mutable_filename();
  // @@protoc_insertion_point(field_mutable:zetasql.InternalErrorLocation.filename)
  return _s;
}
inline const std::string& InternalErrorLocation::_internal_filename() const {
  return _impl_.filename_.Get();
}
inline void InternalErrorLocation::_internal_set_filename(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.filename_.Set(value, GetArenaForAllocation());
}
inline std::string* InternalErrorLocation::_internal_mutable_filename() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.filename_.Mutable(GetArenaForAllocation());
}
inline std::string* InternalErrorLocation::release_filename() {
  // @@protoc_insertion_point(field_release:zetasql.InternalErrorLocation.filename)
  if (!_internal_has_filename()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.filename_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.filename_.IsDefault()) {
    _impl_.filename_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void InternalErrorLocation::set_allocated_filename(std::string* filename) {
  if (filename != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.filename_.SetAllocated(filename, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.filename_.IsDefault()) {
    _impl_.filename_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:zetasql.InternalErrorLocation.filename)
}

// repeated .zetasql.ErrorSource error_source = 5;
inline int InternalErrorLocation::_internal_error_source_size() const {
  return _impl_.error_source_.size();
}
inline int InternalErrorLocation::error_source_size() const {
  return _internal_error_source_size();
}
inline ::zetasql::ErrorSource* InternalErrorLocation::mutable_error_source(int index) {
  // @@protoc_insertion_point(field_mutable:zetasql.InternalErrorLocation.error_source)
  return _impl_.error_source_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::zetasql::ErrorSource >*
InternalErrorLocation::mutable_error_source() {
  // @@protoc_insertion_point(field_mutable_list:zetasql.InternalErrorLocation.error_source)
  return &_impl_.error_source_;
}
inline const ::zetasql::ErrorSource& InternalErrorLocation::_internal_error_source(int index) const {
  return _impl_.error_source_.Get(index);
}
inline const ::zetasql::ErrorSource& InternalErrorLocation::error_source(int index) const {
  // @@protoc_insertion_point(field_get:zetasql.InternalErrorLocation.error_source)
  return _internal_error_source(index);
}
inline ::zetasql::ErrorSource* InternalErrorLocation::_internal_add_error_source() {
  return _impl_.error_source_.Add();
}
inline ::zetasql::ErrorSource* InternalErrorLocation::add_error_source() {
  ::zetasql::ErrorSource* _add = _internal_add_error_source();
  // @@protoc_insertion_point(field_add:zetasql.InternalErrorLocation.error_source)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::zetasql::ErrorSource >&
InternalErrorLocation::error_source() const {
  // @@protoc_insertion_point(field_list:zetasql.InternalErrorLocation.error_source)
  return _impl_.error_source_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace zetasql

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_zetasql_2fproto_2finternal_5ferror_5flocation_2eproto
