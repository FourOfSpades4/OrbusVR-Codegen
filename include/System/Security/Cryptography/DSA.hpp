// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSA
  class DSA;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::DSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSA*, "System.Security.Cryptography", "DSA");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DSA
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A5AC44
  class DSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
    public:
    // static public System.Security.Cryptography.DSA Create()
    // Offset: 0x1B1EE20
    static ::System::Security::Cryptography::DSA* Create();
    // public System.Security.Cryptography.DSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
    // public System.Void ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);
    // protected System.Void .ctor()
    // Offset: 0x1B1EE18
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSA* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DSA::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSA*, creationType>()));
    }
    // public override System.Void FromXmlString(System.String xmlString)
    // Offset: 0x1B1EE94
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::FromXmlString(System.String xmlString)
    void FromXmlString(::StringW xmlString);
    // public override System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x1B1F57C
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.String AsymmetricAlgorithm::ToXmlString(System.Boolean includePrivateParameters)
    ::StringW ToXmlString(bool includePrivateParameters);
  }; // System.Security.Cryptography.DSA
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DSA::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSA* (*)()>(&System::Security::Cryptography::DSA::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSA*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSA::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (System::Security::Cryptography::DSA::*)(bool)>(&System::Security::Cryptography::DSA::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSA*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSA::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSA::*)(::System::Security::Cryptography::DSAParameters)>(&System::Security::Cryptography::DSA::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSA*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSA::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DSA::FromXmlString
// Il2CppName: FromXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSA::*)(::StringW)>(&System::Security::Cryptography::DSA::FromXmlString)> {
  static const MethodInfo* get() {
    static auto* xmlString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSA*), "FromXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlString});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSA::ToXmlString
// Il2CppName: ToXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::DSA::*)(bool)>(&System::Security::Cryptography::DSA::ToXmlString)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSA*), "ToXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};