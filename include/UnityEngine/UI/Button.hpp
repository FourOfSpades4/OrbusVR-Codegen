// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Button*, "UnityEngine.UI", "Button");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Button
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AAE65C
  class Button : public ::UnityEngine::UI::Selectable/*, public ::UnityEngine::EventSystems::IPointerClickHandler, public ::UnityEngine::EventSystems::ISubmitHandler*/ {
    public:
    // Nested type: ::UnityEngine::UI::Button::ButtonClickedEvent
    class ButtonClickedEvent;
    // Nested type: ::UnityEngine::UI::Button::$OnFinishSubmit$c__Iterator0
    class $OnFinishSubmit$c__Iterator0;
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xAAFDD4
    // private UnityEngine.UI.Button/ButtonClickedEvent m_OnClick
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::UI::Button::ButtonClickedEvent* m_OnClick;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button::ButtonClickedEvent*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerClickHandler
    operator ::UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::ISubmitHandler
    operator ::UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Get instance field reference: private UnityEngine.UI.Button/ButtonClickedEvent m_OnClick
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button::ButtonClickedEvent*& dyn_m_OnClick();
    // public UnityEngine.UI.Button/ButtonClickedEvent get_onClick()
    // Offset: 0x17DC2EC
    ::UnityEngine::UI::Button::ButtonClickedEvent* get_onClick();
    // public System.Void set_onClick(UnityEngine.UI.Button/ButtonClickedEvent value)
    // Offset: 0x17DC2F4
    void set_onClick(::UnityEngine::UI::Button::ButtonClickedEvent* value);
    // private System.Void Press()
    // Offset: 0x17DC2FC
    void Press();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x17DC3A4
    void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x17DC3E8
    void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);
    // private System.Collections.IEnumerator OnFinishSubmit()
    // Offset: 0x17DC470
    ::System::Collections::IEnumerator* OnFinishSubmit();
    // protected System.Void .ctor()
    // Offset: 0x17DC25C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Button* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Button::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Button*, creationType>()));
    }
  }; // UnityEngine.UI.Button
  #pragma pack(pop)
  static check_size<sizeof(Button), 216 + sizeof(::UnityEngine::UI::Button::ButtonClickedEvent*)> __UnityEngine_UI_ButtonSizeCheck;
  static_assert(sizeof(Button) == 0xE0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Button::get_onClick
// Il2CppName: get_onClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button::ButtonClickedEvent* (UnityEngine::UI::Button::*)()>(&UnityEngine::UI::Button::get_onClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "get_onClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::set_onClick
// Il2CppName: set_onClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)(::UnityEngine::UI::Button::ButtonClickedEvent*)>(&UnityEngine::UI::Button::set_onClick)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Button/ButtonClickedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "set_onClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::Press
// Il2CppName: Press
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)()>(&UnityEngine::UI::Button::Press)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "Press", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::UI::Button::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::OnSubmit
// Il2CppName: OnSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)(::UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::UI::Button::OnSubmit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "OnSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::OnFinishSubmit
// Il2CppName: OnFinishSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::UI::Button::*)()>(&UnityEngine::UI::Button::OnFinishSubmit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "OnFinishSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!