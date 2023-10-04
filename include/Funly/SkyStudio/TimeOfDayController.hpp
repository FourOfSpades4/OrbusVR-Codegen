// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Funly::SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: SkyProfile
  class SkyProfile;
  // Forward declaring type: SkyMaterialController
  class SkyMaterialController;
  // Forward declaring type: OrbitingBody
  class OrbitingBody;
  // Forward declaring type: WeatherController
  class WeatherController;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: TimeOfDayController
  class TimeOfDayController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::TimeOfDayController);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::TimeOfDayController*, "Funly.SkyStudio", "TimeOfDayController");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.TimeOfDayController
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeOfDayController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange
    class TimeOfDayDidChange;
    public:
    // [TooltipAttribute] Offset: 0xAE2648
    // private Funly.SkyStudio.SkyProfile m_SkyProfile
    // Size: 0x8
    // Offset: 0x18
    ::Funly::SkyStudio::SkyProfile* m_SkyProfile;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::SkyProfile*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE2694
    // private System.Single m_SkyTime
    // Size: 0x4
    // Offset: 0x20
    float m_SkyTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAE26E0
    // public System.Boolean automaticTimeIncrement
    // Size: 0x1
    // Offset: 0x24
    bool automaticTimeIncrement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xAE2718
    // public System.Boolean copySkyProfile
    // Size: 0x1
    // Offset: 0x25
    bool copySkyProfile;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: copySkyProfile and: m_SkyMaterialController
    char __padding3[0x2] = {};
    // private Funly.SkyStudio.SkyMaterialController m_SkyMaterialController
    // Size: 0x8
    // Offset: 0x28
    ::Funly::SkyStudio::SkyMaterialController* m_SkyMaterialController;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::SkyMaterialController*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE2750
    // [RangeAttribute] Offset: 0xAE2750
    // public System.Single automaticIncrementSpeed
    // Size: 0x4
    // Offset: 0x30
    float automaticIncrementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: automaticIncrementSpeed and: sunOrbit
    char __padding5[0x4] = {};
    // [TooltipAttribute] Offset: 0xAE27A4
    // public Funly.SkyStudio.OrbitingBody sunOrbit
    // Size: 0x8
    // Offset: 0x38
    ::Funly::SkyStudio::OrbitingBody* sunOrbit;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::OrbitingBody*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE27DC
    // public Funly.SkyStudio.OrbitingBody moonOrbit
    // Size: 0x8
    // Offset: 0x40
    ::Funly::SkyStudio::OrbitingBody* moonOrbit;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::OrbitingBody*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE2814
    // public Funly.SkyStudio.WeatherController weatherController
    // Size: 0x8
    // Offset: 0x48
    ::Funly::SkyStudio::WeatherController* weatherController;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::WeatherController*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE284C
    // public System.Boolean updateGlobalIllumination
    // Size: 0x1
    // Offset: 0x50
    bool updateGlobalIllumination;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateGlobalIllumination and: timeChangedCallback
    char __padding9[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAE2884
    // private Funly.SkyStudio.TimeOfDayController/TimeOfDayDidChange timeChangedCallback
    // Size: 0x8
    // Offset: 0x58
    ::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange* timeChangedCallback;
    // Field size check
    static_assert(sizeof(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [CompilerGeneratedAttribute] Offset: 0xAE2638
    // Get static field: static private Funly.SkyStudio.TimeOfDayController <instance>k__BackingField
    static ::Funly::SkyStudio::TimeOfDayController* _get_$instance$k__BackingField();
    // Set static field: static private Funly.SkyStudio.TimeOfDayController <instance>k__BackingField
    static void _set_$instance$k__BackingField(::Funly::SkyStudio::TimeOfDayController* value);
    // Get instance field reference: private Funly.SkyStudio.SkyProfile m_SkyProfile
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::SkyProfile*& dyn_m_SkyProfile();
    // Get instance field reference: private System.Single m_SkyTime
    [[deprecated("Use field access instead!")]] float& dyn_m_SkyTime();
    // Get instance field reference: public System.Boolean automaticTimeIncrement
    [[deprecated("Use field access instead!")]] bool& dyn_automaticTimeIncrement();
    // Get instance field reference: public System.Boolean copySkyProfile
    [[deprecated("Use field access instead!")]] bool& dyn_copySkyProfile();
    // Get instance field reference: private Funly.SkyStudio.SkyMaterialController m_SkyMaterialController
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::SkyMaterialController*& dyn_m_SkyMaterialController();
    // Get instance field reference: public System.Single automaticIncrementSpeed
    [[deprecated("Use field access instead!")]] float& dyn_automaticIncrementSpeed();
    // Get instance field reference: public Funly.SkyStudio.OrbitingBody sunOrbit
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::OrbitingBody*& dyn_sunOrbit();
    // Get instance field reference: public Funly.SkyStudio.OrbitingBody moonOrbit
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::OrbitingBody*& dyn_moonOrbit();
    // Get instance field reference: public Funly.SkyStudio.WeatherController weatherController
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::WeatherController*& dyn_weatherController();
    // Get instance field reference: public System.Boolean updateGlobalIllumination
    [[deprecated("Use field access instead!")]] bool& dyn_updateGlobalIllumination();
    // Get instance field reference: private Funly.SkyStudio.TimeOfDayController/TimeOfDayDidChange timeChangedCallback
    [[deprecated("Use field access instead!")]] ::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*& dyn_timeChangedCallback();
    // static public Funly.SkyStudio.TimeOfDayController get_instance()
    // Offset: 0x15226B4
    static ::Funly::SkyStudio::TimeOfDayController* get_instance();
    // static private System.Void set_instance(Funly.SkyStudio.TimeOfDayController value)
    // Offset: 0x1522704
    static void set_instance(::Funly::SkyStudio::TimeOfDayController* value);
    // public Funly.SkyStudio.SkyProfile get_skyProfile()
    // Offset: 0x1522758
    ::Funly::SkyStudio::SkyProfile* get_skyProfile();
    // public System.Void set_skyProfile(Funly.SkyStudio.SkyProfile value)
    // Offset: 0x1522760
    void set_skyProfile(::Funly::SkyStudio::SkyProfile* value);
    // public System.Single get_skyTime()
    // Offset: 0x15251FC
    float get_skyTime();
    // public System.Void set_skyTime(System.Single value)
    // Offset: 0x1525204
    void set_skyTime(float value);
    // public Funly.SkyStudio.SkyMaterialController get_SkyMaterial()
    // Offset: 0x152527C
    ::Funly::SkyStudio::SkyMaterialController* get_SkyMaterial();
    // public System.Void add_timeChangedCallback(Funly.SkyStudio.TimeOfDayController/TimeOfDayDidChange value)
    // Offset: 0x1525284
    void add_timeChangedCallback(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange* value);
    // public System.Void remove_timeChangedCallback(Funly.SkyStudio.TimeOfDayController/TimeOfDayDidChange value)
    // Offset: 0x1525370
    void remove_timeChangedCallback(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange* value);
    // public System.Single get_timeOfDay()
    // Offset: 0x152545C
    float get_timeOfDay();
    // public System.Int32 get_daysElapsed()
    // Offset: 0x1525470
    int get_daysElapsed();
    // private System.Void Awake()
    // Offset: 0x152547C
    void Awake();
    // private System.Void OnEnabled()
    // Offset: 0x15254D0
    void OnEnabled();
    // private System.Void OnValidate()
    // Offset: 0x15254D8
    void OnValidate();
    // private System.Void Update()
    // Offset: 0x1525538
    void Update();
    // public System.Void UpdateGlobalIllumination()
    // Offset: 0x152553C
    void UpdateGlobalIllumination();
    // private System.Void SynchronizeAllShaderKeywords()
    // Offset: 0x1525020
    void SynchronizeAllShaderKeywords();
    // private System.Void SynchronizedShaderKeyword(System.String featureKey, System.String shaderKeyword)
    // Offset: 0x1525544
    void SynchronizedShaderKeyword(::StringW featureKey, ::StringW shaderKeyword);
    // public System.Void UpdateSkyForCurrentTime()
    // Offset: 0x152282C
    void UpdateSkyForCurrentTime();
    // public System.Void .ctor()
    // Offset: 0x1525E84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeOfDayController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::TimeOfDayController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeOfDayController*, creationType>()));
    }
  }; // Funly.SkyStudio.TimeOfDayController
  #pragma pack(pop)
  static check_size<sizeof(TimeOfDayController), 88 + sizeof(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*)> __Funly_SkyStudio_TimeOfDayControllerSizeCheck;
  static_assert(sizeof(TimeOfDayController) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Funly::SkyStudio::TimeOfDayController* (*)()>(&Funly::SkyStudio::TimeOfDayController::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::set_instance
// Il2CppName: set_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Funly::SkyStudio::TimeOfDayController*)>(&Funly::SkyStudio::TimeOfDayController::set_instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "TimeOfDayController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "set_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::get_skyProfile
// Il2CppName: get_skyProfile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Funly::SkyStudio::SkyProfile* (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::get_skyProfile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "get_skyProfile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::set_skyProfile
// Il2CppName: set_skyProfile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)(::Funly::SkyStudio::SkyProfile*)>(&Funly::SkyStudio::TimeOfDayController::set_skyProfile)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "SkyProfile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "set_skyProfile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::get_skyTime
// Il2CppName: get_skyTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::get_skyTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "get_skyTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::set_skyTime
// Il2CppName: set_skyTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)(float)>(&Funly::SkyStudio::TimeOfDayController::set_skyTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "set_skyTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::get_SkyMaterial
// Il2CppName: get_SkyMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Funly::SkyStudio::SkyMaterialController* (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::get_SkyMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "get_SkyMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::add_timeChangedCallback
// Il2CppName: add_timeChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*)>(&Funly::SkyStudio::TimeOfDayController::add_timeChangedCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "TimeOfDayController/TimeOfDayDidChange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "add_timeChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::remove_timeChangedCallback
// Il2CppName: remove_timeChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)(::Funly::SkyStudio::TimeOfDayController::TimeOfDayDidChange*)>(&Funly::SkyStudio::TimeOfDayController::remove_timeChangedCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "TimeOfDayController/TimeOfDayDidChange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "remove_timeChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::get_timeOfDay
// Il2CppName: get_timeOfDay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::get_timeOfDay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "get_timeOfDay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::get_daysElapsed
// Il2CppName: get_daysElapsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::get_daysElapsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "get_daysElapsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::OnEnabled
// Il2CppName: OnEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::OnEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "OnEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::UpdateGlobalIllumination
// Il2CppName: UpdateGlobalIllumination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::UpdateGlobalIllumination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "UpdateGlobalIllumination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::SynchronizeAllShaderKeywords
// Il2CppName: SynchronizeAllShaderKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::SynchronizeAllShaderKeywords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "SynchronizeAllShaderKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::SynchronizedShaderKeyword
// Il2CppName: SynchronizedShaderKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)(::StringW, ::StringW)>(&Funly::SkyStudio::TimeOfDayController::SynchronizedShaderKeyword)> {
  static const MethodInfo* get() {
    static auto* featureKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* shaderKeyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "SynchronizedShaderKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{featureKey, shaderKeyword});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::UpdateSkyForCurrentTime
// Il2CppName: UpdateSkyForCurrentTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::TimeOfDayController::*)()>(&Funly::SkyStudio::TimeOfDayController::UpdateSkyForCurrentTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::TimeOfDayController*), "UpdateSkyForCurrentTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::TimeOfDayController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!