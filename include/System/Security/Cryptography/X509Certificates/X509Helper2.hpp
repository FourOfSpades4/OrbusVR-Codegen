// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509Certificate2Impl
  class X509Certificate2Impl;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509ChainImpl
  class X509ChainImpl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Helper2
  class X509Helper2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper2*, "System.Security.Cryptography.X509Certificates", "X509Helper2");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper2
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Helper2 : public ::Il2CppObject {
    public:
    // Nested type: ::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper
    class MyNativeHelper;
    // static System.Void Initialize()
    // Offset: 0x18BD390
    static void Initialize();
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x18B7C70
    static void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Security.Cryptography.X509Certificates.X509Certificate2Impl Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags, System.Boolean disableProvider)
    // Offset: 0x18B7F2C
    static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::ArrayW<uint8_t> rawData, ::StringW password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, bool disableProvider);
    // static System.Security.Cryptography.X509Certificates.X509Certificate2Impl Import(System.Security.Cryptography.X509Certificates.X509Certificate cert, System.Boolean disableProvider)
    // Offset: 0x18BD3F8
    static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, bool disableProvider);
    // static System.Security.Cryptography.X509Certificates.X509ChainImpl CreateChainImpl(System.Boolean useMachineContext)
    // Offset: 0x18BB9D8
    static ::System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(bool useMachineContext);
    // static public System.Boolean IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl impl)
    // Offset: 0x18BD548
    static bool IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl impl)
    // Offset: 0x18BB900
    static void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
    // static System.Exception GetInvalidChainContextException()
    // Offset: 0x18BD55C
    static ::System::Exception* GetInvalidChainContextException();
  }; // System.Security.Cryptography.X509Certificates.X509Helper2
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::X509Certificates::X509Helper2::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid
// Il2CppName: ThrowIfContextInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "ThrowIfContextInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (*)(::ArrayW<uint8_t>, ::StringW, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::Import)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    static auto* disableProvider = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password, keyStorageFlags, disableProvider});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::Import)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* disableProvider = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert, disableProvider});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl
// Il2CppName: CreateChainImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainImpl* (*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl)> {
  static const MethodInfo* get() {
    static auto* useMachineContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "CreateChainImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useMachineContext});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::IsValid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid
// Il2CppName: ThrowIfContextInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "ThrowIfContextInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException
// Il2CppName: GetInvalidChainContextException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "GetInvalidChainContextException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};