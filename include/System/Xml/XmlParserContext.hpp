// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlParserContext
  class XmlParserContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlParserContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlParserContext*, "System.Xml", "XmlParserContext");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlParserContext
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlParserContext : public ::Il2CppObject {
    public:
    public:
    // private System.String _docTypeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW docTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _pubId
    // Size: 0x8
    // Offset: 0x18
    ::StringW pubId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _sysId
    // Size: 0x8
    // Offset: 0x20
    ::StringW sysId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _internalSubset
    // Size: 0x8
    // Offset: 0x28
    ::StringW internalSubset;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _baseURI
    // Size: 0x8
    // Offset: 0x30
    ::StringW baseURI;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Text.Encoding _encoding
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    public:
    // Get instance field reference: private System.String _docTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__docTypeName();
    // Get instance field reference: private System.String _pubId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__pubId();
    // Get instance field reference: private System.String _sysId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__sysId();
    // Get instance field reference: private System.String _internalSubset
    [[deprecated("Use field access instead!")]] ::StringW& dyn__internalSubset();
    // Get instance field reference: private System.String _baseURI
    [[deprecated("Use field access instead!")]] ::StringW& dyn__baseURI();
    // Get instance field reference: private System.Text.Encoding _encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn__encoding();
    // public System.String get_DocTypeName()
    // Offset: 0x16475E8
    ::StringW get_DocTypeName();
    // public System.String get_PublicId()
    // Offset: 0x16475F0
    ::StringW get_PublicId();
    // public System.String get_SystemId()
    // Offset: 0x16475F8
    ::StringW get_SystemId();
    // public System.String get_BaseURI()
    // Offset: 0x1647600
    ::StringW get_BaseURI();
    // public System.String get_InternalSubset()
    // Offset: 0x1647608
    ::StringW get_InternalSubset();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0x1647610
    ::System::Text::Encoding* get_Encoding();
    // System.Boolean get_HasDtdInfo()
    // Offset: 0x1647618
    bool get_HasDtdInfo();
  }; // System.Xml.XmlParserContext
  #pragma pack(pop)
  static check_size<sizeof(XmlParserContext), 56 + sizeof(::System::Text::Encoding*)> __System_Xml_XmlParserContextSizeCheck;
  static_assert(sizeof(XmlParserContext) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlParserContext::get_DocTypeName
// Il2CppName: get_DocTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlParserContext::*)()>(&System::Xml::XmlParserContext::get_DocTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlParserContext*), "get_DocTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlParserContext::get_PublicId
// Il2CppName: get_PublicId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlParserContext::*)()>(&System::Xml::XmlParserContext::get_PublicId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlParserContext*), "get_PublicId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlParserContext::get_SystemId
// Il2CppName: get_SystemId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlParserContext::*)()>(&System::Xml::XmlParserContext::get_SystemId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlParserContext*), "get_SystemId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlParserContext::get_BaseURI
// Il2CppName: get_BaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlParserContext::*)()>(&System::Xml::XmlParserContext::get_BaseURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlParserContext*), "get_BaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlParserContext::get_InternalSubset
// Il2CppName: get_InternalSubset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlParserContext::*)()>(&System::Xml::XmlParserContext::get_InternalSubset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlParserContext*), "get_InternalSubset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlParserContext::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Xml::XmlParserContext::*)()>(&System::Xml::XmlParserContext::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlParserContext*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlParserContext::get_HasDtdInfo
// Il2CppName: get_HasDtdInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlParserContext::*)()>(&System::Xml::XmlParserContext::get_HasDtdInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlParserContext*), "get_HasDtdInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
