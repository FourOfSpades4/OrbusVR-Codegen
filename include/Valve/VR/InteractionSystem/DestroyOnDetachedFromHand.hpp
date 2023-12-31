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
  // Forward declaring type: DestroyOnDetachedFromHand
  class DestroyOnDetachedFromHand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::DestroyOnDetachedFromHand);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::DestroyOnDetachedFromHand*, "Valve.VR.InteractionSystem", "DestroyOnDetachedFromHand");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.DestroyOnDetachedFromHand
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AD0750
  class DestroyOnDetachedFromHand : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void OnDetachedFromHand(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x116611C
    void OnDetachedFromHand(::Valve::VR::InteractionSystem::Hand* hand);
    // public System.Void .ctor()
    // Offset: 0x1166198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DestroyOnDetachedFromHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::DestroyOnDetachedFromHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DestroyOnDetachedFromHand*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.DestroyOnDetachedFromHand
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::DestroyOnDetachedFromHand::OnDetachedFromHand
// Il2CppName: OnDetachedFromHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::DestroyOnDetachedFromHand::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::DestroyOnDetachedFromHand::OnDetachedFromHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::DestroyOnDetachedFromHand*), "OnDetachedFromHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::DestroyOnDetachedFromHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
