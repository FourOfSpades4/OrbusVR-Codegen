// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportInputHandlerHMD
#include "GlobalNamespace/TeleportInputHandlerHMD.hpp"
// Including type: OVRInput/RawTouch
#include "GlobalNamespace/OVRInput_RawTouch.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportInputHandlerTouch
  class TeleportInputHandlerTouch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportInputHandlerTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportInputHandlerTouch*, "", "TeleportInputHandlerTouch");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: TeleportInputHandlerTouch
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportInputHandlerTouch : public ::GlobalNamespace::TeleportInputHandlerHMD {
    public:
    // Writing base type padding for base size: 0x49 to desired offset: 0x50
    char ___base_padding[0x7] = {};
    // Nested type: ::GlobalNamespace::TeleportInputHandlerTouch::InputModes
    struct InputModes;
    // Nested type: ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons
    struct AimCapTouchButtons;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TeleportInputHandlerTouch/InputModes
    // [TokenAttribute] Offset: FFFFFFFF
    struct InputModes/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: InputModes
      constexpr InputModes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TeleportInputHandlerTouch/InputModes CapacitiveButtonForAimAndTeleport
      static constexpr const int CapacitiveButtonForAimAndTeleport = 0;
      // Get static field: static public TeleportInputHandlerTouch/InputModes CapacitiveButtonForAimAndTeleport
      static ::GlobalNamespace::TeleportInputHandlerTouch::InputModes _get_CapacitiveButtonForAimAndTeleport();
      // Set static field: static public TeleportInputHandlerTouch/InputModes CapacitiveButtonForAimAndTeleport
      static void _set_CapacitiveButtonForAimAndTeleport(::GlobalNamespace::TeleportInputHandlerTouch::InputModes value);
      // static field const value: static public TeleportInputHandlerTouch/InputModes SeparateButtonsForAimAndTeleport
      static constexpr const int SeparateButtonsForAimAndTeleport = 1;
      // Get static field: static public TeleportInputHandlerTouch/InputModes SeparateButtonsForAimAndTeleport
      static ::GlobalNamespace::TeleportInputHandlerTouch::InputModes _get_SeparateButtonsForAimAndTeleport();
      // Set static field: static public TeleportInputHandlerTouch/InputModes SeparateButtonsForAimAndTeleport
      static void _set_SeparateButtonsForAimAndTeleport(::GlobalNamespace::TeleportInputHandlerTouch::InputModes value);
      // static field const value: static public TeleportInputHandlerTouch/InputModes ThumbstickTeleport
      static constexpr const int ThumbstickTeleport = 2;
      // Get static field: static public TeleportInputHandlerTouch/InputModes ThumbstickTeleport
      static ::GlobalNamespace::TeleportInputHandlerTouch::InputModes _get_ThumbstickTeleport();
      // Set static field: static public TeleportInputHandlerTouch/InputModes ThumbstickTeleport
      static void _set_ThumbstickTeleport(::GlobalNamespace::TeleportInputHandlerTouch::InputModes value);
      // static field const value: static public TeleportInputHandlerTouch/InputModes ThumbstickTeleportForwardBackOnly
      static constexpr const int ThumbstickTeleportForwardBackOnly = 3;
      // Get static field: static public TeleportInputHandlerTouch/InputModes ThumbstickTeleportForwardBackOnly
      static ::GlobalNamespace::TeleportInputHandlerTouch::InputModes _get_ThumbstickTeleportForwardBackOnly();
      // Set static field: static public TeleportInputHandlerTouch/InputModes ThumbstickTeleportForwardBackOnly
      static void _set_ThumbstickTeleportForwardBackOnly(::GlobalNamespace::TeleportInputHandlerTouch::InputModes value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // TeleportInputHandlerTouch/InputModes
    #pragma pack(pop)
    static check_size<sizeof(TeleportInputHandlerTouch::InputModes), 0 + sizeof(int)> __GlobalNamespace_TeleportInputHandlerTouch_InputModesSizeCheck;
    static_assert(sizeof(TeleportInputHandlerTouch::InputModes) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TeleportInputHandlerTouch/AimCapTouchButtons
    // [TokenAttribute] Offset: FFFFFFFF
    struct AimCapTouchButtons/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AimCapTouchButtons
      constexpr AimCapTouchButtons(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons A
      static constexpr const int A = 0;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons A
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_A();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons A
      static void _set_A(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons B
      static constexpr const int B = 1;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons B
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_B();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons B
      static void _set_B(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons LeftTrigger
      static constexpr const int LeftTrigger = 2;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons LeftTrigger
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_LeftTrigger();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons LeftTrigger
      static void _set_LeftTrigger(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons LeftThumbstick
      static constexpr const int LeftThumbstick = 3;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons LeftThumbstick
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_LeftThumbstick();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons LeftThumbstick
      static void _set_LeftThumbstick(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons RightTrigger
      static constexpr const int RightTrigger = 4;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons RightTrigger
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_RightTrigger();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons RightTrigger
      static void _set_RightTrigger(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons RightThumbstick
      static constexpr const int RightThumbstick = 5;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons RightThumbstick
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_RightThumbstick();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons RightThumbstick
      static void _set_RightThumbstick(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons X
      static constexpr const int X = 6;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons X
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_X();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons X
      static void _set_X(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // static field const value: static public TeleportInputHandlerTouch/AimCapTouchButtons Y
      static constexpr const int Y = 7;
      // Get static field: static public TeleportInputHandlerTouch/AimCapTouchButtons Y
      static ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons _get_Y();
      // Set static field: static public TeleportInputHandlerTouch/AimCapTouchButtons Y
      static void _set_Y(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // TeleportInputHandlerTouch/AimCapTouchButtons
    #pragma pack(pop)
    static check_size<sizeof(TeleportInputHandlerTouch::AimCapTouchButtons), 0 + sizeof(int)> __GlobalNamespace_TeleportInputHandlerTouch_AimCapTouchButtonsSizeCheck;
    static_assert(sizeof(TeleportInputHandlerTouch::AimCapTouchButtons) == 0x4);
    public:
    // public UnityEngine.Transform LeftHand
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* LeftHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform RightHand
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* RightHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xADBF0C
    // public TeleportInputHandlerTouch/InputModes InputMode
    // Size: 0x4
    // Offset: 0x60
    ::GlobalNamespace::TeleportInputHandlerTouch::InputModes InputMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TeleportInputHandlerTouch::InputModes) == 0x4);
    // Padding between fields: InputMode and: rawButtons
    char __padding2[0x4] = {};
    // private readonly OVRInput/RawButton[] _rawButtons
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::GlobalNamespace::OVRInput::RawButton> rawButtons;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRInput::RawButton>) == 0x8);
    // private readonly OVRInput/RawTouch[] _rawTouch
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::GlobalNamespace::OVRInput::RawTouch> rawTouch;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRInput::RawTouch>) == 0x8);
    // [TooltipAttribute] Offset: 0xADBF44
    // public OVRInput/Controller AimingController
    // Size: 0x4
    // Offset: 0x78
    ::GlobalNamespace::OVRInput::Controller AimingController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // private OVRInput/Controller InitiatingController
    // Size: 0x4
    // Offset: 0x7C
    ::GlobalNamespace::OVRInput::Controller InitiatingController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // [TooltipAttribute] Offset: 0xADBF7C
    // public TeleportInputHandlerTouch/AimCapTouchButtons CapacitiveAimAndTeleportButton
    // Size: 0x4
    // Offset: 0x80
    ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons CapacitiveAimAndTeleportButton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons) == 0x4);
    // [TooltipAttribute] Offset: 0xADBFB4
    // public System.Single ThumbstickTeleportThreshold
    // Size: 0x4
    // Offset: 0x84
    float ThumbstickTeleportThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform LeftHand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_LeftHand();
    // Get instance field reference: public UnityEngine.Transform RightHand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_RightHand();
    // Get instance field reference: public TeleportInputHandlerTouch/InputModes InputMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TeleportInputHandlerTouch::InputModes& dyn_InputMode();
    // Get instance field reference: private readonly OVRInput/RawButton[] _rawButtons
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRInput::RawButton>& dyn__rawButtons();
    // Get instance field reference: private readonly OVRInput/RawTouch[] _rawTouch
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRInput::RawTouch>& dyn__rawTouch();
    // Get instance field reference: public OVRInput/Controller AimingController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn_AimingController();
    // Get instance field reference: private OVRInput/Controller InitiatingController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn_InitiatingController();
    // Get instance field reference: public TeleportInputHandlerTouch/AimCapTouchButtons CapacitiveAimAndTeleportButton
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons& dyn_CapacitiveAimAndTeleportButton();
    // Get instance field reference: public System.Single ThumbstickTeleportThreshold
    [[deprecated("Use field access instead!")]] float& dyn_ThumbstickTeleportThreshold();
    // private System.Void Start()
    // Offset: 0x104C884
    void Start();
    // public override LocomotionTeleport/TeleportIntentions GetIntention()
    // Offset: 0x104C888
    // Implemented from: TeleportInputHandlerHMD
    // Base method: LocomotionTeleport/TeleportIntentions TeleportInputHandlerHMD::GetIntention()
    ::GlobalNamespace::LocomotionTeleport::TeleportIntentions GetIntention();
    // public override System.Void GetAimData(out UnityEngine.Ray aimRay)
    // Offset: 0x104CD40
    // Implemented from: TeleportInputHandlerHMD
    // Base method: System.Void TeleportInputHandlerHMD::GetAimData(out UnityEngine.Ray aimRay)
    void GetAimData(ByRef<::UnityEngine::Ray> aimRay);
    // public System.Void .ctor()
    // Offset: 0x104CE10
    // Implemented from: TeleportInputHandlerHMD
    // Base method: System.Void TeleportInputHandlerHMD::.ctor()
    // Base method: System.Void TeleportInputHandler::.ctor()
    // Base method: System.Void TeleportSupport::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportInputHandlerTouch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportInputHandlerTouch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportInputHandlerTouch*, creationType>()));
    }
  }; // TeleportInputHandlerTouch
  #pragma pack(pop)
  static check_size<sizeof(TeleportInputHandlerTouch), 132 + sizeof(float)> __GlobalNamespace_TeleportInputHandlerTouchSizeCheck;
  static_assert(sizeof(TeleportInputHandlerTouch) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportInputHandlerTouch::AimCapTouchButtons, "", "TeleportInputHandlerTouch/AimCapTouchButtons");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportInputHandlerTouch::InputModes, "", "TeleportInputHandlerTouch/InputModes");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportInputHandlerTouch::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportInputHandlerTouch::*)()>(&GlobalNamespace::TeleportInputHandlerTouch::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportInputHandlerTouch*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportInputHandlerTouch::GetIntention
// Il2CppName: GetIntention
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LocomotionTeleport::TeleportIntentions (GlobalNamespace::TeleportInputHandlerTouch::*)()>(&GlobalNamespace::TeleportInputHandlerTouch::GetIntention)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportInputHandlerTouch*), "GetIntention", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportInputHandlerTouch::GetAimData
// Il2CppName: GetAimData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportInputHandlerTouch::*)(ByRef<::UnityEngine::Ray>)>(&GlobalNamespace::TeleportInputHandlerTouch::GetAimData)> {
  static const MethodInfo* get() {
    static auto* aimRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportInputHandlerTouch*), "GetAimData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aimRay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportInputHandlerTouch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
