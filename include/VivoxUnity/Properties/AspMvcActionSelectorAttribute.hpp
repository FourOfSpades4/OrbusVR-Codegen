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
  // Forward declaring type: AspMvcActionSelectorAttribute
  class AspMvcActionSelectorAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Properties::AspMvcActionSelectorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Properties::AspMvcActionSelectorAttribute*, "VivoxUnity.Properties", "AspMvcActionSelectorAttribute");
// Type namespace: VivoxUnity.Properties
namespace VivoxUnity::Properties {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Properties.AspMvcActionSelectorAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: ABD3EC
  class AspMvcActionSelectorAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x12D8C14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionSelectorAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Properties::AspMvcActionSelectorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionSelectorAttribute*, creationType>()));
    }
  }; // VivoxUnity.Properties.AspMvcActionSelectorAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Properties::AspMvcActionSelectorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!