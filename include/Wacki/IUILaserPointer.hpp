// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Wacki
namespace Wacki {
  // Forward declaring type: IUILaserPointer
  class IUILaserPointer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Wacki::IUILaserPointer);
DEFINE_IL2CPP_ARG_TYPE(::Wacki::IUILaserPointer*, "Wacki", "IUILaserPointer");
// Type namespace: Wacki
namespace Wacki {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Wacki.IUILaserPointer
  // [TokenAttribute] Offset: FFFFFFFF
  class IUILaserPointer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single laserThickness
    // Size: 0x4
    // Offset: 0x18
    float laserThickness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single laserHitScale
    // Size: 0x4
    // Offset: 0x1C
    float laserHitScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean laserAlwaysOn
    // Size: 0x1
    // Offset: 0x20
    bool laserAlwaysOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: laserAlwaysOn and: color
    char __padding2[0x3] = {};
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Boolean pointerIsActive
    // Size: 0x1
    // Offset: 0x34
    bool pointerIsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean pressingTriggerButton
    // Size: 0x1
    // Offset: 0x35
    bool pressingTriggerButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: pressingTriggerButton and: hitPoint
    char __padding5[0x2] = {};
    // private UnityEngine.GameObject hitPoint
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* hitPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject pointer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* pointer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single _distanceLimit
    // Size: 0x4
    // Offset: 0x48
    float distanceLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single laserThickness
    [[deprecated("Use field access instead!")]] float& dyn_laserThickness();
    // Get instance field reference: public System.Single laserHitScale
    [[deprecated("Use field access instead!")]] float& dyn_laserHitScale();
    // Get instance field reference: public System.Boolean laserAlwaysOn
    [[deprecated("Use field access instead!")]] bool& dyn_laserAlwaysOn();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Boolean pointerIsActive
    [[deprecated("Use field access instead!")]] bool& dyn_pointerIsActive();
    // Get instance field reference: public System.Boolean pressingTriggerButton
    [[deprecated("Use field access instead!")]] bool& dyn_pressingTriggerButton();
    // Get instance field reference: private UnityEngine.GameObject hitPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_hitPoint();
    // Get instance field reference: private UnityEngine.GameObject pointer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_pointer();
    // Get instance field reference: private System.Single _distanceLimit
    [[deprecated("Use field access instead!")]] float& dyn__distanceLimit();
    // private System.Void Start()
    // Offset: 0xDD4BC8
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xDD51E8
    void OnDestroy();
    // protected System.Void Initialize()
    // Offset: 0xDD5340
    void Initialize();
    // public System.Void OnEnterControl(UnityEngine.GameObject control)
    // Offset: 0xDD5344
    void OnEnterControl(::UnityEngine::GameObject* control);
    // public System.Void OnExitControl(UnityEngine.GameObject control)
    // Offset: 0xDD5348
    void OnExitControl(::UnityEngine::GameObject* control);
    // public System.Boolean ButtonDown()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ButtonDown();
    // public System.Boolean ButtonUp()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ButtonUp();
    // public System.Boolean ButtonWasDown()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ButtonWasDown();
    // public System.Void ResetButtonWasDown()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResetButtonWasDown();
    // public System.Void RegisterButtonClick()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterButtonClick();
    // public System.Boolean FreshButtonClick()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool FreshButtonClick();
    // protected System.Void Update()
    // Offset: 0xDD534C
    void Update();
    // public System.Void LimitLaserDistance(System.Single distance)
    // Offset: 0xDD56C8
    void LimitLaserDistance(float distance);
    // protected System.Void .ctor()
    // Offset: 0xDD5760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IUILaserPointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Wacki::IUILaserPointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IUILaserPointer*, creationType>()));
    }
  }; // Wacki.IUILaserPointer
  #pragma pack(pop)
  static check_size<sizeof(IUILaserPointer), 72 + sizeof(float)> __Wacki_IUILaserPointerSizeCheck;
  static_assert(sizeof(IUILaserPointer) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Wacki::IUILaserPointer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::OnEnterControl
// Il2CppName: OnEnterControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)(::UnityEngine::GameObject*)>(&Wacki::IUILaserPointer::OnEnterControl)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "OnEnterControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::OnExitControl
// Il2CppName: OnExitControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)(::UnityEngine::GameObject*)>(&Wacki::IUILaserPointer::OnExitControl)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "OnExitControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::ButtonDown
// Il2CppName: ButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::ButtonDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "ButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::ButtonUp
// Il2CppName: ButtonUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::ButtonUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "ButtonUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::ButtonWasDown
// Il2CppName: ButtonWasDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::ButtonWasDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "ButtonWasDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::ResetButtonWasDown
// Il2CppName: ResetButtonWasDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::ResetButtonWasDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "ResetButtonWasDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::RegisterButtonClick
// Il2CppName: RegisterButtonClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::RegisterButtonClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "RegisterButtonClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::FreshButtonClick
// Il2CppName: FreshButtonClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::FreshButtonClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "FreshButtonClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)()>(&Wacki::IUILaserPointer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::LimitLaserDistance
// Il2CppName: LimitLaserDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wacki::IUILaserPointer::*)(float)>(&Wacki::IUILaserPointer::LimitLaserDistance)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wacki::IUILaserPointer*), "LimitLaserDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: Wacki::IUILaserPointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!