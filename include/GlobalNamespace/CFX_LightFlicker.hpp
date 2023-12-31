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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CFX_LightFlicker
  class CFX_LightFlicker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CFX_LightFlicker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CFX_LightFlicker*, "", "CFX_LightFlicker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CFX_LightFlicker
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACDD64
  class CFX_LightFlicker : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean loop
    // Size: 0x1
    // Offset: 0x18
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: smoothFactor
    char __padding0[0x3] = {};
    // public System.Single smoothFactor
    // Size: 0x4
    // Offset: 0x1C
    float smoothFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single addIntensity
    // Size: 0x4
    // Offset: 0x20
    float addIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single minIntensity
    // Size: 0x4
    // Offset: 0x24
    float minIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maxIntensity
    // Size: 0x4
    // Offset: 0x28
    float maxIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single baseIntensity
    // Size: 0x4
    // Offset: 0x2C
    float baseIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean loop
    [[deprecated("Use field access instead!")]] bool& dyn_loop();
    // Get instance field reference: public System.Single smoothFactor
    [[deprecated("Use field access instead!")]] float& dyn_smoothFactor();
    // Get instance field reference: public System.Single addIntensity
    [[deprecated("Use field access instead!")]] float& dyn_addIntensity();
    // Get instance field reference: private System.Single minIntensity
    [[deprecated("Use field access instead!")]] float& dyn_minIntensity();
    // Get instance field reference: private System.Single maxIntensity
    [[deprecated("Use field access instead!")]] float& dyn_maxIntensity();
    // Get instance field reference: private System.Single baseIntensity
    [[deprecated("Use field access instead!")]] float& dyn_baseIntensity();
    // private System.Void Awake()
    // Offset: 0xDDD080
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0xDDD0F0
    void OnEnable();
    // private System.Void Update()
    // Offset: 0xDDD104
    void Update();
    // public System.Void .ctor()
    // Offset: 0xDDD1E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFX_LightFlicker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CFX_LightFlicker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFX_LightFlicker*, creationType>()));
    }
  }; // CFX_LightFlicker
  #pragma pack(pop)
  static check_size<sizeof(CFX_LightFlicker), 44 + sizeof(float)> __GlobalNamespace_CFX_LightFlickerSizeCheck;
  static_assert(sizeof(CFX_LightFlicker) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CFX_LightFlicker::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CFX_LightFlicker::*)()>(&GlobalNamespace::CFX_LightFlicker::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CFX_LightFlicker*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CFX_LightFlicker::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CFX_LightFlicker::*)()>(&GlobalNamespace::CFX_LightFlicker::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CFX_LightFlicker*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CFX_LightFlicker::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CFX_LightFlicker::*)()>(&GlobalNamespace::CFX_LightFlicker::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CFX_LightFlicker*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CFX_LightFlicker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
