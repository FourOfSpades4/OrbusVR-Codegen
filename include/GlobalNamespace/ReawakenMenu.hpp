// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Element
  class Element;
  // Forward declaring type: Document
  class Document;
  // Forward declaring type: UIEvent
  class UIEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReawakenMenu
  class ReawakenMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ReawakenMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReawakenMenu*, "", "ReawakenMenu");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ReawakenMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class ReawakenMenu : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static private UnityEngine.MonoBehaviour parentBehaviour
    static ::UnityEngine::MonoBehaviour* _get_parentBehaviour();
    // Set static field: static private UnityEngine.MonoBehaviour parentBehaviour
    static void _set_parentBehaviour(::UnityEngine::MonoBehaviour* value);
    // Get static field: static private System.Int32 numroles
    static int _get_numroles();
    // Set static field: static private System.Int32 numroles
    static void _set_numroles(int value);
    // Get static field: static private System.Int32 numRolesSelected
    static int _get_numRolesSelected();
    // Set static field: static private System.Int32 numRolesSelected
    static void _set_numRolesSelected(int value);
    // Get static field: static private System.Int32 numchoices
    static int _get_numchoices();
    // Set static field: static private System.Int32 numchoices
    static void _set_numchoices(int value);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.String> getDataFromClasses(PowerUI.Element el)
    // Offset: 0xE274A4
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getDataFromClasses(::PowerUI::Element* el);
    // static public System.Void SetQuestion(UnityEngine.MonoBehaviour clickhandler, System.String newQuestion, PowerUI.Document document)
    // Offset: 0xE2770C
    static void SetQuestion(::UnityEngine::MonoBehaviour* clickhandler, ::StringW newQuestion, ::PowerUI::Document* document);
    // static public System.Void AddChoice(System.String newChoice, System.Boolean isDisabled, PowerUI.Document document)
    // Offset: 0xE27904
    static void AddChoice(::StringW newChoice, bool isDisabled, ::PowerUI::Document* document);
    // static public System.Void AddRole(System.String newRole, PowerUI.Document document)
    // Offset: 0xE27D2C
    static void AddRole(::StringW newRole, ::PowerUI::Document* document);
    // static public System.Void handleRoleClick(PowerUI.UIEvent e)
    // Offset: 0xE28098
    static void handleRoleClick(::PowerUI::UIEvent* e);
    // static public System.Void SetIcon(System.String iconUrl, PowerUI.Document document)
    // Offset: 0xE283B0
    static void SetIcon(::StringW iconUrl, ::PowerUI::Document* document);
    // static public System.Void handleChoiceClick(PowerUI.UIEvent e)
    // Offset: 0xE28478
    static void handleChoiceClick(::PowerUI::UIEvent* e);
    // static public System.Void ClearChoices(PowerUI.Document document)
    // Offset: 0xE28884
    static void ClearChoices(::PowerUI::Document* document);
    // static public System.Void ClearRoles(PowerUI.Document document)
    // Offset: 0xE28934
    static void ClearRoles(::PowerUI::Document* document);
    // public System.Void .ctor()
    // Offset: 0xE289E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReawakenMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ReawakenMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReawakenMenu*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xE289EC
    static void _cctor();
  }; // ReawakenMenu
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::getDataFromClasses
// Il2CppName: getDataFromClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::PowerUI::Element*)>(&GlobalNamespace::ReawakenMenu::getDataFromClasses)> {
  static const MethodInfo* get() {
    static auto* el = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "getDataFromClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{el});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::SetQuestion
// Il2CppName: SetQuestion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::StringW, ::PowerUI::Document*)>(&GlobalNamespace::ReawakenMenu::SetQuestion)> {
  static const MethodInfo* get() {
    static auto* clickhandler = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* newQuestion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "SetQuestion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickhandler, newQuestion, document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::AddChoice
// Il2CppName: AddChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, ::PowerUI::Document*)>(&GlobalNamespace::ReawakenMenu::AddChoice)> {
  static const MethodInfo* get() {
    static auto* newChoice = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "AddChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChoice, isDisabled, document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::AddRole
// Il2CppName: AddRole
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::PowerUI::Document*)>(&GlobalNamespace::ReawakenMenu::AddRole)> {
  static const MethodInfo* get() {
    static auto* newRole = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "AddRole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newRole, document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::handleRoleClick
// Il2CppName: handleRoleClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIEvent*)>(&GlobalNamespace::ReawakenMenu::handleRoleClick)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "handleRoleClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::SetIcon
// Il2CppName: SetIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::PowerUI::Document*)>(&GlobalNamespace::ReawakenMenu::SetIcon)> {
  static const MethodInfo* get() {
    static auto* iconUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "SetIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iconUrl, document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::handleChoiceClick
// Il2CppName: handleChoiceClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIEvent*)>(&GlobalNamespace::ReawakenMenu::handleChoiceClick)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "handleChoiceClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::ClearChoices
// Il2CppName: ClearChoices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::Document*)>(&GlobalNamespace::ReawakenMenu::ClearChoices)> {
  static const MethodInfo* get() {
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "ClearChoices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::ClearRoles
// Il2CppName: ClearRoles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::Document*)>(&GlobalNamespace::ReawakenMenu::ClearRoles)> {
  static const MethodInfo* get() {
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), "ClearRoles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ReawakenMenu::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ReawakenMenu::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReawakenMenu*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
