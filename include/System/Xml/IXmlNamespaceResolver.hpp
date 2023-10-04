// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::IXmlNamespaceResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IXmlNamespaceResolver*, "System.Xml", "IXmlNamespaceResolver");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.IXmlNamespaceResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class IXmlNamespaceResolver {
    public:
    // public System.String LookupNamespace(System.String prefix)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW LookupNamespace(::StringW prefix);
    // public System.String LookupPrefix(System.String namespaceName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW LookupPrefix(::StringW namespaceName);
  }; // System.Xml.IXmlNamespaceResolver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::IXmlNamespaceResolver::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IXmlNamespaceResolver::*)(::StringW)>(&System::Xml::IXmlNamespaceResolver::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IXmlNamespaceResolver*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::IXmlNamespaceResolver::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IXmlNamespaceResolver::*)(::StringW)>(&System::Xml::IXmlNamespaceResolver::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IXmlNamespaceResolver*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceName});
  }
};