// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DoorController
  class DoorController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DoorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DoorController*, "", "DoorController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: DoorController
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: ACD374
  class DoorController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean open
    // Size: 0x1
    // Offset: 0x18
    bool open;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: open and: opentag
    char __padding0[0x3] = {};
    // public System.Int32 opentag
    // Size: 0x4
    // Offset: 0x1C
    int opentag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 closedtag
    // Size: 0x4
    // Offset: 0x20
    int closedtag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean updateGraphsWithGUO
    // Size: 0x1
    // Offset: 0x24
    bool updateGraphsWithGUO;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateGraphsWithGUO and: yOffset
    char __padding3[0x3] = {};
    // public System.Single yOffset
    // Size: 0x4
    // Offset: 0x28
    float yOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Bounds bounds
    // Size: 0x18
    // Offset: 0x2C
    ::UnityEngine::Bounds bounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean open
    [[deprecated("Use field access instead!")]] bool& dyn_open();
    // Get instance field reference: public System.Int32 opentag
    [[deprecated("Use field access instead!")]] int& dyn_opentag();
    // Get instance field reference: public System.Int32 closedtag
    [[deprecated("Use field access instead!")]] int& dyn_closedtag();
    // Get instance field reference: public System.Boolean updateGraphsWithGUO
    [[deprecated("Use field access instead!")]] bool& dyn_updateGraphsWithGUO();
    // Get instance field reference: public System.Single yOffset
    [[deprecated("Use field access instead!")]] float& dyn_yOffset();
    // Get instance field reference: private UnityEngine.Bounds bounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn_bounds();
    // public System.Void Start()
    // Offset: 0xF44134
    void Start();
    // private System.Void OnGUI()
    // Offset: 0xF44384
    void OnGUI();
    // public System.Void SetState(System.Boolean open)
    // Offset: 0xF441C8
    void SetState(bool open);
    // public System.Void .ctor()
    // Offset: 0xF44444
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DoorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DoorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DoorController*, creationType>()));
    }
  }; // DoorController
  #pragma pack(pop)
  static check_size<sizeof(DoorController), 44 + sizeof(::UnityEngine::Bounds)> __GlobalNamespace_DoorControllerSizeCheck;
  static_assert(sizeof(DoorController) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DoorController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DoorController::*)()>(&GlobalNamespace::DoorController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DoorController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DoorController::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DoorController::*)()>(&GlobalNamespace::DoorController::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DoorController*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DoorController::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DoorController::*)(bool)>(&GlobalNamespace::DoorController::SetState)> {
  static const MethodInfo* get() {
    static auto* open = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DoorController*), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{open});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DoorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!