// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVROverlay
#include "Valve/VR/CVROverlay.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVROverlay::PollNextOverlayEventUnion, "Valve.VR", "CVROverlay/PollNextOverlayEventUnion");
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.CVROverlay/PollNextOverlayEventUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVROverlay::PollNextOverlayEventUnion/*, public ::System::ValueType*/ {
    public:
    public:
    // public Valve.VR.IVROverlay/_PollNextOverlayEvent pPollNextOverlayEvent
    // Size: 0x8
    // Offset: 0x0
    ::Valve::VR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVROverlay::_PollNextOverlayEvent*) == 0x8);
    // public Valve.VR.CVROverlay/_PollNextOverlayEventPacked pPollNextOverlayEventPacked
    // Size: 0x8
    // Offset: 0x0
    ::Valve::VR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked;
    // Field size check
    static_assert(sizeof(::Valve::VR::CVROverlay::_PollNextOverlayEventPacked*) == 0x8);
    public:
    // Creating value type constructor for type: PollNextOverlayEventUnion
    constexpr PollNextOverlayEventUnion(::Valve::VR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent_ = {}, ::Valve::VR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked_ = {}) noexcept : pPollNextOverlayEvent{pPollNextOverlayEvent_}, pPollNextOverlayEventPacked{pPollNextOverlayEventPacked_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.IVROverlay/_PollNextOverlayEvent pPollNextOverlayEvent
    [[deprecated("Use field access instead!")]] ::Valve::VR::IVROverlay::_PollNextOverlayEvent*& dyn_pPollNextOverlayEvent();
    // Get instance field reference: public Valve.VR.CVROverlay/_PollNextOverlayEventPacked pPollNextOverlayEventPacked
    [[deprecated("Use field access instead!")]] ::Valve::VR::CVROverlay::_PollNextOverlayEventPacked*& dyn_pPollNextOverlayEventPacked();
  }; // Valve.VR.CVROverlay/PollNextOverlayEventUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"