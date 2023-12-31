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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DonkeyCartWheel
  class DonkeyCartWheel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DonkeyCartWheel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DonkeyCartWheel*, "", "DonkeyCartWheel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: DonkeyCartWheel
  // [TokenAttribute] Offset: FFFFFFFF
  class DonkeyCartWheel : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform trans
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* trans;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 currentPosition
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 currentPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single dist
    // Size: 0x4
    // Offset: 0x38
    float dist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single wheelCircumf
    // Size: 0x4
    // Offset: 0x3C
    float wheelCircumf;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform trans
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_trans();
    // Get instance field reference: private UnityEngine.Vector3 currentPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_currentPosition();
    // Get instance field reference: private UnityEngine.Vector3 lastPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastPosition();
    // Get instance field reference: private System.Single dist
    [[deprecated("Use field access instead!")]] float& dyn_dist();
    // Get instance field reference: private System.Single wheelCircumf
    [[deprecated("Use field access instead!")]] float& dyn_wheelCircumf();
    // private System.Void Start()
    // Offset: 0xF43E4C
    void Start();
    // private System.Void Update()
    // Offset: 0xF43F50
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF440AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DonkeyCartWheel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DonkeyCartWheel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DonkeyCartWheel*, creationType>()));
    }
  }; // DonkeyCartWheel
  #pragma pack(pop)
  static check_size<sizeof(DonkeyCartWheel), 60 + sizeof(float)> __GlobalNamespace_DonkeyCartWheelSizeCheck;
  static_assert(sizeof(DonkeyCartWheel) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DonkeyCartWheel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DonkeyCartWheel::*)()>(&GlobalNamespace::DonkeyCartWheel::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DonkeyCartWheel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DonkeyCartWheel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DonkeyCartWheel::*)()>(&GlobalNamespace::DonkeyCartWheel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DonkeyCartWheel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DonkeyCartWheel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
