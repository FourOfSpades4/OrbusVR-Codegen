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
  // Forward declaring type: ObjectOptionMenu
  class ObjectOptionMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObjectOptionMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectOptionMenu*, "", "ObjectOptionMenu");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ObjectOptionMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectOptionMenu : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static private UnityEngine.MonoBehaviour parentBehaviour
    static ::UnityEngine::MonoBehaviour* _get_parentBehaviour();
    // Set static field: static private UnityEngine.MonoBehaviour parentBehaviour
    static void _set_parentBehaviour(::UnityEngine::MonoBehaviour* value);
    // Get static field: static private System.Int32 numchoices
    static int _get_numchoices();
    // Set static field: static private System.Int32 numchoices
    static void _set_numchoices(int value);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.String> getDataFromClasses(PowerUI.Element el)
    // Offset: 0x1396CC0
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getDataFromClasses(::PowerUI::Element* el);
    // static public System.Void AddChoice(System.String newChoice, System.Boolean isDisabled, PowerUI.Document document)
    // Offset: 0x1396F28
    static void AddChoice(::StringW newChoice, bool isDisabled, ::PowerUI::Document* document);
    // static public System.Void handleChoiceClick(PowerUI.UIEvent e)
    // Offset: 0x1397350
    static void handleChoiceClick(::PowerUI::UIEvent* e);
    // static public System.Void ClearChoices(PowerUI.Document document)
    // Offset: 0x1397428
    static void ClearChoices(::PowerUI::Document* document);
    // static public System.Void SetResponder(UnityEngine.MonoBehaviour clickhandler, PowerUI.Document document)
    // Offset: 0x13974D8
    static void SetResponder(::UnityEngine::MonoBehaviour* clickhandler, ::PowerUI::Document* document);
    // public System.Void .ctor()
    // Offset: 0x13975A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectOptionMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObjectOptionMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectOptionMenu*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x13975AC
    static void _cctor();
  }; // ObjectOptionMenu
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObjectOptionMenu::getDataFromClasses
// Il2CppName: getDataFromClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::PowerUI::Element*)>(&GlobalNamespace::ObjectOptionMenu::getDataFromClasses)> {
  static const MethodInfo* get() {
    static auto* el = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectOptionMenu*), "getDataFromClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{el});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectOptionMenu::AddChoice
// Il2CppName: AddChoice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool, ::PowerUI::Document*)>(&GlobalNamespace::ObjectOptionMenu::AddChoice)> {
  static const MethodInfo* get() {
    static auto* newChoice = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isDisabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectOptionMenu*), "AddChoice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChoice, isDisabled, document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectOptionMenu::handleChoiceClick
// Il2CppName: handleChoiceClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIEvent*)>(&GlobalNamespace::ObjectOptionMenu::handleChoiceClick)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectOptionMenu*), "handleChoiceClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectOptionMenu::ClearChoices
// Il2CppName: ClearChoices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::Document*)>(&GlobalNamespace::ObjectOptionMenu::ClearChoices)> {
  static const MethodInfo* get() {
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectOptionMenu*), "ClearChoices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectOptionMenu::SetResponder
// Il2CppName: SetResponder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::PowerUI::Document*)>(&GlobalNamespace::ObjectOptionMenu::SetResponder)> {
  static const MethodInfo* get() {
    static auto* clickhandler = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectOptionMenu*), "SetResponder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickhandler, document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectOptionMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ObjectOptionMenu::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ObjectOptionMenu::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectOptionMenu*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
