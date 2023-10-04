// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayfulSystems::ProgressBar
namespace PlayfulSystems::ProgressBar {
  // Forward declaring type: ProgressBarProView
  class ProgressBarProView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ProgressBarPro
  class ProgressBarPro;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ProgressBarPro);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressBarPro*, "", "ProgressBarPro");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ProgressBarPro
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class ProgressBarPro : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ProgressBarPro::AnimationType
    struct AnimationType;
    // Nested type: ::GlobalNamespace::ProgressBarPro::$DoBarSizeAnim$d__20
    class $DoBarSizeAnim$d__20;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: ProgressBarPro/AnimationType
    // [TokenAttribute] Offset: FFFFFFFF
    struct AnimationType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AnimationType
      constexpr AnimationType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ProgressBarPro/AnimationType FixedTimeForChange
      static constexpr const int FixedTimeForChange = 0;
      // Get static field: static public ProgressBarPro/AnimationType FixedTimeForChange
      static ::GlobalNamespace::ProgressBarPro::AnimationType _get_FixedTimeForChange();
      // Set static field: static public ProgressBarPro/AnimationType FixedTimeForChange
      static void _set_FixedTimeForChange(::GlobalNamespace::ProgressBarPro::AnimationType value);
      // static field const value: static public ProgressBarPro/AnimationType ChangeSpeed
      static constexpr const int ChangeSpeed = 1;
      // Get static field: static public ProgressBarPro/AnimationType ChangeSpeed
      static ::GlobalNamespace::ProgressBarPro::AnimationType _get_ChangeSpeed();
      // Set static field: static public ProgressBarPro/AnimationType ChangeSpeed
      static void _set_ChangeSpeed(::GlobalNamespace::ProgressBarPro::AnimationType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // ProgressBarPro/AnimationType
    #pragma pack(pop)
    static check_size<sizeof(ProgressBarPro::AnimationType), 0 + sizeof(int)> __GlobalNamespace_ProgressBarPro_AnimationTypeSizeCheck;
    static_assert(sizeof(ProgressBarPro::AnimationType) == 0x4);
    public:
    // [RangeAttribute] Offset: 0xADC670
    // private System.Single m_value
    // Size: 0x4
    // Offset: 0x18
    float m_value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single displayValue
    // Size: 0x4
    // Offset: 0x1C
    float displayValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADC6B0
    // [SpaceAttribute] Offset: 0xADC6B0
    // public System.Boolean animateBar
    // Size: 0x1
    // Offset: 0x20
    bool animateBar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: animateBar and: animationType
    char __padding2[0x3] = {};
    // private ProgressBarPro/AnimationType animationType
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::ProgressBarPro::AnimationType animationType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ProgressBarPro::AnimationType) == 0x4);
    // private System.Single animTime
    // Size: 0x4
    // Offset: 0x28
    float animTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: animTime and: views
    char __padding4[0x4] = {};
    // [SpaceAttribute] Offset: 0xADC730
    // private PlayfulSystems.ProgressBar.ProgressBarProView[] views
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::PlayfulSystems::ProgressBar::ProgressBarProView*> views;
    // Field size check
    static_assert(sizeof(::ArrayW<::PlayfulSystems::ProgressBar::ProgressBarProView*>) == 0x8);
    // private UnityEngine.Coroutine sizeAnim
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Coroutine* sizeAnim;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single m_value
    [[deprecated("Use field access instead!")]] float& dyn_m_value();
    // Get instance field reference: private System.Single displayValue
    [[deprecated("Use field access instead!")]] float& dyn_displayValue();
    // Get instance field reference: public System.Boolean animateBar
    [[deprecated("Use field access instead!")]] bool& dyn_animateBar();
    // Get instance field reference: private ProgressBarPro/AnimationType animationType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ProgressBarPro::AnimationType& dyn_animationType();
    // Get instance field reference: private System.Single animTime
    [[deprecated("Use field access instead!")]] float& dyn_animTime();
    // Get instance field reference: private PlayfulSystems.ProgressBar.ProgressBarProView[] views
    [[deprecated("Use field access instead!")]] ::ArrayW<::PlayfulSystems::ProgressBar::ProgressBarProView*>& dyn_views();
    // Get instance field reference: private UnityEngine.Coroutine sizeAnim
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn_sizeAnim();
    // public System.Void Start()
    // Offset: 0xE20F20
    void Start();
    // private System.Void OnEnable()
    // Offset: 0xE20F88
    void OnEnable();
    // public System.Single get_Value()
    // Offset: 0xE21058
    float get_Value();
    // public System.Void set_Value(System.Single value)
    // Offset: 0xE21060
    void set_Value(float value);
    // public System.Void SetValue(System.Single value, System.Single maxValue)
    // Offset: 0xE21234
    void SetValue(float value, float maxValue);
    // public System.Void SetValue(System.Int32 value, System.Int32 maxValue)
    // Offset: 0xE2124C
    void SetValue(int value, int maxValue);
    // public System.Void SetValue(System.Single percentage)
    // Offset: 0xE21074
    void SetValue(float percentage);
    // public System.Boolean IsAnimating()
    // Offset: 0xE212B4
    bool IsAnimating();
    // public System.Void SetBarColor(UnityEngine.Color color)
    // Offset: 0xE212D4
    void SetBarColor(::UnityEngine::Color color);
    // public System.Void ForceColorUpdate()
    // Offset: 0xE213A4
    void ForceColorUpdate();
    // private System.Void StartSizeAnim(System.Single percentage)
    // Offset: 0xE21268
    void StartSizeAnim(float percentage);
    // private System.Collections.IEnumerator DoBarSizeAnim()
    // Offset: 0xE21444
    ::System::Collections::IEnumerator* DoBarSizeAnim();
    // public System.Void ForceValueRefresh()
    // Offset: 0xE214E4
    void ForceValueRefresh();
    // private System.Void SetDisplayValue(System.Single value, System.Boolean forceUpdate)
    // Offset: 0xE20F94
    void SetDisplayValue(float value, bool forceUpdate);
    // private System.Void UpdateBarViews(System.Single currentValue, System.Single targetValue, System.Boolean forceUpdate)
    // Offset: 0xE214FC
    void UpdateBarViews(float currentValue, float targetValue, bool forceUpdate);
    // public System.Void .ctor()
    // Offset: 0xE216B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProgressBarPro* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ProgressBarPro::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProgressBarPro*, creationType>()));
    }
  }; // ProgressBarPro
  #pragma pack(pop)
  static check_size<sizeof(ProgressBarPro), 56 + sizeof(::UnityEngine::Coroutine*)> __GlobalNamespace_ProgressBarProSizeCheck;
  static_assert(sizeof(ProgressBarPro) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressBarPro::AnimationType, "", "ProgressBarPro/AnimationType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)()>(&GlobalNamespace::ProgressBarPro::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)()>(&GlobalNamespace::ProgressBarPro::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ProgressBarPro::*)()>(&GlobalNamespace::ProgressBarPro::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(float)>(&GlobalNamespace::ProgressBarPro::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(float, float)>(&GlobalNamespace::ProgressBarPro::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, maxValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(int, int)>(&GlobalNamespace::ProgressBarPro::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, maxValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(float)>(&GlobalNamespace::ProgressBarPro::SetValue)> {
  static const MethodInfo* get() {
    static auto* percentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{percentage});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::IsAnimating
// Il2CppName: IsAnimating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ProgressBarPro::*)()>(&GlobalNamespace::ProgressBarPro::IsAnimating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "IsAnimating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::SetBarColor
// Il2CppName: SetBarColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(::UnityEngine::Color)>(&GlobalNamespace::ProgressBarPro::SetBarColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "SetBarColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::ForceColorUpdate
// Il2CppName: ForceColorUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)()>(&GlobalNamespace::ProgressBarPro::ForceColorUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "ForceColorUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::StartSizeAnim
// Il2CppName: StartSizeAnim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(float)>(&GlobalNamespace::ProgressBarPro::StartSizeAnim)> {
  static const MethodInfo* get() {
    static auto* percentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "StartSizeAnim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{percentage});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::DoBarSizeAnim
// Il2CppName: DoBarSizeAnim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::ProgressBarPro::*)()>(&GlobalNamespace::ProgressBarPro::DoBarSizeAnim)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "DoBarSizeAnim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::ForceValueRefresh
// Il2CppName: ForceValueRefresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)()>(&GlobalNamespace::ProgressBarPro::ForceValueRefresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "ForceValueRefresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::SetDisplayValue
// Il2CppName: SetDisplayValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(float, bool)>(&GlobalNamespace::ProgressBarPro::SetDisplayValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "SetDisplayValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, forceUpdate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::UpdateBarViews
// Il2CppName: UpdateBarViews
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressBarPro::*)(float, float, bool)>(&GlobalNamespace::ProgressBarPro::UpdateBarViews)> {
  static const MethodInfo* get() {
    static auto* currentValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProgressBarPro*), "UpdateBarViews", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentValue, targetValue, forceUpdate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProgressBarPro::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!