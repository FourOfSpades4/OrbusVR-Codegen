// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: AtlasLocation
  class AtlasLocation;
}
// Completed forward declares
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Forward declaring type: ShadowData
  class ShadowData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::Css::ShadowData);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::Css::ShadowData*, "PowerUI.Css", "ShadowData");
// Type namespace: PowerUI.Css
namespace PowerUI::Css {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.Css.ShadowData
  // [TokenAttribute] Offset: FFFFFFFF
  class ShadowData : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Blur
    // Size: 0x4
    // Offset: 0x10
    int Blur;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 HOffset
    // Size: 0x4
    // Offset: 0x14
    int HOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 VOffset
    // Size: 0x4
    // Offset: 0x18
    int VOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color Colour
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Color Colour;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // Padding between fields: Colour and: Location
    char __padding3[0x4] = {};
    // public Blaze.AtlasLocation[] Location
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Blaze::AtlasLocation*> Location;
    // Field size check
    static_assert(sizeof(::ArrayW<::Blaze::AtlasLocation*>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 Blur
    [[deprecated("Use field access instead!")]] int& dyn_Blur();
    // Get instance field reference: public System.Int32 HOffset
    [[deprecated("Use field access instead!")]] int& dyn_HOffset();
    // Get instance field reference: public System.Int32 VOffset
    [[deprecated("Use field access instead!")]] int& dyn_VOffset();
    // Get instance field reference: public UnityEngine.Color Colour
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_Colour();
    // Get instance field reference: public Blaze.AtlasLocation[] Location
    [[deprecated("Use field access instead!")]] ::ArrayW<::Blaze::AtlasLocation*>& dyn_Location();
    // public System.Void .ctor()
    // Offset: 0x18484C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShadowData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::Css::ShadowData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShadowData*, creationType>()));
    }
  }; // PowerUI.Css.ShadowData
  #pragma pack(pop)
  static check_size<sizeof(ShadowData), 48 + sizeof(::ArrayW<::Blaze::AtlasLocation*>)> __PowerUI_Css_ShadowDataSizeCheck;
  static_assert(sizeof(ShadowData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::Css::ShadowData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
