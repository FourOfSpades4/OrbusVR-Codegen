// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Renderman
  class Renderman;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: UICamera
  class UICamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::UICamera);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::UICamera*, "PowerUI", "UICamera");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.UICamera
  // [TokenAttribute] Offset: FFFFFFFF
  class UICamera : public ::Il2CppObject {
    public:
    public:
    // public PowerUI.Renderman Renderer
    // Size: 0x8
    // Offset: 0x10
    ::PowerUI::Renderman* Renderer;
    // Field size check
    static_assert(sizeof(::PowerUI::Renderman*) == 0x8);
    // public UnityEngine.Camera SourceCamera
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Camera* SourceCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // public PowerUI.UICamera CameraAfter
    // Size: 0x8
    // Offset: 0x20
    ::PowerUI::UICamera* CameraAfter;
    // Field size check
    static_assert(sizeof(::PowerUI::UICamera*) == 0x8);
    // public System.Single CameraDistance
    // Size: 0x4
    // Offset: 0x28
    float CameraDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: CameraDistance and: CameraBefore
    char __padding3[0x4] = {};
    // public PowerUI.UICamera CameraBefore
    // Size: 0x8
    // Offset: 0x30
    ::PowerUI::UICamera* CameraBefore;
    // Field size check
    static_assert(sizeof(::PowerUI::UICamera*) == 0x8);
    // public UnityEngine.GameObject Gameobject
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* Gameobject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject CameraObject
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* CameraObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: public PowerUI.Renderman Renderer
    [[deprecated("Use field access instead!")]] ::PowerUI::Renderman*& dyn_Renderer();
    // Get instance field reference: public UnityEngine.Camera SourceCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_SourceCamera();
    // Get instance field reference: public PowerUI.UICamera CameraAfter
    [[deprecated("Use field access instead!")]] ::PowerUI::UICamera*& dyn_CameraAfter();
    // Get instance field reference: public System.Single CameraDistance
    [[deprecated("Use field access instead!")]] float& dyn_CameraDistance();
    // Get instance field reference: public PowerUI.UICamera CameraBefore
    [[deprecated("Use field access instead!")]] ::PowerUI::UICamera*& dyn_CameraBefore();
    // Get instance field reference: public UnityEngine.GameObject Gameobject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_Gameobject();
    // Get instance field reference: public UnityEngine.GameObject CameraObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_CameraObject();
    // public System.Void .ctor(PowerUI.Renderman renderer)
    // Offset: 0x177FE74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UICamera* New_ctor(::PowerUI::Renderman* renderer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::UICamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UICamera*, creationType>(renderer)));
    }
    // public System.Void SetDepth(System.Int32 depth)
    // Offset: 0x178018C
    void SetDepth(int depth);
    // public System.Void SetCameraDistance(System.Single distance)
    // Offset: 0x1780098
    void SetCameraDistance(float distance);
    // public System.Void SetFieldOfView(System.Single fov)
    // Offset: 0x178014C
    void SetFieldOfView(float fov);
    // public System.Void Destroy()
    // Offset: 0x17802D4
    void Destroy();
  }; // PowerUI.UICamera
  #pragma pack(pop)
  static check_size<sizeof(UICamera), 64 + sizeof(::UnityEngine::GameObject*)> __PowerUI_UICameraSizeCheck;
  static_assert(sizeof(UICamera) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::UICamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::UICamera::SetDepth
// Il2CppName: SetDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UICamera::*)(int)>(&PowerUI::UICamera::SetDepth)> {
  static const MethodInfo* get() {
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UICamera*), "SetDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{depth});
  }
};
// Writing MetadataGetter for method: PowerUI::UICamera::SetCameraDistance
// Il2CppName: SetCameraDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UICamera::*)(float)>(&PowerUI::UICamera::SetCameraDistance)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UICamera*), "SetCameraDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: PowerUI::UICamera::SetFieldOfView
// Il2CppName: SetFieldOfView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UICamera::*)(float)>(&PowerUI::UICamera::SetFieldOfView)> {
  static const MethodInfo* get() {
    static auto* fov = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UICamera*), "SetFieldOfView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fov});
  }
};
// Writing MetadataGetter for method: PowerUI::UICamera::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UICamera::*)()>(&PowerUI::UICamera::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UICamera*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};