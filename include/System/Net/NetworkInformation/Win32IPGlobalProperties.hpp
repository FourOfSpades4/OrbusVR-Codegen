// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.IPGlobalProperties
#include "System/Net/NetworkInformation/IPGlobalProperties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32IPGlobalProperties
  class Win32IPGlobalProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::Win32IPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::Win32IPGlobalProperties*, "System.Net.NetworkInformation", "Win32IPGlobalProperties");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32IPGlobalProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32IPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties {
    public:
    // public override System.String get_DomainName()
    // Offset: 0x1624CB0
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.String IPGlobalProperties::get_DomainName()
    ::StringW get_DomainName();
    // public System.Void .ctor()
    // Offset: 0x1624B10
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.Void IPGlobalProperties::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32IPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::Win32IPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32IPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.Win32IPGlobalProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPGlobalProperties::get_DomainName
// Il2CppName: get_DomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkInformation::Win32IPGlobalProperties::*)()>(&System::Net::NetworkInformation::Win32IPGlobalProperties::get_DomainName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32IPGlobalProperties*), "get_DomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPGlobalProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
