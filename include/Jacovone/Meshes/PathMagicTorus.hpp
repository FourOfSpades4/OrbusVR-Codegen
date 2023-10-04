// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Jacovone.Meshes.PathMagicMesh
#include "Jacovone/Meshes/PathMagicMesh.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Jacovone.Meshes
namespace Jacovone::Meshes {
  // Forward declaring type: PathMagicTorus
  class PathMagicTorus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Jacovone::Meshes::PathMagicTorus);
DEFINE_IL2CPP_ARG_TYPE(::Jacovone::Meshes::PathMagicTorus*, "Jacovone.Meshes", "PathMagicTorus");
// Type namespace: Jacovone.Meshes
namespace Jacovone::Meshes {
  // Size: 0xDC
  #pragma pack(push, 1)
  // Autogenerated type: Jacovone.Meshes.PathMagicTorus
  // [TokenAttribute] Offset: FFFFFFFF
  class PathMagicTorus : public ::Jacovone::Meshes::PathMagicMesh {
    public:
    // Nested type: ::Jacovone::Meshes::PathMagicTorus::RadiusType
    struct RadiusType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Jacovone.Meshes.PathMagicTorus/RadiusType
    // [TokenAttribute] Offset: FFFFFFFF
    struct RadiusType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RadiusType
      constexpr RadiusType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Jacovone.Meshes.PathMagicTorus/RadiusType Constant
      static constexpr const int Constant = 0;
      // Get static field: static public Jacovone.Meshes.PathMagicTorus/RadiusType Constant
      static ::Jacovone::Meshes::PathMagicTorus::RadiusType _get_Constant();
      // Set static field: static public Jacovone.Meshes.PathMagicTorus/RadiusType Constant
      static void _set_Constant(::Jacovone::Meshes::PathMagicTorus::RadiusType value);
      // static field const value: static public Jacovone.Meshes.PathMagicTorus/RadiusType Curve
      static constexpr const int Curve = 1;
      // Get static field: static public Jacovone.Meshes.PathMagicTorus/RadiusType Curve
      static ::Jacovone::Meshes::PathMagicTorus::RadiusType _get_Curve();
      // Set static field: static public Jacovone.Meshes.PathMagicTorus/RadiusType Curve
      static void _set_Curve(::Jacovone::Meshes::PathMagicTorus::RadiusType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Jacovone.Meshes.PathMagicTorus/RadiusType
    #pragma pack(pop)
    static check_size<sizeof(PathMagicTorus::RadiusType), 0 + sizeof(int)> __Jacovone_Meshes_PathMagicTorus_RadiusTypeSizeCheck;
    static_assert(sizeof(PathMagicTorus::RadiusType) == 0x4);
    public:
    // public System.Boolean closeFront
    // Size: 0x1
    // Offset: 0x79
    bool closeFront;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean closeBack
    // Size: 0x1
    // Offset: 0x7A
    bool closeBack;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closeBack and: radiusType
    char __padding1[0x1] = {};
    // public Jacovone.Meshes.PathMagicTorus/RadiusType radiusType
    // Size: 0x4
    // Offset: 0x7C
    ::Jacovone::Meshes::PathMagicTorus::RadiusType radiusType;
    // Field size check
    static_assert(sizeof(::Jacovone::Meshes::PathMagicTorus::RadiusType) == 0x4);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x80
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: radius and: radiusCurve
    char __padding3[0x4] = {};
    // public UnityEngine.AnimationCurve radiusCurve
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::AnimationCurve* radiusCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single angleOffset
    // Size: 0x4
    // Offset: 0x90
    float angleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single twist
    // Size: 0x4
    // Offset: 0x94
    float twist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Collections.Generic.List`1<System.Int32> frontVertices
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::List_1<int>* frontVertices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // protected System.Collections.Generic.List`1<System.Int32> backVertices
    // Size: 0x8
    // Offset: 0xA0
    ::System::Collections::Generic::List_1<int>* backVertices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Single fTwist
    // Size: 0x4
    // Offset: 0xA8
    float fTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 frontNormal
    // Size: 0xC
    // Offset: 0xAC
    ::UnityEngine::Vector3 frontNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 backNormal
    // Size: 0xC
    // Offset: 0xB8
    ::UnityEngine::Vector3 backNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 frontPosition
    // Size: 0xC
    // Offset: 0xC4
    ::UnityEngine::Vector3 frontPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 backPosition
    // Size: 0xC
    // Offset: 0xD0
    ::UnityEngine::Vector3 backPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public System.Boolean closeFront
    [[deprecated("Use field access instead!")]] bool& dyn_closeFront();
    // Get instance field reference: public System.Boolean closeBack
    [[deprecated("Use field access instead!")]] bool& dyn_closeBack();
    // Get instance field reference: public Jacovone.Meshes.PathMagicTorus/RadiusType radiusType
    [[deprecated("Use field access instead!")]] ::Jacovone::Meshes::PathMagicTorus::RadiusType& dyn_radiusType();
    // Get instance field reference: public System.Single radius
    [[deprecated("Use field access instead!")]] float& dyn_radius();
    // Get instance field reference: public UnityEngine.AnimationCurve radiusCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_radiusCurve();
    // Get instance field reference: public System.Single angleOffset
    [[deprecated("Use field access instead!")]] float& dyn_angleOffset();
    // Get instance field reference: public System.Single twist
    [[deprecated("Use field access instead!")]] float& dyn_twist();
    // Get instance field reference: protected System.Collections.Generic.List`1<System.Int32> frontVertices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_frontVertices();
    // Get instance field reference: protected System.Collections.Generic.List`1<System.Int32> backVertices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_backVertices();
    // Get instance field reference: private System.Single fTwist
    [[deprecated("Use field access instead!")]] float& dyn_fTwist();
    // Get instance field reference: private UnityEngine.Vector3 frontNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_frontNormal();
    // Get instance field reference: private UnityEngine.Vector3 backNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_backNormal();
    // Get instance field reference: private UnityEngine.Vector3 frontPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_frontPosition();
    // Get instance field reference: private UnityEngine.Vector3 backPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_backPosition();
    // protected override System.Void InitializeMesh()
    // Offset: 0x105D438
    // Implemented from: Jacovone.Meshes.PathMagicMesh
    // Base method: System.Void PathMagicMesh::InitializeMesh()
    void InitializeMesh();
    // protected override System.Void FinalizeMesh()
    // Offset: 0x105D4DC
    // Implemented from: Jacovone.Meshes.PathMagicMesh
    // Base method: System.Void PathMagicMesh::FinalizeMesh()
    void FinalizeMesh();
    // protected override System.Void GenerateMeshPart(System.Int32 piece, UnityEngine.Vector3 position, UnityEngine.Vector3 direction, UnityEngine.Vector3 xd, UnityEngine.Vector3 yd)
    // Offset: 0x105DF94
    // Implemented from: Jacovone.Meshes.PathMagicMesh
    // Base method: System.Void PathMagicMesh::GenerateMeshPart(System.Int32 piece, UnityEngine.Vector3 position, UnityEngine.Vector3 direction, UnityEngine.Vector3 xd, UnityEngine.Vector3 yd)
    void GenerateMeshPart(int piece, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 xd, ::UnityEngine::Vector3 yd);
    // protected override System.Int32 GetNumberOfMaterials()
    // Offset: 0x105E674
    // Implemented from: Jacovone.Meshes.PathMagicMesh
    // Base method: System.Int32 PathMagicMesh::GetNumberOfMaterials()
    int GetNumberOfMaterials();
    // public System.Void .ctor()
    // Offset: 0x105E67C
    // Implemented from: Jacovone.Meshes.PathMagicMesh
    // Base method: System.Void PathMagicMesh::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathMagicTorus* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Jacovone::Meshes::PathMagicTorus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathMagicTorus*, creationType>()));
    }
  }; // Jacovone.Meshes.PathMagicTorus
  #pragma pack(pop)
  static check_size<sizeof(PathMagicTorus), 208 + sizeof(::UnityEngine::Vector3)> __Jacovone_Meshes_PathMagicTorusSizeCheck;
  static_assert(sizeof(PathMagicTorus) == 0xDC);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Jacovone::Meshes::PathMagicTorus::RadiusType, "Jacovone.Meshes", "PathMagicTorus/RadiusType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Jacovone::Meshes::PathMagicTorus::InitializeMesh
// Il2CppName: InitializeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Meshes::PathMagicTorus::*)()>(&Jacovone::Meshes::PathMagicTorus::InitializeMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Meshes::PathMagicTorus*), "InitializeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Meshes::PathMagicTorus::FinalizeMesh
// Il2CppName: FinalizeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Meshes::PathMagicTorus::*)()>(&Jacovone::Meshes::PathMagicTorus::FinalizeMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Meshes::PathMagicTorus*), "FinalizeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Meshes::PathMagicTorus::GenerateMeshPart
// Il2CppName: GenerateMeshPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Jacovone::Meshes::PathMagicTorus::*)(int, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Jacovone::Meshes::PathMagicTorus::GenerateMeshPart)> {
  static const MethodInfo* get() {
    static auto* piece = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* xd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* yd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Meshes::PathMagicTorus*), "GenerateMeshPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{piece, position, direction, xd, yd});
  }
};
// Writing MetadataGetter for method: Jacovone::Meshes::PathMagicTorus::GetNumberOfMaterials
// Il2CppName: GetNumberOfMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Jacovone::Meshes::PathMagicTorus::*)()>(&Jacovone::Meshes::PathMagicTorus::GetNumberOfMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Jacovone::Meshes::PathMagicTorus*), "GetNumberOfMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Jacovone::Meshes::PathMagicTorus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
