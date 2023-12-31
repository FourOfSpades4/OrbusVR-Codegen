// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.HtmlTagHandler
#include "PowerUI/HtmlTagHandler.hpp"
// Including type: PowerUI.InputType
#include "PowerUI/InputType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: Element
  class Element;
  // Forward declaring type: ScrollTabTag
  class ScrollTabTag;
  // Forward declaring type: KeyboardMode
  class KeyboardMode;
  // Forward declaring type: UIEvent
  class UIEvent;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: InputTag
  class InputTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::InputTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::InputTag*, "PowerUI", "InputTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.InputTag
  // [TokenAttribute] Offset: FFFFFFFF
  class InputTag : public ::PowerUI::HtmlTagHandler {
    public:
    public:
    // public System.Boolean Hidden
    // Size: 0x1
    // Offset: 0x33
    bool Hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Hidden and: Value
    char __padding0[0x4] = {};
    // public System.String Value
    // Size: 0x8
    // Offset: 0x38
    ::StringW Value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean Checked
    // Size: 0x1
    // Offset: 0x40
    bool Checked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Checked and: Cursor
    char __padding2[0x7] = {};
    // public PowerUI.Element Cursor
    // Size: 0x8
    // Offset: 0x48
    ::PowerUI::Element* Cursor;
    // Field size check
    static_assert(sizeof(::PowerUI::Element*) == 0x8);
    // public PowerUI.InputType Type
    // Size: 0x4
    // Offset: 0x50
    ::PowerUI::InputType Type;
    // Field size check
    static_assert(sizeof(::PowerUI::InputType) == 0x4);
    // public System.Int32 CursorIndex
    // Size: 0x4
    // Offset: 0x54
    int CursorIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean LocateCursor
    // Size: 0x1
    // Offset: 0x58
    bool LocateCursor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: LocateCursor and: TargetName
    char __padding6[0x7] = {};
    // public System.String TargetName
    // Size: 0x8
    // Offset: 0x60
    ::StringW TargetName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PowerUI.Element TargetElement
    // Size: 0x8
    // Offset: 0x68
    ::PowerUI::Element* TargetElement;
    // Field size check
    static_assert(sizeof(::PowerUI::Element*) == 0x8);
    // public PowerUI.ScrollTabTag ScrollTab
    // Size: 0x8
    // Offset: 0x70
    ::PowerUI::ScrollTabTag* ScrollTab;
    // Field size check
    static_assert(sizeof(::PowerUI::ScrollTabTag*) == 0x8);
    // public System.Int32 MaxLength
    // Size: 0x4
    // Offset: 0x78
    int MaxLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean DivertOutput
    // Size: 0x1
    // Offset: 0x7C
    bool DivertOutput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DivertOutput and: Placeholder
    char __padding11[0x3] = {};
    // public System.String Placeholder
    // Size: 0x8
    // Offset: 0x80
    ::StringW Placeholder;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Boolean Hidden
    [[deprecated("Use field access instead!")]] bool& dyn_Hidden();
    // Get instance field reference: public System.String Value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Value();
    // Get instance field reference: public System.Boolean Checked
    [[deprecated("Use field access instead!")]] bool& dyn_Checked();
    // Get instance field reference: public PowerUI.Element Cursor
    [[deprecated("Use field access instead!")]] ::PowerUI::Element*& dyn_Cursor();
    // Get instance field reference: public PowerUI.InputType Type
    [[deprecated("Use field access instead!")]] ::PowerUI::InputType& dyn_Type();
    // Get instance field reference: public System.Int32 CursorIndex
    [[deprecated("Use field access instead!")]] int& dyn_CursorIndex();
    // Get instance field reference: public System.Boolean LocateCursor
    [[deprecated("Use field access instead!")]] bool& dyn_LocateCursor();
    // Get instance field reference: public System.String TargetName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TargetName();
    // Get instance field reference: public PowerUI.Element TargetElement
    [[deprecated("Use field access instead!")]] ::PowerUI::Element*& dyn_TargetElement();
    // Get instance field reference: public PowerUI.ScrollTabTag ScrollTab
    [[deprecated("Use field access instead!")]] ::PowerUI::ScrollTabTag*& dyn_ScrollTab();
    // Get instance field reference: public System.Int32 MaxLength
    [[deprecated("Use field access instead!")]] int& dyn_MaxLength();
    // Get instance field reference: public System.Boolean DivertOutput
    [[deprecated("Use field access instead!")]] bool& dyn_DivertOutput();
    // Get instance field reference: public System.String Placeholder
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Placeholder();
    // public System.Void OnScrolled(System.Single progress)
    // Offset: 0x1A507F8
    void OnScrolled(float progress);
    // public System.Void Unselect()
    // Offset: 0x1A51310
    void Unselect();
    // public System.Void Select()
    // Offset: 0x1A50EDC
    void Select();
    // public System.Void ScrollBy(System.Int32 pixels)
    // Offset: 0x1A5179C
    void ScrollBy(int pixels);
    // public System.Void ScrollTo(System.Int32 location)
    // Offset: 0x1A517B0
    void ScrollTo(int location);
    // public System.Void ScrollTo(System.Single position)
    // Offset: 0x1A517D0
    void ScrollTo(float position);
    // public System.Void ElementScrolled()
    // Offset: 0x1A3C25C
    void ElementScrolled();
    // public System.Void RecalculateTab()
    // Offset: 0x1A517E8
    void RecalculateTab();
    // public System.Boolean NoTarget()
    // Offset: 0x1A51A78
    bool NoTarget();
    // public System.Void SetValue(System.String value)
    // Offset: 0x1A50ED4
    void SetValue(::StringW value);
    // public System.Void SetValue(System.String value, System.Boolean html)
    // Offset: 0x1A513D8
    void SetValue(::StringW value, bool html);
    // public PowerUI.Element GetTarget()
    // Offset: 0x1A496A8
    ::PowerUI::Element* GetTarget();
    // private System.Boolean IsScrollInput()
    // Offset: 0x1A51788
    bool IsScrollInput();
    // private System.Boolean IsBoolInput()
    // Offset: 0x1A51A90
    bool IsBoolInput();
    // private System.Boolean IsTextInput()
    // Offset: 0x1A51734
    bool IsTextInput();
    // public System.Void MoveCursor(System.Int32 index)
    // Offset: 0x1A51A88
    void MoveCursor(int index);
    // public System.Void MoveCursor(System.Int32 index, System.Boolean immediate)
    // Offset: 0x1A52168
    void MoveCursor(int index, bool immediate);
    // private System.Void LocateCursorNow()
    // Offset: 0x1A52228
    void LocateCursorNow();
    // public System.Void .ctor()
    // Offset: 0x1A5078C
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::InputTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputTag*, creationType>()));
    }
    // public override System.String[] GetTags()
    // Offset: 0x1A507FC
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0x1A508AC
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public override System.Boolean SelfClosing()
    // Offset: 0x1A50904
    // Implemented from: Wrench.TagHandler
    // Base method: System.Boolean TagHandler::SelfClosing()
    bool SelfClosing();
    // public override System.Boolean OnAttributeChange(System.String property)
    // Offset: 0x1A5090C
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnAttributeChange(System.String property)
    bool OnAttributeChange(::StringW property);
    // public override PowerUI.KeyboardMode OnShowMobileKeyboard()
    // Offset: 0x1A5169C
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: PowerUI.KeyboardMode HtmlTagHandler::OnShowMobileKeyboard()
    ::PowerUI::KeyboardMode* OnShowMobileKeyboard();
    // public override System.Void OnTagLoaded()
    // Offset: 0x1A51764
    // Implemented from: Wrench.TagHandler
    // Base method: System.Void TagHandler::OnTagLoaded()
    void OnTagLoaded();
    // public override System.Void OnKeyPress(PowerUI.UIEvent pressEvent)
    // Offset: 0x1A51AA4
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::OnKeyPress(PowerUI.UIEvent pressEvent)
    void OnKeyPress(::PowerUI::UIEvent* pressEvent);
    // public override System.Void OnRenderPass()
    // Offset: 0x1A52210
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::OnRenderPass()
    void OnRenderPass();
    // public override System.Void OnFocus()
    // Offset: 0x1A524E4
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::OnFocus()
    void OnFocus();
    // public override System.Void OnBlur()
    // Offset: 0x1A52610
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::OnBlur()
    void OnBlur();
    // public override System.Boolean OnClick(PowerUI.UIEvent clickEvent)
    // Offset: 0x1A526F0
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Boolean HtmlTagHandler::OnClick(PowerUI.UIEvent clickEvent)
    bool OnClick(::PowerUI::UIEvent* clickEvent);
  }; // PowerUI.InputTag
  #pragma pack(pop)
  static check_size<sizeof(InputTag), 128 + sizeof(::StringW)> __PowerUI_InputTagSizeCheck;
  static_assert(sizeof(InputTag) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::InputTag::OnScrolled
// Il2CppName: OnScrolled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(float)>(&PowerUI::InputTag::OnScrolled)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnScrolled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::Unselect
// Il2CppName: Unselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::Unselect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "Unselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::Select
// Il2CppName: Select
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::Select)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "Select", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::ScrollBy
// Il2CppName: ScrollBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(int)>(&PowerUI::InputTag::ScrollBy)> {
  static const MethodInfo* get() {
    static auto* pixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "ScrollBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::ScrollTo
// Il2CppName: ScrollTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(int)>(&PowerUI::InputTag::ScrollTo)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "ScrollTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::ScrollTo
// Il2CppName: ScrollTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(float)>(&PowerUI::InputTag::ScrollTo)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "ScrollTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::ElementScrolled
// Il2CppName: ElementScrolled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::ElementScrolled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "ElementScrolled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::RecalculateTab
// Il2CppName: RecalculateTab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::RecalculateTab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "RecalculateTab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::NoTarget
// Il2CppName: NoTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::InputTag::*)()>(&PowerUI::InputTag::NoTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "NoTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(::StringW)>(&PowerUI::InputTag::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(::StringW, bool)>(&PowerUI::InputTag::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* html = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, html});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::GetTarget
// Il2CppName: GetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Element* (PowerUI::InputTag::*)()>(&PowerUI::InputTag::GetTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "GetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::IsScrollInput
// Il2CppName: IsScrollInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::InputTag::*)()>(&PowerUI::InputTag::IsScrollInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "IsScrollInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::IsBoolInput
// Il2CppName: IsBoolInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::InputTag::*)()>(&PowerUI::InputTag::IsBoolInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "IsBoolInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::IsTextInput
// Il2CppName: IsTextInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::InputTag::*)()>(&PowerUI::InputTag::IsTextInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "IsTextInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::MoveCursor
// Il2CppName: MoveCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(int)>(&PowerUI::InputTag::MoveCursor)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "MoveCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::MoveCursor
// Il2CppName: MoveCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(int, bool)>(&PowerUI::InputTag::MoveCursor)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* immediate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "MoveCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, immediate});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::LocateCursorNow
// Il2CppName: LocateCursorNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::LocateCursorNow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "LocateCursorNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::InputTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::InputTag::*)()>(&PowerUI::InputTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::InputTag::*)()>(&PowerUI::InputTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::SelfClosing
// Il2CppName: SelfClosing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::InputTag::*)()>(&PowerUI::InputTag::SelfClosing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "SelfClosing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnAttributeChange
// Il2CppName: OnAttributeChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::InputTag::*)(::StringW)>(&PowerUI::InputTag::OnAttributeChange)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnAttributeChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnShowMobileKeyboard
// Il2CppName: OnShowMobileKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::KeyboardMode* (PowerUI::InputTag::*)()>(&PowerUI::InputTag::OnShowMobileKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnShowMobileKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnTagLoaded
// Il2CppName: OnTagLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::OnTagLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnTagLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnKeyPress
// Il2CppName: OnKeyPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)(::PowerUI::UIEvent*)>(&PowerUI::InputTag::OnKeyPress)> {
  static const MethodInfo* get() {
    static auto* pressEvent = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnKeyPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pressEvent});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnRenderPass
// Il2CppName: OnRenderPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::OnRenderPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnRenderPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnFocus
// Il2CppName: OnFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::OnFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnBlur
// Il2CppName: OnBlur
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::InputTag::*)()>(&PowerUI::InputTag::OnBlur)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnBlur", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::InputTag::OnClick
// Il2CppName: OnClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::InputTag::*)(::PowerUI::UIEvent*)>(&PowerUI::InputTag::OnClick)> {
  static const MethodInfo* get() {
    static auto* clickEvent = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::InputTag*), "OnClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickEvent});
  }
};
