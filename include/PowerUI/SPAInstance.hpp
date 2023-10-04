// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: SPA
  class SPA;
  // Forward declaring type: SPASprite
  class SPASprite;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: SPAInstance
  class SPAInstance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::SPAInstance);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::SPAInstance*, "PowerUI", "SPAInstance");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.SPAInstance
  // [TokenAttribute] Offset: FFFFFFFF
  class SPAInstance : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean Done
    // Size: 0x1
    // Offset: 0x10
    bool Done;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Done and: AtFrame
    char __padding0[0x3] = {};
    // public System.Int32 AtFrame
    // Size: 0x4
    // Offset: 0x14
    int AtFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public PowerUI.SPA Animation
    // Size: 0x8
    // Offset: 0x18
    ::PowerUI::SPA* Animation;
    // Field size check
    static_assert(sizeof(::PowerUI::SPA*) == 0x8);
    // public System.Boolean Loop
    // Size: 0x1
    // Offset: 0x20
    bool Loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Loop and: OverallFrame
    char __padding3[0x3] = {};
    // public System.Int32 OverallFrame
    // Size: 0x4
    // Offset: 0x24
    int OverallFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single FrameDelay
    // Size: 0x4
    // Offset: 0x28
    float FrameDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CurrentDelay
    // Size: 0x4
    // Offset: 0x2C
    float CurrentDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public PowerUI.SPASprite CurrentSprite
    // Size: 0x8
    // Offset: 0x30
    ::PowerUI::SPASprite* CurrentSprite;
    // Field size check
    static_assert(sizeof(::PowerUI::SPASprite*) == 0x8);
    // public UnityEngine.Material AnimatedMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* AnimatedMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public PowerUI.SPAInstance InstanceAfter
    // Size: 0x8
    // Offset: 0x40
    ::PowerUI::SPAInstance* InstanceAfter;
    // Field size check
    static_assert(sizeof(::PowerUI::SPAInstance*) == 0x8);
    // public PowerUI.SPAInstance InstanceBefore
    // Size: 0x8
    // Offset: 0x48
    ::PowerUI::SPAInstance* InstanceBefore;
    // Field size check
    static_assert(sizeof(::PowerUI::SPAInstance*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean Done
    [[deprecated("Use field access instead!")]] bool& dyn_Done();
    // Get instance field reference: public System.Int32 AtFrame
    [[deprecated("Use field access instead!")]] int& dyn_AtFrame();
    // Get instance field reference: public PowerUI.SPA Animation
    [[deprecated("Use field access instead!")]] ::PowerUI::SPA*& dyn_Animation();
    // Get instance field reference: public System.Boolean Loop
    [[deprecated("Use field access instead!")]] bool& dyn_Loop();
    // Get instance field reference: public System.Int32 OverallFrame
    [[deprecated("Use field access instead!")]] int& dyn_OverallFrame();
    // Get instance field reference: public System.Single FrameDelay
    [[deprecated("Use field access instead!")]] float& dyn_FrameDelay();
    // Get instance field reference: public System.Single CurrentDelay
    [[deprecated("Use field access instead!")]] float& dyn_CurrentDelay();
    // Get instance field reference: public PowerUI.SPASprite CurrentSprite
    [[deprecated("Use field access instead!")]] ::PowerUI::SPASprite*& dyn_CurrentSprite();
    // Get instance field reference: public UnityEngine.Material AnimatedMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_AnimatedMaterial();
    // Get instance field reference: public PowerUI.SPAInstance InstanceAfter
    [[deprecated("Use field access instead!")]] ::PowerUI::SPAInstance*& dyn_InstanceAfter();
    // Get instance field reference: public PowerUI.SPAInstance InstanceBefore
    [[deprecated("Use field access instead!")]] ::PowerUI::SPAInstance*& dyn_InstanceBefore();
    // public System.Void .ctor(PowerUI.SPA animation)
    // Offset: 0x1770384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SPAInstance* New_ctor(::PowerUI::SPA* animation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::SPAInstance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SPAInstance*, creationType>(animation)));
    }
    // public System.Void Update()
    // Offset: 0x176F384
    void Update();
    // private System.Void SetSprite(System.Int32 index)
    // Offset: 0x1770C98
    void SetSprite(int index);
    // public System.Void Stop()
    // Offset: 0x1770DA8
    void Stop();
  }; // PowerUI.SPAInstance
  #pragma pack(pop)
  static check_size<sizeof(SPAInstance), 72 + sizeof(::PowerUI::SPAInstance*)> __PowerUI_SPAInstanceSizeCheck;
  static_assert(sizeof(SPAInstance) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::SPAInstance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::SPAInstance::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::SPAInstance::*)()>(&PowerUI::SPAInstance::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SPAInstance*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SPAInstance::SetSprite
// Il2CppName: SetSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::SPAInstance::*)(int)>(&PowerUI::SPAInstance::SetSprite)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SPAInstance*), "SetSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: PowerUI::SPAInstance::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::SPAInstance::*)()>(&PowerUI::SPAInstance::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SPAInstance*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
