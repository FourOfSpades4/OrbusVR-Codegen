// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InternalStaticBatchingUtility
#include "UnityEngine/InternalStaticBatchingUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0*, "UnityEngine", "InternalStaticBatchingUtility/<SortGameObjectsForStaticbatching>c__AnonStorey0");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InternalStaticBatchingUtility/<SortGameObjectsForStaticbatching>c__AnonStorey0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A720C8
  class InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0 : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.InternalStaticBatchingUtility/StaticBatcherGOSorter sorter
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::InternalStaticBatchingUtility::StaticBatcherGOSorter* sorter;
    // Field size check
    static_assert(sizeof(::UnityEngine::InternalStaticBatchingUtility::StaticBatcherGOSorter*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::InternalStaticBatchingUtility::StaticBatcherGOSorter*
    constexpr operator ::UnityEngine::InternalStaticBatchingUtility::StaticBatcherGOSorter*() const noexcept {
      return sorter;
    }
    // Get instance field reference: UnityEngine.InternalStaticBatchingUtility/StaticBatcherGOSorter sorter
    [[deprecated("Use field access instead!")]] ::UnityEngine::InternalStaticBatchingUtility::StaticBatcherGOSorter*& dyn_sorter();
    // public System.Void .ctor()
    // Offset: 0x1CBE4EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0*, creationType>()));
    }
    // System.Int64 <>m__0(UnityEngine.GameObject x)
    // Offset: 0x1CBF204
    int64_t $$m__0(::UnityEngine::GameObject* x);
    // System.Int32 <>m__1(UnityEngine.GameObject y)
    // Offset: 0x1CBF394
    int $$m__1(::UnityEngine::GameObject* y);
    // System.Int64 <>m__2(UnityEngine.GameObject z)
    // Offset: 0x1CBF464
    int64_t $$m__2(::UnityEngine::GameObject* z);
  }; // UnityEngine.InternalStaticBatchingUtility/<SortGameObjectsForStaticbatching>c__AnonStorey0
  #pragma pack(pop)
  static check_size<sizeof(InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0), 16 + sizeof(::UnityEngine::InternalStaticBatchingUtility::StaticBatcherGOSorter*)> __UnityEngine_InternalStaticBatchingUtility_$SortGameObjectsForStaticbatching$c__AnonStorey0SizeCheck;
  static_assert(sizeof(InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::*)(::UnityEngine::GameObject*)>(&UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::$$m__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::$$m__1
// Il2CppName: <>m__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::*)(::UnityEngine::GameObject*)>(&UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::$$m__1)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0*), "<>m__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y});
  }
};
// Writing MetadataGetter for method: UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::$$m__2
// Il2CppName: <>m__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::*)(::UnityEngine::GameObject*)>(&UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0::$$m__2)> {
  static const MethodInfo* get() {
    static auto* z = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InternalStaticBatchingUtility::$SortGameObjectsForStaticbatching$c__AnonStorey0*), "<>m__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
