// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color32
  struct Color32;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.UI
namespace UnityEngine::Experimental::UI {
  // Forward declaring type: VertexHelperExtension
  class VertexHelperExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::UI::VertexHelperExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::UI::VertexHelperExtension*, "UnityEngine.Experimental.UI", "VertexHelperExtension");
// Type namespace: UnityEngine.Experimental.UI
namespace UnityEngine::Experimental::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.UI.VertexHelperExtension
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VertexHelperExtension : public ::Il2CppObject {
    public:
    // static public System.Void AddVert(UnityEngine.UI.VertexHelper obj, UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0, UnityEngine.Vector2 uv1, UnityEngine.Vector2 uv2, UnityEngine.Vector2 uv3, UnityEngine.Vector3 normal, UnityEngine.Vector4 tangent)
    // Offset: 0x17DB538
    static void AddVert(::UnityEngine::UI::VertexHelper* obj, ::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0, ::UnityEngine::Vector2 uv1, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv3, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector4 tangent);
  }; // UnityEngine.Experimental.UI.VertexHelperExtension
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::UI::VertexHelperExtension::AddVert
// Il2CppName: AddVert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector4)>(&UnityEngine::Experimental::UI::VertexHelperExtension::AddVert)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* uv0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* uv3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::UI::VertexHelperExtension*), "AddVert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, position, color, uv0, uv1, uv2, uv3, normal, tangent});
  }
};
