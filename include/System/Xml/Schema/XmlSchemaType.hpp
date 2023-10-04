// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaAnnotated
#include "System/Xml/Schema/XmlSchemaAnnotated.hpp"
// Including type: System.Xml.Schema.XmlSchemaDerivationMethod
#include "System/Xml/Schema/XmlSchemaDerivationMethod.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentType
#include "System/Xml/Schema/XmlSchemaContentType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
  // Forward declaring type: SchemaElementDecl
  class SchemaElementDecl;
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
  // Forward declaring type: XmlValueConverter
  class XmlValueConverter;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaType*, "System.Xml.Schema", "XmlSchemaType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaType
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaType : public ::System::Xml::Schema::XmlSchemaAnnotated {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaDerivationMethod final
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::Schema::XmlSchemaDerivationMethod final;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDerivationMethod) == 0x4);
    // private System.Xml.Schema.XmlSchemaDerivationMethod derivedBy
    // Size: 0x4
    // Offset: 0x14
    ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDerivationMethod) == 0x4);
    // private System.Xml.Schema.XmlSchemaType baseSchemaType
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaType* baseSchemaType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaType*) == 0x8);
    // private System.Xml.Schema.XmlSchemaDatatype datatype
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::XmlSchemaDatatype* datatype;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDatatype*) == 0x8);
    // private System.Xml.Schema.SchemaElementDecl elementDecl
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::SchemaElementDecl* elementDecl;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaElementDecl*) == 0x8);
    // private System.Xml.XmlQualifiedName qname
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::XmlQualifiedName* qname;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Xml.Schema.XmlSchemaContentType contentType
    // Size: 0x4
    // Offset: 0x38
    ::System::Xml::Schema::XmlSchemaContentType contentType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContentType) == 0x4);
    public:
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDerivationMethod final
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaDerivationMethod& dyn_final();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDerivationMethod derivedBy
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaDerivationMethod& dyn_derivedBy();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaType baseSchemaType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaType*& dyn_baseSchemaType();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDatatype datatype
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaDatatype*& dyn_datatype();
    // Get instance field reference: private System.Xml.Schema.SchemaElementDecl elementDecl
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaElementDecl*& dyn_elementDecl();
    // Get instance field reference: private System.Xml.XmlQualifiedName qname
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlQualifiedName*& dyn_qname();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaContentType contentType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaContentType& dyn_contentType();
    // static public System.Xml.Schema.XmlSchemaSimpleType GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode typeCode)
    // Offset: 0x2003FBC
    static ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode typeCode);
    // public System.Xml.XmlQualifiedName get_QualifiedName()
    // Offset: 0x2004024
    ::System::Xml::XmlQualifiedName* get_QualifiedName();
    // public System.Xml.Schema.XmlSchemaType get_BaseXmlSchemaType()
    // Offset: 0x2004048
    ::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType();
    // public System.Xml.Schema.XmlSchemaDerivationMethod get_DerivedBy()
    // Offset: 0x2004050
    ::System::Xml::Schema::XmlSchemaDerivationMethod get_DerivedBy();
    // public System.Xml.Schema.XmlSchemaDatatype get_Datatype()
    // Offset: 0x2004058
    ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();
    // public System.Void set_IsMixed(System.Boolean value)
    // Offset: 0x2004060
    void set_IsMixed(bool value);
    // public System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x2004064
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // System.Xml.Schema.XmlValueConverter get_ValueConverter()
    // Offset: 0x20040F0
    ::System::Xml::Schema::XmlValueConverter* get_ValueConverter();
    // System.Void SetQualifiedName(System.Xml.XmlQualifiedName value)
    // Offset: 0x2002628
    void SetQualifiedName(::System::Xml::XmlQualifiedName* value);
    // System.Void SetBaseSchemaType(System.Xml.Schema.XmlSchemaType value)
    // Offset: 0x2004178
    void SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType* value);
    // System.Void SetDerivedBy(System.Xml.Schema.XmlSchemaDerivationMethod value)
    // Offset: 0x2004180
    void SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value);
    // System.Void SetDatatype(System.Xml.Schema.XmlSchemaDatatype value)
    // Offset: 0x2004188
    void SetDatatype(::System::Xml::Schema::XmlSchemaDatatype* value);
    // System.Xml.Schema.SchemaElementDecl get_ElementDecl()
    // Offset: 0x2002690
    ::System::Xml::Schema::SchemaElementDecl* get_ElementDecl();
    // System.Void set_ElementDecl(System.Xml.Schema.SchemaElementDecl value)
    // Offset: 0x2002668
    void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);
    // System.Void SetContentType(System.Xml.Schema.XmlSchemaContentType value)
    // Offset: 0x2002660
    void SetContentType(::System::Xml::Schema::XmlSchemaContentType value);
    // public System.Void .ctor()
    // Offset: 0x2002B38
    // Implemented from: System.Xml.Schema.XmlSchemaAnnotated
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaType*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaType
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaType), 56 + sizeof(::System::Xml::Schema::XmlSchemaContentType)> __System_Xml_Schema_XmlSchemaTypeSizeCheck;
  static_assert(sizeof(XmlSchemaType) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType
// Il2CppName: GetBuiltInSimpleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (*)(::System::Xml::Schema::XmlTypeCode)>(&System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType)> {
  static const MethodInfo* get() {
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlTypeCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "GetBuiltInSimpleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeCode});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_QualifiedName
// Il2CppName: get_QualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_QualifiedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_QualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_BaseXmlSchemaType
// Il2CppName: get_BaseXmlSchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_BaseXmlSchemaType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_BaseXmlSchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_DerivedBy
// Il2CppName: get_DerivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_DerivedBy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_DerivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_Datatype
// Il2CppName: get_Datatype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_Datatype)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_Datatype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_IsMixed
// Il2CppName: set_IsMixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(bool)>(&System::Xml::Schema::XmlSchemaType::set_IsMixed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_IsMixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_ValueConverter
// Il2CppName: get_ValueConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_ValueConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_ValueConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetQualifiedName
// Il2CppName: SetQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaType::SetQualifiedName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetBaseSchemaType
// Il2CppName: SetBaseSchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlSchemaType::SetBaseSchemaType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetBaseSchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetDerivedBy
// Il2CppName: SetDerivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(&System::Xml::Schema::XmlSchemaType::SetDerivedBy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDerivationMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetDerivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetDatatype
// Il2CppName: SetDatatype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::XmlSchemaType::SetDatatype)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetDatatype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_ElementDecl
// Il2CppName: get_ElementDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaElementDecl* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_ElementDecl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_ElementDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_ElementDecl
// Il2CppName: set_ElementDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::SchemaElementDecl*)>(&System::Xml::Schema::XmlSchemaType::set_ElementDecl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaElementDecl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_ElementDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetContentType
// Il2CppName: SetContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaContentType)>(&System::Xml::Schema::XmlSchemaType::SetContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaContentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!