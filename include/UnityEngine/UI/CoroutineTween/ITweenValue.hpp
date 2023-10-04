// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Forward declaring type: ITweenValue
  class ITweenValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::CoroutineTween::ITweenValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::ITweenValue*, "UnityEngine.UI.CoroutineTween", "ITweenValue");
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.CoroutineTween.ITweenValue
  // [TokenAttribute] Offset: FFFFFFFF
  class ITweenValue {
    public:
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void TweenValue(float floatPercentage);
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_ignoreTimeScale();
    // public System.Single get_duration()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_duration();
    // public System.Boolean ValidTarget()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ValidTarget();
  }; // UnityEngine.UI.CoroutineTween.ITweenValue
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::TweenValue
// Il2CppName: TweenValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::ITweenValue::*)(float)>(&UnityEngine::UI::CoroutineTween::ITweenValue::TweenValue)> {
  static const MethodInfo* get() {
    static auto* floatPercentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "TweenValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{floatPercentage});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::get_ignoreTimeScale
// Il2CppName: get_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&UnityEngine::UI::CoroutineTween::ITweenValue::get_ignoreTimeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "get_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&UnityEngine::UI::CoroutineTween::ITweenValue::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::ITweenValue::ValidTarget
// Il2CppName: ValidTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&UnityEngine::UI::CoroutineTween::ITweenValue::ValidTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::ITweenValue*), "ValidTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
