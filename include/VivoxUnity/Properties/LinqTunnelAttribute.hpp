// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Forward declaring type: LinqTunnelAttribute
  class LinqTunnelAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::LinqTunnelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::LinqTunnelAttribute*, "VivoxUnity.Properties", "LinqTunnelAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.LinqTunnelAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD4D8
  class LinqTunnelAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x12D90DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinqTunnelAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::LinqTunnelAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinqTunnelAttribute*, creationType>()));
    }
  }; // VivoxUnity.Properties.LinqTunnelAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::LinqTunnelAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!