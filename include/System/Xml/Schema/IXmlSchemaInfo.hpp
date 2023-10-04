// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaValidity
  struct XmlSchemaValidity;
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: IXmlSchemaInfo
  class IXmlSchemaInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::IXmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::IXmlSchemaInfo*, "System.Xml.Schema", "IXmlSchemaInfo");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.IXmlSchemaInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class IXmlSchemaInfo {
    public:
    // public System.Xml.Schema.XmlSchemaValidity get_Validity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlSchemaValidity get_Validity();
    // public System.Xml.Schema.XmlSchemaSimpleType get_MemberType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();
    // public System.Xml.Schema.XmlSchemaType get_SchemaType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlSchemaType* get_SchemaType();
  }; // System.Xml.Schema.IXmlSchemaInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::IXmlSchemaInfo::get_Validity
// Il2CppName: get_Validity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaValidity (System::Xml::Schema::IXmlSchemaInfo::*)()>(&System::Xml::Schema::IXmlSchemaInfo::get_Validity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::IXmlSchemaInfo*), "get_Validity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::IXmlSchemaInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (System::Xml::Schema::IXmlSchemaInfo::*)()>(&System::Xml::Schema::IXmlSchemaInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::IXmlSchemaInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::IXmlSchemaInfo::get_SchemaType
// Il2CppName: get_SchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::Schema::IXmlSchemaInfo::*)()>(&System::Xml::Schema::IXmlSchemaInfo::get_SchemaType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::IXmlSchemaInfo*), "get_SchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
