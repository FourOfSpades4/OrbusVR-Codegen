// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Rect
  struct Rect;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GL
  class GL;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GL);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GL*, "UnityEngine", "GL");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GL
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A6EAD4
  // [NativeHeaderAttribute] Offset: A6EAD4
  // [NativeHeaderAttribute] Offset: A6EAD4
  // [NativeHeaderAttribute] Offset: A6EAD4
  // [StaticAccessorAttribute] Offset: A6EAD4
  class GL : public ::Il2CppObject {
    public:
    // static public System.Void Vertex3(System.Single x, System.Single y, System.Single z)
    // Offset: 0x1CB7A70
    static void Vertex3(float x, float y, float z);
    // static public System.Void TexCoord3(System.Single x, System.Single y, System.Single z)
    // Offset: 0x1CB7AF8
    static void TexCoord3(float x, float y, float z);
    // static public System.Void TexCoord(UnityEngine.Vector3 v)
    // Offset: 0x1CB7B80
    static void TexCoord(::UnityEngine::Vector3 v);
    // static public System.Boolean get_invertCulling()
    // Offset: 0x1CB7B84
    static bool get_invertCulling();
    // static public System.Void set_invertCulling(System.Boolean value)
    // Offset: 0x1CB7BDC
    static void set_invertCulling(bool value);
    // static public System.Void Flush()
    // Offset: 0x1CB7C48
    static void Flush();
    // static public System.Void PushMatrix()
    // Offset: 0x1CB7CA0
    static void PushMatrix();
    // static public System.Void PopMatrix()
    // Offset: 0x1CB7CF8
    static void PopMatrix();
    // static private System.Void GLLoadPixelMatrixScript(System.Single left, System.Single right, System.Single bottom, System.Single top)
    // Offset: 0x1CB7D50
    static void GLLoadPixelMatrixScript(float left, float right, float bottom, float top);
    // static public System.Void LoadPixelMatrix(System.Single left, System.Single right, System.Single bottom, System.Single top)
    // Offset: 0x1CB7DD8
    static void LoadPixelMatrix(float left, float right, float bottom, float top);
    // static private System.Void GLIssuePluginEvent(System.IntPtr callback, System.Int32 eventID)
    // Offset: 0x1CB7DDC
    static void GLIssuePluginEvent(::System::IntPtr callback, int eventID);
    // static public System.Void IssuePluginEvent(System.IntPtr callback, System.Int32 eventID)
    // Offset: 0x1CB7E50
    static void IssuePluginEvent(::System::IntPtr callback, int eventID);
    // static public System.Void Begin(System.Int32 mode)
    // Offset: 0x1CB7F08
    static void Begin(int mode);
    // static public System.Void End()
    // Offset: 0x1CB7F74
    static void End();
    // static private System.Void GLClear(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor, System.Single depth)
    // Offset: 0x1CB7FCC
    static void GLClear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float depth);
    // static public System.Void Clear(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor)
    // Offset: 0x1CB808C
    static void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);
    // static public System.Void Viewport(UnityEngine.Rect pixelRect)
    // Offset: 0x1CB80C0
    static void Viewport(::UnityEngine::Rect pixelRect);
    // static private System.Void GLClear_Injected(System.Boolean clearDepth, System.Boolean clearColor, ref UnityEngine.Color backgroundColor, System.Single depth)
    // Offset: 0x1CB8000
    static void GLClear_Injected(bool clearDepth, bool clearColor, ByRef<::UnityEngine::Color> backgroundColor, float depth);
    // static private System.Void Viewport_Injected(ref UnityEngine.Rect pixelRect)
    // Offset: 0x1CB80E8
    static void Viewport_Injected(ByRef<::UnityEngine::Rect> pixelRect);
  }; // UnityEngine.GL
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GL::Vertex3
// Il2CppName: Vertex3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float)>(&UnityEngine::GL::Vertex3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "Vertex3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::TexCoord3
// Il2CppName: TexCoord3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float)>(&UnityEngine::GL::TexCoord3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "TexCoord3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::TexCoord
// Il2CppName: TexCoord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3)>(&UnityEngine::GL::TexCoord)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "TexCoord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::get_invertCulling
// Il2CppName: get_invertCulling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::GL::get_invertCulling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "get_invertCulling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::set_invertCulling
// Il2CppName: set_invertCulling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::GL::set_invertCulling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "set_invertCulling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GL::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::PushMatrix
// Il2CppName: PushMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GL::PushMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "PushMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::PopMatrix
// Il2CppName: PopMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GL::PopMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "PopMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::GLLoadPixelMatrixScript
// Il2CppName: GLLoadPixelMatrixScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float)>(&UnityEngine::GL::GLLoadPixelMatrixScript)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bottom = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "GLLoadPixelMatrixScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, bottom, top});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::LoadPixelMatrix
// Il2CppName: LoadPixelMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float)>(&UnityEngine::GL::LoadPixelMatrix)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bottom = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "LoadPixelMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, bottom, top});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::GLIssuePluginEvent
// Il2CppName: GLIssuePluginEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int)>(&UnityEngine::GL::GLIssuePluginEvent)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* eventID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "GLIssuePluginEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, eventID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::IssuePluginEvent
// Il2CppName: IssuePluginEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int)>(&UnityEngine::GL::IssuePluginEvent)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* eventID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "IssuePluginEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, eventID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::Begin
// Il2CppName: Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GL::Begin)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::End
// Il2CppName: End
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GL::End)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "End", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::GLClear
// Il2CppName: GLClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, ::UnityEngine::Color, float)>(&UnityEngine::GL::GLClear)> {
  static const MethodInfo* get() {
    static auto* clearDepth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clearColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* backgroundColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "GLClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearDepth, clearColor, backgroundColor, depth});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, ::UnityEngine::Color)>(&UnityEngine::GL::Clear)> {
  static const MethodInfo* get() {
    static auto* clearDepth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clearColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* backgroundColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearDepth, clearColor, backgroundColor});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::Viewport
// Il2CppName: Viewport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect)>(&UnityEngine::GL::Viewport)> {
  static const MethodInfo* get() {
    static auto* pixelRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "Viewport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixelRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::GLClear_Injected
// Il2CppName: GLClear_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, ByRef<::UnityEngine::Color>, float)>(&UnityEngine::GL::GLClear_Injected)> {
  static const MethodInfo* get() {
    static auto* clearDepth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clearColor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* backgroundColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "GLClear_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearDepth, clearColor, backgroundColor, depth});
  }
};
// Writing MetadataGetter for method: UnityEngine::GL::Viewport_Injected
// Il2CppName: Viewport_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rect>)>(&UnityEngine::GL::Viewport_Injected)> {
  static const MethodInfo* get() {
    static auto* pixelRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GL*), "Viewport_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixelRect});
  }
};