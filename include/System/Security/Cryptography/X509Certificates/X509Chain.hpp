// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainImpl
  class X509ChainImpl;
  // Forward declaring type: X509ChainPolicy
  class X509ChainPolicy;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Chain
  class X509Chain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Chain);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Chain*, "System.Security.Cryptography.X509Certificates", "X509Chain");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Chain
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Chain : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Security.Cryptography.X509Certificates.X509ChainImpl impl
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509ChainImpl*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::Security::Cryptography::X509Certificates::X509ChainImpl*
    constexpr operator ::System::Security::Cryptography::X509Certificates::X509ChainImpl*() const noexcept {
      return impl;
    }
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509ChainImpl impl
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509ChainImpl*& dyn_impl();
    // System.Security.Cryptography.X509Certificates.X509ChainImpl get_Impl()
    // Offset: 0x18BB8D8
    ::System::Security::Cryptography::X509Certificates::X509ChainImpl* get_Impl();
    // public System.Void .ctor()
    // Offset: 0x18BB974
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Chain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Chain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Chain*, creationType>()));
    }
    // public System.Void .ctor(System.Boolean useMachineContext)
    // Offset: 0x18BB9A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Chain* New_ctor(bool useMachineContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Chain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Chain*, creationType>(useMachineContext)));
    }
    // public System.Void set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy value)
    // Offset: 0x18BBA38
    void set_ChainPolicy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
    // public System.Void Dispose()
    // Offset: 0x18BBA80
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x18BBAFC
    void Dispose(bool disposing);
    // protected override System.Void Finalize()
    // Offset: 0x18BBBA4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Security.Cryptography.X509Certificates.X509Chain
  #pragma pack(pop)
  static check_size<sizeof(X509Chain), 16 + sizeof(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)> __System_Security_Cryptography_X509Certificates_X509ChainSizeCheck;
  static_assert(sizeof(X509Chain) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Chain::get_Impl
// Il2CppName: get_Impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainImpl* (System::Security::Cryptography::X509Certificates::X509Chain::*)()>(&System::Security::Cryptography::X509Certificates::X509Chain::get_Impl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Chain*), "get_Impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Chain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Chain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Chain::set_ChainPolicy
// Il2CppName: set_ChainPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Chain::*)(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*)>(&System::Security::Cryptography::X509Certificates::X509Chain::set_ChainPolicy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Chain*), "set_ChainPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Chain::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Chain::*)()>(&System::Security::Cryptography::X509Certificates::X509Chain::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Chain*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Chain::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Chain::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Chain::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Chain*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Chain::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Chain::*)()>(&System::Security::Cryptography::X509Certificates::X509Chain::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Chain*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};