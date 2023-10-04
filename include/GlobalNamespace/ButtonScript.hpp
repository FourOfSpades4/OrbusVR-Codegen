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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FireProjectile
  class FireProjectile;
  // Forward declaring type: ProjectileScript
  class ProjectileScript;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ButtonScript
  class ButtonScript;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ButtonScript);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ButtonScript*, "", "ButtonScript");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: ButtonScript
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonScript : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject Button
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* Button;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.UI.Text MyButtonText
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* MyButtonText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.String projectileParticleName
    // Size: 0x8
    // Offset: 0x28
    ::StringW projectileParticleName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private FireProjectile effectScript
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::FireProjectile* effectScript;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FireProjectile*) == 0x8);
    // private ProjectileScript projectileScript
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ProjectileScript* projectileScript;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ProjectileScript*) == 0x8);
    // public System.Single buttonsX
    // Size: 0x4
    // Offset: 0x40
    float buttonsX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single buttonsY
    // Size: 0x4
    // Offset: 0x44
    float buttonsY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single buttonsSizeX
    // Size: 0x4
    // Offset: 0x48
    float buttonsSizeX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single buttonsSizeY
    // Size: 0x4
    // Offset: 0x4C
    float buttonsSizeY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single buttonsDistance
    // Size: 0x4
    // Offset: 0x50
    float buttonsDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject Button
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_Button();
    // Get instance field reference: private UnityEngine.UI.Text MyButtonText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_MyButtonText();
    // Get instance field reference: private System.String projectileParticleName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_projectileParticleName();
    // Get instance field reference: private FireProjectile effectScript
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FireProjectile*& dyn_effectScript();
    // Get instance field reference: private ProjectileScript projectileScript
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ProjectileScript*& dyn_projectileScript();
    // Get instance field reference: public System.Single buttonsX
    [[deprecated("Use field access instead!")]] float& dyn_buttonsX();
    // Get instance field reference: public System.Single buttonsY
    [[deprecated("Use field access instead!")]] float& dyn_buttonsY();
    // Get instance field reference: public System.Single buttonsSizeX
    [[deprecated("Use field access instead!")]] float& dyn_buttonsSizeX();
    // Get instance field reference: public System.Single buttonsSizeY
    [[deprecated("Use field access instead!")]] float& dyn_buttonsSizeY();
    // Get instance field reference: public System.Single buttonsDistance
    [[deprecated("Use field access instead!")]] float& dyn_buttonsDistance();
    // private System.Void Start()
    // Offset: 0xDDC634
    void Start();
    // private System.Void Update()
    // Offset: 0xDDC838
    void Update();
    // public System.Void getProjectileNames()
    // Offset: 0xDDC744
    void getProjectileNames();
    // public System.Boolean overButton()
    // Offset: 0xDDC874
    bool overButton();
    // public System.Void LoadStage1()
    // Offset: 0xDDC980
    void LoadStage1();
    // public System.Void LoadStage2()
    // Offset: 0xDDC9EC
    void LoadStage2();
    // public System.Void LoadStage3()
    // Offset: 0xDDCA58
    void LoadStage3();
    // public System.Void LoadStage4()
    // Offset: 0xDDCAC4
    void LoadStage4();
    // public System.Void LoadStage5()
    // Offset: 0xDDCB30
    void LoadStage5();
    // public System.Void LoadStage6()
    // Offset: 0xDDCB9C
    void LoadStage6();
    // public System.Void .ctor()
    // Offset: 0xDDCC08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonScript* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ButtonScript::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonScript*, creationType>()));
    }
  }; // ButtonScript
  #pragma pack(pop)
  static check_size<sizeof(ButtonScript), 80 + sizeof(float)> __GlobalNamespace_ButtonScriptSizeCheck;
  static_assert(sizeof(ButtonScript) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::getProjectileNames
// Il2CppName: getProjectileNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::getProjectileNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "getProjectileNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::overButton
// Il2CppName: overButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::overButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "overButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::LoadStage1
// Il2CppName: LoadStage1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::LoadStage1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "LoadStage1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::LoadStage2
// Il2CppName: LoadStage2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::LoadStage2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "LoadStage2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::LoadStage3
// Il2CppName: LoadStage3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::LoadStage3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "LoadStage3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::LoadStage4
// Il2CppName: LoadStage4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::LoadStage4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "LoadStage4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::LoadStage5
// Il2CppName: LoadStage5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::LoadStage5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "LoadStage5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::LoadStage6
// Il2CppName: LoadStage6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonScript::*)()>(&GlobalNamespace::ButtonScript::LoadStage6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonScript*), "LoadStage6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonScript::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
