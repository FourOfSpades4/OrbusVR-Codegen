// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RuntimeAnimatorController
#include "UnityEngine/RuntimeAnimatorController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimatorOverrideController
  class AnimatorOverrideController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController*, "UnityEngine", "AnimatorOverrideController");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimatorOverrideController
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A93004
  // [DefaultMemberAttribute] Offset: A93004
  // [UsedByNativeCodeAttribute] Offset: A93004
  // [NativeHeaderAttribute] Offset: A93004
  class AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController {
    public:
    // Nested type: ::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback
    class OnOverrideControllerDirtyCallback;
    public:
    // UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback OnOverrideControllerDirty
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback OnOverrideControllerDirty
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*& dyn_OnOverrideControllerDirty();
    // static private System.Void Internal_Create(UnityEngine.AnimatorOverrideController self, UnityEngine.RuntimeAnimatorController controller)
    // Offset: 0x2863CF8
    static void Internal_Create(::UnityEngine::AnimatorOverrideController* self, ::UnityEngine::RuntimeAnimatorController* controller);
    // public System.Void set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController value)
    // Offset: 0x2863D6C
    void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value);
    // public System.Void set_Item(System.String name, UnityEngine.AnimationClip value)
    // Offset: 0x2863DE0
    void set_Item(::StringW name, ::UnityEngine::AnimationClip* value);
    // private System.Void Internal_SetClipByName(System.String name, UnityEngine.AnimationClip clip)
    // Offset: 0x2863DE4
    void Internal_SetClipByName(::StringW name, ::UnityEngine::AnimationClip* clip);
    // static System.Void OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController controller)
    // Offset: 0x2863E68
    static void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller);
    // public System.Void .ctor()
    // Offset: 0x2863C60
    // Implemented from: UnityEngine.RuntimeAnimatorController
    // Base method: System.Void RuntimeAnimatorController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorOverrideController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimatorOverrideController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorOverrideController*, creationType>()));
    }
  }; // UnityEngine.AnimatorOverrideController
  #pragma pack(pop)
  static check_size<sizeof(AnimatorOverrideController), 24 + sizeof(::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*)> __UnityEngine_AnimatorOverrideControllerSizeCheck;
  static_assert(sizeof(AnimatorOverrideController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*, ::UnityEngine::RuntimeAnimatorController*)>(&UnityEngine::AnimatorOverrideController::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorOverrideController")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine", "RuntimeAnimatorController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::set_runtimeAnimatorController
// Il2CppName: set_runtimeAnimatorController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimatorOverrideController::*)(::UnityEngine::RuntimeAnimatorController*)>(&UnityEngine::AnimatorOverrideController::set_runtimeAnimatorController)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RuntimeAnimatorController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "set_runtimeAnimatorController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimatorOverrideController::*)(::StringW, ::UnityEngine::AnimationClip*)>(&UnityEngine::AnimatorOverrideController::set_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::Internal_SetClipByName
// Il2CppName: Internal_SetClipByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimatorOverrideController::*)(::StringW, ::UnityEngine::AnimationClip*)>(&UnityEngine::AnimatorOverrideController::Internal_SetClipByName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "Internal_SetClipByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController
// Il2CppName: OnInvalidateOverrideController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*)>(&UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorOverrideController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "OnInvalidateOverrideController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
