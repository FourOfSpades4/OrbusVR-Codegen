// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: EventRefAttribute
  class EventRefAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMODUnity::EventRefAttribute);
DEFINE_IL2CPP_ARG_TYPE(::FMODUnity::EventRefAttribute*, "FMODUnity", "EventRefAttribute");
// Type namespace: FMODUnity
namespace FMODUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FMODUnity.EventRefAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class EventRefAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x15D4B78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventRefAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::EventRefAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventRefAttribute*, creationType>()));
    }
  }; // FMODUnity.EventRefAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMODUnity::EventRefAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!