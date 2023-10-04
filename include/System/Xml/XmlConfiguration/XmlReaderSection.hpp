// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Xml.XmlConfiguration
namespace System::Xml::XmlConfiguration {
  // Forward declaring type: XmlReaderSection
  class XmlReaderSection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlConfiguration::XmlReaderSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlConfiguration::XmlReaderSection*, "System.Xml.XmlConfiguration", "XmlReaderSection");
// Type namespace: System.Xml.XmlConfiguration
namespace System::Xml::XmlConfiguration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlConfiguration.XmlReaderSection
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: A69980
  class XmlReaderSection : public ::Il2CppObject {
    public:
    // static System.Boolean get_ProhibitDefaultUrlResolver()
    // Offset: 0x1640948
    static bool get_ProhibitDefaultUrlResolver();
    // static System.Boolean get_CollapseWhiteSpaceIntoEmptyString()
    // Offset: 0x1640720
    static bool get_CollapseWhiteSpaceIntoEmptyString();
  }; // System.Xml.XmlConfiguration.XmlReaderSection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlConfiguration::XmlReaderSection::get_ProhibitDefaultUrlResolver
// Il2CppName: get_ProhibitDefaultUrlResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Xml::XmlConfiguration::XmlReaderSection::get_ProhibitDefaultUrlResolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConfiguration::XmlReaderSection*), "get_ProhibitDefaultUrlResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlConfiguration::XmlReaderSection::get_CollapseWhiteSpaceIntoEmptyString
// Il2CppName: get_CollapseWhiteSpaceIntoEmptyString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Xml::XmlConfiguration::XmlReaderSection::get_CollapseWhiteSpaceIntoEmptyString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlConfiguration::XmlReaderSection*), "get_CollapseWhiteSpaceIntoEmptyString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
