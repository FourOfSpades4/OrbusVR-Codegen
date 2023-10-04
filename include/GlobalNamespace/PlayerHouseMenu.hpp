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
  // Forward declaring type: PlayerHouseMenuObject
  class PlayerHouseMenuObject;
  // Forward declaring type: CharacterPerksArray
  class CharacterPerksArray;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Document
  class Document;
  // Forward declaring type: Element
  class Element;
  // Forward declaring type: UIEvent
  class UIEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerHouseMenu
  class PlayerHouseMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerHouseMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHouseMenu*, "", "PlayerHouseMenu");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHouseMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerHouseMenu : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PlayerHouseMenu::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::GlobalNamespace::PlayerHouseMenu::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::GlobalNamespace::PlayerHouseMenu::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Get static field: static private ExtUI.PlayerHouseMenuObject parentBehaviour
    static ::ExtUI::PlayerHouseMenuObject* _get_parentBehaviour();
    // Set static field: static private ExtUI.PlayerHouseMenuObject parentBehaviour
    static void _set_parentBehaviour(::ExtUI::PlayerHouseMenuObject* value);
    // Get static field: static private System.Int32 numchoices
    static int _get_numchoices();
    // Set static field: static private System.Int32 numchoices
    static void _set_numchoices(int value);
    // static public System.Void init(ExtUI.PlayerHouseMenuObject clickhandler, PowerUI.Document document)
    // Offset: 0xE51CD8
    static void init(::ExtUI::PlayerHouseMenuObject* clickhandler, ::PowerUI::Document* document);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.String> getDataFromClasses(PowerUI.Element el)
    // Offset: 0xE51DDC
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getDataFromClasses(::PowerUI::Element* el);
    // static public System.Void updatePerks(PowerUI.Document document)
    // Offset: 0xE520CC
    static void updatePerks(::PowerUI::Document* document);
    // static public System.Int32 calculateRemainingPerkPoints(System.Int32 totalPerkPoints, ExtUI.CharacterPerksArray perks)
    // Offset: 0xE521D0
    static int calculateRemainingPerkPoints(int totalPerkPoints, ::ExtUI::CharacterPerksArray* perks);
    // static public System.Void choosePerk(PowerUI.UIEvent e)
    // Offset: 0xE525A0
    static void choosePerk(::PowerUI::UIEvent* e);
    // public System.Void .ctor()
    // Offset: 0xE527F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHouseMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerHouseMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHouseMenu*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xE52800
    static void _cctor();
  }; // PlayerHouseMenu
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerHouseMenu::init
// Il2CppName: init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ExtUI::PlayerHouseMenuObject*, ::PowerUI::Document*)>(&GlobalNamespace::PlayerHouseMenu::init)> {
  static const MethodInfo* get() {
    static auto* clickhandler = &::il2cpp_utils::GetClassFromName("ExtUI", "PlayerHouseMenuObject")->byval_arg;
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHouseMenu*), "init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickhandler, document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHouseMenu::getDataFromClasses
// Il2CppName: getDataFromClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::PowerUI::Element*)>(&GlobalNamespace::PlayerHouseMenu::getDataFromClasses)> {
  static const MethodInfo* get() {
    static auto* el = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHouseMenu*), "getDataFromClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{el});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHouseMenu::updatePerks
// Il2CppName: updatePerks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::Document*)>(&GlobalNamespace::PlayerHouseMenu::updatePerks)> {
  static const MethodInfo* get() {
    static auto* document = &::il2cpp_utils::GetClassFromName("PowerUI", "Document")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHouseMenu*), "updatePerks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{document});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHouseMenu::calculateRemainingPerkPoints
// Il2CppName: calculateRemainingPerkPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::ExtUI::CharacterPerksArray*)>(&GlobalNamespace::PlayerHouseMenu::calculateRemainingPerkPoints)> {
  static const MethodInfo* get() {
    static auto* totalPerkPoints = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* perks = &::il2cpp_utils::GetClassFromName("ExtUI", "CharacterPerksArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHouseMenu*), "calculateRemainingPerkPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{totalPerkPoints, perks});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHouseMenu::choosePerk
// Il2CppName: choosePerk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIEvent*)>(&GlobalNamespace::PlayerHouseMenu::choosePerk)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHouseMenu*), "choosePerk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHouseMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerHouseMenu::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PlayerHouseMenu::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHouseMenu*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
