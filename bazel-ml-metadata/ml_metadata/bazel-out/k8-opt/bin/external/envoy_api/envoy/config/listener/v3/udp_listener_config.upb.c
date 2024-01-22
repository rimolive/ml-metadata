/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/listener/v3/udp_listener_config.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/listener/v3/udp_listener_config.upb.h"
#include "envoy/config/core/v3/udp_socket_config.upb.h"
#include "envoy/config/listener/v3/quic_config.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_listener_v3_UdpListenerConfig_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_UdpSocketConfig_msginit},
  {.submsg = &envoy_config_listener_v3_QuicProtocolOptions_msginit},
};

static const upb_MiniTable_Field envoy_config_listener_v3_UdpListenerConfig__fields[2] = {
  {5, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(8, 16), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_listener_v3_UdpListenerConfig_msginit = {
  &envoy_config_listener_v3_UdpListenerConfig_submsgs[0],
  &envoy_config_listener_v3_UdpListenerConfig__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

const upb_MiniTable envoy_config_listener_v3_ActiveRawUdpListenerConfig_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy_config_listener_v3_UdpListenerConfig_msginit,
  &envoy_config_listener_v3_ActiveRawUdpListenerConfig_msginit,
};

const upb_MiniTable_File envoy_config_listener_v3_udp_listener_config_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

