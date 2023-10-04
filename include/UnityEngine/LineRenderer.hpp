// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LineRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A6ED24
  // [NativeHeaderAttribute] Offset: A6ED24
  class LineRenderer : public ::UnityEngine::Renderer {
    public:
    // public System.Void SetVertexCount(System.Int32 count)
    // Offset: 0x1CBFFD0
    void SetVertexCount(int count);
    // public System.Void set_startWidth(System.Single value)
    // Offset: 0x1CC0048
    void set_startWidth(float value);
    // public System.Void set_endWidth(System.Single value)
    // Offset: 0x1CC00BC
    void set_endWidth(float value);
    // public System.Single get_widthMultiplier()
    // Offset: 0x1CC0130
    float get_widthMultiplier();
    // public System.Void set_widthMultiplier(System.Single value)
    // Offset: 0x1CC019C
    void set_widthMultiplier(float value);
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0x1CC0210
    void set_useWorldSpace(bool value);
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0x1CC0284
    void set_startColor(::UnityEngine::Color value);
    // public System.Void set_endColor(UnityEngine.Color value)
    // Offset: 0x1CC0320
    void set_endColor(::UnityEngine::Color value);
    // public System.Void set_positionCount(System.Int32 value)
    // Offset: 0x1CBFFD4
    void set_positionCount(int value);
    // public System.Void SetPosition(System.Int32 index, UnityEngine.Vector3 position)
    // Offset: 0x1CC03BC
    void SetPosition(int index, ::UnityEngine::Vector3 position);
    // public UnityEngine.Gradient get_colorGradient()
    // Offset: 0x1CC0468
    ::UnityEngine::Gradient* get_colorGradient();
    // public System.Void set_colorGradient(UnityEngine.Gradient value)
    // Offset: 0x1CC04D8
    void set_colorGradient(::UnityEngine::Gradient* value);
    // private UnityEngine.Gradient GetColorGradientCopy()
    // Offset: 0x1CC046C
    ::UnityEngine::Gradient* GetColorGradientCopy();
    // private System.Void SetColorGradient(UnityEngine.Gradient curve)
    // Offset: 0x1CC04DC
    void SetColorGradient(::UnityEngine::Gradient* curve);
    // public System.Void SetPositions(UnityEngine.Vector3[] positions)
    // Offset: 0x1CC0550
    void SetPositions(::ArrayW<::UnityEngine::Vector3> positions);
    // private System.Void set_startColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1CC02AC
    void set_startColor_Injected(ByRef<::UnityEngine::Color> value);
    // private System.Void set_endColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1CC0348
    void set_endColor_Injected(ByRef<::UnityEngine::Color> value);
    // private System.Void SetPosition_Injected(System.Int32 index, ref UnityEngine.Vector3 position)
    // Offset: 0x1CC03E4
    void SetPosition_Injected(int index, ByRef<::UnityEngine::Vector3> position);
  }; // UnityEngine.LineRenderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetVertexCount
// Il2CppName: SetVertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int)>(&UnityEngine::LineRenderer::SetVertexCount)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetVertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startWidth
// Il2CppName: set_startWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_startWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_startWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endWidth
// Il2CppName: set_endWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_endWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_endWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::get_widthMultiplier
// Il2CppName: get_widthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::LineRenderer::*)()>(&UnityEngine::LineRenderer::get_widthMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "get_widthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_widthMultiplier
// Il2CppName: set_widthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_widthMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_widthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_useWorldSpace
// Il2CppName: set_useWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(bool)>(&UnityEngine::LineRenderer::set_useWorldSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_useWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startColor
// Il2CppName: set_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::Color)>(&UnityEngine::LineRenderer::set_startColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endColor
// Il2CppName: set_endColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::Color)>(&UnityEngine::LineRenderer::set_endColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_endColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_positionCount
// Il2CppName: set_positionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int)>(&UnityEngine::LineRenderer::set_positionCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_positionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition
// Il2CppName: SetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int, ::UnityEngine::Vector3)>(&UnityEngine::LineRenderer::SetPosition)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, position});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::get_colorGradient
// Il2CppName: get_colorGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (UnityEngine::LineRenderer::*)()>(&UnityEngine::LineRenderer::get_colorGradient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "get_colorGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_colorGradient
// Il2CppName: set_colorGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::Gradient*)>(&UnityEngine::LineRenderer::set_colorGradient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_colorGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::GetColorGradientCopy
// Il2CppName: GetColorGradientCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (UnityEngine::LineRenderer::*)()>(&UnityEngine::LineRenderer::GetColorGradientCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "GetColorGradientCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetColorGradient
// Il2CppName: SetColorGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::Gradient*)>(&UnityEngine::LineRenderer::SetColorGradient)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetColorGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPositions
// Il2CppName: SetPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::ArrayW<::UnityEngine::Vector3>)>(&UnityEngine::LineRenderer::SetPositions)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startColor_Injected
// Il2CppName: set_startColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::LineRenderer::set_startColor_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_startColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endColor_Injected
// Il2CppName: set_endColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::LineRenderer::set_endColor_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_endColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition_Injected
// Il2CppName: SetPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::LineRenderer::SetPosition_Injected)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, position});
  }
};