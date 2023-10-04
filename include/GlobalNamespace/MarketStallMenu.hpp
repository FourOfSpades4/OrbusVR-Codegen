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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: MarketStall
  class MarketStall;
}
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
  // Forward declaring type: MarketStallMenu
  class MarketStallMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MarketStallMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MarketStallMenu*, "", "MarketStallMenu");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MarketStallMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class MarketStallMenu : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MarketStallMenu::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Get static field: static private ExtUI.MarketStall parentBehaviour
    static ::ExtUI::MarketStall* _get_parentBehaviour();
    // Set static field: static private ExtUI.MarketStall parentBehaviour
    static void _set_parentBehaviour(::ExtUI::MarketStall* value);
    // Get static field: static private System.Int32 numchoices
    static int _get_numchoices();
    // Set static field: static private System.Int32 numchoices
    static void _set_numchoices(int value);
    // static public System.Void init(ExtUI.MarketStall clickhandler)
    // Offset: 0xF4DDE0
    static void init(::ExtUI::MarketStall* clickhandler);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.String> getDataFromClasses(PowerUI.Element el)
    // Offset: 0xF4DE4C
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getDataFromClasses(::PowerUI::Element* el);
    // static public System.Void UpdatePrices(PowerUI.Document document)
    // Offset: 0xF4E0B4
    static void UpdatePrices(::PowerUI::Document* document);
    // static public System.Void savePrices(PowerUI.UIEvent e)
    // Offset: 0xF4EB4C
    static void savePrices(::PowerUI::UIEvent* e);
    // static public System.Void showKeyboard(PowerUI.UIEvent e)
    // Offset: 0xF4EE8C
    static void showKeyboard(::PowerUI::UIEvent* e);
    // static public System.Void doWithdraw(PowerUI.UIEvent e)
    // Offset: 0xF4EF80
    static void doWithdraw(::PowerUI::UIEvent* e);
    // public System.Void .ctor()
    // Offset: 0xF4F11C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarketStallMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MarketStallMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarketStallMenu*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xF4F124
    static void _cctor();
  }; // MarketStallMenu
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::init
// Il2CppName: init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ExtUI::MarketStall*)>(&GlobalNamespace::MarketStallMenu::init)> {
  static const MethodInfo* get() {
    static auto* clickhandler = &::il2cpp_utils::GetClassFromName("ExtUI", "MarketStall")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu*), "init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickhandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::getDataFromClasses
// Il2CppName: getDataFromClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::PowerUI::Element*)>(&GlobalNamespace::MarketStallMenu::getDataFromClasses)> {
  static const MethodInfo* get() {
    static auto* el = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu*), "getDataFromClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{el});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::UpdatePrices
// Il2CppName: UpdatePrices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::Document*)>(&GlobalNamespace::MarketStallMenu::UpdatePrices)> {
  static const MethodInfo* get() {
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu*), "UpdatePrices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::savePrices
// Il2CppName: savePrices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIEvent*)>(&GlobalNamespace::MarketStallMenu::savePrices)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu*), "savePrices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::showKeyboard
// Il2CppName: showKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIEvent*)>(&GlobalNamespace::MarketStallMenu::showKeyboard)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu*), "showKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::doWithdraw
// Il2CppName: doWithdraw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIEvent*)>(&GlobalNamespace::MarketStallMenu::doWithdraw)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu*), "doWithdraw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MarketStallMenu::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};