// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IWebRequestCreate
  class IWebRequestCreate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebRequestPrefixElement
  class WebRequestPrefixElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebRequestPrefixElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestPrefixElement*, "System.Net", "WebRequestPrefixElement");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequestPrefixElement
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequestPrefixElement : public ::Il2CppObject {
    public:
    public:
    // public System.String Prefix
    // Size: 0x8
    // Offset: 0x10
    ::StringW Prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Net.IWebRequestCreate creator
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::IWebRequestCreate* creator;
    // Field size check
    static_assert(sizeof(::System::Net::IWebRequestCreate*) == 0x8);
    // System.Type creatorType
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* creatorType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: public System.String Prefix
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Prefix();
    // Get instance field reference: System.Net.IWebRequestCreate creator
    [[deprecated("Use field access instead!")]] ::System::Net::IWebRequestCreate*& dyn_creator();
    // Get instance field reference: System.Type creatorType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_creatorType();
    // public System.Net.IWebRequestCreate get_Creator()
    // Offset: 0x1719EC0
    ::System::Net::IWebRequestCreate* get_Creator();
    // public System.Void set_Creator(System.Net.IWebRequestCreate value)
    // Offset: 0x171AD80
    void set_Creator(::System::Net::IWebRequestCreate* value);
    // public System.Void .ctor(System.String P, System.Net.IWebRequestCreate C)
    // Offset: 0x171A380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestPrefixElement* New_ctor(::StringW P, ::System::Net::IWebRequestCreate* C) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebRequestPrefixElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestPrefixElement*, creationType>(P, C)));
    }
  }; // System.Net.WebRequestPrefixElement
  #pragma pack(pop)
  static check_size<sizeof(WebRequestPrefixElement), 32 + sizeof(::System::Type*)> __System_Net_WebRequestPrefixElementSizeCheck;
  static_assert(sizeof(WebRequestPrefixElement) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequestPrefixElement::get_Creator
// Il2CppName: get_Creator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebRequestCreate* (System::Net::WebRequestPrefixElement::*)()>(&System::Net::WebRequestPrefixElement::get_Creator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestPrefixElement*), "get_Creator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestPrefixElement::set_Creator
// Il2CppName: set_Creator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestPrefixElement::*)(::System::Net::IWebRequestCreate*)>(&System::Net::WebRequestPrefixElement::set_Creator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IWebRequestCreate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequestPrefixElement*), "set_Creator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequestPrefixElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
