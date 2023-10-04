// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509RevocationFlag
#include "System/Security/Cryptography/X509Certificates/X509RevocationFlag.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509RevocationMode
#include "System/Security/Cryptography/X509Certificates/X509RevocationMode.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509VerificationFlags
#include "System/Security/Cryptography/X509Certificates/X509VerificationFlags.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate2Collection
  class X509Certificate2Collection;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainPolicy
  class X509ChainPolicy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainPolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*, "System.Security.Cryptography.X509Certificates", "X509ChainPolicy");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainPolicy
  // [TokenAttribute] Offset: FFFFFFFF
  class X509ChainPolicy : public ::Il2CppObject {
    public:
    public:
    // private System.Security.Cryptography.OidCollection apps
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::OidCollection* apps;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::OidCollection*) == 0x8);
    // private System.Security.Cryptography.OidCollection cert
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Cryptography::OidCollection* cert;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::OidCollection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509CertificateCollection store
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* store;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection store2
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509RevocationFlag rflag
    // Size: 0x4
    // Offset: 0x30
    ::System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509RevocationFlag) == 0x4);
    // private System.Security.Cryptography.X509Certificates.X509RevocationMode mode
    // Size: 0x4
    // Offset: 0x34
    ::System::Security::Cryptography::X509Certificates::X509RevocationMode mode;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509RevocationMode) == 0x4);
    // private System.TimeSpan timeout
    // Size: 0x8
    // Offset: 0x38
    ::System::TimeSpan timeout;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509VerificationFlags vflags
    // Size: 0x4
    // Offset: 0x40
    ::System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509VerificationFlags) == 0x4);
    // Padding between fields: vflags and: vtime
    char __padding7[0x4] = {};
    // private System.DateTime vtime
    // Size: 0x8
    // Offset: 0x48
    ::System::DateTime vtime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    public:
    // Get instance field reference: private System.Security.Cryptography.OidCollection apps
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::OidCollection*& dyn_apps();
    // Get instance field reference: private System.Security.Cryptography.OidCollection cert
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::OidCollection*& dyn_cert();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509CertificateCollection store
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& dyn_store();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate2Collection store2
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& dyn_store2();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509RevocationFlag rflag
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509RevocationFlag& dyn_rflag();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509RevocationMode mode
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509RevocationMode& dyn_mode();
    // Get instance field reference: private System.TimeSpan timeout
    [[deprecated("Use field access instead!")]] ::System::TimeSpan& dyn_timeout();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509VerificationFlags vflags
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509VerificationFlags& dyn_vflags();
    // Get instance field reference: private System.DateTime vtime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_vtime();
    // public System.Void .ctor()
    // Offset: 0x18BC224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainPolicy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509ChainPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainPolicy*, creationType>()));
    }
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection store)
    // Offset: 0x18BC3AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainPolicy* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* store) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509ChainPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainPolicy*, creationType>(store)));
    }
    // public System.Void Reset()
    // Offset: 0x18BC2C0
    void Reset();
  }; // System.Security.Cryptography.X509Certificates.X509ChainPolicy
  #pragma pack(pop)
  static check_size<sizeof(X509ChainPolicy), 72 + sizeof(::System::DateTime)> __System_Security_Cryptography_X509Certificates_X509ChainPolicySizeCheck;
  static_assert(sizeof(X509ChainPolicy) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainPolicy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainPolicy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainPolicy::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainPolicy::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainPolicy*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
