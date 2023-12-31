// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.MonoModifier
#include "Pathfinding/MonoModifier.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: RaycastModifier
  class RaycastModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RaycastModifier);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RaycastModifier*, "Pathfinding", "RaycastModifier");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RaycastModifier
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AD843C
  // [RequireComponent] Offset: AD843C
  // [HelpURLAttribute] Offset: AD843C
  class RaycastModifier : public ::Pathfinding::MonoModifier {
    public:
    public:
    // public System.Boolean useRaycasting
    // Size: 0x1
    // Offset: 0x20
    bool useRaycasting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRaycasting and: mask
    char __padding0[0x3] = {};
    // public UnityEngine.LayerMask mask
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::LayerMask mask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public System.Boolean thickRaycast
    // Size: 0x1
    // Offset: 0x28
    bool thickRaycast;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: thickRaycast and: thickRaycastRadius
    char __padding2[0x3] = {};
    // public System.Single thickRaycastRadius
    // Size: 0x4
    // Offset: 0x2C
    float thickRaycastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 raycastOffset
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 raycastOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean subdivideEveryIter
    // Size: 0x1
    // Offset: 0x3C
    bool subdivideEveryIter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: subdivideEveryIter and: iterations
    char __padding5[0x3] = {};
    // public System.Int32 iterations
    // Size: 0x4
    // Offset: 0x40
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean useGraphRaycasting
    // Size: 0x1
    // Offset: 0x44
    bool useGraphRaycasting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> nodes
    static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _get_nodes();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> nodes
    static void _set_nodes(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);
    // Get instance field reference: public System.Boolean useRaycasting
    [[deprecated("Use field access instead!")]] bool& dyn_useRaycasting();
    // Get instance field reference: public UnityEngine.LayerMask mask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_mask();
    // Get instance field reference: public System.Boolean thickRaycast
    [[deprecated("Use field access instead!")]] bool& dyn_thickRaycast();
    // Get instance field reference: public System.Single thickRaycastRadius
    [[deprecated("Use field access instead!")]] float& dyn_thickRaycastRadius();
    // Get instance field reference: public UnityEngine.Vector3 raycastOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_raycastOffset();
    // Get instance field reference: public System.Boolean subdivideEveryIter
    [[deprecated("Use field access instead!")]] bool& dyn_subdivideEveryIter();
    // Get instance field reference: public System.Int32 iterations
    [[deprecated("Use field access instead!")]] int& dyn_iterations();
    // Get instance field reference: public System.Boolean useGraphRaycasting
    [[deprecated("Use field access instead!")]] bool& dyn_useGraphRaycasting();
    // public System.Boolean ValidateLine(Pathfinding.GraphNode n1, Pathfinding.GraphNode n2, UnityEngine.Vector3 v1, UnityEngine.Vector3 v2)
    // Offset: 0x16B61D8
    bool ValidateLine(::Pathfinding::GraphNode* n1, ::Pathfinding::GraphNode* n2, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2);
    // public override System.Int32 get_Order()
    // Offset: 0x16B5A48
    // Implemented from: Pathfinding.MonoModifier
    // Base method: System.Int32 MonoModifier::get_Order()
    int get_Order();
    // public override System.Void Apply(Pathfinding.Path p)
    // Offset: 0x16B5A50
    // Implemented from: Pathfinding.MonoModifier
    // Base method: System.Void MonoModifier::Apply(Pathfinding.Path p)
    void Apply(::Pathfinding::Path* p);
    // public System.Void .ctor()
    // Offset: 0x16B65E8
    // Implemented from: Pathfinding.MonoModifier
    // Base method: System.Void MonoModifier::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RaycastModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RaycastModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RaycastModifier*, creationType>()));
    }
  }; // Pathfinding.RaycastModifier
  #pragma pack(pop)
  static check_size<sizeof(RaycastModifier), 68 + sizeof(bool)> __Pathfinding_RaycastModifierSizeCheck;
  static_assert(sizeof(RaycastModifier) == 0x45);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RaycastModifier::ValidateLine
// Il2CppName: ValidateLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::RaycastModifier::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::RaycastModifier::ValidateLine)> {
  static const MethodInfo* get() {
    static auto* n1 = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* n2 = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    static auto* v1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RaycastModifier*), "ValidateLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n1, n2, v1, v2});
  }
};
// Writing MetadataGetter for method: Pathfinding::RaycastModifier::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::RaycastModifier::*)()>(&Pathfinding::RaycastModifier::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RaycastModifier*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RaycastModifier::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RaycastModifier::*)(::Pathfinding::Path*)>(&Pathfinding::RaycastModifier::Apply)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RaycastModifier*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::RaycastModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
