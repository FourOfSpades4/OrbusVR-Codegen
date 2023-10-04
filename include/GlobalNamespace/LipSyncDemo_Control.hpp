// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LipSyncDemo_Control
  class LipSyncDemo_Control;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LipSyncDemo_Control);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LipSyncDemo_Control*, "", "LipSyncDemo_Control");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LipSyncDemo_Control
  // [TokenAttribute] Offset: FFFFFFFF
  class LipSyncDemo_Control : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0xADACC0
    // public UnityEngine.KeyCode rotateLeftKey
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::KeyCode rotateLeftKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // [TooltipAttribute] Offset: 0xADACF8
    // public UnityEngine.KeyCode rotateRightKey
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::KeyCode rotateRightKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // [TooltipAttribute] Offset: 0xADAD30
    // public UnityEngine.KeyCode resetRotationKey
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::KeyCode resetRotationKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // private System.Single resetRotation
    // Size: 0x4
    // Offset: 0x24
    float resetRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rotationAmount
    // Size: 0x4
    // Offset: 0x28
    float rotationAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rotationMax
    // Size: 0x4
    // Offset: 0x2C
    float rotationMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.KeyCode rotateLeftKey
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_rotateLeftKey();
    // Get instance field reference: public UnityEngine.KeyCode rotateRightKey
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_rotateRightKey();
    // Get instance field reference: public UnityEngine.KeyCode resetRotationKey
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_resetRotationKey();
    // Get instance field reference: private System.Single resetRotation
    [[deprecated("Use field access instead!")]] float& dyn_resetRotation();
    // Get instance field reference: private System.Single rotationAmount
    [[deprecated("Use field access instead!")]] float& dyn_rotationAmount();
    // Get instance field reference: private System.Single rotationMax
    [[deprecated("Use field access instead!")]] float& dyn_rotationMax();
    // private System.Void Start()
    // Offset: 0x106DB0C
    void Start();
    // private System.Void Update()
    // Offset: 0x106DB10
    void Update();
    // private System.Void RotateObject(System.Single amountDegrees, System.Boolean absolute)
    // Offset: 0x106DB90
    void RotateObject(float amountDegrees, bool absolute);
    // public System.Void .ctor()
    // Offset: 0x106DE04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LipSyncDemo_Control* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LipSyncDemo_Control::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LipSyncDemo_Control*, creationType>()));
    }
  }; // LipSyncDemo_Control
  #pragma pack(pop)
  static check_size<sizeof(LipSyncDemo_Control), 44 + sizeof(float)> __GlobalNamespace_LipSyncDemo_ControlSizeCheck;
  static_assert(sizeof(LipSyncDemo_Control) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LipSyncDemo_Control::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LipSyncDemo_Control::*)()>(&GlobalNamespace::LipSyncDemo_Control::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LipSyncDemo_Control*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LipSyncDemo_Control::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LipSyncDemo_Control::*)()>(&GlobalNamespace::LipSyncDemo_Control::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LipSyncDemo_Control*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LipSyncDemo_Control::RotateObject
// Il2CppName: RotateObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LipSyncDemo_Control::*)(float, bool)>(&GlobalNamespace::LipSyncDemo_Control::RotateObject)> {
  static const MethodInfo* get() {
    static auto* amountDegrees = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* absolute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LipSyncDemo_Control*), "RotateObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amountDegrees, absolute});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LipSyncDemo_Control::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
