// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: UIAnimation
  class UIAnimation;
  // Forward declaring type: Element
  class Element;
}
// Forward declaring namespace: PowerUI::Css
namespace PowerUI::Css {
  // Forward declaring type: Value
  class Value;
  // Forward declaring type: CssProperty
  class CssProperty;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: AnimatedProperty
  class AnimatedProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::AnimatedProperty);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::AnimatedProperty*, "PowerUI", "AnimatedProperty");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.AnimatedProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatedProperty : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Stage
    // Size: 0x4
    // Offset: 0x10
    int Stage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single Speed
    // Size: 0x4
    // Offset: 0x14
    float Speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxSpeed
    // Size: 0x4
    // Offset: 0x18
    float MaxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean UpdateCss
    // Size: 0x1
    // Offset: 0x1C
    bool UpdateCss;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UpdateCss and: InnerIndex
    char __padding3[0x3] = {};
    // public System.Int32 InnerIndex
    // Size: 0x4
    // Offset: 0x20
    int InnerIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean Decelerate
    // Size: 0x1
    // Offset: 0x24
    bool Decelerate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Decelerate and: CurrentTime
    char __padding5[0x3] = {};
    // public System.Single CurrentTime
    // Size: 0x4
    // Offset: 0x28
    float CurrentTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ActiveValue
    // Size: 0x4
    // Offset: 0x2C
    float ActiveValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single TargetValue
    // Size: 0x4
    // Offset: 0x30
    float TargetValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Acceleration
    // Size: 0x4
    // Offset: 0x34
    float Acceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Deceleration
    // Size: 0x4
    // Offset: 0x38
    float Deceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Deceleration and: Animation
    char __padding10[0x4] = {};
    // public PowerUI.UIAnimation Animation
    // Size: 0x8
    // Offset: 0x40
    ::PowerUI::UIAnimation* Animation;
    // Field size check
    static_assert(sizeof(::PowerUI::UIAnimation*) == 0x8);
    // public PowerUI.Css.Value ValueObject
    // Size: 0x8
    // Offset: 0x48
    ::PowerUI::Css::Value* ValueObject;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::Value*) == 0x8);
    // public PowerUI.Css.CssProperty PropertyInfo
    // Size: 0x8
    // Offset: 0x50
    ::PowerUI::Css::CssProperty* PropertyInfo;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::CssProperty*) == 0x8);
    // public PowerUI.Css.Value PropertyValueObject
    // Size: 0x8
    // Offset: 0x58
    ::PowerUI::Css::Value* PropertyValueObject;
    // Field size check
    static_assert(sizeof(::PowerUI::Css::Value*) == 0x8);
    // public PowerUI.AnimatedProperty PropertyAfter
    // Size: 0x8
    // Offset: 0x60
    ::PowerUI::AnimatedProperty* PropertyAfter;
    // Field size check
    static_assert(sizeof(::PowerUI::AnimatedProperty*) == 0x8);
    // public PowerUI.AnimatedProperty PropertyBefore
    // Size: 0x8
    // Offset: 0x68
    ::PowerUI::AnimatedProperty* PropertyBefore;
    // Field size check
    static_assert(sizeof(::PowerUI::AnimatedProperty*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 Stage
    [[deprecated("Use field access instead!")]] int& dyn_Stage();
    // Get instance field reference: public System.Single Speed
    [[deprecated("Use field access instead!")]] float& dyn_Speed();
    // Get instance field reference: public System.Single MaxSpeed
    [[deprecated("Use field access instead!")]] float& dyn_MaxSpeed();
    // Get instance field reference: public System.Boolean UpdateCss
    [[deprecated("Use field access instead!")]] bool& dyn_UpdateCss();
    // Get instance field reference: public System.Int32 InnerIndex
    [[deprecated("Use field access instead!")]] int& dyn_InnerIndex();
    // Get instance field reference: public System.Boolean Decelerate
    [[deprecated("Use field access instead!")]] bool& dyn_Decelerate();
    // Get instance field reference: public System.Single CurrentTime
    [[deprecated("Use field access instead!")]] float& dyn_CurrentTime();
    // Get instance field reference: public System.Single ActiveValue
    [[deprecated("Use field access instead!")]] float& dyn_ActiveValue();
    // Get instance field reference: public System.Single TargetValue
    [[deprecated("Use field access instead!")]] float& dyn_TargetValue();
    // Get instance field reference: public System.Single Acceleration
    [[deprecated("Use field access instead!")]] float& dyn_Acceleration();
    // Get instance field reference: public System.Single Deceleration
    [[deprecated("Use field access instead!")]] float& dyn_Deceleration();
    // Get instance field reference: public PowerUI.UIAnimation Animation
    [[deprecated("Use field access instead!")]] ::PowerUI::UIAnimation*& dyn_Animation();
    // Get instance field reference: public PowerUI.Css.Value ValueObject
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::Value*& dyn_ValueObject();
    // Get instance field reference: public PowerUI.Css.CssProperty PropertyInfo
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::CssProperty*& dyn_PropertyInfo();
    // Get instance field reference: public PowerUI.Css.Value PropertyValueObject
    [[deprecated("Use field access instead!")]] ::PowerUI::Css::Value*& dyn_PropertyValueObject();
    // Get instance field reference: public PowerUI.AnimatedProperty PropertyAfter
    [[deprecated("Use field access instead!")]] ::PowerUI::AnimatedProperty*& dyn_PropertyAfter();
    // Get instance field reference: public PowerUI.AnimatedProperty PropertyBefore
    [[deprecated("Use field access instead!")]] ::PowerUI::AnimatedProperty*& dyn_PropertyBefore();
    // public System.Void .ctor(PowerUI.UIAnimation animation, PowerUI.Css.CssProperty property, System.Int32 innerIndex, PowerUI.Css.Value targetValue, System.Single constantSpeedTime, System.Single timeToAccelerateFor, System.Single timeToDecelerateFor, System.Boolean updateCss)
    // Offset: 0xEB6CB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedProperty* New_ctor(::PowerUI::UIAnimation* animation, ::PowerUI::Css::CssProperty* property, int innerIndex, ::PowerUI::Css::Value* targetValue, float constantSpeedTime, float timeToAccelerateFor, float timeToDecelerateFor, bool updateCss) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::AnimatedProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedProperty*, creationType>(animation, property, innerIndex, targetValue, constantSpeedTime, timeToAccelerateFor, timeToDecelerateFor, updateCss)));
    }
    // public System.Void Animate(PowerUI.UIAnimation animation, System.String targetValue, System.Single constantSpeedTime, System.Single timeToAccelerateFor, System.Single timeToDecelerateFor, System.Boolean updateCss)
    // Offset: 0xEB71BC
    void Animate(::PowerUI::UIAnimation* animation, ::StringW targetValue, float constantSpeedTime, float timeToAccelerateFor, float timeToDecelerateFor, bool updateCss);
    // public System.Void Animate(PowerUI.UIAnimation animation, PowerUI.Css.Value targetValue, System.Single constantSpeedTime, System.Single timeToAccelerateFor, System.Single timeToDecelerateFor, System.Boolean updateCss)
    // Offset: 0xEB702C
    void Animate(::PowerUI::UIAnimation* animation, ::PowerUI::Css::Value* targetValue, float constantSpeedTime, float timeToAccelerateFor, float timeToDecelerateFor, bool updateCss);
    // public System.Void Update()
    // Offset: 0xEB7288
    void Update();
    // public System.Void AddToQueue()
    // Offset: 0xEB761C
    void AddToQueue();
    // public System.Void Stop()
    // Offset: 0xEB7590
    void Stop();
    // public System.String get_Property()
    // Offset: 0xEB76BC
    ::StringW get_Property();
    // public PowerUI.Element get_Animating()
    // Offset: 0xEB76E8
    ::PowerUI::Element* get_Animating();
  }; // PowerUI.AnimatedProperty
  #pragma pack(pop)
  static check_size<sizeof(AnimatedProperty), 104 + sizeof(::PowerUI::AnimatedProperty*)> __PowerUI_AnimatedPropertySizeCheck;
  static_assert(sizeof(AnimatedProperty) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::AnimatedProperty::*)(::PowerUI::UIAnimation*, ::StringW, float, float, float, bool)>(&PowerUI::AnimatedProperty::Animate)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("PowerUI", "UIAnimation")->byval_arg;
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* constantSpeedTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToAccelerateFor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToDecelerateFor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* updateCss = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::AnimatedProperty*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation, targetValue, constantSpeedTime, timeToAccelerateFor, timeToDecelerateFor, updateCss});
  }
};
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::AnimatedProperty::*)(::PowerUI::UIAnimation*, ::PowerUI::Css::Value*, float, float, float, bool)>(&PowerUI::AnimatedProperty::Animate)> {
  static const MethodInfo* get() {
    static auto* animation = &::il2cpp_utils::GetClassFromName("PowerUI", "UIAnimation")->byval_arg;
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("PowerUI.Css", "Value")->byval_arg;
    static auto* constantSpeedTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToAccelerateFor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToDecelerateFor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* updateCss = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::AnimatedProperty*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animation, targetValue, constantSpeedTime, timeToAccelerateFor, timeToDecelerateFor, updateCss});
  }
};
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::AnimatedProperty::*)()>(&PowerUI::AnimatedProperty::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::AnimatedProperty*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::AddToQueue
// Il2CppName: AddToQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::AnimatedProperty::*)()>(&PowerUI::AnimatedProperty::AddToQueue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::AnimatedProperty*), "AddToQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::AnimatedProperty::*)()>(&PowerUI::AnimatedProperty::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::AnimatedProperty*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::get_Property
// Il2CppName: get_Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::AnimatedProperty::*)()>(&PowerUI::AnimatedProperty::get_Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::AnimatedProperty*), "get_Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::AnimatedProperty::get_Animating
// Il2CppName: get_Animating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::Element* (PowerUI::AnimatedProperty::*)()>(&PowerUI::AnimatedProperty::get_Animating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::AnimatedProperty*), "get_Animating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
