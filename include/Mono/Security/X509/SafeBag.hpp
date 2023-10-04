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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: SafeBag
  class SafeBag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::SafeBag);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::SafeBag*, "Mono.Security.X509", "SafeBag");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.SafeBag
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeBag : public ::Il2CppObject {
    public:
    public:
    // private System.String _bagOID
    // Size: 0x8
    // Offset: 0x10
    ::StringW bagOID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Mono.Security.ASN1 _asn1
    // Size: 0x8
    // Offset: 0x18
    ::Mono::Security::ASN1* asn1;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1*) == 0x8);
    public:
    // Get instance field reference: private System.String _bagOID
    [[deprecated("Use field access instead!")]] ::StringW& dyn__bagOID();
    // Get instance field reference: private Mono.Security.ASN1 _asn1
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1*& dyn__asn1();
    // public System.Void .ctor(System.String bagOID, Mono.Security.ASN1 asn1)
    // Offset: 0x28821A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeBag* New_ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::SafeBag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeBag*, creationType>(bagOID, asn1)));
    }
    // public System.String get_BagOID()
    // Offset: 0x28821DC
    ::StringW get_BagOID();
    // public Mono.Security.ASN1 get_ASN1()
    // Offset: 0x28821E4
    ::Mono::Security::ASN1* get_ASN1();
  }; // Mono.Security.X509.SafeBag
  #pragma pack(pop)
  static check_size<sizeof(SafeBag), 24 + sizeof(::Mono::Security::ASN1*)> __Mono_Security_X509_SafeBagSizeCheck;
  static_assert(sizeof(SafeBag) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::SafeBag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::SafeBag::get_BagOID
// Il2CppName: get_BagOID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::SafeBag::*)()>(&Mono::Security::X509::SafeBag::get_BagOID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::SafeBag*), "get_BagOID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::SafeBag::get_ASN1
// Il2CppName: get_ASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::SafeBag::*)()>(&Mono::Security::X509::SafeBag::get_ASN1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::SafeBag*), "get_ASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
