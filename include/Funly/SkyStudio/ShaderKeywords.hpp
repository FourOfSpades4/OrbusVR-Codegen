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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: ShaderKeywords
  class ShaderKeywords;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::ShaderKeywords);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::ShaderKeywords*, "Funly.SkyStudio", "ShaderKeywords");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.ShaderKeywords
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderKeywords : public ::Il2CppObject {
    public:
    // static field const value: static public System.String Gradient
    static constexpr const char* Gradient = "GRADIENT_BACKGROUND";
    // Get static field: static public System.String Gradient
    static ::StringW _get_Gradient();
    // Set static field: static public System.String Gradient
    static void _set_Gradient(::StringW value);
    // static field const value: static public System.String Moon
    static constexpr const char* Moon = "MOON";
    // Get static field: static public System.String Moon
    static ::StringW _get_Moon();
    // Set static field: static public System.String Moon
    static void _set_Moon(::StringW value);
    // static field const value: static public System.String MoonCustomTexture
    static constexpr const char* MoonCustomTexture = "MOON_CUSTOM_TEXTURE";
    // Get static field: static public System.String MoonCustomTexture
    static ::StringW _get_MoonCustomTexture();
    // Set static field: static public System.String MoonCustomTexture
    static void _set_MoonCustomTexture(::StringW value);
    // static field const value: static public System.String MoonSpriteSheet
    static constexpr const char* MoonSpriteSheet = "MOON_SPRITE_SHEET";
    // Get static field: static public System.String MoonSpriteSheet
    static ::StringW _get_MoonSpriteSheet();
    // Set static field: static public System.String MoonSpriteSheet
    static void _set_MoonSpriteSheet(::StringW value);
    // static field const value: static public System.String MoonAlphaBlend
    static constexpr const char* MoonAlphaBlend = "MOON_ALPHA_BLEND";
    // Get static field: static public System.String MoonAlphaBlend
    static ::StringW _get_MoonAlphaBlend();
    // Set static field: static public System.String MoonAlphaBlend
    static void _set_MoonAlphaBlend(::StringW value);
    // static field const value: static public System.String MoonRotation
    static constexpr const char* MoonRotation = "MOON_ROTATION";
    // Get static field: static public System.String MoonRotation
    static ::StringW _get_MoonRotation();
    // Set static field: static public System.String MoonRotation
    static void _set_MoonRotation(::StringW value);
    // static field const value: static public System.String Sun
    static constexpr const char* Sun = "SUN";
    // Get static field: static public System.String Sun
    static ::StringW _get_Sun();
    // Set static field: static public System.String Sun
    static void _set_Sun(::StringW value);
    // static field const value: static public System.String SunCustomTexture
    static constexpr const char* SunCustomTexture = "SUN_CUSTOM_TEXTURE";
    // Get static field: static public System.String SunCustomTexture
    static ::StringW _get_SunCustomTexture();
    // Set static field: static public System.String SunCustomTexture
    static void _set_SunCustomTexture(::StringW value);
    // static field const value: static public System.String SunSpriteSheet
    static constexpr const char* SunSpriteSheet = "SUN_SPRITE_SHEET";
    // Get static field: static public System.String SunSpriteSheet
    static ::StringW _get_SunSpriteSheet();
    // Set static field: static public System.String SunSpriteSheet
    static void _set_SunSpriteSheet(::StringW value);
    // static field const value: static public System.String SunAlphaBlend
    static constexpr const char* SunAlphaBlend = "SUN_ALPHA_BLEND";
    // Get static field: static public System.String SunAlphaBlend
    static ::StringW _get_SunAlphaBlend();
    // Set static field: static public System.String SunAlphaBlend
    static void _set_SunAlphaBlend(::StringW value);
    // static field const value: static public System.String SunRotation
    static constexpr const char* SunRotation = "SUN_ROTATION";
    // Get static field: static public System.String SunRotation
    static ::StringW _get_SunRotation();
    // Set static field: static public System.String SunRotation
    static void _set_SunRotation(::StringW value);
    // static field const value: static public System.String Clouds
    static constexpr const char* Clouds = "CLOUDS";
    // Get static field: static public System.String Clouds
    static ::StringW _get_Clouds();
    // Set static field: static public System.String Clouds
    static void _set_Clouds(::StringW value);
    // static field const value: static public System.String Fog
    static constexpr const char* Fog = "HORIZON_FOG";
    // Get static field: static public System.String Fog
    static ::StringW _get_Fog();
    // Set static field: static public System.String Fog
    static void _set_Fog(::StringW value);
    // static field const value: static public System.String StarLayer1
    static constexpr const char* StarLayer1 = "STAR_LAYER_1";
    // Get static field: static public System.String StarLayer1
    static ::StringW _get_StarLayer1();
    // Set static field: static public System.String StarLayer1
    static void _set_StarLayer1(::StringW value);
    // static field const value: static public System.String StarLayer2
    static constexpr const char* StarLayer2 = "STAR_LAYER_2";
    // Get static field: static public System.String StarLayer2
    static ::StringW _get_StarLayer2();
    // Set static field: static public System.String StarLayer2
    static void _set_StarLayer2(::StringW value);
    // static field const value: static public System.String StarLayer3
    static constexpr const char* StarLayer3 = "STAR_LAYER_3";
    // Get static field: static public System.String StarLayer3
    static ::StringW _get_StarLayer3();
    // Set static field: static public System.String StarLayer3
    static void _set_StarLayer3(::StringW value);
    // static field const value: static public System.String StarLayer1CustomTexture
    static constexpr const char* StarLayer1CustomTexture = "STAR_LAYER_1_CUSTOM_TEXTURE";
    // Get static field: static public System.String StarLayer1CustomTexture
    static ::StringW _get_StarLayer1CustomTexture();
    // Set static field: static public System.String StarLayer1CustomTexture
    static void _set_StarLayer1CustomTexture(::StringW value);
    // static field const value: static public System.String StarLayer2CustomTexture
    static constexpr const char* StarLayer2CustomTexture = "STAR_LAYER_2_CUSTOM_TEXTURE";
    // Get static field: static public System.String StarLayer2CustomTexture
    static ::StringW _get_StarLayer2CustomTexture();
    // Set static field: static public System.String StarLayer2CustomTexture
    static void _set_StarLayer2CustomTexture(::StringW value);
    // static field const value: static public System.String StarLayer3CustomTexture
    static constexpr const char* StarLayer3CustomTexture = "STAR_LAYER_3_CUSTOM_TEXTURE";
    // Get static field: static public System.String StarLayer3CustomTexture
    static ::StringW _get_StarLayer3CustomTexture();
    // Set static field: static public System.String StarLayer3CustomTexture
    static void _set_StarLayer3CustomTexture(::StringW value);
    // static field const value: static public System.String StarLayer1SpriteSheet
    static constexpr const char* StarLayer1SpriteSheet = "STAR_LAYER_1_SPRITE_SHEET";
    // Get static field: static public System.String StarLayer1SpriteSheet
    static ::StringW _get_StarLayer1SpriteSheet();
    // Set static field: static public System.String StarLayer1SpriteSheet
    static void _set_StarLayer1SpriteSheet(::StringW value);
    // static field const value: static public System.String StarLayer2SpriteSheet
    static constexpr const char* StarLayer2SpriteSheet = "STAR_LAYER_2_SPRITE_SHEET";
    // Get static field: static public System.String StarLayer2SpriteSheet
    static ::StringW _get_StarLayer2SpriteSheet();
    // Set static field: static public System.String StarLayer2SpriteSheet
    static void _set_StarLayer2SpriteSheet(::StringW value);
    // static field const value: static public System.String StarLayer3SpriteSheet
    static constexpr const char* StarLayer3SpriteSheet = "STAR_LAYER_3_SPRITE_SHEET";
    // Get static field: static public System.String StarLayer3SpriteSheet
    static ::StringW _get_StarLayer3SpriteSheet();
    // Set static field: static public System.String StarLayer3SpriteSheet
    static void _set_StarLayer3SpriteSheet(::StringW value);
    // static field const value: static public System.String RenderDebugPoints
    static constexpr const char* RenderDebugPoints = "RENDER_DEBUG_POINTS";
    // Get static field: static public System.String RenderDebugPoints
    static ::StringW _get_RenderDebugPoints();
    // Set static field: static public System.String RenderDebugPoints
    static void _set_RenderDebugPoints(::StringW value);
    // protected System.Void .ctor()
    // Offset: 0x1516244
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderKeywords* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::ShaderKeywords::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderKeywords*, creationType>()));
    }
  }; // Funly.SkyStudio.ShaderKeywords
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::ShaderKeywords::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
