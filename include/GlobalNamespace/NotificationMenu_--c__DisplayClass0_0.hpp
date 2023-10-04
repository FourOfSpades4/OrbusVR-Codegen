// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NotificationMenu
#include "GlobalNamespace/NotificationMenu.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Element
  class Element;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0*, "", "NotificationMenu/<>c__DisplayClass0_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NotificationMenu/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACDFC8
  class NotificationMenu::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public PowerUI.Element alertbox
    // Size: 0x8
    // Offset: 0x10
    ::PowerUI::Element* alertbox;
    // Field size check
    static_assert(sizeof(::PowerUI::Element*) == 0x8);
    public:
    // Creating conversion operator: operator ::PowerUI::Element*
    constexpr operator ::PowerUI::Element*() const noexcept {
      return alertbox;
    }
    // Get instance field reference: public PowerUI.Element alertbox
    [[deprecated("Use field access instead!")]] ::PowerUI::Element*& dyn_alertbox();
    // public System.Void .ctor()
    // Offset: 0x16EF918
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotificationMenu::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotificationMenu::$$c__DisplayClass0_0*, creationType>()));
    }
    // System.Void <ShowNotification>b__0()
    // Offset: 0x16EF928
    void $ShowNotification$b__0();
    // System.Void <ShowNotification>b__1()
    // Offset: 0x16EF998
    void $ShowNotification$b__1();
  }; // NotificationMenu/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(NotificationMenu::$$c__DisplayClass0_0), 16 + sizeof(::PowerUI::Element*)> __GlobalNamespace_NotificationMenu_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(NotificationMenu::$$c__DisplayClass0_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::$ShowNotification$b__0
// Il2CppName: <ShowNotification>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::*)()>(&GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::$ShowNotification$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0*), "<ShowNotification>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::$ShowNotification$b__1
// Il2CppName: <ShowNotification>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::*)()>(&GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0::$ShowNotification$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NotificationMenu::$$c__DisplayClass0_0*), "<ShowNotification>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
