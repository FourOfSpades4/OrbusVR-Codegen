// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphUpdateShape
  class GraphUpdateShape;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GraphUpdateShape);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GraphUpdateShape*, "Pathfinding", "GraphUpdateShape");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GraphUpdateShape
  // [TokenAttribute] Offset: FFFFFFFF
  class GraphUpdateShape : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Vector3[] _points
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Vector3> points;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] _convexPoints
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector3> convexPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Boolean _convex
    // Size: 0x1
    // Offset: 0x20
    bool convex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Vector3[] _points
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__points();
    // Get instance field reference: private UnityEngine.Vector3[] _convexPoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__convexPoints();
    // Get instance field reference: private System.Boolean _convex
    [[deprecated("Use field access instead!")]] bool& dyn__convex();
    // public UnityEngine.Vector3[] get_points()
    // Offset: 0x1C0D998
    ::ArrayW<::UnityEngine::Vector3> get_points();
    // public System.Void set_points(UnityEngine.Vector3[] value)
    // Offset: 0x1C0D09C
    void set_points(::ArrayW<::UnityEngine::Vector3> value);
    // public System.Boolean get_convex()
    // Offset: 0x1C0D9A0
    bool get_convex();
    // public System.Void set_convex(System.Boolean value)
    // Offset: 0x1C0D080
    void set_convex(bool value);
    // private System.Void CalculateConvexHull()
    // Offset: 0x1C0D9A8
    void CalculateConvexHull();
    // public UnityEngine.Bounds GetBounds()
    // Offset: 0x1C0D0B0
    ::UnityEngine::Bounds GetBounds();
    // public System.Boolean Contains(Pathfinding.GraphNode node)
    // Offset: 0x1C0C044
    bool Contains(::Pathfinding::GraphNode* node);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0x1C0DB5C
    bool Contains(::UnityEngine::Vector3 point);
    // public System.Void .ctor()
    // Offset: 0x1C0D078
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphUpdateShape* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GraphUpdateShape::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphUpdateShape*, creationType>()));
    }
  }; // Pathfinding.GraphUpdateShape
  #pragma pack(pop)
  static check_size<sizeof(GraphUpdateShape), 32 + sizeof(bool)> __Pathfinding_GraphUpdateShapeSizeCheck;
  static_assert(sizeof(GraphUpdateShape) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::get_points
// Il2CppName: get_points
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (Pathfinding::GraphUpdateShape::*)()>(&Pathfinding::GraphUpdateShape::get_points)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "get_points", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::set_points
// Il2CppName: set_points
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateShape::*)(::ArrayW<::UnityEngine::Vector3>)>(&Pathfinding::GraphUpdateShape::set_points)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "set_points", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::get_convex
// Il2CppName: get_convex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GraphUpdateShape::*)()>(&Pathfinding::GraphUpdateShape::get_convex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "get_convex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::set_convex
// Il2CppName: set_convex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateShape::*)(bool)>(&Pathfinding::GraphUpdateShape::set_convex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "set_convex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::CalculateConvexHull
// Il2CppName: CalculateConvexHull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GraphUpdateShape::*)()>(&Pathfinding::GraphUpdateShape::CalculateConvexHull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "CalculateConvexHull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::GetBounds
// Il2CppName: GetBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (Pathfinding::GraphUpdateShape::*)()>(&Pathfinding::GraphUpdateShape::GetBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "GetBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GraphUpdateShape::*)(::Pathfinding::GraphNode*)>(&Pathfinding::GraphUpdateShape::Contains)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::GraphUpdateShape::*)(::UnityEngine::Vector3)>(&Pathfinding::GraphUpdateShape::Contains)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GraphUpdateShape*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Pathfinding::GraphUpdateShape::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
