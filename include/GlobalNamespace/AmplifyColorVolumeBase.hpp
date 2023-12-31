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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: AmplifyColor
namespace AmplifyColor {
  // Forward declaring type: VolumeEffectContainer
  class VolumeEffectContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AmplifyColorVolumeBase
  class AmplifyColorVolumeBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AmplifyColorVolumeBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AmplifyColorVolumeBase*, "", "AmplifyColorVolumeBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyColorVolumeBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ACCDE8
  class AmplifyColorVolumeBase : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Texture2D LutTexture
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* LutTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public System.Single Exposure
    // Size: 0x4
    // Offset: 0x20
    float Exposure;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single EnterBlendTime
    // Size: 0x4
    // Offset: 0x24
    float EnterBlendTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x28
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean ShowInSceneView
    // Size: 0x1
    // Offset: 0x2C
    bool ShowInSceneView;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ShowInSceneView and: EffectContainer
    char __padding4[0x3] = {};
    // public AmplifyColor.VolumeEffectContainer EffectContainer
    // Size: 0x8
    // Offset: 0x30
    ::AmplifyColor::VolumeEffectContainer* EffectContainer;
    // Field size check
    static_assert(sizeof(::AmplifyColor::VolumeEffectContainer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Texture2D LutTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_LutTexture();
    // Get instance field reference: public System.Single Exposure
    [[deprecated("Use field access instead!")]] float& dyn_Exposure();
    // Get instance field reference: public System.Single EnterBlendTime
    [[deprecated("Use field access instead!")]] float& dyn_EnterBlendTime();
    // Get instance field reference: public System.Int32 Priority
    [[deprecated("Use field access instead!")]] int& dyn_Priority();
    // Get instance field reference: public System.Boolean ShowInSceneView
    [[deprecated("Use field access instead!")]] bool& dyn_ShowInSceneView();
    // Get instance field reference: public AmplifyColor.VolumeEffectContainer EffectContainer
    [[deprecated("Use field access instead!")]] ::AmplifyColor::VolumeEffectContainer*& dyn_EffectContainer();
    // private System.Void OnDrawGizmos()
    // Offset: 0xF0936C
    void OnDrawGizmos();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xF095D8
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0xF0905C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmplifyColorVolumeBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AmplifyColorVolumeBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmplifyColorVolumeBase*, creationType>()));
    }
  }; // AmplifyColorVolumeBase
  #pragma pack(pop)
  static check_size<sizeof(AmplifyColorVolumeBase), 48 + sizeof(::AmplifyColor::VolumeEffectContainer*)> __GlobalNamespace_AmplifyColorVolumeBaseSizeCheck;
  static_assert(sizeof(AmplifyColorVolumeBase) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorVolumeBase::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AmplifyColorVolumeBase::*)()>(&GlobalNamespace::AmplifyColorVolumeBase::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AmplifyColorVolumeBase*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorVolumeBase::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AmplifyColorVolumeBase::*)()>(&GlobalNamespace::AmplifyColorVolumeBase::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AmplifyColorVolumeBase*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorVolumeBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
