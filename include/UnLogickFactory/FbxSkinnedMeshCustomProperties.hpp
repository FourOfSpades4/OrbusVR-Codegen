// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnLogickFactory.FbxCustomPropertyBehaviour
#include "UnLogickFactory/FbxCustomPropertyBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Forward declaring type: FbxSkinnedMeshCustomProperties
  class FbxSkinnedMeshCustomProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnLogickFactory::FbxSkinnedMeshCustomProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::FbxSkinnedMeshCustomProperties*, "UnLogickFactory", "FbxSkinnedMeshCustomProperties");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.FbxSkinnedMeshCustomProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class FbxSkinnedMeshCustomProperties : public ::UnLogickFactory::FbxCustomPropertyBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x212C550
    // Implemented from: UnLogickFactory.FbxCustomPropertyBehaviour
    // Base method: System.Void FbxCustomPropertyBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FbxSkinnedMeshCustomProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::FbxSkinnedMeshCustomProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FbxSkinnedMeshCustomProperties*, creationType>()));
    }
  }; // UnLogickFactory.FbxSkinnedMeshCustomProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::FbxSkinnedMeshCustomProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
