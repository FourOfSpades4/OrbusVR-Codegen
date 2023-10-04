// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.CspProviderFlags
#include "System/Security/Cryptography/CspProviderFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspParameters
  class CspParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::CspParameters);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspParameters*, "System.Security.Cryptography", "CspParameters");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CspParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A5ABAC
  class CspParameters : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 ProviderType
    // Size: 0x4
    // Offset: 0x10
    int ProviderType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ProviderType and: ProviderName
    char __padding0[0x4] = {};
    // public System.String ProviderName
    // Size: 0x8
    // Offset: 0x18
    ::StringW ProviderName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String KeyContainerName
    // Size: 0x8
    // Offset: 0x20
    ::StringW KeyContainerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 KeyNumber
    // Size: 0x4
    // Offset: 0x28
    int KeyNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_flags
    // Size: 0x4
    // Offset: 0x2C
    int m_flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 ProviderType
    [[deprecated("Use field access instead!")]] int& dyn_ProviderType();
    // Get instance field reference: public System.String ProviderName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ProviderName();
    // Get instance field reference: public System.String KeyContainerName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_KeyContainerName();
    // Get instance field reference: public System.Int32 KeyNumber
    [[deprecated("Use field access instead!")]] int& dyn_KeyNumber();
    // Get instance field reference: private System.Int32 m_flags
    [[deprecated("Use field access instead!")]] int& dyn_m_flags();
    // public System.Security.Cryptography.CspProviderFlags get_Flags()
    // Offset: 0x1B1C0DC
    ::System::Security::Cryptography::CspProviderFlags get_Flags();
    // public System.Void set_Flags(System.Security.Cryptography.CspProviderFlags value)
    // Offset: 0x1B1C0E4
    void set_Flags(::System::Security::Cryptography::CspProviderFlags value);
    // public System.Void .ctor(System.Int32 dwTypeIn)
    // Offset: 0x1B1C280
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor(int dwTypeIn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>(dwTypeIn)));
    }
    // public System.Void .ctor(System.Int32 dwTypeIn, System.String strProviderNameIn, System.String strContainerNameIn)
    // Offset: 0x1B1C210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor(int dwTypeIn, ::StringW strProviderNameIn, ::StringW strContainerNameIn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>(dwTypeIn, strProviderNameIn, strContainerNameIn)));
    }
    // System.Void .ctor(System.Int32 providerType, System.String providerName, System.String keyContainerName, System.Security.Cryptography.CspProviderFlags flags)
    // Offset: 0x1B1C28C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor(int providerType, ::StringW providerName, ::StringW keyContainerName, ::System::Security::Cryptography::CspProviderFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>(providerType, providerName, keyContainerName, flags)));
    }
    // public System.Void .ctor()
    // Offset: 0x1B1C200
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>()));
    }
  }; // System.Security.Cryptography.CspParameters
  #pragma pack(pop)
  static check_size<sizeof(CspParameters), 44 + sizeof(int)> __System_Security_Cryptography_CspParametersSizeCheck;
  static_assert(sizeof(CspParameters) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::get_Flags
// Il2CppName: get_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CspProviderFlags (System::Security::Cryptography::CspParameters::*)()>(&System::Security::Cryptography::CspParameters::get_Flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspParameters*), "get_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::set_Flags
// Il2CppName: set_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CspParameters::*)(::System::Security::Cryptography::CspProviderFlags)>(&System::Security::Cryptography::CspParameters::set_Flags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "CspProviderFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspParameters*), "set_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!