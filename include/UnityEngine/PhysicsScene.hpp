// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: QueryTriggerInteraction
  struct QueryTriggerInteraction;
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PhysicsScene
  struct PhysicsScene;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PhysicsScene
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A815A4
  struct PhysicsScene/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::PhysicsScene>*/ {
    public:
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PhysicsScene
    constexpr PhysicsScene(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::PhysicsScene>
    operator ::System::IEquatable_1<::UnityEngine::PhysicsScene>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private System.Int32 m_Handle
    [[deprecated("Use field access instead!")]] int& dyn_m_Handle();
    // public System.Boolean Equals(UnityEngine.PhysicsScene other)
    // Offset: 0xBD20E4
    bool Equals(::UnityEngine::PhysicsScene other);
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xBD20F4
    bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float maxDistance, int layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x2876A24
    static bool Internal_RaycastTest(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float maxDistance, int layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xBD20FC
    bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float maxDistance, int layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, ref UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x2876AF0
    static bool Internal_Raycast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float maxDistance, ByRef<::UnityEngine::RaycastHit> hit, int layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Int32 Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xBD2104
    int Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> raycastHits, float maxDistance, int layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x2876BBC
    static int Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> raycastHits, float maxDistance, int mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x2876A4C
    static bool Internal_RaycastTest_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray, float maxDistance, int layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, ref UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x2876B18
    static bool Internal_Raycast_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray, float maxDistance, ByRef<::UnityEngine::RaycastHit> hit, int layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x2876BE0
    static int Internal_RaycastNonAlloc_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray, ::ArrayW<::UnityEngine::RaycastHit> raycastHits, float maxDistance, int mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public override System.String ToString()
    // Offset: 0xBD20CC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xBD20D4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xBD20DC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.PhysicsScene
  #pragma pack(pop)
  static check_size<sizeof(PhysicsScene), 0 + sizeof(int)> __UnityEngine_PhysicsSceneSizeCheck;
  static_assert(sizeof(PhysicsScene) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(::UnityEngine::PhysicsScene)>(&UnityEngine::PhysicsScene::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, maxDistance, layerMask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastTest
// Il2CppName: Internal_RaycastTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastTest)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::RaycastHit>, float, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hitInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_Raycast
// Il2CppName: Internal_Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float, ByRef<::UnityEngine::RaycastHit>, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_Raycast)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->this_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* raycastHits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit"), 1)->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastNonAlloc
// Il2CppName: Internal_RaycastNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastNonAlloc)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* raycastHits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit"), 1)->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastTest_Injected
// Il2CppName: Internal_RaycastTest_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::PhysicsScene>, ByRef<::UnityEngine::Ray>, float, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastTest_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene")->this_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastTest_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_Raycast_Injected
// Il2CppName: Internal_Raycast_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::PhysicsScene>, ByRef<::UnityEngine::Ray>, float, ByRef<::UnityEngine::RaycastHit>, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_Raycast_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene")->this_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->this_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_Raycast_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected
// Il2CppName: Internal_RaycastNonAlloc_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::PhysicsScene>, ByRef<::UnityEngine::Ray>, ::ArrayW<::UnityEngine::RaycastHit>, float, int, ::UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene")->this_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* raycastHits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit"), 1)->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* queryTriggerInteraction = &::il2cpp_utils::GetClassFromName("UnityEngine", "QueryTriggerInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastNonAlloc_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::PhysicsScene::*)()>(&UnityEngine::PhysicsScene::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene::*)()>(&UnityEngine::PhysicsScene::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(::Il2CppObject*)>(&UnityEngine::PhysicsScene::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
