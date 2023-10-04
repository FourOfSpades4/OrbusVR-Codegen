// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: Hand
  class Hand;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: IgnoreHovering
  class IgnoreHovering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::IgnoreHovering);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::IgnoreHovering*, "Valve.VR.InteractionSystem", "IgnoreHovering");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.IgnoreHovering
  // [TokenAttribute] Offset: FFFFFFFF
  class IgnoreHovering : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0xADDDD8
    // public Valve.VR.InteractionSystem.Hand onlyIgnoreHand
    // Size: 0x8
    // Offset: 0x18
    ::Valve::VR::InteractionSystem::Hand* onlyIgnoreHand;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Hand*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Valve.VR.InteractionSystem.Hand onlyIgnoreHand
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Hand*& dyn_onlyIgnoreHand();
    // public System.Void .ctor()
    // Offset: 0x116A76C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreHovering* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::IgnoreHovering::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreHovering*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.IgnoreHovering
  #pragma pack(pop)
  static check_size<sizeof(IgnoreHovering), 24 + sizeof(::Valve::VR::InteractionSystem::Hand*)> __Valve_VR_InteractionSystem_IgnoreHoveringSizeCheck;
  static_assert(sizeof(IgnoreHovering) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::IgnoreHovering::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!