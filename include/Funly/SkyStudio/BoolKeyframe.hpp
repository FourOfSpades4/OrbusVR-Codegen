// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Funly.SkyStudio.BaseKeyframe
#include "Funly/SkyStudio/BaseKeyframe.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: BoolKeyframe
  class BoolKeyframe;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::BoolKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::BoolKeyframe*, "Funly.SkyStudio", "BoolKeyframe");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.BoolKeyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class BoolKeyframe : public ::Funly::SkyStudio::BaseKeyframe {
    public:
    public:
    // public System.Boolean value
    // Size: 0x1
    // Offset: 0x24
    bool value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Boolean value
    [[deprecated("Use field access instead!")]] bool& dyn_value();
    // public System.Void .ctor(System.Single time, System.Boolean value)
    // Offset: 0x150E774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolKeyframe* New_ctor(float time, bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::BoolKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolKeyframe*, creationType>(time, value)));
    }
    // public System.Void .ctor(Funly.SkyStudio.BoolKeyframe keyframe)
    // Offset: 0x150E7A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolKeyframe* New_ctor(::Funly::SkyStudio::BoolKeyframe* keyframe) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::BoolKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolKeyframe*, creationType>(keyframe)));
    }
  }; // Funly.SkyStudio.BoolKeyframe
  #pragma pack(pop)
  static check_size<sizeof(BoolKeyframe), 36 + sizeof(bool)> __Funly_SkyStudio_BoolKeyframeSizeCheck;
  static_assert(sizeof(BoolKeyframe) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::BoolKeyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Funly::SkyStudio::BoolKeyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!