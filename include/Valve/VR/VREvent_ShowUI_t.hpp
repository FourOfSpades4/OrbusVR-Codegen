// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.EShowUIType
#include "Valve/VR/EShowUIType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_ShowUI_t
  struct VREvent_ShowUI_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_ShowUI_t, "Valve.VR", "VREvent_ShowUI_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_ShowUI_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_ShowUI_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public Valve.VR.EShowUIType eType
    // Size: 0x4
    // Offset: 0x0
    ::Valve::VR::EShowUIType eType;
    // Field size check
    static_assert(sizeof(::Valve::VR::EShowUIType) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_ShowUI_t
    constexpr VREvent_ShowUI_t(::Valve::VR::EShowUIType eType_ = {}) noexcept : eType{eType_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Valve::VR::EShowUIType
    constexpr operator ::Valve::VR::EShowUIType() const noexcept {
      return eType;
    }
    // Get instance field reference: public Valve.VR.EShowUIType eType
    [[deprecated("Use field access instead!")]] ::Valve::VR::EShowUIType& dyn_eType();
  }; // Valve.VR.VREvent_ShowUI_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_ShowUI_t), 0 + sizeof(::Valve::VR::EShowUIType)> __Valve_VR_VREvent_ShowUI_tSizeCheck;
  static_assert(sizeof(VREvent_ShowUI_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"