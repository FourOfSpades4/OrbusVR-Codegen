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
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: LinearMapping
  class LinearMapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::LinearMapping);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::LinearMapping*, "Valve.VR.InteractionSystem", "LinearMapping");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.LinearMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class LinearMapping : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single value
    // Size: 0x4
    // Offset: 0x18
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single value
    [[deprecated("Use field access instead!")]] float& dyn_value();
    // public System.Void .ctor()
    // Offset: 0xDBB064
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinearMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::LinearMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinearMapping*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.LinearMapping
  #pragma pack(pop)
  static check_size<sizeof(LinearMapping), 24 + sizeof(float)> __Valve_VR_InteractionSystem_LinearMappingSizeCheck;
  static_assert(sizeof(LinearMapping) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::LinearMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
