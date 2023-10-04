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
  // Forward declaring type: Interactable
  class Interactable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::Interactable*, "Valve.VR.InteractionSystem", "Interactable");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.Interactable
  // [TokenAttribute] Offset: FFFFFFFF
  class Interactable : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate
    class OnAttachedToHandDelegate;
    // Nested type: ::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate
    class OnDetachedFromHandDelegate;
    public:
    // [CompilerGeneratedAttribute] Offset: 0xADDE10
    // private Valve.VR.InteractionSystem.Interactable/OnAttachedToHandDelegate onAttachedToHand
    // Size: 0x8
    // Offset: 0x18
    ::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate* onAttachedToHand;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xADDE20
    // private Valve.VR.InteractionSystem.Interactable/OnDetachedFromHandDelegate onDetachedFromHand
    // Size: 0x8
    // Offset: 0x20
    ::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate* onDetachedFromHand;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Valve.VR.InteractionSystem.Interactable/OnAttachedToHandDelegate onAttachedToHand
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate*& dyn_onAttachedToHand();
    // Get instance field reference: private Valve.VR.InteractionSystem.Interactable/OnDetachedFromHandDelegate onDetachedFromHand
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate*& dyn_onDetachedFromHand();
    // public System.Void add_onAttachedToHand(Valve.VR.InteractionSystem.Interactable/OnAttachedToHandDelegate value)
    // Offset: 0x116AB80
    void add_onAttachedToHand(::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate* value);
    // public System.Void remove_onAttachedToHand(Valve.VR.InteractionSystem.Interactable/OnAttachedToHandDelegate value)
    // Offset: 0x116AC6C
    void remove_onAttachedToHand(::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate* value);
    // public System.Void add_onDetachedFromHand(Valve.VR.InteractionSystem.Interactable/OnDetachedFromHandDelegate value)
    // Offset: 0x116AD58
    void add_onDetachedFromHand(::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate* value);
    // public System.Void remove_onDetachedFromHand(Valve.VR.InteractionSystem.Interactable/OnDetachedFromHandDelegate value)
    // Offset: 0x116AE44
    void remove_onDetachedFromHand(::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate* value);
    // private System.Void OnAttachedToHand(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x116AF30
    void OnAttachedToHand(::Valve::VR::InteractionSystem::Hand* hand);
    // private System.Void OnDetachedFromHand(Valve.VR.InteractionSystem.Hand hand)
    // Offset: 0x116B674
    void OnDetachedFromHand(::Valve::VR::InteractionSystem::Hand* hand);
    // public System.Void .ctor()
    // Offset: 0x116BDB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interactable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::Interactable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interactable*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.Interactable
  #pragma pack(pop)
  static check_size<sizeof(Interactable), 32 + sizeof(::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate*)> __Valve_VR_InteractionSystem_InteractableSizeCheck;
  static_assert(sizeof(Interactable) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Interactable::add_onAttachedToHand
// Il2CppName: add_onAttachedToHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Interactable::*)(::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate*)>(&Valve::VR::InteractionSystem::Interactable::add_onAttachedToHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Interactable/OnAttachedToHandDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Interactable*), "add_onAttachedToHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Interactable::remove_onAttachedToHand
// Il2CppName: remove_onAttachedToHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Interactable::*)(::Valve::VR::InteractionSystem::Interactable::OnAttachedToHandDelegate*)>(&Valve::VR::InteractionSystem::Interactable::remove_onAttachedToHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Interactable/OnAttachedToHandDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Interactable*), "remove_onAttachedToHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Interactable::add_onDetachedFromHand
// Il2CppName: add_onDetachedFromHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Interactable::*)(::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate*)>(&Valve::VR::InteractionSystem::Interactable::add_onDetachedFromHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Interactable/OnDetachedFromHandDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Interactable*), "add_onDetachedFromHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Interactable::remove_onDetachedFromHand
// Il2CppName: remove_onDetachedFromHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Interactable::*)(::Valve::VR::InteractionSystem::Interactable::OnDetachedFromHandDelegate*)>(&Valve::VR::InteractionSystem::Interactable::remove_onDetachedFromHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Interactable/OnDetachedFromHandDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Interactable*), "remove_onDetachedFromHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Interactable::OnAttachedToHand
// Il2CppName: OnAttachedToHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Interactable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Interactable::OnAttachedToHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Interactable*), "OnAttachedToHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Interactable::OnDetachedFromHand
// Il2CppName: OnDetachedFromHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::Interactable::*)(::Valve::VR::InteractionSystem::Hand*)>(&Valve::VR::InteractionSystem::Interactable::OnDetachedFromHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Valve.VR.InteractionSystem", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::Interactable*), "OnDetachedFromHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::Interactable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!