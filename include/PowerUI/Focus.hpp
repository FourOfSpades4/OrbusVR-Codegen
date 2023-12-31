// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Element
  class Element;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Focus
  class Focus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::Focus);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Focus*, "PowerUI", "Focus");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Focus
  // [TokenAttribute] Offset: FFFFFFFF
  class Focus : public ::Il2CppObject {
    public:
    // static public PowerUI.Element get_Current()
    // Offset: 0x1A46334
    static ::PowerUI::Element* get_Current();
    // static public System.Void MoveUp()
    // Offset: 0x1A4639C
    static void MoveUp();
    // static public System.Void MoveDown()
    // Offset: 0x1A46430
    static void MoveDown();
    // static public System.Void MoveLeft()
    // Offset: 0x1A464C4
    static void MoveLeft();
    // static public System.Void MoveRight()
    // Offset: 0x1A46558
    static void MoveRight();
    // static public System.Void Click()
    // Offset: 0x1A465EC
    static void Click();
    // static public System.Void MouseDown()
    // Offset: 0x1A46738
    static void MouseDown();
    // static public System.Void MouseUp()
    // Offset: 0x1A4684C
    static void MouseUp();
    // static public System.Void TabNext()
    // Offset: 0x1A46960
    static void TabNext();
  }; // PowerUI.Focus
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::Focus::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Element* (*)()>(&PowerUI::Focus::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::MoveUp
// Il2CppName: MoveUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::MoveUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "MoveUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::MoveDown
// Il2CppName: MoveDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::MoveDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "MoveDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::MoveLeft
// Il2CppName: MoveLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::MoveLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "MoveLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::MoveRight
// Il2CppName: MoveRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::MoveRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "MoveRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::Click
// Il2CppName: Click
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::Click)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "Click", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::MouseDown
// Il2CppName: MouseDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::MouseDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "MouseDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::MouseUp
// Il2CppName: MouseUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::MouseUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "MouseUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::Focus::TabNext
// Il2CppName: TabNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::Focus::TabNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::Focus*), "TabNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
