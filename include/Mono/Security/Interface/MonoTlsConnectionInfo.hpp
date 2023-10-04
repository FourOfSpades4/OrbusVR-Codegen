// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Interface.CipherSuiteCode
#include "Mono/Security/Interface/CipherSuiteCode.hpp"
// Including type: Mono.Security.Interface.TlsProtocols
#include "Mono/Security/Interface/TlsProtocols.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsConnectionInfo
  class MonoTlsConnectionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsConnectionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsConnectionInfo*, "Mono.Security.Interface", "MonoTlsConnectionInfo");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoTlsConnectionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsConnectionInfo : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA6ABFC
    // private Mono.Security.Interface.CipherSuiteCode <CipherSuiteCode>k__BackingField
    // Size: 0x2
    // Offset: 0x10
    ::Mono::Security::Interface::CipherSuiteCode CipherSuiteCode;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::CipherSuiteCode) == 0x2);
    // Padding between fields: CipherSuiteCode and: ProtocolVersion
    char __padding0[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xA6AC0C
    // private Mono.Security.Interface.TlsProtocols <ProtocolVersion>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::Mono::Security::Interface::TlsProtocols ProtocolVersion;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::TlsProtocols) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xA6AC1C
    // private System.String <PeerDomainName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW PeerDomainName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private Mono.Security.Interface.CipherSuiteCode <CipherSuiteCode>k__BackingField
    [[deprecated("Use field access instead!")]] ::Mono::Security::Interface::CipherSuiteCode& dyn_$CipherSuiteCode$k__BackingField();
    // Get instance field reference: private Mono.Security.Interface.TlsProtocols <ProtocolVersion>k__BackingField
    [[deprecated("Use field access instead!")]] ::Mono::Security::Interface::TlsProtocols& dyn_$ProtocolVersion$k__BackingField();
    // Get instance field reference: private System.String <PeerDomainName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$PeerDomainName$k__BackingField();
    // public Mono.Security.Interface.CipherSuiteCode get_CipherSuiteCode()
    // Offset: 0x21F59A4
    ::Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode();
    // public System.Void set_CipherSuiteCode(Mono.Security.Interface.CipherSuiteCode value)
    // Offset: 0x21F59AC
    void set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode value);
    // public Mono.Security.Interface.TlsProtocols get_ProtocolVersion()
    // Offset: 0x21F59B4
    ::Mono::Security::Interface::TlsProtocols get_ProtocolVersion();
    // public System.Void set_ProtocolVersion(Mono.Security.Interface.TlsProtocols value)
    // Offset: 0x21F59BC
    void set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols value);
    // public System.Void set_PeerDomainName(System.String value)
    // Offset: 0x21F59C4
    void set_PeerDomainName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x21F5A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsConnectionInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Interface::MonoTlsConnectionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsConnectionInfo*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x21F59CC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Mono.Security.Interface.MonoTlsConnectionInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoTlsConnectionInfo), 24 + sizeof(::StringW)> __Mono_Security_Interface_MonoTlsConnectionInfoSizeCheck;
  static_assert(sizeof(MonoTlsConnectionInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsConnectionInfo::get_CipherSuiteCode
// Il2CppName: get_CipherSuiteCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::CipherSuiteCode (Mono::Security::Interface::MonoTlsConnectionInfo::*)()>(&Mono::Security::Interface::MonoTlsConnectionInfo::get_CipherSuiteCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsConnectionInfo*), "get_CipherSuiteCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsConnectionInfo::set_CipherSuiteCode
// Il2CppName: set_CipherSuiteCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsConnectionInfo::*)(::Mono::Security::Interface::CipherSuiteCode)>(&Mono::Security::Interface::MonoTlsConnectionInfo::set_CipherSuiteCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "CipherSuiteCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsConnectionInfo*), "set_CipherSuiteCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsConnectionInfo::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::TlsProtocols (Mono::Security::Interface::MonoTlsConnectionInfo::*)()>(&Mono::Security::Interface::MonoTlsConnectionInfo::get_ProtocolVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsConnectionInfo*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsConnectionInfo::set_ProtocolVersion
// Il2CppName: set_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsConnectionInfo::*)(::Mono::Security::Interface::TlsProtocols)>(&Mono::Security::Interface::MonoTlsConnectionInfo::set_ProtocolVersion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "TlsProtocols")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsConnectionInfo*), "set_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsConnectionInfo::set_PeerDomainName
// Il2CppName: set_PeerDomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsConnectionInfo::*)(::StringW)>(&Mono::Security::Interface::MonoTlsConnectionInfo::set_PeerDomainName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsConnectionInfo*), "set_PeerDomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsConnectionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsConnectionInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Interface::MonoTlsConnectionInfo::*)()>(&Mono::Security::Interface::MonoTlsConnectionInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsConnectionInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};