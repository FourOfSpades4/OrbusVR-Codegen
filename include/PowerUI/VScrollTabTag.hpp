// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.ScrollTabTag
#include "PowerUI/ScrollTabTag.hpp"
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
  // Forward declaring type: UIEvent
  class UIEvent;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: VScrollTabTag
  class VScrollTabTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::VScrollTabTag);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::VScrollTabTag*, "PowerUI", "VScrollTabTag");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.VScrollTabTag
  // [TokenAttribute] Offset: FFFFFFFF
  class VScrollTabTag : public ::PowerUI::ScrollTabTag {
    public:
    public:
    // public System.Int32 MouseY
    // Size: 0x4
    // Offset: 0x40
    int MouseY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 StartY
    // Size: 0x4
    // Offset: 0x44
    int StartY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::PowerUI::InputTag*
    constexpr operator ::PowerUI::InputTag*() const noexcept = delete;
    // Get instance field reference: public System.Int32 MouseY
    [[deprecated("Use field access instead!")]] int& dyn_MouseY();
    // Get instance field reference: public System.Int32 StartY
    [[deprecated("Use field access instead!")]] int& dyn_StartY();
    // public override System.String[] GetTags()
    // Offset: 0xE19860
    // Implemented from: Wrench.TagHandler
    // Base method: System.String[] TagHandler::GetTags()
    ::ArrayW<::StringW> GetTags();
    // public override System.Boolean SelfClosing()
    // Offset: 0xE19910
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Boolean ScrollTabTag::SelfClosing()
    bool SelfClosing();
    // public override Wrench.TagHandler GetInstance()
    // Offset: 0xE19918
    // Implemented from: Wrench.TagHandler
    // Base method: Wrench.TagHandler TagHandler::GetInstance()
    ::Wrench::TagHandler* GetInstance();
    // public override System.Void Clicked(PowerUI.UIEvent clickEvent)
    // Offset: 0xE1997C
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Void ScrollTabTag::Clicked(PowerUI.UIEvent clickEvent)
    void Clicked(::PowerUI::UIEvent* clickEvent);
    // protected override System.Void SetTabSize(System.Int32 newSize)
    // Offset: 0xE199F0
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Void ScrollTabTag::SetTabSize(System.Int32 newSize)
    void SetTabSize(int newSize);
    // public override System.Int32 BarSize()
    // Offset: 0xE19AC8
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Int32 ScrollTabTag::BarSize()
    int BarSize();
    // public override System.Int32 TabSize()
    // Offset: 0xE19B74
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Int32 ScrollTabTag::TabSize()
    int TabSize();
    // public override System.Int32 StyleSize()
    // Offset: 0xE19BC8
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Int32 ScrollTabTag::StyleSize()
    int StyleSize();
    // public override System.Int32 SizeBefore()
    // Offset: 0xE19C38
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Int32 ScrollTabTag::SizeBefore()
    int SizeBefore();
    // public override System.Int32 SizeAfter()
    // Offset: 0xE19CD0
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Int32 ScrollTabTag::SizeAfter()
    int SizeAfter();
    // public override System.Int32 TabPosition()
    // Offset: 0xE19D68
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Int32 ScrollTabTag::TabPosition()
    int TabPosition();
    // public override System.Void OnMouseMove(PowerUI.UIEvent mouseEvent)
    // Offset: 0xE19DBC
    // Implemented from: PowerUI.HtmlTagHandler
    // Base method: System.Void HtmlTagHandler::OnMouseMove(PowerUI.UIEvent mouseEvent)
    void OnMouseMove(::PowerUI::UIEvent* mouseEvent);
    // public override System.Void ScrollTo(System.Int32 location, System.Boolean scrollTarget)
    // Offset: 0xE19E1C
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Void ScrollTabTag::ScrollTo(System.Int32 location, System.Boolean scrollTarget)
    void ScrollTo(int location, bool scrollTarget);
    // public override System.Void ScrollBy(System.Int32 deltaY, System.Boolean fromCurrent, System.Boolean scrollTarget)
    // Offset: 0xE19E38
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Void ScrollTabTag::ScrollBy(System.Int32 deltaY, System.Boolean fromCurrent, System.Boolean scrollTarget)
    void ScrollBy(int deltaY, bool fromCurrent, bool scrollTarget);
    // public System.Void .ctor()
    // Offset: 0xE19974
    // Implemented from: PowerUI.ScrollTabTag
    // Base method: System.Void ScrollTabTag::.ctor()
    // Base method: System.Void HtmlTagHandler::.ctor()
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VScrollTabTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::VScrollTabTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VScrollTabTag*, creationType>()));
    }
  }; // PowerUI.VScrollTabTag
  #pragma pack(pop)
  static check_size<sizeof(VScrollTabTag), 68 + sizeof(int)> __PowerUI_VScrollTabTagSizeCheck;
  static_assert(sizeof(VScrollTabTag) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::GetTags
// Il2CppName: GetTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::GetTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "GetTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::SelfClosing
// Il2CppName: SelfClosing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::SelfClosing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "SelfClosing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Wrench::TagHandler* (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::Clicked
// Il2CppName: Clicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::VScrollTabTag::*)(::PowerUI::UIEvent*)>(&PowerUI::VScrollTabTag::Clicked)> {
  static const MethodInfo* get() {
    static auto* clickEvent = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "Clicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickEvent});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::SetTabSize
// Il2CppName: SetTabSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::VScrollTabTag::*)(int)>(&PowerUI::VScrollTabTag::SetTabSize)> {
  static const MethodInfo* get() {
    static auto* newSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "SetTabSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSize});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::BarSize
// Il2CppName: BarSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::BarSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "BarSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::TabSize
// Il2CppName: TabSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::TabSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "TabSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::StyleSize
// Il2CppName: StyleSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::StyleSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "StyleSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::SizeBefore
// Il2CppName: SizeBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::SizeBefore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "SizeBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::SizeAfter
// Il2CppName: SizeAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::SizeAfter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "SizeAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::TabPosition
// Il2CppName: TabPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::VScrollTabTag::*)()>(&PowerUI::VScrollTabTag::TabPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "TabPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::OnMouseMove
// Il2CppName: OnMouseMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::VScrollTabTag::*)(::PowerUI::UIEvent*)>(&PowerUI::VScrollTabTag::OnMouseMove)> {
  static const MethodInfo* get() {
    static auto* mouseEvent = &::il2cpp_utils::GetClassFromName("PowerUI", "UIEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "OnMouseMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mouseEvent});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::ScrollTo
// Il2CppName: ScrollTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::VScrollTabTag::*)(int, bool)>(&PowerUI::VScrollTabTag::ScrollTo)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scrollTarget = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "ScrollTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, scrollTarget});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::ScrollBy
// Il2CppName: ScrollBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::VScrollTabTag::*)(int, bool, bool)>(&PowerUI::VScrollTabTag::ScrollBy)> {
  static const MethodInfo* get() {
    static auto* deltaY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromCurrent = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* scrollTarget = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::VScrollTabTag*), "ScrollBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaY, fromCurrent, scrollTarget});
  }
};
// Writing MetadataGetter for method: PowerUI::VScrollTabTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
