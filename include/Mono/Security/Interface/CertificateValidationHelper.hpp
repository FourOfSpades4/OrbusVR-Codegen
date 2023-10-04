// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: ICertificateValidator2
  class ICertificateValidator2;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: CertificateValidationHelper
  class CertificateValidationHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Interface::CertificateValidationHelper);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::CertificateValidationHelper*, "Mono.Security.Interface", "CertificateValidationHelper");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.CertificateValidationHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class CertificateValidationHelper : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Boolean noX509Chain
    static bool _get_noX509Chain();
    // Set static field: static private readonly System.Boolean noX509Chain
    static void _set_noX509Chain(bool value);
    // Get static field: static private readonly System.Boolean supportsTrustAnchors
    static bool _get_supportsTrustAnchors();
    // Set static field: static private readonly System.Boolean supportsTrustAnchors
    static void _set_supportsTrustAnchors(bool value);
    // static private System.Void .cctor()
    // Offset: 0x21F46EC
    static void _cctor();
    // static Mono.Security.Interface.ICertificateValidator2 GetInternalValidator(Mono.Security.Interface.MonoTlsSettings settings, Mono.Security.Interface.MonoTlsProvider provider)
    // Offset: 0x21F4760
    static ::Mono::Security::Interface::ICertificateValidator2* GetInternalValidator(::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Security::Interface::MonoTlsProvider* provider);
  }; // Mono.Security.Interface.CertificateValidationHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::CertificateValidationHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Interface::CertificateValidationHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::CertificateValidationHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::CertificateValidationHelper::GetInternalValidator
// Il2CppName: GetInternalValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::ICertificateValidator2* (*)(::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*)>(&Mono::Security::Interface::CertificateValidationHelper::GetInternalValidator)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::CertificateValidationHelper*), "GetInternalValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings, provider});
  }
};
