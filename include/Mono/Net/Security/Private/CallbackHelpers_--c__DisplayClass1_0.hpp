// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.Private.CallbackHelpers
#include "Mono/Net/Security/Private/CallbackHelpers.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: LocalCertificateSelectionCallback
  class LocalCertificateSelectionCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0*, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass1_0");
// Type namespace: Mono.Net.Security.Private
namespace Mono::Net::Security::Private {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass1_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A64ECC
  class CallbackHelpers::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.Security.LocalCertificateSelectionCallback callback
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Security::LocalCertificateSelectionCallback* callback;
    // Field size check
    static_assert(sizeof(::System::Net::Security::LocalCertificateSelectionCallback*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Net::Security::LocalCertificateSelectionCallback*
    constexpr operator ::System::Net::Security::LocalCertificateSelectionCallback*() const noexcept {
      return callback;
    }
    // Get instance field reference: public System.Net.Security.LocalCertificateSelectionCallback callback
    [[deprecated("Use field access instead!")]] ::System::Net::Security::LocalCertificateSelectionCallback*& dyn_callback();
    // public System.Void .ctor()
    // Offset: 0x192B7D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHelpers::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHelpers::$$c__DisplayClass1_0*, creationType>()));
    }
    // System.Security.Cryptography.X509Certificates.X509Certificate <PublicToMono>b__0(System.String t, System.Security.Cryptography.X509Certificates.X509CertificateCollection lc, System.Security.Cryptography.X509Certificates.X509Certificate rc, System.String[] ai)
    // Offset: 0x192B848
    ::System::Security::Cryptography::X509Certificates::X509Certificate* $PublicToMono$b__0(::StringW t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::ArrayW<::StringW> ai);
  }; // Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(CallbackHelpers::$$c__DisplayClass1_0), 16 + sizeof(::System::Net::Security::LocalCertificateSelectionCallback*)> __Mono_Net_Security_Private_CallbackHelpers_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(CallbackHelpers::$$c__DisplayClass1_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0::$PublicToMono$b__0
// Il2CppName: <PublicToMono>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(&Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0::$PublicToMono$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lc = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* rc = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* ai = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass1_0*), "<PublicToMono>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, lc, rc, ai});
  }
};
