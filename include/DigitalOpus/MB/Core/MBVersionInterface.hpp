// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_LogLevel
  struct MB2_LogLevel;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MBVersionInterface
  class MBVersionInterface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MBVersionInterface);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MBVersionInterface*, "DigitalOpus.MB.Core", "MBVersionInterface");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MBVersionInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class MBVersionInterface {
    public:
    // public System.String version()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW version();
    // public System.Int32 GetMajorVersion()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetMajorVersion();
    // public System.Int32 GetMinorVersion()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetMinorVersion();
    // public System.Boolean GetActive(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GetActive(::UnityEngine::GameObject* go);
    // public System.Void SetActive(UnityEngine.GameObject go, System.Boolean isActive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetActive(::UnityEngine::GameObject* go, bool isActive);
    // public System.Void SetActiveRecursively(UnityEngine.GameObject go, System.Boolean isActive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetActiveRecursively(::UnityEngine::GameObject* go, bool isActive);
    // public UnityEngine.Object[] FindSceneObjectsOfType(System.Type t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Object*> FindSceneObjectsOfType(::System::Type* t);
    // public System.Boolean IsRunningAndMeshNotReadWriteable(UnityEngine.Mesh m)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh* m);
    // public UnityEngine.Vector2[] GetMeshUV3orUV4(UnityEngine.Mesh m, System.Boolean get3, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Vector2> GetMeshUV3orUV4(::UnityEngine::Mesh* m, bool get3, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public System.Void MeshClear(UnityEngine.Mesh m, System.Boolean t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MeshClear(::UnityEngine::Mesh* m, bool t);
    // public System.Void MeshAssignUV3(UnityEngine.Mesh m, UnityEngine.Vector2[] uv3s)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MeshAssignUV3(::UnityEngine::Mesh* m, ::ArrayW<::UnityEngine::Vector2> uv3s);
    // public System.Void MeshAssignUV4(UnityEngine.Mesh m, UnityEngine.Vector2[] uv4s)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MeshAssignUV4(::UnityEngine::Mesh* m, ::ArrayW<::UnityEngine::Vector2> uv4s);
    // public UnityEngine.Vector4 GetLightmapTilingOffset(UnityEngine.Renderer r)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector4 GetLightmapTilingOffset(::UnityEngine::Renderer* r);
    // public UnityEngine.Transform[] GetBones(UnityEngine.Renderer r)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Transform*> GetBones(::UnityEngine::Renderer* r);
    // public System.Void OptimizeMesh(UnityEngine.Mesh m)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OptimizeMesh(::UnityEngine::Mesh* m);
    // public System.Int32 GetBlendShapeFrameCount(UnityEngine.Mesh m, System.Int32 shapeIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetBlendShapeFrameCount(::UnityEngine::Mesh* m, int shapeIndex);
    // public System.Single GetBlendShapeFrameWeight(UnityEngine.Mesh m, System.Int32 shapeIndex, System.Int32 frameIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetBlendShapeFrameWeight(::UnityEngine::Mesh* m, int shapeIndex, int frameIndex);
    // public System.Void GetBlendShapeFrameVertices(UnityEngine.Mesh m, System.Int32 shapeIndex, System.Int32 frameIndex, UnityEngine.Vector3[] vs, UnityEngine.Vector3[] ns, UnityEngine.Vector3[] ts)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetBlendShapeFrameVertices(::UnityEngine::Mesh* m, int shapeIndex, int frameIndex, ::ArrayW<::UnityEngine::Vector3> vs, ::ArrayW<::UnityEngine::Vector3> ns, ::ArrayW<::UnityEngine::Vector3> ts);
    // public System.Void ClearBlendShapes(UnityEngine.Mesh m)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ClearBlendShapes(::UnityEngine::Mesh* m);
    // public System.Void AddBlendShapeFrame(UnityEngine.Mesh m, System.String nm, System.Single wt, UnityEngine.Vector3[] vs, UnityEngine.Vector3[] ns, UnityEngine.Vector3[] ts)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddBlendShapeFrame(::UnityEngine::Mesh* m, ::StringW nm, float wt, ::ArrayW<::UnityEngine::Vector3> vs, ::ArrayW<::UnityEngine::Vector3> ns, ::ArrayW<::UnityEngine::Vector3> ts);
    // public System.Int32 MaxMeshVertexCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int MaxMeshVertexCount();
    // public System.Void SetMeshIndexFormatAndClearMesh(UnityEngine.Mesh m, System.Int32 numVerts, System.Boolean vertices, System.Boolean justClearTriangles)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh* m, int numVerts, bool vertices, bool justClearTriangles);
  }; // DigitalOpus.MB.Core.MBVersionInterface
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::version
// Il2CppName: version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MBVersionInterface::*)()>(&DigitalOpus::MB::Core::MBVersionInterface::version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetMajorVersion
// Il2CppName: GetMajorVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionInterface::*)()>(&DigitalOpus::MB::Core::MBVersionInterface::GetMajorVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetMajorVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetMinorVersion
// Il2CppName: GetMinorVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionInterface::*)()>(&DigitalOpus::MB::Core::MBVersionInterface::GetMinorVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetMinorVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetActive
// Il2CppName: GetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::GameObject*)>(&DigitalOpus::MB::Core::MBVersionInterface::GetActive)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::GameObject*, bool)>(&DigitalOpus::MB::Core::MBVersionInterface::SetActive)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, isActive});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::SetActiveRecursively
// Il2CppName: SetActiveRecursively
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::GameObject*, bool)>(&DigitalOpus::MB::Core::MBVersionInterface::SetActiveRecursively)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "SetActiveRecursively", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, isActive});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::FindSceneObjectsOfType
// Il2CppName: FindSceneObjectsOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (DigitalOpus::MB::Core::MBVersionInterface::*)(::System::Type*)>(&DigitalOpus::MB::Core::MBVersionInterface::FindSceneObjectsOfType)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "FindSceneObjectsOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::IsRunningAndMeshNotReadWriteable
// Il2CppName: IsRunningAndMeshNotReadWriteable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MBVersionInterface::IsRunningAndMeshNotReadWriteable)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "IsRunningAndMeshNotReadWriteable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetMeshUV3orUV4
// Il2CppName: GetMeshUV3orUV4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MBVersionInterface::GetMeshUV3orUV4)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* get3 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetMeshUV3orUV4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, get3, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::MeshClear
// Il2CppName: MeshClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, bool)>(&DigitalOpus::MB::Core::MBVersionInterface::MeshClear)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "MeshClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, t});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::MeshAssignUV3
// Il2CppName: MeshAssignUV3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2>)>(&DigitalOpus::MB::Core::MBVersionInterface::MeshAssignUV3)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* uv3s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "MeshAssignUV3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, uv3s});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::MeshAssignUV4
// Il2CppName: MeshAssignUV4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2>)>(&DigitalOpus::MB::Core::MBVersionInterface::MeshAssignUV4)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* uv4s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "MeshAssignUV4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, uv4s});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetLightmapTilingOffset
// Il2CppName: GetLightmapTilingOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Renderer*)>(&DigitalOpus::MB::Core::MBVersionInterface::GetLightmapTilingOffset)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetLightmapTilingOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetBones
// Il2CppName: GetBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Renderer*)>(&DigitalOpus::MB::Core::MBVersionInterface::GetBones)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::OptimizeMesh
// Il2CppName: OptimizeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MBVersionInterface::OptimizeMesh)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "OptimizeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetBlendShapeFrameCount
// Il2CppName: GetBlendShapeFrameCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, int)>(&DigitalOpus::MB::Core::MBVersionInterface::GetBlendShapeFrameCount)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* shapeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetBlendShapeFrameCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, shapeIndex});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetBlendShapeFrameWeight
// Il2CppName: GetBlendShapeFrameWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, int, int)>(&DigitalOpus::MB::Core::MBVersionInterface::GetBlendShapeFrameWeight)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* shapeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetBlendShapeFrameWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, shapeIndex, frameIndex});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::GetBlendShapeFrameVertices
// Il2CppName: GetBlendShapeFrameVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, int, int, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&DigitalOpus::MB::Core::MBVersionInterface::GetBlendShapeFrameVertices)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* shapeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "GetBlendShapeFrameVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, shapeIndex, frameIndex, vs, ns, ts});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::ClearBlendShapes
// Il2CppName: ClearBlendShapes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*)>(&DigitalOpus::MB::Core::MBVersionInterface::ClearBlendShapes)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "ClearBlendShapes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::AddBlendShapeFrame
// Il2CppName: AddBlendShapeFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, ::StringW, float, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&DigitalOpus::MB::Core::MBVersionInterface::AddBlendShapeFrame)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* nm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* wt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* vs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* ts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "AddBlendShapeFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, nm, wt, vs, ns, ts});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::MaxMeshVertexCount
// Il2CppName: MaxMeshVertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MBVersionInterface::*)()>(&DigitalOpus::MB::Core::MBVersionInterface::MaxMeshVertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "MaxMeshVertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MBVersionInterface::SetMeshIndexFormatAndClearMesh
// Il2CppName: SetMeshIndexFormatAndClearMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MBVersionInterface::*)(::UnityEngine::Mesh*, int, bool, bool)>(&DigitalOpus::MB::Core::MBVersionInterface::SetMeshIndexFormatAndClearMesh)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* numVerts = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertices = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* justClearTriangles = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MBVersionInterface*), "SetMeshIndexFormatAndClearMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, numVerts, vertices, justClearTriangles});
  }
};