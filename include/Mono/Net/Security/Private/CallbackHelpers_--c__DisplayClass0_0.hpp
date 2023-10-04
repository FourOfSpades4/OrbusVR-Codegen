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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0*, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass0_0");
// Type namespace: Mono.Net.Security.Private
namespace Mono::Net::Security::Private {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A64EBC
  class CallbackHelpers::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.Security.RemoteCertificateValidationCallback callback
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Security::RemoteCertificateValidationCallback* callback;
    // Field size check
    static_assert(sizeof(::System::Net::Security::RemoteCertificateValidationCallback*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Net::Security::RemoteCertificateValidationCallback*
    constexpr operator ::System::Net::Security::RemoteCertificateValidationCallback*() const noexcept {
      return callback;
    }
    // Get instance field reference: public System.Net.Security.RemoteCertificateValidationCallback callback
    [[deprecated("Use field access instead!")]] ::System::Net::Security::RemoteCertificateValidationCallback*& dyn_callback();
    // public System.Void .ctor()
    // Offset: 0x192B704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHelpers::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHelpers::$$c__DisplayClass0_0*, creationType>()));
    }
    // System.Boolean <PublicToMono>b__0(System.String h, System.Security.Cryptography.X509Certificates.X509Certificate c, System.Security.Cryptography.X509Certificates.X509Chain ch, Mono.Security.Interface.MonoSslPolicyErrors e)
    // Offset: 0x192B7E8
    bool $PublicToMono$b__0(::StringW h, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::Mono::Security::Interface::MonoSslPolicyErrors e);
  }; // Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(CallbackHelpers::$$c__DisplayClass0_0), 16 + sizeof(::System::Net::Security::RemoteCertificateValidationCallback*)> __Mono_Net_Security_Private_CallbackHelpers_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(CallbackHelpers::$$c__DisplayClass0_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0::$PublicToMono$b__0
// Il2CppName: <PublicToMono>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors)>(&Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0::$PublicToMono$b__0)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoSslPolicyErrors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0*), "<PublicToMono>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h, c, ch, e});
  }
};
