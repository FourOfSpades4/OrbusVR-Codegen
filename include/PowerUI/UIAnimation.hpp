// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.Void
#include "Nitro/Void.hpp"
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
  // Forward declaring type: AnimationCompleted
  class AnimationCompleted;
  // Forward declaring type: AnimatedProperty
  class AnimatedProperty;
}
// Forward declaring namespace: PowerUI::Css
namespace PowerUI::Css {
  // Forward declaring type: ElementStyle
  class ElementStyle;
  // Forward declaring type: CssProperty
  class CssProperty;
  // Forward declaring type: Value
  class Value;
}
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: DynamicMethod`1<T>
  template<typename T>
  class DynamicMethod_1;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: UIAnimation
  class UIAnimation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::UIAnimation);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::UIAnimation*, "PowerUI", "UIAnimation");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.UIAnimation
  // [TokenAttribute] Offset: FFFFFFFF
  class UIAnimation : public ::Il2CppObject {
    public:
    public:
    // public System.Object Data
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Boolean Decelerate
    // Size: 0x1
    // Offset: 0x18
    bool Decelerate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Decelerate and: TotalTime
    char __padding1[0x3] = {};
    // public System.Single TotalTime
    // Size: 0x4
    // Offset: 0x1C
    float TotalTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public PowerUI.Element Animating
    // Size: 0x8
    // Offset: 0x20
    ::PowerUI::Element* Animating;
    // Field size check
    static_assert(sizeof(::PowerUI::Element*) == 0x8);
    // public System.Single DecelerateAt
    // Size: 0x4
    // Offset: 0x28
    float DecelerateAt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean FinishedPlaying
    // Size: 0x1
    // Offset: 0x2C
    bool FinishedPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FinishedPlaying and: ConstantSpeedTime
    char __padding5[0x3] = {};
    // public System.Single ConstantSpeedTime
    // Size: 0x4
    // Offset: 0x30
    float ConstantSpeedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: ConstantSpeedTime and: NextAnimation
    char __padding6[0x4] = {};
    // public PowerUI.UIAnimation NextAnimation
    // Size: 0x8
    // Offset: 0x38
    ::PowerUI::UIAnimation* NextAnimation;
    // Field size check
    static_assert(sizeof(::PowerUI::UIAnimation*) == 0x8);
    // public PowerUI.Css.ElementStyle ElementStyle
    // Size: 0x8
    // Offset: 0x40
    ::PowerUI::Css::ElementStyle* ElementStyle;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::ElementStyle*) == 0x8);
    // public System.Single TimeToAccelerateFor
    // Size: 0x4
    // Offset: 0x48
    float TimeToAccelerateFor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single TimeToDecelerateFor
    // Size: 0x4
    // Offset: 0x4C
    float TimeToDecelerateFor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public PowerUI.AnimationCompleted OnComplete
    // Size: 0x8
    // Offset: 0x50
    ::PowerUI::AnimationCompleted* OnComplete;
    // Field size check
    static_assert(sizeof(::PowerUI::AnimationCompleted*) == 0x8);
    // public Nitro.DynamicMethod`1<Nitro.Void> Done
    // Size: 0x8
    // Offset: 0x58
    ::Nitro::DynamicMethod_1<::Nitro::Void>* Done;
    // Field size check
    static_assert(sizeof(::Nitro::DynamicMethod_1<::Nitro::Void>*) == 0x8);
    public:
    // Get static field: static public PowerUI.AnimatedProperty LastProperty
    static ::PowerUI::AnimatedProperty* _get_LastProperty();
    // Set static field: static public PowerUI.AnimatedProperty LastProperty
    static void _set_LastProperty(::PowerUI::AnimatedProperty* value);
    // Get static field: static public PowerUI.AnimatedProperty FirstProperty
    static ::PowerUI::AnimatedProperty* _get_FirstProperty();
    // Set static field: static public PowerUI.AnimatedProperty FirstProperty
    static void _set_FirstProperty(::PowerUI::AnimatedProperty* value);
    // Get instance field reference: public System.Object Data
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Data();
    // Get instance field reference: public System.Boolean Decelerate
    [[deprecated("Use field access instead!")]] bool& dyn_Decelerate();
    // Get instance field reference: public System.Single TotalTime
    [[deprecated("Use field access instead!")]] float& dyn_TotalTime();
    // Get instance field reference: public PowerUI.Element Animating
    [[deprecated("Use field access instead!")]] ::PowerUI::Element*& dyn_Animating();
    // Get instance field reference: public System.Single DecelerateAt
    [[deprecated("Use field access instead!")]] float& dyn_DecelerateAt();
    // Get instance field reference: private System.Boolean FinishedPlaying
    [[deprecated("Use field access instead!")]] bool& dyn_FinishedPlaying();
    // Get instance field reference: public System.Single ConstantSpeedTime
    [[deprecated("Use field access instead!")]] float& dyn_ConstantSpeedTime();
    // Get instance field reference: public PowerUI.UIAnimation NextAnimation
    [[deprecated("Use field access instead!")]] ::PowerUI::UIAnimation*& dyn_NextAnimation();
    // Get instance field reference: public PowerUI.Css.ElementStyle ElementStyle
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::ElementStyle*& dyn_ElementStyle();
    // Get instance field reference: public System.Single TimeToAccelerateFor
    [[deprecated("Use field access instead!")]] float& dyn_TimeToAccelerateFor();
    // Get instance field reference: public System.Single TimeToDecelerateFor
    [[deprecated("Use field access instead!")]] float& dyn_TimeToDecelerateFor();
    // Get instance field reference: public PowerUI.AnimationCompleted OnComplete
    [[deprecated("Use field access instead!")]] ::PowerUI::AnimationCompleted*& dyn_OnComplete();
    // Get instance field reference: public Nitro.DynamicMethod`1<Nitro.Void> Done
    [[deprecated("Use field access instead!")]] ::Nitro::DynamicMethod_1<::Nitro::Void>*& dyn_Done();
    // static public System.Void Clear()
    // Offset: 0x177DBB8
    static void Clear();
    // static public System.Void Update()
    // Offset: 0x177EDC8
    static void Update();
    // static public PowerUI.AnimatedProperty GetAnimatedProperty(PowerUI.Element animating, System.String property)
    // Offset: 0x177EED0
    static ::PowerUI::AnimatedProperty* GetAnimatedProperty(::PowerUI::Element* animating, ::StringW property);
    // static public PowerUI.AnimatedProperty GetAnimatedProperty(PowerUI.Element animating, PowerUI.Css.CssProperty property, System.Int32 innerIndex)
    // Offset: 0x177EF28
    static ::PowerUI::AnimatedProperty* GetAnimatedProperty(::PowerUI::Element* animating, ::PowerUI::Css::CssProperty* property, int innerIndex);
    // public System.Void .ctor(PowerUI.Element animating, System.String properties, System.Single constantSpeedTime, System.Single timeToAccelerateFor, System.Single timeToDecelerateFor)
    // Offset: 0x177EFC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIAnimation* New_ctor(::PowerUI::Element* animating, ::StringW properties, float constantSpeedTime, float timeToAccelerateFor, float timeToDecelerateFor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::UIAnimation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIAnimation*, creationType>(animating, properties, constantSpeedTime, timeToAccelerateFor, timeToDecelerateFor)));
    }
    // private System.Void AnimateComposite(PowerUI.Css.CssProperty property, PowerUI.Css.Value value)
    // Offset: 0x177F654
    void AnimateComposite(::PowerUI::Css::CssProperty* property, ::PowerUI::Css::Value* value);
    // public System.Void Finished()
    // Offset: 0x177F8CC
    void Finished();
    // private System.Void Animate(PowerUI.Css.CssProperty property, System.Int32 innerIndex, PowerUI.Css.Value value, System.Boolean updateCss)
    // Offset: 0x177F7B8
    void Animate(::PowerUI::Css::CssProperty* property, int innerIndex, ::PowerUI::Css::Value* value, bool updateCss);
    // public System.Void OnDone(Nitro.DynamicMethod`1<Nitro.Void> method)
    // Offset: 0x177FA84
    void OnDone(::Nitro::DynamicMethod_1<::Nitro::Void>* method);
    // public System.Void OnDone(PowerUI.AnimationCompleted onComplete)
    // Offset: 0x177FA8C
    void OnDone(::PowerUI::AnimationCompleted* onComplete);
    // public System.Void Stop()
    // Offset: 0x177FA94
    void Stop();
    // public System.Void Stop(System.Boolean runEvent)
    // Offset: 0x177FA9C
    void Stop(bool runEvent);
  }; // PowerUI.UIAnimation
  #pragma pack(pop)
  static check_size<sizeof(UIAnimation), 88 + sizeof(::Nitro::DynamicMethod_1<::Nitro::Void>*)> __PowerUI_UIAnimationSizeCheck;
  static_assert(sizeof(UIAnimation) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::UIAnimation::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::UIAnimation::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::UIAnimation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::GetAnimatedProperty
// Il2CppName: GetAnimatedProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::AnimatedProperty* (*)(::PowerUI::Element*, ::StringW)>(&PowerUI::UIAnimation::GetAnimatedProperty)> {
  static const MethodInfo* get() {
    static auto* animating = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "GetAnimatedProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animating, property});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::GetAnimatedProperty
// Il2CppName: GetAnimatedProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::AnimatedProperty* (*)(::PowerUI::Element*, ::PowerUI::Css::CssProperty*, int)>(&PowerUI::UIAnimation::GetAnimatedProperty)> {
  static const MethodInfo* get() {
    static auto* animating = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "CssProperty")->byval_arg;
    static auto* innerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "GetAnimatedProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animating, property, innerIndex});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::UIAnimation::AnimateComposite
// Il2CppName: AnimateComposite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UIAnimation::*)(::PowerUI::Css::CssProperty*, ::PowerUI::Css::Value*)>(&PowerUI::UIAnimation::AnimateComposite)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "CssProperty")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "AnimateComposite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, value});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::Finished
// Il2CppName: Finished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UIAnimation::*)()>(&PowerUI::UIAnimation::Finished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "Finished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UIAnimation::*)(::PowerUI::Css::CssProperty*, int, ::PowerUI::Css::Value*, bool)>(&PowerUI::UIAnimation::Animate)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "CssProperty")->byval_arg;
    static auto* innerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    static auto* updateCss = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, innerIndex, value, updateCss});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::OnDone
// Il2CppName: OnDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UIAnimation::*)(::Nitro::DynamicMethod_1<::Nitro::Void>*)>(&PowerUI::UIAnimation::OnDone)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Nitro", "DynamicMethod`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Nitro", "Void")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "OnDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::OnDone
// Il2CppName: OnDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UIAnimation::*)(::PowerUI::AnimationCompleted*)>(&PowerUI::UIAnimation::OnDone)> {
  static const MethodInfo* get() {
    static auto* onComplete = &::il2cpp_utils::GetClassFromName("PowerUI", "AnimationCompleted")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "OnDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onComplete});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UIAnimation::*)()>(&PowerUI::UIAnimation::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::UIAnimation::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::UIAnimation::*)(bool)>(&PowerUI::UIAnimation::Stop)> {
  static const MethodInfo* get() {
    static auto* runEvent = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIAnimation*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runEvent});
  }
};
