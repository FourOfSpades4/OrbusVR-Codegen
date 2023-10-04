// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Wacki.IUILaserPointer
#include "Wacki/IUILaserPointer.hpp"
// Including type: Valve.VR.EVRButtonId
#include "Valve/VR/EVRButtonId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_TrackedObject
  class SteamVR_TrackedObject;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Wacki
namespace Wacki {
  // Forward declaring type: ViveUILaserPointer
  class ViveUILaserPointer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Wacki::ViveUILaserPointer);
DEFINE_IL2CPP_ARG_TYPE(::Wacki::ViveUILaserPointer*, "Wacki", "ViveUILaserPointer");
// Type namespace: Wacki
namespace Wacki {
  // Size: 0x63
  #pragma pack(push, 1)
  // Autogenerated type: Wacki.ViveUILaserPointer
  // [TokenAttribute] Offset: FFFFFFFF
  class ViveUILaserPointer : public ::Wacki::IUILaserPointer {
    public:
    public:
    // private Valve.VR.EVRButtonId button
    // Size: 0x4
    // Offset: 0x4C
    ::Valve::VR::EVRButtonId button;
    // Field size check
    static_assert(sizeof(::Valve::VR::EVRButtonId) == 0x4);
    // private SteamVR_TrackedObject _trackedObject
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::SteamVR_TrackedObject* trackedObject;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_TrackedObject*) == 0x8);
    // private System.Boolean _connected
    // Size: 0x1
    // Offset: 0x58
    bool connected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: connected and: index
    char __padding2[0x3] = {};
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x5C
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean buttonWasDown
    // Size: 0x1
    // Offset: 0x60
    bool buttonWasDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean buttonIsDown
    // Size: 0x1
    // Offset: 0x61
    bool buttonIsDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean thisClickRegistered
    // Size: 0x1
    // Offset: 0x62
    bool thisClickRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private Valve.VR.EVRButtonId button
    [[deprecated("Use field access instead!")]] ::Valve::VR::EVRButtonId& dyn_button();
    // Get instance field reference: private SteamVR_TrackedObject _trackedObject
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_TrackedObject*& dyn__trackedObject();
    // Get instance field reference: private System.Boolean _connected
    [[deprecated("Use field access instead!")]] bool& dyn__connected();
    // Get instance field reference: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // Get instance field reference: public System.Boolean buttonWasDown
    [[deprecated("Use field access instead!")]] bool& dyn_buttonWasDown();
    // Get instance field reference: public System.Boolean buttonIsDown
    [[deprecated("Use field access instead!")]] bool& dyn_buttonIsDown();
    // Get instance field reference: public System.Boolean thisClickRegistered
    [[deprecated("Use field access instead!")]] bool& dyn_thisClickRegistered();
    // protected override System.Void Initialize()
    // Offset: 0xDD6E58
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Void IUILaserPointer::Initialize()
    void Initialize();
    // protected override System.Void Update()
    // Offset: 0xDD6F04
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Void IUILaserPointer::Update()
    void Update();
    // public override System.Boolean ButtonDown()
    // Offset: 0xDD6F08
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Boolean IUILaserPointer::ButtonDown()
    bool ButtonDown();
    // public override System.Boolean ButtonUp()
    // Offset: 0xDD6F10
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Boolean IUILaserPointer::ButtonUp()
    bool ButtonUp();
    // public override System.Boolean ButtonWasDown()
    // Offset: 0xDD6F18
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Boolean IUILaserPointer::ButtonWasDown()
    bool ButtonWasDown();
    // public override System.Void ResetButtonWasDown()
    // Offset: 0xDD6F20
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Void IUILaserPointer::ResetButtonWasDown()
    void ResetButtonWasDown();
    // public override System.Void RegisterButtonClick()
    // Offset: 0xDD6F28
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Void IUILaserPointer::RegisterButtonClick()
    void RegisterButtonClick();
    // public override System.Boolean FreshButtonClick()
    // Offset: 0xDD6F34
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Boolean IUILaserPointer::FreshButtonClick()
    bool FreshButtonClick();
    // public override System.Void OnEnterControl(UnityEngine.GameObject control)
    // Offset: 0xDD6F44
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Void IUILaserPointer::OnEnterControl(UnityEngine.GameObject control)
    void OnEnterControl(::UnityEngine::GameObject* control);
    // public override System.Void OnExitControl(UnityEngine.GameObject control)
    // Offset: 0xDD6F48
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Void IUILaserPointer::OnExitControl(UnityEngine.GameObject control)
    void OnExitControl(::UnityEngine::GameObject* control);
    // public System.Void .ctor()
    // Offset: 0xDD6F4C
    // Implemented from: Wacki.IUILaserPointer
    // Base method: System.Void IUILaserPointer::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViveUILaserPointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Wacki::ViveUILaserPointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViveUILaserPointer*, creationType>()));
    }
  }; // Wacki.ViveUILaserPointer
  #pragma pack(pop)
  static check_size<sizeof(ViveUILaserPointer), 98 + sizeof(bool)> __Wacki_ViveUILaserPointerSizeCheck;
  static_assert(sizeof(ViveUILaserPointer) == 0x63);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::ButtonDown
// Il2CppName: ButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::ButtonDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "ButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::ButtonUp
// Il2CppName: ButtonUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::ButtonUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "ButtonUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::ButtonWasDown
// Il2CppName: ButtonWasDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::ButtonWasDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "ButtonWasDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::ResetButtonWasDown
// Il2CppName: ResetButtonWasDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::ResetButtonWasDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "ResetButtonWasDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::RegisterButtonClick
// Il2CppName: RegisterButtonClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::RegisterButtonClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "RegisterButtonClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::FreshButtonClick
// Il2CppName: FreshButtonClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::ViveUILaserPointer::*)()>(&Wacki::ViveUILaserPointer::FreshButtonClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "FreshButtonClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::OnEnterControl
// Il2CppName: OnEnterControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::ViveUILaserPointer::*)(::UnityEngine::GameObject*)>(&Wacki::ViveUILaserPointer::OnEnterControl)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "OnEnterControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::OnExitControl
// Il2CppName: OnExitControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::ViveUILaserPointer::*)(::UnityEngine::GameObject*)>(&Wacki::ViveUILaserPointer::OnExitControl)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wacki::ViveUILaserPointer*), "OnExitControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control});
  }
};
// Writing MetadataGetter for method: Wacki::ViveUILaserPointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
