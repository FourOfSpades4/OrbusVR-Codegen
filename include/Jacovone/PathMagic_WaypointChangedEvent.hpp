// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Jacovone.PathMagic
#include "Jacovone/PathMagic.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Jacovone::PathMagic::WaypointChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::Jacovone::PathMagic::WaypointChangedEvent*, "Jacovone", "PathMagic/WaypointChangedEvent");
// Type namespace: Jacovone
namespace Jacovone {
  // WARNING Size may be invalid!
  // Autogenerated type: Jacovone.PathMagic/WaypointChangedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class PathMagic::WaypointChangedEvent : public ::UnityEngine::Events::UnityEvent_1<int> {
    public:
    // public System.Void .ctor()
    // Offset: 0x105FDD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathMagic::WaypointChangedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Jacovone::PathMagic::WaypointChangedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathMagic::WaypointChangedEvent*, creationType>()));
    }
  }; // Jacovone.PathMagic/WaypointChangedEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Jacovone::PathMagic::WaypointChangedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
