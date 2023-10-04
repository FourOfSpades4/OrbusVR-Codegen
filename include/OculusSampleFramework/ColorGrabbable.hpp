// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRGrabbable
#include "GlobalNamespace/OVRGrabbable.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabber
  class OVRGrabber;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: ColorGrabbable
  class ColorGrabbable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::ColorGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::ColorGrabbable*, "OculusSampleFramework", "ColorGrabbable");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.ColorGrabbable
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorGrabbable : public ::GlobalNamespace::OVRGrabbable {
    public:
    public:
    // private UnityEngine.Color m_color
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color m_color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.MeshRenderer[] m_meshRenderers
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::MeshRenderer*> m_meshRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MeshRenderer*>) == 0x8);
    // private System.Boolean m_highlight
    // Size: 0x1
    // Offset: 0x60
    bool m_highlight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static public readonly UnityEngine.Color COLOR_GRAB
    static ::UnityEngine::Color _get_COLOR_GRAB();
    // Set static field: static public readonly UnityEngine.Color COLOR_GRAB
    static void _set_COLOR_GRAB(::UnityEngine::Color value);
    // Get static field: static public readonly UnityEngine.Color COLOR_HIGHLIGHT
    static ::UnityEngine::Color _get_COLOR_HIGHLIGHT();
    // Set static field: static public readonly UnityEngine.Color COLOR_HIGHLIGHT
    static void _set_COLOR_HIGHLIGHT(::UnityEngine::Color value);
    // Get instance field reference: private UnityEngine.Color m_color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_color();
    // Get instance field reference: private UnityEngine.MeshRenderer[] m_meshRenderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::MeshRenderer*>& dyn_m_meshRenderers();
    // Get instance field reference: private System.Boolean m_highlight
    [[deprecated("Use field access instead!")]] bool& dyn_m_highlight();
    // public System.Boolean get_Highlight()
    // Offset: 0xD6F8F8
    bool get_Highlight();
    // public System.Void set_Highlight(System.Boolean value)
    // Offset: 0xD6F900
    void set_Highlight(bool value);
    // protected System.Void UpdateColor()
    // Offset: 0xD6F90C
    void UpdateColor();
    // private System.Void Awake()
    // Offset: 0xD6FB84
    void Awake();
    // private System.Void SetColor(UnityEngine.Color color)
    // Offset: 0xD6F9D8
    void SetColor(::UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0xD6FE2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorGrabbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::ColorGrabbable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorGrabbable*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xD6FE60
    static void _cctor();
    // public override System.Void GrabBegin(OVRGrabber hand, UnityEngine.Collider grabPoint)
    // Offset: 0xD6FB34
    // Implemented from: OVRGrabbable
    // Base method: System.Void OVRGrabbable::GrabBegin(OVRGrabber hand, UnityEngine.Collider grabPoint)
    void GrabBegin(::GlobalNamespace::OVRGrabber* hand, ::UnityEngine::Collider* grabPoint);
    // public override System.Void GrabEnd(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0xD6FB5C
    // Implemented from: OVRGrabbable
    // Base method: System.Void OVRGrabbable::GrabEnd(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    void GrabEnd(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity);
  }; // OculusSampleFramework.ColorGrabbable
  #pragma pack(pop)
  static check_size<sizeof(ColorGrabbable), 96 + sizeof(bool)> __OculusSampleFramework_ColorGrabbableSizeCheck;
  static_assert(sizeof(ColorGrabbable) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::get_Highlight
// Il2CppName: get_Highlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::ColorGrabbable::*)()>(&OculusSampleFramework::ColorGrabbable::get_Highlight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), "get_Highlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::set_Highlight
// Il2CppName: set_Highlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::ColorGrabbable::*)(bool)>(&OculusSampleFramework::ColorGrabbable::set_Highlight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), "set_Highlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::ColorGrabbable::*)()>(&OculusSampleFramework::ColorGrabbable::UpdateColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::ColorGrabbable::*)()>(&OculusSampleFramework::ColorGrabbable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::ColorGrabbable::*)(::UnityEngine::Color)>(&OculusSampleFramework::ColorGrabbable::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OculusSampleFramework::ColorGrabbable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::GrabBegin
// Il2CppName: GrabBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::ColorGrabbable::*)(::GlobalNamespace::OVRGrabber*, ::UnityEngine::Collider*)>(&OculusSampleFramework::ColorGrabbable::GrabBegin)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("", "OVRGrabber")->byval_arg;
    static auto* grabPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), "GrabBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, grabPoint});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::ColorGrabbable::GrabEnd
// Il2CppName: GrabEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::ColorGrabbable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&OculusSampleFramework::ColorGrabbable::GrabEnd)> {
  static const MethodInfo* get() {
    static auto* linearVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angularVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::ColorGrabbable*), "GrabEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{linearVelocity, angularVelocity});
  }
};
