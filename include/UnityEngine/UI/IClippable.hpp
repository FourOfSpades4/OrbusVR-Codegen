// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: IClippable
  class IClippable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::IClippable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IClippable*, "UnityEngine.UI", "IClippable");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.IClippable
  // [TokenAttribute] Offset: FFFFFFFF
  class IClippable {
    public:
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::GameObject* get_gameObject();
    // public System.Void RecalculateClipping()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RecalculateClipping();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::RectTransform* get_rectTransform();
    // public System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Cull(::UnityEngine::Rect clipRect, bool validRect);
    // public System.Void SetClipRect(UnityEngine.Rect value, System.Boolean validRect)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetClipRect(::UnityEngine::Rect value, bool validRect);
  }; // UnityEngine.UI.IClippable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::IClippable::get_gameObject
// Il2CppName: get_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::UI::IClippable::*)()>(&UnityEngine::UI::IClippable::get_gameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IClippable*), "get_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::IClippable::RecalculateClipping
// Il2CppName: RecalculateClipping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::IClippable::*)()>(&UnityEngine::UI::IClippable::RecalculateClipping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IClippable*), "RecalculateClipping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::IClippable::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (UnityEngine::UI::IClippable::*)()>(&UnityEngine::UI::IClippable::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IClippable*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::IClippable::Cull
// Il2CppName: Cull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::IClippable::*)(::UnityEngine::Rect, bool)>(&UnityEngine::UI::IClippable::Cull)> {
  static const MethodInfo* get() {
    static auto* clipRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* validRect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IClippable*), "Cull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipRect, validRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::IClippable::SetClipRect
// Il2CppName: SetClipRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::IClippable::*)(::UnityEngine::Rect, bool)>(&UnityEngine::UI::IClippable::SetClipRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* validRect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IClippable*), "SetClipRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, validRect});
  }
};
