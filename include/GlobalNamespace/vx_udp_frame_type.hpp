// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_udp_frame_type
  struct vx_udp_frame_type;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_udp_frame_type, "", "vx_udp_frame_type");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_udp_frame_type
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_udp_frame_type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_udp_frame_type
    constexpr vx_udp_frame_type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_udp_frame_type vx_frame_type_rtp
    static constexpr const int vx_frame_type_rtp = 0;
    // Get static field: static public vx_udp_frame_type vx_frame_type_rtp
    static ::GlobalNamespace::vx_udp_frame_type _get_vx_frame_type_rtp();
    // Set static field: static public vx_udp_frame_type vx_frame_type_rtp
    static void _set_vx_frame_type_rtp(::GlobalNamespace::vx_udp_frame_type value);
    // static field const value: static public vx_udp_frame_type vx_frame_type_rtcp
    static constexpr const int vx_frame_type_rtcp = 1;
    // Get static field: static public vx_udp_frame_type vx_frame_type_rtcp
    static ::GlobalNamespace::vx_udp_frame_type _get_vx_frame_type_rtcp();
    // Set static field: static public vx_udp_frame_type vx_frame_type_rtcp
    static void _set_vx_frame_type_rtcp(::GlobalNamespace::vx_udp_frame_type value);
    // static field const value: static public vx_udp_frame_type vx_frame_type_sip_message
    static constexpr const int vx_frame_type_sip_message = 2;
    // Get static field: static public vx_udp_frame_type vx_frame_type_sip_message
    static ::GlobalNamespace::vx_udp_frame_type _get_vx_frame_type_sip_message();
    // Set static field: static public vx_udp_frame_type vx_frame_type_sip_message
    static void _set_vx_frame_type_sip_message(::GlobalNamespace::vx_udp_frame_type value);
    // static field const value: static public vx_udp_frame_type vx_frame_type_sip_keepalive
    static constexpr const int vx_frame_type_sip_keepalive = 3;
    // Get static field: static public vx_udp_frame_type vx_frame_type_sip_keepalive
    static ::GlobalNamespace::vx_udp_frame_type _get_vx_frame_type_sip_keepalive();
    // Set static field: static public vx_udp_frame_type vx_frame_type_sip_keepalive
    static void _set_vx_frame_type_sip_keepalive(::GlobalNamespace::vx_udp_frame_type value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_udp_frame_type
  #pragma pack(pop)
  static check_size<sizeof(vx_udp_frame_type), 0 + sizeof(int)> __GlobalNamespace_vx_udp_frame_typeSizeCheck;
  static_assert(sizeof(vx_udp_frame_type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
