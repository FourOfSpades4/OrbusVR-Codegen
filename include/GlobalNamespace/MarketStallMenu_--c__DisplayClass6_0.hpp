// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MarketStallMenu
#include "GlobalNamespace/MarketStallMenu.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0*, "", "MarketStallMenu/<>c__DisplayClass6_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MarketStallMenu/<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACE018
  class MarketStallMenu::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    public:
    // public PowerUI.Element keyboardTarget
    // Size: 0x8
    // Offset: 0x10
    ::PowerUI::Element* keyboardTarget;
    // Field size check
    static_assert(sizeof(::PowerUI::Element*) == 0x8);
    public:
    // Creating conversion operator: operator ::PowerUI::Element*
    constexpr operator ::PowerUI::Element*() const noexcept {
      return keyboardTarget;
    }
    // Get instance field reference: public PowerUI.Element keyboardTarget
    [[deprecated("Use field access instead!")]] ::PowerUI::Element*& dyn_keyboardTarget();
    // public System.Void .ctor()
    // Offset: 0xF4EF78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarketStallMenu::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarketStallMenu::$$c__DisplayClass6_0*, creationType>()));
    }
    // System.Void <showKeyboard>b__0(System.String finalText)
    // Offset: 0xF4F1C8
    void $showKeyboard$b__0(::StringW finalText);
  }; // MarketStallMenu/<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(MarketStallMenu::$$c__DisplayClass6_0), 16 + sizeof(::PowerUI::Element*)> __GlobalNamespace_MarketStallMenu_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(MarketStallMenu::$$c__DisplayClass6_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0::$showKeyboard$b__0
// Il2CppName: <showKeyboard>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0::*)(::StringW)>(&GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0::$showKeyboard$b__0)> {
  static const MethodInfo* get() {
    static auto* finalText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MarketStallMenu::$$c__DisplayClass6_0*), "<showKeyboard>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finalText});
  }
};
