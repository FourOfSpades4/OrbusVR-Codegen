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
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: AllowPartiallyTrustedCallersAttribute
  class AllowPartiallyTrustedCallersAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AllowPartiallyTrustedCallersAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AllowPartiallyTrustedCallersAttribute*, "System.Security", "AllowPartiallyTrustedCallersAttribute");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AllowPartiallyTrustedCallersAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5A6A0
  // [ComVisibleAttribute] Offset: A5A6A0
  class AllowPartiallyTrustedCallersAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B15570
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AllowPartiallyTrustedCallersAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AllowPartiallyTrustedCallersAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AllowPartiallyTrustedCallersAttribute*, creationType>()));
    }
  }; // System.Security.AllowPartiallyTrustedCallersAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AllowPartiallyTrustedCallersAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
