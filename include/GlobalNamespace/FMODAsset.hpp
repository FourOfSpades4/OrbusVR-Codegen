// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FMODAsset
  class FMODAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FMODAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FMODAsset*, "", "FMODAsset");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FMODAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class FMODAsset : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.String path
    // Size: 0x8
    // Offset: 0x18
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x20
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // public System.Void .ctor()
    // Offset: 0x15D36D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FMODAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FMODAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FMODAsset*, creationType>()));
    }
  }; // FMODAsset
  #pragma pack(pop)
  static check_size<sizeof(FMODAsset), 32 + sizeof(::StringW)> __GlobalNamespace_FMODAssetSizeCheck;
  static_assert(sizeof(FMODAsset) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FMODAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
