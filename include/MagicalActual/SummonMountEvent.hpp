// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: SummonMountEvent
  class SummonMountEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::SummonMountEvent);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::SummonMountEvent*, "MagicalActual", "SummonMountEvent");
// Type namespace: MagicalActual
namespace MagicalActual {
  // WARNING Size may be invalid!
  // Autogenerated type: MagicalActual.SummonMountEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class SummonMountEvent : public ::UnityEngine::Events::UnityEvent_1<float> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1688A38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SummonMountEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::SummonMountEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SummonMountEvent*, creationType>()));
    }
  }; // MagicalActual.SummonMountEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::SummonMountEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
