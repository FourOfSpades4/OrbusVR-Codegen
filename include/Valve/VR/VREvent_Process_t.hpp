// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_Process_t
  struct VREvent_Process_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_Process_t, "Valve.VR", "VREvent_Process_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Process_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Process_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 pid
    // Size: 0x4
    // Offset: 0x0
    uint pid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 oldPid
    // Size: 0x4
    // Offset: 0x4
    uint oldPid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Boolean bForced
    // Size: 0x1
    // Offset: 0x8
    bool bForced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: VREvent_Process_t
    constexpr VREvent_Process_t(uint pid_ = {}, uint oldPid_ = {}, bool bForced_ = {}) noexcept : pid{pid_}, oldPid{oldPid_}, bForced{bForced_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 pid
    [[deprecated("Use field access instead!")]] uint& dyn_pid();
    // Get instance field reference: public System.UInt32 oldPid
    [[deprecated("Use field access instead!")]] uint& dyn_oldPid();
    // Get instance field reference: public System.Boolean bForced
    [[deprecated("Use field access instead!")]] bool& dyn_bForced();
  }; // Valve.VR.VREvent_Process_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Process_t), 8 + sizeof(bool)> __Valve_VR_VREvent_Process_tSizeCheck;
  static_assert(sizeof(VREvent_Process_t) == 0x9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
