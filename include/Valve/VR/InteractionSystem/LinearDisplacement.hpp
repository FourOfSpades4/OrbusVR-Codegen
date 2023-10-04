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
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: LinearMapping
  class LinearMapping;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: LinearDisplacement
  class LinearDisplacement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::LinearDisplacement);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::LinearDisplacement*, "Valve.VR.InteractionSystem", "LinearDisplacement");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.LinearDisplacement
  // [TokenAttribute] Offset: FFFFFFFF
  class LinearDisplacement : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Vector3 displacement
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 displacement;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: displacement and: linearMapping
    char __padding0[0x4] = {};
    // public Valve.VR.InteractionSystem.LinearMapping linearMapping
    // Size: 0x8
    // Offset: 0x28
    ::Valve::VR::InteractionSystem::LinearMapping* linearMapping;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::LinearMapping*) == 0x8);
    // private UnityEngine.Vector3 initialPosition
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 initialPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Vector3 displacement
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_displacement();
    // Get instance field reference: public Valve.VR.InteractionSystem.LinearMapping linearMapping
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::LinearMapping*& dyn_linearMapping();
    // Get instance field reference: private UnityEngine.Vector3 initialPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_initialPosition();
    // private System.Void Start()
    // Offset: 0xDBA394
    void Start();
    // private System.Void Update()
    // Offset: 0xDBA450
    void Update();
    // public System.Void .ctor()
    // Offset: 0xDBA5C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinearDisplacement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::LinearDisplacement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinearDisplacement*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.LinearDisplacement
  #pragma pack(pop)
  static check_size<sizeof(LinearDisplacement), 48 + sizeof(::UnityEngine::Vector3)> __Valve_VR_InteractionSystem_LinearDisplacementSizeCheck;
  static_assert(sizeof(LinearDisplacement) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::LinearDisplacement::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::LinearDisplacement::*)()>(&Valve::VR::InteractionSystem::LinearDisplacement::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::LinearDisplacement*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::LinearDisplacement::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::LinearDisplacement::*)()>(&Valve::VR::InteractionSystem::LinearDisplacement::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::LinearDisplacement*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::LinearDisplacement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
