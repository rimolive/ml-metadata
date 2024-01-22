/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/status.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_ANNOTATIONS_STATUS_PROTO_UPB_H_
#define UDPA_ANNOTATIONS_STATUS_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct udpa_annotations_StatusAnnotation;
typedef struct udpa_annotations_StatusAnnotation udpa_annotations_StatusAnnotation;
extern const upb_MiniTable udpa_annotations_StatusAnnotation_msginit;
extern const upb_MiniTable_Extension udpa_annotations_file_status_ext;
struct google_protobuf_FileOptions;
extern const upb_MiniTable google_protobuf_FileOptions_msginit;

typedef enum {
  udpa_annotations_UNKNOWN = 0,
  udpa_annotations_FROZEN = 1,
  udpa_annotations_ACTIVE = 2,
  udpa_annotations_NEXT_MAJOR_VERSION_CANDIDATE = 3
} udpa_annotations_PackageVersionStatus;



/* udpa.annotations.StatusAnnotation */

UPB_INLINE udpa_annotations_StatusAnnotation* udpa_annotations_StatusAnnotation_new(upb_Arena* arena) {
  return (udpa_annotations_StatusAnnotation*)_upb_Message_New(&udpa_annotations_StatusAnnotation_msginit, arena);
}
UPB_INLINE udpa_annotations_StatusAnnotation* udpa_annotations_StatusAnnotation_parse(const char* buf, size_t size, upb_Arena* arena) {
  udpa_annotations_StatusAnnotation* ret = udpa_annotations_StatusAnnotation_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &udpa_annotations_StatusAnnotation_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE udpa_annotations_StatusAnnotation* udpa_annotations_StatusAnnotation_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  udpa_annotations_StatusAnnotation* ret = udpa_annotations_StatusAnnotation_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &udpa_annotations_StatusAnnotation_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* udpa_annotations_StatusAnnotation_serialize(const udpa_annotations_StatusAnnotation* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &udpa_annotations_StatusAnnotation_msginit, 0, arena, len);
}
UPB_INLINE char* udpa_annotations_StatusAnnotation_serialize_ex(const udpa_annotations_StatusAnnotation* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &udpa_annotations_StatusAnnotation_msginit, options, arena, len);
}
UPB_INLINE void udpa_annotations_StatusAnnotation_clear_work_in_progress(const udpa_annotations_StatusAnnotation* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = 0;
}
UPB_INLINE bool udpa_annotations_StatusAnnotation_work_in_progress(const udpa_annotations_StatusAnnotation* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool);
}
UPB_INLINE void udpa_annotations_StatusAnnotation_clear_package_version_status(const udpa_annotations_StatusAnnotation* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = 0;
}
UPB_INLINE int32_t udpa_annotations_StatusAnnotation_package_version_status(const udpa_annotations_StatusAnnotation* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t);
}

UPB_INLINE void udpa_annotations_StatusAnnotation_set_work_in_progress(udpa_annotations_StatusAnnotation *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}
UPB_INLINE void udpa_annotations_StatusAnnotation_set_package_version_status(udpa_annotations_StatusAnnotation *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = value;
}

UPB_INLINE bool udpa_annotations_has_file_status(const struct google_protobuf_FileOptions* msg) {
  return _upb_Message_Getext(msg, &udpa_annotations_file_status_ext) != NULL;
}
UPB_INLINE void udpa_annotations_clear_file_status(struct google_protobuf_FileOptions* msg) {
  _upb_Message_Clearext(msg, &udpa_annotations_file_status_ext);
}
UPB_INLINE const udpa_annotations_StatusAnnotation* udpa_annotations_file_status(const struct google_protobuf_FileOptions* msg) {
  const upb_Message_Extension* ext = _upb_Message_Getext(msg, &udpa_annotations_file_status_ext);
  UPB_ASSERT(ext);
  return *UPB_PTR_AT(&ext->data, 0, const udpa_annotations_StatusAnnotation*);
}
UPB_INLINE void udpa_annotations_set_file_status(struct google_protobuf_FileOptions* msg, const udpa_annotations_StatusAnnotation* ext, upb_Arena* arena) {
  const upb_Message_Extension* msg_ext =
      _upb_Message_GetOrCreateExtension(msg, &udpa_annotations_file_status_ext, arena);
  UPB_ASSERT(msg_ext);
  *UPB_PTR_AT(&msg_ext->data, 0, const udpa_annotations_StatusAnnotation*) = ext;
}
extern const upb_MiniTable_File udpa_annotations_status_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* UDPA_ANNOTATIONS_STATUS_PROTO_UPB_H_ */
