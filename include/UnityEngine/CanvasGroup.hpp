// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasGroup*, "UnityEngine", "CanvasGroup");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CanvasGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: AA4158
  // [NativeHeaderAttribute] Offset: AA4158
  class CanvasGroup : public ::UnityEngine::Behaviour/*, public ::UnityEngine::ICanvasRaycastFilter*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ICanvasRaycastFilter
    operator ::UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<::UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // public System.Single get_alpha()
    // Offset: 0x2897AB0
    float get_alpha();
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x2897B1C
    void set_alpha(float value);
    // public System.Boolean get_interactable()
    // Offset: 0x2897B90
    bool get_interactable();
    // public System.Boolean get_blocksRaycasts()
    // Offset: 0x2897BFC
    bool get_blocksRaycasts();
    // public System.Boolean get_ignoreParentGroups()
    // Offset: 0x2897C68
    bool get_ignoreParentGroups();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x2897CD4
    bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);
  }; // UnityEngine.CanvasGroup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_alpha
// Il2CppName: get_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_alpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasGroup::*)(float)>(&UnityEngine::CanvasGroup::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_blocksRaycasts
// Il2CppName: get_blocksRaycasts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_blocksRaycasts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_blocksRaycasts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::get_ignoreParentGroups
// Il2CppName: get_ignoreParentGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)()>(&UnityEngine::CanvasGroup::get_ignoreParentGroups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "get_ignoreParentGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasGroup::IsRaycastLocationValid
// Il2CppName: IsRaycastLocationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasGroup::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&UnityEngine::CanvasGroup::IsRaycastLocationValid)> {
  static const MethodInfo* get() {
    static auto* sp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasGroup*), "IsRaycastLocationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sp, eventCamera});
  }
};
