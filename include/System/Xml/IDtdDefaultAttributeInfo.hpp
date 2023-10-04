// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.IDtdAttributeInfo
#include "System/Xml/IDtdAttributeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: IDtdDefaultAttributeInfo
  class IDtdDefaultAttributeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::IDtdDefaultAttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdDefaultAttributeInfo*, "System.Xml", "IDtdDefaultAttributeInfo");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.IDtdDefaultAttributeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class IDtdDefaultAttributeInfo/*, public ::System::Xml::IDtdAttributeInfo*/ {
    public:
    // Creating interface conversion operator: operator ::System::Xml::IDtdAttributeInfo
    operator ::System::Xml::IDtdAttributeInfo() noexcept {
      return *reinterpret_cast<::System::Xml::IDtdAttributeInfo*>(this);
    }
    // public System.String get_DefaultValueExpanded()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_DefaultValueExpanded();
    // public System.Object get_DefaultValueTyped()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_DefaultValueTyped();
    // public System.Int32 get_ValueLineNumber()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ValueLineNumber();
    // public System.Int32 get_ValueLinePosition()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ValueLinePosition();
  }; // System.Xml.IDtdDefaultAttributeInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueExpanded
// Il2CppName: get_DefaultValueExpanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::IDtdDefaultAttributeInfo::*)()>(&System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueExpanded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdDefaultAttributeInfo*), "get_DefaultValueExpanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueTyped
// Il2CppName: get_DefaultValueTyped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::IDtdDefaultAttributeInfo::*)()>(&System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueTyped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdDefaultAttributeInfo*), "get_DefaultValueTyped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdDefaultAttributeInfo::get_ValueLineNumber
// Il2CppName: get_ValueLineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IDtdDefaultAttributeInfo::*)()>(&System::Xml::IDtdDefaultAttributeInfo::get_ValueLineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdDefaultAttributeInfo*), "get_ValueLineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IDtdDefaultAttributeInfo::get_ValueLinePosition
// Il2CppName: get_ValueLinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IDtdDefaultAttributeInfo::*)()>(&System::Xml::IDtdDefaultAttributeInfo::get_ValueLinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IDtdDefaultAttributeInfo*), "get_ValueLinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
