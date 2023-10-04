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
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Element
  class Element;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WWWForm
  class WWWForm;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: FormData
  class FormData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::FormData);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::FormData*, "PowerUI", "FormData");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.FormData
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: AD1378
  class FormData : public ::Il2CppObject {
    public:
    public:
    // public PowerUI.Element form
    // Size: 0x8
    // Offset: 0x10
    ::PowerUI::Element* form;
    // Field size check
    static_assert(sizeof(::PowerUI::Element*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> RawFields
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* RawFields;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Get instance field reference: public PowerUI.Element form
    [[deprecated("Use field access instead!")]] ::PowerUI::Element*& dyn_form();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.String> RawFields
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_RawFields();
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2<System.String,System.String> fields)
    // Offset: 0x1A47434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormData* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* fields) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::FormData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormData*, creationType>(fields)));
    }
    // public System.String get_Item(System.String name)
    // Offset: 0x1A47460
    ::StringW get_Item(::StringW name);
    // public System.Boolean Checked(System.String name)
    // Offset: 0x1A474D4
    bool Checked(::StringW name);
    // public UnityEngine.WWWForm ToUnityForm()
    // Offset: 0x1A474F8
    ::UnityEngine::WWWForm* ToUnityForm();
    // public System.String ToUrlString()
    // Offset: 0x1A47694
    ::StringW ToUrlString();
  }; // PowerUI.FormData
  #pragma pack(pop)
  static check_size<sizeof(FormData), 24 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __PowerUI_FormDataSizeCheck;
  static_assert(sizeof(FormData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::FormData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::FormData::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::FormData::*)(::StringW)>(&PowerUI::FormData::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FormData*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: PowerUI::FormData::Checked
// Il2CppName: Checked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::FormData::*)(::StringW)>(&PowerUI::FormData::Checked)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FormData*), "Checked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: PowerUI::FormData::ToUnityForm
// Il2CppName: ToUnityForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WWWForm* (PowerUI::FormData::*)()>(&PowerUI::FormData::ToUnityForm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FormData*), "ToUnityForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::FormData::ToUrlString
// Il2CppName: ToUrlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::FormData::*)()>(&PowerUI::FormData::ToUrlString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FormData*), "ToUrlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};