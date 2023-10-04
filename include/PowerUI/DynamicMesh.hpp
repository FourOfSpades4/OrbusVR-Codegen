// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: UIBatch
  class UIBatch;
  // Forward declaring type: MeshBlock
  class MeshBlock;
  // Forward declaring type: FixedSizeBuffer`1<T>
  template<typename T>
  class FixedSizeBuffer_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshCollider
  class MeshCollider;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: TextureAtlas
  class TextureAtlas;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: DynamicMesh
  class DynamicMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::DynamicMesh);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::DynamicMesh*, "PowerUI", "DynamicMesh");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.DynamicMesh
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicMesh : public ::Il2CppObject {
    public:
    public:
    // public PowerUI.UIBatch Batch
    // Size: 0x8
    // Offset: 0x10
    ::PowerUI::UIBatch* Batch;
    // Field size check
    static_assert(sizeof(::PowerUI::UIBatch*) == 0x8);
    // public System.Int32 BlockCount
    // Size: 0x4
    // Offset: 0x18
    int BlockCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: BlockCount and: OutputMesh
    char __padding1[0x4] = {};
    // public UnityEngine.Mesh OutputMesh
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Mesh* OutputMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Material Material
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* Material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Int32 LastBlockCount
    // Size: 0x4
    // Offset: 0x30
    int LastBlockCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: LastBlockCount and: LastBlock
    char __padding4[0x4] = {};
    // public PowerUI.MeshBlock LastBlock
    // Size: 0x8
    // Offset: 0x38
    ::PowerUI::MeshBlock* LastBlock;
    // Field size check
    static_assert(sizeof(::PowerUI::MeshBlock*) == 0x8);
    // public PowerUI.MeshBlock FirstBlock
    // Size: 0x8
    // Offset: 0x40
    ::PowerUI::MeshBlock* FirstBlock;
    // Field size check
    static_assert(sizeof(::PowerUI::MeshBlock*) == 0x8);
    // private UnityEngine.MeshRenderer Renderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::MeshRenderer* Renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Material GlobalMaterial
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Material* GlobalMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Transform OutputTransform
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* OutputTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.GameObject OutputGameObject
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::GameObject* OutputGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector2> UV
    // Size: 0x8
    // Offset: 0x68
    ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector2>* UV;
    // Field size check
    static_assert(sizeof(::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector2>*) == 0x8);
    // public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector2> UV2
    // Size: 0x8
    // Offset: 0x70
    ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector2>* UV2;
    // Field size check
    static_assert(sizeof(::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector2>*) == 0x8);
    // public PowerUI.FixedSizeBuffer`1<System.Int32> Triangles
    // Size: 0x8
    // Offset: 0x78
    ::PowerUI::FixedSizeBuffer_1<int>* Triangles;
    // Field size check
    static_assert(sizeof(::PowerUI::FixedSizeBuffer_1<int>*) == 0x8);
    // public PowerUI.FixedSizeBuffer`1<UnityEngine.Color> Colours
    // Size: 0x8
    // Offset: 0x80
    ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Color>* Colours;
    // Field size check
    static_assert(sizeof(::PowerUI::FixedSizeBuffer_1<::UnityEngine::Color>*) == 0x8);
    // public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector3> Normals
    // Size: 0x8
    // Offset: 0x88
    ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector3>* Normals;
    // Field size check
    static_assert(sizeof(::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector3>*) == 0x8);
    // public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector3> Vertices
    // Size: 0x8
    // Offset: 0x90
    ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector3>* Vertices;
    // Field size check
    static_assert(sizeof(::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector3>*) == 0x8);
    // public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector4> Tangents
    // Size: 0x8
    // Offset: 0x98
    ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector4>* Tangents;
    // Field size check
    static_assert(sizeof(::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector4>*) == 0x8);
    // public UnityEngine.MeshCollider FullPhysicsModeCollider
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::MeshCollider* FullPhysicsModeCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshCollider*) == 0x8);
    public:
    // Get static field: static public UnityEngine.Shader UIShader
    static ::UnityEngine::Shader* _get_UIShader();
    // Set static field: static public UnityEngine.Shader UIShader
    static void _set_UIShader(::UnityEngine::Shader* value);
    // Get instance field reference: public PowerUI.UIBatch Batch
    [[deprecated("Use field access instead!")]] ::PowerUI::UIBatch*& dyn_Batch();
    // Get instance field reference: public System.Int32 BlockCount
    [[deprecated("Use field access instead!")]] int& dyn_BlockCount();
    // Get instance field reference: public UnityEngine.Mesh OutputMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_OutputMesh();
    // Get instance field reference: public UnityEngine.Material Material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_Material();
    // Get instance field reference: private System.Int32 LastBlockCount
    [[deprecated("Use field access instead!")]] int& dyn_LastBlockCount();
    // Get instance field reference: public PowerUI.MeshBlock LastBlock
    [[deprecated("Use field access instead!")]] ::PowerUI::MeshBlock*& dyn_LastBlock();
    // Get instance field reference: public PowerUI.MeshBlock FirstBlock
    [[deprecated("Use field access instead!")]] ::PowerUI::MeshBlock*& dyn_FirstBlock();
    // Get instance field reference: private UnityEngine.MeshRenderer Renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_Renderer();
    // Get instance field reference: private UnityEngine.Material GlobalMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_GlobalMaterial();
    // Get instance field reference: public UnityEngine.Transform OutputTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_OutputTransform();
    // Get instance field reference: public UnityEngine.GameObject OutputGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_OutputGameObject();
    // Get instance field reference: public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector2> UV
    [[deprecated("Use field access instead!")]] ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector2>*& dyn_UV();
    // Get instance field reference: public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector2> UV2
    [[deprecated("Use field access instead!")]] ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector2>*& dyn_UV2();
    // Get instance field reference: public PowerUI.FixedSizeBuffer`1<System.Int32> Triangles
    [[deprecated("Use field access instead!")]] ::PowerUI::FixedSizeBuffer_1<int>*& dyn_Triangles();
    // Get instance field reference: public PowerUI.FixedSizeBuffer`1<UnityEngine.Color> Colours
    [[deprecated("Use field access instead!")]] ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Color>*& dyn_Colours();
    // Get instance field reference: public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector3> Normals
    [[deprecated("Use field access instead!")]] ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector3>*& dyn_Normals();
    // Get instance field reference: public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector3> Vertices
    [[deprecated("Use field access instead!")]] ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector3>*& dyn_Vertices();
    // Get instance field reference: public PowerUI.FixedSizeBuffer`1<UnityEngine.Vector4> Tangents
    [[deprecated("Use field access instead!")]] ::PowerUI::FixedSizeBuffer_1<::UnityEngine::Vector4>*& dyn_Tangents();
    // Get instance field reference: public UnityEngine.MeshCollider FullPhysicsModeCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshCollider*& dyn_FullPhysicsModeCollider();
    // public System.Void .ctor(PowerUI.UIBatch batch)
    // Offset: 0x1858F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicMesh* New_ctor(::PowerUI::UIBatch* batch) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::DynamicMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicMesh*, creationType>(batch)));
    }
    // public System.Void SetFontAtlas(Blaze.TextureAtlas atlas)
    // Offset: 0x1859270
    void SetFontAtlas(::Blaze::TextureAtlas* atlas);
    // public System.Void SetGraphicsAtlas(Blaze.TextureAtlas atlas)
    // Offset: 0x18592EC
    void SetGraphicsAtlas(::Blaze::TextureAtlas* atlas);
    // public System.Void SetGlobalMaterial()
    // Offset: 0x1859368
    void SetGlobalMaterial();
    // public System.Void SetMaterial(UnityEngine.Material material)
    // Offset: 0x1859370
    void SetMaterial(::UnityEngine::Material* material);
    // private System.Void Setup()
    // Offset: 0x185905C
    void Setup();
    // public System.Void RequireNormals()
    // Offset: 0x1859458
    void RequireNormals();
    // public System.Void RequireTangents()
    // Offset: 0x18594C8
    void RequireTangents();
    // public System.Void ChangeParent()
    // Offset: 0x1859538
    void ChangeParent();
    // public System.Void SetPhysicsMode(System.Boolean physics)
    // Offset: 0x18597C8
    void SetPhysicsMode(bool physics);
    // public System.Void PrepareForLayout()
    // Offset: 0x185991C
    void PrepareForLayout();
    // public System.Void CompletedLayout()
    // Offset: 0x1859930
    void CompletedLayout();
    // public PowerUI.MeshBlock Allocate()
    // Offset: 0x1859E84
    ::PowerUI::MeshBlock* Allocate();
    // public System.Void Flush()
    // Offset: 0x1859CCC
    void Flush();
    // public System.Void Destroy()
    // Offset: 0x1859F00
    void Destroy();
  }; // PowerUI.DynamicMesh
  #pragma pack(pop)
  static check_size<sizeof(DynamicMesh), 160 + sizeof(::UnityEngine::MeshCollider*)> __PowerUI_DynamicMeshSizeCheck;
  static_assert(sizeof(DynamicMesh) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::DynamicMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::DynamicMesh::SetFontAtlas
// Il2CppName: SetFontAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)(::Blaze::TextureAtlas*)>(&PowerUI::DynamicMesh::SetFontAtlas)> {
  static const MethodInfo* get() {
    static auto* atlas = &::il2cpp_utils::GetClassFromName("Blaze", "TextureAtlas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "SetFontAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atlas});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::SetGraphicsAtlas
// Il2CppName: SetGraphicsAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)(::Blaze::TextureAtlas*)>(&PowerUI::DynamicMesh::SetGraphicsAtlas)> {
  static const MethodInfo* get() {
    static auto* atlas = &::il2cpp_utils::GetClassFromName("Blaze", "TextureAtlas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "SetGraphicsAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atlas});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::SetGlobalMaterial
// Il2CppName: SetGlobalMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::SetGlobalMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "SetGlobalMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)(::UnityEngine::Material*)>(&PowerUI::DynamicMesh::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::RequireNormals
// Il2CppName: RequireNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::RequireNormals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "RequireNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::RequireTangents
// Il2CppName: RequireTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::RequireTangents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "RequireTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::ChangeParent
// Il2CppName: ChangeParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::ChangeParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "ChangeParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::SetPhysicsMode
// Il2CppName: SetPhysicsMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)(bool)>(&PowerUI::DynamicMesh::SetPhysicsMode)> {
  static const MethodInfo* get() {
    static auto* physics = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "SetPhysicsMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physics});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::PrepareForLayout
// Il2CppName: PrepareForLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::PrepareForLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "PrepareForLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::CompletedLayout
// Il2CppName: CompletedLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::CompletedLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "CompletedLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::Allocate
// Il2CppName: Allocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::MeshBlock* (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::Allocate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "Allocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DynamicMesh::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DynamicMesh::*)()>(&PowerUI::DynamicMesh::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DynamicMesh*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};