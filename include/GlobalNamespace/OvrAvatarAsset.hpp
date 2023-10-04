// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarAsset
  class OvrAvatarAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarAsset*, "", "OvrAvatarAsset");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarAsset : public ::Il2CppObject {
    public:
    public:
    // public System.UInt64 assetID
    // Size: 0x8
    // Offset: 0x10
    uint64_t assetID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return assetID;
    }
    // Get instance field reference: public System.UInt64 assetID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_assetID();
    // public System.Void .ctor()
    // Offset: 0x1019F30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarAsset*, creationType>()));
    }
  }; // OvrAvatarAsset
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarAsset), 16 + sizeof(uint64_t)> __GlobalNamespace_OvrAvatarAssetSizeCheck;
  static_assert(sizeof(OvrAvatarAsset) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!