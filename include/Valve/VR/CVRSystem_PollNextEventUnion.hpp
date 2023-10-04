// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRSystem::PollNextEventUnion, "Valve.VR", "CVRSystem/PollNextEventUnion");
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.CVRSystem/PollNextEventUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRSystem::PollNextEventUnion/*, public ::System::ValueType*/ {
    public:
    public:
    // public Valve.VR.IVRSystem/_PollNextEvent pPollNextEvent
    // Size: 0x8
    // Offset: 0x0
    ::Valve::VR::IVRSystem::_PollNextEvent* pPollNextEvent;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVRSystem::_PollNextEvent*) == 0x8);
    // public Valve.VR.CVRSystem/_PollNextEventPacked pPollNextEventPacked
    // Size: 0x8
    // Offset: 0x0
    ::Valve::VR::CVRSystem::_PollNextEventPacked* pPollNextEventPacked;
    // Field size check
    static_assert(sizeof(::Valve::VR::CVRSystem::_PollNextEventPacked*) == 0x8);
    public:
    // Creating value type constructor for type: PollNextEventUnion
    constexpr PollNextEventUnion(::Valve::VR::IVRSystem::_PollNextEvent* pPollNextEvent_ = {}, ::Valve::VR::CVRSystem::_PollNextEventPacked* pPollNextEventPacked_ = {}) noexcept : pPollNextEvent{pPollNextEvent_}, pPollNextEventPacked{pPollNextEventPacked_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.IVRSystem/_PollNextEvent pPollNextEvent
    [[deprecated("Use field access instead!")]] ::Valve::VR::IVRSystem::_PollNextEvent*& dyn_pPollNextEvent();
    // Get instance field reference: public Valve.VR.CVRSystem/_PollNextEventPacked pPollNextEventPacked
    [[deprecated("Use field access instead!")]] ::Valve::VR::CVRSystem::_PollNextEventPacked*& dyn_pPollNextEventPacked();
  }; // Valve.VR.CVRSystem/PollNextEventUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"