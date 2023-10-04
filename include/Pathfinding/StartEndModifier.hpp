// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.PathModifier
#include "Pathfinding/PathModifier.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: GraphNodeDelegate
  class GraphNodeDelegate;
  // Forward declaring type: ABPath
  class ABPath;
  // Skipping declaration: Exactness because it is already included!
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: StartEndModifier
  class StartEndModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::StartEndModifier);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::StartEndModifier*, "Pathfinding", "StartEndModifier");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.StartEndModifier
  // [TokenAttribute] Offset: FFFFFFFF
  class StartEndModifier : public ::Pathfinding::PathModifier {
    public:
    // Nested type: ::Pathfinding::StartEndModifier::Exactness
    struct Exactness;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Pathfinding.StartEndModifier/Exactness
    // [TokenAttribute] Offset: FFFFFFFF
    struct Exactness/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Exactness
      constexpr Exactness(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Pathfinding.StartEndModifier/Exactness SnapToNode
      static constexpr const int SnapToNode = 0;
      // Get static field: static public Pathfinding.StartEndModifier/Exactness SnapToNode
      static ::Pathfinding::StartEndModifier::Exactness _get_SnapToNode();
      // Set static field: static public Pathfinding.StartEndModifier/Exactness SnapToNode
      static void _set_SnapToNode(::Pathfinding::StartEndModifier::Exactness value);
      // static field const value: static public Pathfinding.StartEndModifier/Exactness Original
      static constexpr const int Original = 1;
      // Get static field: static public Pathfinding.StartEndModifier/Exactness Original
      static ::Pathfinding::StartEndModifier::Exactness _get_Original();
      // Set static field: static public Pathfinding.StartEndModifier/Exactness Original
      static void _set_Original(::Pathfinding::StartEndModifier::Exactness value);
      // static field const value: static public Pathfinding.StartEndModifier/Exactness Interpolate
      static constexpr const int Interpolate = 2;
      // Get static field: static public Pathfinding.StartEndModifier/Exactness Interpolate
      static ::Pathfinding::StartEndModifier::Exactness _get_Interpolate();
      // Set static field: static public Pathfinding.StartEndModifier/Exactness Interpolate
      static void _set_Interpolate(::Pathfinding::StartEndModifier::Exactness value);
      // static field const value: static public Pathfinding.StartEndModifier/Exactness ClosestOnNode
      static constexpr const int ClosestOnNode = 3;
      // Get static field: static public Pathfinding.StartEndModifier/Exactness ClosestOnNode
      static ::Pathfinding::StartEndModifier::Exactness _get_ClosestOnNode();
      // Set static field: static public Pathfinding.StartEndModifier/Exactness ClosestOnNode
      static void _set_ClosestOnNode(::Pathfinding::StartEndModifier::Exactness value);
      // static field const value: static public Pathfinding.StartEndModifier/Exactness NodeConnection
      static constexpr const int NodeConnection = 4;
      // Get static field: static public Pathfinding.StartEndModifier/Exactness NodeConnection
      static ::Pathfinding::StartEndModifier::Exactness _get_NodeConnection();
      // Set static field: static public Pathfinding.StartEndModifier/Exactness NodeConnection
      static void _set_NodeConnection(::Pathfinding::StartEndModifier::Exactness value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Pathfinding.StartEndModifier/Exactness
    #pragma pack(pop)
    static check_size<sizeof(StartEndModifier::Exactness), 0 + sizeof(int)> __Pathfinding_StartEndModifier_ExactnessSizeCheck;
    static_assert(sizeof(StartEndModifier::Exactness) == 0x4);
    public:
    // public System.Boolean addPoints
    // Size: 0x1
    // Offset: 0x18
    bool addPoints;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: addPoints and: exactStartPoint
    char __padding0[0x3] = {};
    // public Pathfinding.StartEndModifier/Exactness exactStartPoint
    // Size: 0x4
    // Offset: 0x1C
    ::Pathfinding::StartEndModifier::Exactness exactStartPoint;
    // Field size check
    static_assert(sizeof(::Pathfinding::StartEndModifier::Exactness) == 0x4);
    // public Pathfinding.StartEndModifier/Exactness exactEndPoint
    // Size: 0x4
    // Offset: 0x20
    ::Pathfinding::StartEndModifier::Exactness exactEndPoint;
    // Field size check
    static_assert(sizeof(::Pathfinding::StartEndModifier::Exactness) == 0x4);
    // Padding between fields: exactEndPoint and: adjustStartPoint
    char __padding2[0x4] = {};
    // public System.Func`1<UnityEngine.Vector3> adjustStartPoint
    // Size: 0x8
    // Offset: 0x28
    ::System::Func_1<::UnityEngine::Vector3>* adjustStartPoint;
    // Field size check
    static_assert(sizeof(::System::Func_1<::UnityEngine::Vector3>*) == 0x8);
    // public System.Boolean useRaycasting
    // Size: 0x1
    // Offset: 0x30
    bool useRaycasting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRaycasting and: mask
    char __padding4[0x3] = {};
    // public UnityEngine.LayerMask mask
    // Size: 0x4
    // Offset: 0x34
    ::UnityEngine::LayerMask mask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public System.Boolean useGraphRaycasting
    // Size: 0x1
    // Offset: 0x38
    bool useGraphRaycasting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useGraphRaycasting and: connectionBuffer
    char __padding6[0x7] = {};
    // private System.Collections.Generic.List`1<Pathfinding.GraphNode> connectionBuffer
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* connectionBuffer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*) == 0x8);
    // private Pathfinding.GraphNodeDelegate connectionBufferAddDelegate
    // Size: 0x8
    // Offset: 0x48
    ::Pathfinding::GraphNodeDelegate* connectionBufferAddDelegate;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNodeDelegate*) == 0x8);
    public:
    // Deleting conversion operator: operator ::GlobalNamespace::Seeker*
    constexpr operator ::GlobalNamespace::Seeker*() const noexcept = delete;
    // Get instance field reference: public System.Boolean addPoints
    [[deprecated("Use field access instead!")]] bool& dyn_addPoints();
    // Get instance field reference: public Pathfinding.StartEndModifier/Exactness exactStartPoint
    [[deprecated("Use field access instead!")]] ::Pathfinding::StartEndModifier::Exactness& dyn_exactStartPoint();
    // Get instance field reference: public Pathfinding.StartEndModifier/Exactness exactEndPoint
    [[deprecated("Use field access instead!")]] ::Pathfinding::StartEndModifier::Exactness& dyn_exactEndPoint();
    // Get instance field reference: public System.Func`1<UnityEngine.Vector3> adjustStartPoint
    [[deprecated("Use field access instead!")]] ::System::Func_1<::UnityEngine::Vector3>*& dyn_adjustStartPoint();
    // Get instance field reference: public System.Boolean useRaycasting
    [[deprecated("Use field access instead!")]] bool& dyn_useRaycasting();
    // Get instance field reference: public UnityEngine.LayerMask mask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_mask();
    // Get instance field reference: public System.Boolean useGraphRaycasting
    [[deprecated("Use field access instead!")]] bool& dyn_useGraphRaycasting();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.GraphNode> connectionBuffer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& dyn_connectionBuffer();
    // Get instance field reference: private Pathfinding.GraphNodeDelegate connectionBufferAddDelegate
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNodeDelegate*& dyn_connectionBufferAddDelegate();
    // private UnityEngine.Vector3 Snap(Pathfinding.ABPath path, Pathfinding.StartEndModifier/Exactness mode, System.Boolean start, out System.Boolean forceAddPoint)
    // Offset: 0xE3A1E0
    ::UnityEngine::Vector3 Snap(::Pathfinding::ABPath* path, ::Pathfinding::StartEndModifier::Exactness mode, bool start, ByRef<bool> forceAddPoint);
    // public UnityEngine.Vector3 GetClampedPoint(UnityEngine.Vector3 from, UnityEngine.Vector3 to, Pathfinding.GraphNode hint)
    // Offset: 0xE3A860
    ::UnityEngine::Vector3 GetClampedPoint(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::Pathfinding::GraphNode* hint);
    // public override System.Int32 get_Order()
    // Offset: 0xE39EEC
    // Implemented from: Pathfinding.PathModifier
    // Base method: System.Int32 PathModifier::get_Order()
    int get_Order();
    // public override System.Void Apply(Pathfinding.Path _p)
    // Offset: 0xE39EF4
    // Implemented from: Pathfinding.PathModifier
    // Base method: System.Void PathModifier::Apply(Pathfinding.Path _p)
    void Apply(::Pathfinding::Path* _p);
    // public System.Void .ctor()
    // Offset: 0xE3ABE0
    // Implemented from: Pathfinding.PathModifier
    // Base method: System.Void PathModifier::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StartEndModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::StartEndModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StartEndModifier*, creationType>()));
    }
  }; // Pathfinding.StartEndModifier
  #pragma pack(pop)
  static check_size<sizeof(StartEndModifier), 72 + sizeof(::Pathfinding::GraphNodeDelegate*)> __Pathfinding_StartEndModifierSizeCheck;
  static_assert(sizeof(StartEndModifier) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::StartEndModifier::Exactness, "Pathfinding", "StartEndModifier/Exactness");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::StartEndModifier::Snap
// Il2CppName: Snap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::StartEndModifier::*)(::Pathfinding::ABPath*, ::Pathfinding::StartEndModifier::Exactness, bool, ByRef<bool>)>(&Pathfinding::StartEndModifier::Snap)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "ABPath")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("Pathfinding", "StartEndModifier/Exactness")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* forceAddPoint = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::StartEndModifier*), "Snap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, mode, start, forceAddPoint});
  }
};
// Writing MetadataGetter for method: Pathfinding::StartEndModifier::GetClampedPoint
// Il2CppName: GetClampedPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::StartEndModifier::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*)>(&Pathfinding::StartEndModifier::GetClampedPoint)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hint = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::StartEndModifier*), "GetClampedPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, hint});
  }
};
// Writing MetadataGetter for method: Pathfinding::StartEndModifier::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::StartEndModifier::*)()>(&Pathfinding::StartEndModifier::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::StartEndModifier*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::StartEndModifier::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::StartEndModifier::*)(::Pathfinding::Path*)>(&Pathfinding::StartEndModifier::Apply)> {
  static const MethodInfo* get() {
    static auto* _p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::StartEndModifier*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_p});
  }
};
// Writing MetadataGetter for method: Pathfinding::StartEndModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!