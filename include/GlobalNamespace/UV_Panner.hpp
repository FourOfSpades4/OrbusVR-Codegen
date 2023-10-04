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
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UV_Panner
  class UV_Panner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UV_Panner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UV_Panner*, "", "UV_Panner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: UV_Panner
  // [TokenAttribute] Offset: FFFFFFFF
  class UV_Panner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Material mat
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* mat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Renderer rend
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Renderer* rend;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private System.Single step
    // Size: 0x4
    // Offset: 0x28
    float step;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single framerate
    // Size: 0x4
    // Offset: 0x2C
    float framerate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single frameDelta
    // Size: 0x4
    // Offset: 0x30
    float frameDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single elapsedTime
    // Size: 0x4
    // Offset: 0x34
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single curOffset
    // Size: 0x4
    // Offset: 0x38
    float curOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Material mat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_mat();
    // Get instance field reference: private UnityEngine.Renderer rend
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_rend();
    // Get instance field reference: private System.Single step
    [[deprecated("Use field access instead!")]] float& dyn_step();
    // Get instance field reference: public System.Single framerate
    [[deprecated("Use field access instead!")]] float& dyn_framerate();
    // Get instance field reference: private System.Single frameDelta
    [[deprecated("Use field access instead!")]] float& dyn_frameDelta();
    // Get instance field reference: private System.Single elapsedTime
    [[deprecated("Use field access instead!")]] float& dyn_elapsedTime();
    // Get instance field reference: private System.Single curOffset
    [[deprecated("Use field access instead!")]] float& dyn_curOffset();
    // private System.Void Start()
    // Offset: 0xFE33DC
    void Start();
    // private System.Void Update()
    // Offset: 0xFE3478
    void Update();
    // public System.Void .ctor()
    // Offset: 0xFE3544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UV_Panner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UV_Panner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UV_Panner*, creationType>()));
    }
  }; // UV_Panner
  #pragma pack(pop)
  static check_size<sizeof(UV_Panner), 56 + sizeof(float)> __GlobalNamespace_UV_PannerSizeCheck;
  static_assert(sizeof(UV_Panner) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UV_Panner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UV_Panner::*)()>(&GlobalNamespace::UV_Panner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UV_Panner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UV_Panner::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UV_Panner::*)()>(&GlobalNamespace::UV_Panner::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UV_Panner*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UV_Panner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!