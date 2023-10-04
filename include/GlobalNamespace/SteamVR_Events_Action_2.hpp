// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: SteamVR_Events/Action
#include "GlobalNamespace/SteamVR_Events_Action.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SteamVR_Events::Action_2, "", "SteamVR_Events/Action`2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SteamVR_Events/Action`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1>
  class SteamVR_Events::Action_2 : public ::GlobalNamespace::SteamVR_Events::Action {
    public:
    public:
    // private SteamVR_Events/Event`2<T0,T1> _event
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::SteamVR_Events::Event_2<T0, T1>* event;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Events::Event_2<T0, T1>*) == 0x8);
    // private UnityEngine.Events.UnityAction`2<T0,T1> action
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Events::UnityAction_2<T0, T1>* action;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_2<T0, T1>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private SteamVR_Events/Event`2<T0,T1> _event
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Events::Event_2<T0, T1>*& dyn__event() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Events::Action_2::dyn__event");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_event"))->offset;
      return *reinterpret_cast<::GlobalNamespace::SteamVR_Events::Event_2<T0, T1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Events.UnityAction`2<T0,T1> action
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction_2<T0, T1>*& dyn_action() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Events::Action_2::dyn_action");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "action"))->offset;
      return *reinterpret_cast<::UnityEngine::Events::UnityAction_2<T0, T1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(SteamVR_Events/Event`2<T0,T1> _event, UnityEngine.Events.UnityAction`2<T0,T1> action)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::Action_2<T0, T1>* New_ctor(::GlobalNamespace::SteamVR_Events::Event_2<T0, T1>* _event, ::UnityEngine::Events::UnityAction_2<T0, T1>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Events::Action_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::Action_2<T0, T1>*, creationType>(_event, action)));
    }
    // public override System.Void Enable(System.Boolean enabled)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: SteamVR_Events/Action
    // Base method: System.Void Action::Enable(System.Boolean enabled)
    void Enable(bool enabled) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Events::Action_2::Enable");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::GlobalNamespace::SteamVR_Events::Action*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, enabled);
    }
  }; // SteamVR_Events/Action`2
  // Could not write size check! Type: SteamVR_Events/Action`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"