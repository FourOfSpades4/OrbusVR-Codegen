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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FMODAsset
  class FMODAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FMOD_StudioEventEmitter
  class FMOD_StudioEventEmitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FMOD_StudioEventEmitter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FMOD_StudioEventEmitter*, "", "FMOD_StudioEventEmitter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: FMOD_StudioEventEmitter
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AC1218
  class FMOD_StudioEventEmitter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [HeaderAttribute] Offset: 0xAC28FC
    // public FMODAsset asset
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FMODAsset* asset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FMODAsset*) == 0x8);
    // public System.String path
    // Size: 0x8
    // Offset: 0x20
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean startEventOnAwake
    // Size: 0x1
    // Offset: 0x28
    bool startEventOnAwake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public FMODAsset asset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FMODAsset*& dyn_asset();
    // Get instance field reference: public System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // Get instance field reference: public System.Boolean startEventOnAwake
    [[deprecated("Use field access instead!")]] bool& dyn_startEventOnAwake();
    // public System.Void .ctor()
    // Offset: 0x15DC970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FMOD_StudioEventEmitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FMOD_StudioEventEmitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FMOD_StudioEventEmitter*, creationType>()));
    }
  }; // FMOD_StudioEventEmitter
  #pragma pack(pop)
  static check_size<sizeof(FMOD_StudioEventEmitter), 40 + sizeof(bool)> __GlobalNamespace_FMOD_StudioEventEmitterSizeCheck;
  static_assert(sizeof(FMOD_StudioEventEmitter) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FMOD_StudioEventEmitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!