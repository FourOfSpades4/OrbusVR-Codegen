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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: LinearMapping
  class LinearMapping;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
  // Forward declaring type: AnimationState
  class AnimationState;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: LinearAnimation
  class LinearAnimation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::LinearAnimation);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::LinearAnimation*, "Valve.VR.InteractionSystem", "LinearAnimation");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.LinearAnimation
  // [TokenAttribute] Offset: FFFFFFFF
  class LinearAnimation : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public Valve.VR.InteractionSystem.LinearMapping linearMapping
    // Size: 0x8
    // Offset: 0x18
    ::Valve::VR::InteractionSystem::LinearMapping* linearMapping;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::LinearMapping*) == 0x8);
    // public UnityEngine.Animation animation
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animation*) == 0x8);
    // private UnityEngine.AnimationState animState
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationState* animState;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationState*) == 0x8);
    // private System.Single animLength
    // Size: 0x4
    // Offset: 0x30
    float animLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastValue
    // Size: 0x4
    // Offset: 0x34
    float lastValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Valve.VR.InteractionSystem.LinearMapping linearMapping
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::LinearMapping*& dyn_linearMapping();
    // Get instance field reference: public UnityEngine.Animation animation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animation*& dyn_animation();
    // Get instance field reference: private UnityEngine.AnimationState animState
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationState*& dyn_animState();
    // Get instance field reference: private System.Single animLength
    [[deprecated("Use field access instead!")]] float& dyn_animLength();
    // Get instance field reference: private System.Single lastValue
    [[deprecated("Use field access instead!")]] float& dyn_lastValue();
    // private System.Void Awake()
    // Offset: 0xDB9B34
    void Awake();
    // private System.Void Update()
    // Offset: 0xDB9CE8
    void Update();
    // public System.Void .ctor()
    // Offset: 0xDB9D54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinearAnimation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::LinearAnimation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinearAnimation*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.LinearAnimation
  #pragma pack(pop)
  static check_size<sizeof(LinearAnimation), 52 + sizeof(float)> __Valve_VR_InteractionSystem_LinearAnimationSizeCheck;
  static_assert(sizeof(LinearAnimation) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::LinearAnimation::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::LinearAnimation::*)()>(&Valve::VR::InteractionSystem::LinearAnimation::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::LinearAnimation*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::LinearAnimation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::LinearAnimation::*)()>(&Valve::VR::InteractionSystem::LinearAnimation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::LinearAnimation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::LinearAnimation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
