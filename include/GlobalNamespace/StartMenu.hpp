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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVROverlay
  class OVROverlay;
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StartMenu
  class StartMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StartMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartMenu*, "", "StartMenu");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StartMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class StartMenu : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::StartMenu::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    public:
    // public OVROverlay overlay
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVROverlay* overlay;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVROverlay*) == 0x8);
    // public OVROverlay text
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVROverlay* text;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVROverlay*) == 0x8);
    // public OVRCameraRig vrRig
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRCameraRig* vrRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVROverlay overlay
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVROverlay*& dyn_overlay();
    // Get instance field reference: public OVROverlay text
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVROverlay*& dyn_text();
    // Get instance field reference: public OVRCameraRig vrRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_vrRig();
    // private System.Void Start()
    // Offset: 0xDFD434
    void Start();
    // private System.Void LoadScene(System.Int32 idx)
    // Offset: 0xDFD640
    void LoadScene(int idx);
    // public System.Void .ctor()
    // Offset: 0xDFD748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StartMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StartMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StartMenu*, creationType>()));
    }
  }; // StartMenu
  #pragma pack(pop)
  static check_size<sizeof(StartMenu), 40 + sizeof(::GlobalNamespace::OVRCameraRig*)> __GlobalNamespace_StartMenuSizeCheck;
  static_assert(sizeof(StartMenu) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StartMenu::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StartMenu::*)()>(&GlobalNamespace::StartMenu::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StartMenu*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StartMenu::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StartMenu::*)(int)>(&GlobalNamespace::StartMenu::LoadScene)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StartMenu*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StartMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!