// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: GrouperData
  class GrouperData;
  // Forward declaring type: MB3_MeshBakerGrouperCore
  class MB3_MeshBakerGrouperCore;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ClusterType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB3_MeshBakerGrouper
  class MB3_MeshBakerGrouper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB3_MeshBakerGrouper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_MeshBakerGrouper*, "", "MB3_MeshBakerGrouper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MB3_MeshBakerGrouper
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshBakerGrouper : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType
    struct ClusterType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MB3_MeshBakerGrouper/ClusterType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ClusterType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ClusterType
      constexpr ClusterType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MB3_MeshBakerGrouper/ClusterType none
      static constexpr const int none = 0;
      // Get static field: static public MB3_MeshBakerGrouper/ClusterType none
      static ::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType _get_none();
      // Set static field: static public MB3_MeshBakerGrouper/ClusterType none
      static void _set_none(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType value);
      // static field const value: static public MB3_MeshBakerGrouper/ClusterType grid
      static constexpr const int grid = 1;
      // Get static field: static public MB3_MeshBakerGrouper/ClusterType grid
      static ::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType _get_grid();
      // Set static field: static public MB3_MeshBakerGrouper/ClusterType grid
      static void _set_grid(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType value);
      // static field const value: static public MB3_MeshBakerGrouper/ClusterType pie
      static constexpr const int pie = 2;
      // Get static field: static public MB3_MeshBakerGrouper/ClusterType pie
      static ::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType _get_pie();
      // Set static field: static public MB3_MeshBakerGrouper/ClusterType pie
      static void _set_pie(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType value);
      // static field const value: static public MB3_MeshBakerGrouper/ClusterType agglomerative
      static constexpr const int agglomerative = 3;
      // Get static field: static public MB3_MeshBakerGrouper/ClusterType agglomerative
      static ::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType _get_agglomerative();
      // Set static field: static public MB3_MeshBakerGrouper/ClusterType agglomerative
      static void _set_agglomerative(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MB3_MeshBakerGrouper/ClusterType
    #pragma pack(pop)
    static check_size<sizeof(MB3_MeshBakerGrouper::ClusterType), 0 + sizeof(int)> __GlobalNamespace_MB3_MeshBakerGrouper_ClusterTypeSizeCheck;
    static_assert(sizeof(MB3_MeshBakerGrouper::ClusterType) == 0x4);
    public:
    // public DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore grouper
    // Size: 0x8
    // Offset: 0x18
    ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore* grouper;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore*) == 0x8);
    // public MB3_MeshBakerGrouper/ClusterType clusterType
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType clusterType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType) == 0x4);
    // Padding between fields: clusterType and: data
    char __padding1[0x4] = {};
    // public DigitalOpus.MB.Core.GrouperData data
    // Size: 0x8
    // Offset: 0x28
    ::DigitalOpus::MB::Core::GrouperData* data;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::GrouperData*) == 0x8);
    // public UnityEngine.Bounds sourceObjectBounds
    // Size: 0x18
    // Offset: 0x30
    ::UnityEngine::Bounds sourceObjectBounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore grouper
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore*& dyn_grouper();
    // Get instance field reference: public MB3_MeshBakerGrouper/ClusterType clusterType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType& dyn_clusterType();
    // Get instance field reference: public DigitalOpus.MB.Core.GrouperData data
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::GrouperData*& dyn_data();
    // Get instance field reference: public UnityEngine.Bounds sourceObjectBounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn_sourceObjectBounds();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x12179A0
    void OnDrawGizmosSelected();
    // public DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore CreateGrouper(MB3_MeshBakerGrouper/ClusterType t, DigitalOpus.MB.Core.GrouperData data)
    // Offset: 0x1217A58
    ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore* CreateGrouper(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType t, ::DigitalOpus::MB::Core::GrouperData* data);
    // public System.Void .ctor()
    // Offset: 0x1217C00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshBakerGrouper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB3_MeshBakerGrouper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshBakerGrouper*, creationType>()));
    }
  }; // MB3_MeshBakerGrouper
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshBakerGrouper), 48 + sizeof(::UnityEngine::Bounds)> __GlobalNamespace_MB3_MeshBakerGrouperSizeCheck;
  static_assert(sizeof(MB3_MeshBakerGrouper) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType, "", "MB3_MeshBakerGrouper/ClusterType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerGrouper::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerGrouper::*)()>(&GlobalNamespace::MB3_MeshBakerGrouper::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerGrouper*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerGrouper::CreateGrouper
// Il2CppName: CreateGrouper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore* (GlobalNamespace::MB3_MeshBakerGrouper::*)(::GlobalNamespace::MB3_MeshBakerGrouper::ClusterType, ::DigitalOpus::MB::Core::GrouperData*)>(&GlobalNamespace::MB3_MeshBakerGrouper::CreateGrouper)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("", "MB3_MeshBakerGrouper/ClusterType")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "GrouperData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerGrouper*), "CreateGrouper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerGrouper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
