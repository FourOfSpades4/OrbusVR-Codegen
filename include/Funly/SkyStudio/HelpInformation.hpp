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
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: HelpInformation
  class HelpInformation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::HelpInformation);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::HelpInformation*, "Funly.SkyStudio", "HelpInformation");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.HelpInformation
  // [TokenAttribute] Offset: FFFFFFFF
  class HelpInformation : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x150F1F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpInformation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::HelpInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpInformation*, creationType>()));
    }
  }; // Funly.SkyStudio.HelpInformation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::HelpInformation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!