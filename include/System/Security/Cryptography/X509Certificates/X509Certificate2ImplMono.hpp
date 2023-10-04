// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
#include "System/Security/Cryptography/X509Certificates/X509Certificate2Impl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: X509CertificateImplCollection
  class X509CertificateImplCollection;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2ImplMono
  class X509Certificate2ImplMono;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplMono");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Certificate2ImplMono : public ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl {
    public:
    public:
    // private System.Boolean _archived
    // Size: 0x1
    // Offset: 0x18
    bool archived;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: archived and: extensions
    char __padding0[0x7] = {};
    // private System.Security.Cryptography.X509Certificates.X509ExtensionCollection _extensions
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* extensions;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.PublicKey _publicKey
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::Cryptography::X509Certificates::PublicKey* publicKey;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::PublicKey*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X500DistinguishedName issuer_name
    // Size: 0x8
    // Offset: 0x30
    ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X500DistinguishedName subject_name
    // Size: 0x8
    // Offset: 0x38
    ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*) == 0x8);
    // private System.Security.Cryptography.Oid signature_algorithm
    // Size: 0x8
    // Offset: 0x40
    ::System::Security::Cryptography::Oid* signature_algorithm;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::Oid*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509CertificateImplCollection intermediateCerts
    // Size: 0x8
    // Offset: 0x48
    ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*) == 0x8);
    // private Mono.Security.X509.X509Certificate _cert
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Security::X509::X509Certificate* cert;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509Certificate*) == 0x8);
    public:
    // Deleting conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept = delete;
    // Get static field: static private System.String empty_error
    static ::StringW _get_empty_error();
    // Set static field: static private System.String empty_error
    static void _set_empty_error(::StringW value);
    // Get static field: static private System.Byte[] commonName
    static ::ArrayW<uint8_t> _get_commonName();
    // Set static field: static private System.Byte[] commonName
    static void _set_commonName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] email
    static ::ArrayW<uint8_t> _get_email();
    // Set static field: static private System.Byte[] email
    static void _set_email(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] signedData
    static ::ArrayW<uint8_t> _get_signedData();
    // Set static field: static private System.Byte[] signedData
    static void _set_signedData(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Boolean _archived
    [[deprecated("Use field access instead!")]] bool& dyn__archived();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509ExtensionCollection _extensions
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*& dyn__extensions();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.PublicKey _publicKey
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::PublicKey*& dyn__publicKey();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X500DistinguishedName issuer_name
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& dyn_issuer_name();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X500DistinguishedName subject_name
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& dyn_subject_name();
    // Get instance field reference: private System.Security.Cryptography.Oid signature_algorithm
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::Oid*& dyn_signature_algorithm();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509CertificateImplCollection intermediateCerts
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*& dyn_intermediateCerts();
    // Get instance field reference: private Mono.Security.X509.X509Certificate _cert
    [[deprecated("Use field access instead!")]] ::Mono::Security::X509::X509Certificate*& dyn__cert();
    // private System.Void .ctor(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x18B8900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2ImplMono* New_ctor(::Mono::Security::X509::X509Certificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2ImplMono*, creationType>(cert)));
    }
    // private System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono other)
    // Offset: 0x18B892C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2ImplMono* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2ImplMono*, creationType>(other)));
    }
    // private Mono.Security.X509.X509Certificate ImportPkcs12(System.Byte[] rawData, System.String password)
    // Offset: 0x18B9484
    ::Mono::Security::X509::X509Certificate* ImportPkcs12(::ArrayW<uint8_t> rawData, ::StringW password);
    // static private System.Void AppendBuffer(System.Text.StringBuilder sb, System.Byte[] buffer)
    // Offset: 0x18BA954
    static void AppendBuffer(::System::Text::StringBuilder* sb, ::ArrayW<uint8_t> buffer);
    // static private System.Void .cctor()
    // Offset: 0x18BAA60
    static void _cctor();
    // public override System.Boolean get_IsValid()
    // Offset: 0x18B88F0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::get_IsValid()
    bool get_IsValid();
    // public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
    // Offset: 0x18B89F0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Security.Cryptography.X509Certificates.X509CertificateImpl X509CertificateImpl::Clone()
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
    // public override System.String GetIssuerName(System.Boolean legacyV1Mode)
    // Offset: 0x18B8A5C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetIssuerName(System.Boolean legacyV1Mode)
    ::StringW GetIssuerName(bool legacyV1Mode);
    // public override System.String GetSubjectName(System.Boolean legacyV1Mode)
    // Offset: 0x18B8B38
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetSubjectName(System.Boolean legacyV1Mode)
    ::StringW GetSubjectName(bool legacyV1Mode);
    // public override System.Byte[] GetRawCertData()
    // Offset: 0x18B8C18
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetRawCertData()
    ::ArrayW<uint8_t> GetRawCertData();
    // protected override System.Byte[] GetCertHash(System.Boolean lazy)
    // Offset: 0x18B8C58
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetCertHash(System.Boolean lazy)
    ::ArrayW<uint8_t> GetCertHash(bool lazy);
    // public override System.DateTime GetValidFrom()
    // Offset: 0x18B8CC4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidFrom()
    ::System::DateTime GetValidFrom();
    // public override System.DateTime GetValidUntil()
    // Offset: 0x18B8D08
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidUntil()
    ::System::DateTime GetValidUntil();
    // public override System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    // Offset: 0x18B8D4C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    bool Equals(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, ByRef<bool> result);
    // public override System.Byte[] GetSerialNumber()
    // Offset: 0x18B8D58
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetSerialNumber()
    ::ArrayW<uint8_t> GetSerialNumber();
    // public System.Void .ctor()
    // Offset: 0x18B8D98
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2ImplMono* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2ImplMono*, creationType>()));
    }
    // public override System.Security.Cryptography.AsymmetricAlgorithm get_PrivateKey()
    // Offset: 0x18B8DC0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.AsymmetricAlgorithm X509Certificate2Impl::get_PrivateKey()
    ::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
    // public override System.Security.Cryptography.X509Certificates.PublicKey get_PublicKey()
    // Offset: 0x18B9128
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.PublicKey X509Certificate2Impl::get_PublicKey()
    ::System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
    // public override System.Security.Cryptography.Oid get_SignatureAlgorithm()
    // Offset: 0x18B92D4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.Oid X509Certificate2Impl::get_SignatureAlgorithm()
    ::System::Security::Cryptography::Oid* get_SignatureAlgorithm();
    // public override System.Int32 get_Version()
    // Offset: 0x18B93D0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Int32 X509Certificate2Impl::get_Version()
    int get_Version();
    // public override System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x18B9D74
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::ArrayW<uint8_t> rawData, ::StringW password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Reset()
    // Offset: 0x18BA000
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::Reset()
    void Reset();
    // public override System.String ToString()
    // Offset: 0x18BA0BC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.String ToString(System.Boolean verbose)
    // Offset: 0x18BA130
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::ToString(System.Boolean verbose)
    ::StringW ToString(bool verbose);
    // override System.Security.Cryptography.X509Certificates.X509CertificateImplCollection get_IntermediateCertificates()
    // Offset: 0x18BAA58
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X509CertificateImplCollection X509Certificate2Impl::get_IntermediateCertificates()
    ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate2ImplMono), 80 + sizeof(::Mono::Security::X509::X509Certificate*)> __System_Security_Cryptography_X509Certificates_X509Certificate2ImplMonoSizeCheck;
  static_assert(sizeof(X509Certificate2ImplMono) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12
// Il2CppName: ImportPkcs12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t>, ::StringW)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "ImportPkcs12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::AppendBuffer
// Il2CppName: AppendBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::AppendBuffer)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "AppendBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, buffer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetIssuerName
// Il2CppName: GetIssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetIssuerName)> {
  static const MethodInfo* get() {
    static auto* legacyV1Mode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "GetIssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{legacyV1Mode});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetSubjectName
// Il2CppName: GetSubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetSubjectName)> {
  static const MethodInfo* get() {
    static auto* legacyV1Mode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "GetSubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{legacyV1Mode});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData
// Il2CppName: GetRawCertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "GetRawCertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetCertHash
// Il2CppName: GetCertHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetCertHash)> {
  static const MethodInfo* get() {
    static auto* lazy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "GetCertHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lazy});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetValidFrom
// Il2CppName: GetValidFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetValidFrom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "GetValidFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetValidUntil
// Il2CppName: GetValidUntil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetValidUntil)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "GetValidUntil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ByRef<bool>)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, result});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetSerialNumber
// Il2CppName: GetSerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetSerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "GetSerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey
// Il2CppName: get_PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "get_PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PublicKey
// Il2CppName: get_PublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::PublicKey* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "get_PublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::Oid* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t>, ::StringW, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Import)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password, keyStorageFlags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ToString)> {
  static const MethodInfo* get() {
    static auto* verbose = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verbose});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates
// Il2CppName: get_IntermediateCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*), "get_IntermediateCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
