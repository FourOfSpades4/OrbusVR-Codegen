// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: ToggleGroup
  class ToggleGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::ToggleGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ToggleGroup*, "UnityEngine.UI", "ToggleGroup");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ToggleGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AAEE0C
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class ToggleGroup : public ::UnityEngine::EventSystems::UIBehaviour {
    public:
    public:
    // private System.Boolean m_AllowSwitchOff
    // Size: 0x1
    // Offset: 0x18
    bool m_AllowSwitchOff;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_AllowSwitchOff and: m_Toggles
    char __padding0[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.UI.Toggle> m_Toggles
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>* m_Toggles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [CompilerGeneratedAttribute] Offset: 0xAB132C
    // Get static field: static private System.Predicate`1<UnityEngine.UI.Toggle> <>f__am$cache0
    static ::System::Predicate_1<::UnityEngine::UI::Toggle*>* _get_$$f__am$cache0();
    // Set static field: static private System.Predicate`1<UnityEngine.UI.Toggle> <>f__am$cache0
    static void _set_$$f__am$cache0(::System::Predicate_1<::UnityEngine::UI::Toggle*>* value);
    // [CompilerGeneratedAttribute] Offset: 0xAB133C
    // Get static field: static private System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>f__am$cache1
    static ::System::Func_2<::UnityEngine::UI::Toggle*, bool>* _get_$$f__am$cache1();
    // Set static field: static private System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>f__am$cache1
    static void _set_$$f__am$cache1(::System::Func_2<::UnityEngine::UI::Toggle*, bool>* value);
    // Get instance field reference: private System.Boolean m_AllowSwitchOff
    [[deprecated("Use field access instead!")]] bool& dyn_m_AllowSwitchOff();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UI.Toggle> m_Toggles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>*& dyn_m_Toggles();
    // public System.Boolean get_allowSwitchOff()
    // Offset: 0x1E1DEA0
    bool get_allowSwitchOff();
    // public System.Void set_allowSwitchOff(System.Boolean value)
    // Offset: 0x1E1DFE0
    void set_allowSwitchOff(bool value);
    // private System.Void ValidateToggleIsInGroup(UnityEngine.UI.Toggle toggle)
    // Offset: 0x1E1DFEC
    void ValidateToggleIsInGroup(::UnityEngine::UI::Toggle* toggle);
    // public System.Void NotifyToggleOn(UnityEngine.UI.Toggle toggle)
    // Offset: 0x1E1DAC4
    void NotifyToggleOn(::UnityEngine::UI::Toggle* toggle);
    // public System.Void UnregisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x1E1D964
    void UnregisterToggle(::UnityEngine::UI::Toggle* toggle);
    // public System.Void RegisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x1E1DA10
    void RegisterToggle(::UnityEngine::UI::Toggle* toggle);
    // public System.Boolean AnyTogglesOn()
    // Offset: 0x1E1DD98
    bool AnyTogglesOn();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> ActiveToggles()
    // Offset: 0x1E1E158
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Toggle*>* ActiveToggles();
    // public System.Void SetAllTogglesOff()
    // Offset: 0x1E1E214
    void SetAllTogglesOff();
    // static private System.Boolean <AnyTogglesOn>m__0(UnityEngine.UI.Toggle x)
    // Offset: 0x1E1E2F0
    static bool $AnyTogglesOn$m__0(::UnityEngine::UI::Toggle* x);
    // static private System.Boolean <ActiveToggles>m__1(UnityEngine.UI.Toggle x)
    // Offset: 0x1E1E318
    static bool $ActiveToggles$m__1(::UnityEngine::UI::Toggle* x);
    // protected System.Void .ctor()
    // Offset: 0x1E1DF6C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::ToggleGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleGroup*, creationType>()));
    }
  }; // UnityEngine.UI.ToggleGroup
  #pragma pack(pop)
  static check_size<sizeof(ToggleGroup), 32 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>*)> __UnityEngine_UI_ToggleGroupSizeCheck;
  static_assert(sizeof(ToggleGroup) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::get_allowSwitchOff
// Il2CppName: get_allowSwitchOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::get_allowSwitchOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "get_allowSwitchOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::set_allowSwitchOff
// Il2CppName: set_allowSwitchOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(bool)>(&UnityEngine::UI::ToggleGroup::set_allowSwitchOff)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "set_allowSwitchOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::ValidateToggleIsInGroup
// Il2CppName: ValidateToggleIsInGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::ValidateToggleIsInGroup)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "ValidateToggleIsInGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::NotifyToggleOn
// Il2CppName: NotifyToggleOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::NotifyToggleOn)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "NotifyToggleOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::UnregisterToggle
// Il2CppName: UnregisterToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::UnregisterToggle)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "UnregisterToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::RegisterToggle
// Il2CppName: RegisterToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::RegisterToggle)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "RegisterToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::AnyTogglesOn
// Il2CppName: AnyTogglesOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::AnyTogglesOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "AnyTogglesOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::ActiveToggles
// Il2CppName: ActiveToggles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Toggle*>* (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::ActiveToggles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "ActiveToggles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::SetAllTogglesOff
// Il2CppName: SetAllTogglesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::SetAllTogglesOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "SetAllTogglesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$AnyTogglesOn$m__0
// Il2CppName: <AnyTogglesOn>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::$AnyTogglesOn$m__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "<AnyTogglesOn>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$ActiveToggles$m__1
// Il2CppName: <ActiveToggles>m__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::$ActiveToggles$m__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "<ActiveToggles>m__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
