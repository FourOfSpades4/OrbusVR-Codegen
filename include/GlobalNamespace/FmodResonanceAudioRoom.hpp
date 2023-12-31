// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FmodResonanceAudioRoom
  class FmodResonanceAudioRoom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FmodResonanceAudioRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FmodResonanceAudioRoom*, "", "FmodResonanceAudioRoom");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: FmodResonanceAudioRoom
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ACE734
  class FmodResonanceAudioRoom : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial
    struct SurfaceMaterial;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: FmodResonanceAudioRoom/SurfaceMaterial
    // [TokenAttribute] Offset: FFFFFFFF
    struct SurfaceMaterial/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SurfaceMaterial
      constexpr SurfaceMaterial(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial Transparent
      static constexpr const int Transparent = 0;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial Transparent
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_Transparent();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial Transparent
      static void _set_Transparent(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial AcousticCeilingTiles
      static constexpr const int AcousticCeilingTiles = 1;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial AcousticCeilingTiles
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_AcousticCeilingTiles();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial AcousticCeilingTiles
      static void _set_AcousticCeilingTiles(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial BrickBare
      static constexpr const int BrickBare = 2;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial BrickBare
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_BrickBare();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial BrickBare
      static void _set_BrickBare(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial BrickPainted
      static constexpr const int BrickPainted = 3;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial BrickPainted
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_BrickPainted();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial BrickPainted
      static void _set_BrickPainted(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial ConcreteBlockCoarse
      static constexpr const int ConcreteBlockCoarse = 4;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial ConcreteBlockCoarse
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_ConcreteBlockCoarse();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial ConcreteBlockCoarse
      static void _set_ConcreteBlockCoarse(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial ConcreteBlockPainted
      static constexpr const int ConcreteBlockPainted = 5;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial ConcreteBlockPainted
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_ConcreteBlockPainted();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial ConcreteBlockPainted
      static void _set_ConcreteBlockPainted(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial CurtainHeavy
      static constexpr const int CurtainHeavy = 6;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial CurtainHeavy
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_CurtainHeavy();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial CurtainHeavy
      static void _set_CurtainHeavy(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial FiberglassInsulation
      static constexpr const int FiberglassInsulation = 7;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial FiberglassInsulation
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_FiberglassInsulation();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial FiberglassInsulation
      static void _set_FiberglassInsulation(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial GlassThin
      static constexpr const int GlassThin = 8;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial GlassThin
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_GlassThin();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial GlassThin
      static void _set_GlassThin(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial GlassThick
      static constexpr const int GlassThick = 9;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial GlassThick
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_GlassThick();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial GlassThick
      static void _set_GlassThick(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial Grass
      static constexpr const int Grass = 10;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial Grass
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_Grass();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial Grass
      static void _set_Grass(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial LinoleumOnConcrete
      static constexpr const int LinoleumOnConcrete = 11;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial LinoleumOnConcrete
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_LinoleumOnConcrete();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial LinoleumOnConcrete
      static void _set_LinoleumOnConcrete(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial Marble
      static constexpr const int Marble = 12;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial Marble
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_Marble();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial Marble
      static void _set_Marble(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial Metal
      static constexpr const int Metal = 13;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial Metal
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_Metal();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial Metal
      static void _set_Metal(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial ParquetOnConcrete
      static constexpr const int ParquetOnConcrete = 14;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial ParquetOnConcrete
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_ParquetOnConcrete();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial ParquetOnConcrete
      static void _set_ParquetOnConcrete(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial PlasterRough
      static constexpr const int PlasterRough = 15;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial PlasterRough
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_PlasterRough();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial PlasterRough
      static void _set_PlasterRough(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial PlasterSmooth
      static constexpr const int PlasterSmooth = 16;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial PlasterSmooth
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_PlasterSmooth();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial PlasterSmooth
      static void _set_PlasterSmooth(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial PlywoodPanel
      static constexpr const int PlywoodPanel = 17;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial PlywoodPanel
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_PlywoodPanel();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial PlywoodPanel
      static void _set_PlywoodPanel(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial PolishedConcreteOrTile
      static constexpr const int PolishedConcreteOrTile = 18;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial PolishedConcreteOrTile
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_PolishedConcreteOrTile();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial PolishedConcreteOrTile
      static void _set_PolishedConcreteOrTile(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial Sheetrock
      static constexpr const int Sheetrock = 19;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial Sheetrock
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_Sheetrock();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial Sheetrock
      static void _set_Sheetrock(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial WaterOrIceSurface
      static constexpr const int WaterOrIceSurface = 20;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial WaterOrIceSurface
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_WaterOrIceSurface();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial WaterOrIceSurface
      static void _set_WaterOrIceSurface(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial WoodCeiling
      static constexpr const int WoodCeiling = 21;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial WoodCeiling
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_WoodCeiling();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial WoodCeiling
      static void _set_WoodCeiling(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // static field const value: static public FmodResonanceAudioRoom/SurfaceMaterial WoodPanel
      static constexpr const int WoodPanel = 22;
      // Get static field: static public FmodResonanceAudioRoom/SurfaceMaterial WoodPanel
      static ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial _get_WoodPanel();
      // Set static field: static public FmodResonanceAudioRoom/SurfaceMaterial WoodPanel
      static void _set_WoodPanel(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // FmodResonanceAudioRoom/SurfaceMaterial
    #pragma pack(pop)
    static check_size<sizeof(FmodResonanceAudioRoom::SurfaceMaterial), 0 + sizeof(int)> __GlobalNamespace_FmodResonanceAudioRoom_SurfaceMaterialSizeCheck;
    static_assert(sizeof(FmodResonanceAudioRoom::SurfaceMaterial) == 0x4);
    public:
    // public FmodResonanceAudioRoom/SurfaceMaterial leftWall
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial leftWall;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial) == 0x4);
    // public FmodResonanceAudioRoom/SurfaceMaterial rightWall
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial rightWall;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial) == 0x4);
    // public FmodResonanceAudioRoom/SurfaceMaterial floor
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial floor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial) == 0x4);
    // public FmodResonanceAudioRoom/SurfaceMaterial ceiling
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial ceiling;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial) == 0x4);
    // public FmodResonanceAudioRoom/SurfaceMaterial backWall
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial backWall;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial) == 0x4);
    // public FmodResonanceAudioRoom/SurfaceMaterial frontWall
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial frontWall;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial) == 0x4);
    // public System.Single reflectivity
    // Size: 0x4
    // Offset: 0x30
    float reflectivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single reverbGainDb
    // Size: 0x4
    // Offset: 0x34
    float reverbGainDb;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single reverbBrightness
    // Size: 0x4
    // Offset: 0x38
    float reverbBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single reverbTime
    // Size: 0x4
    // Offset: 0x3C
    float reverbTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 size
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public FmodResonanceAudioRoom/SurfaceMaterial leftWall
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial& dyn_leftWall();
    // Get instance field reference: public FmodResonanceAudioRoom/SurfaceMaterial rightWall
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial& dyn_rightWall();
    // Get instance field reference: public FmodResonanceAudioRoom/SurfaceMaterial floor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial& dyn_floor();
    // Get instance field reference: public FmodResonanceAudioRoom/SurfaceMaterial ceiling
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial& dyn_ceiling();
    // Get instance field reference: public FmodResonanceAudioRoom/SurfaceMaterial backWall
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial& dyn_backWall();
    // Get instance field reference: public FmodResonanceAudioRoom/SurfaceMaterial frontWall
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial& dyn_frontWall();
    // Get instance field reference: public System.Single reflectivity
    [[deprecated("Use field access instead!")]] float& dyn_reflectivity();
    // Get instance field reference: public System.Single reverbGainDb
    [[deprecated("Use field access instead!")]] float& dyn_reverbGainDb();
    // Get instance field reference: public System.Single reverbBrightness
    [[deprecated("Use field access instead!")]] float& dyn_reverbBrightness();
    // Get instance field reference: public System.Single reverbTime
    [[deprecated("Use field access instead!")]] float& dyn_reverbTime();
    // Get instance field reference: public UnityEngine.Vector3 size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_size();
    // private System.Void OnEnable()
    // Offset: 0x150CB04
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x150CB74
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x150CBDC
    void Update();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x150CC4C
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x150CD20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FmodResonanceAudioRoom* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FmodResonanceAudioRoom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FmodResonanceAudioRoom*, creationType>()));
    }
  }; // FmodResonanceAudioRoom
  #pragma pack(pop)
  static check_size<sizeof(FmodResonanceAudioRoom), 64 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_FmodResonanceAudioRoomSizeCheck;
  static_assert(sizeof(FmodResonanceAudioRoom) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FmodResonanceAudioRoom::SurfaceMaterial, "", "FmodResonanceAudioRoom/SurfaceMaterial");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FmodResonanceAudioRoom::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FmodResonanceAudioRoom::*)()>(&GlobalNamespace::FmodResonanceAudioRoom::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FmodResonanceAudioRoom*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FmodResonanceAudioRoom::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FmodResonanceAudioRoom::*)()>(&GlobalNamespace::FmodResonanceAudioRoom::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FmodResonanceAudioRoom*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FmodResonanceAudioRoom::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FmodResonanceAudioRoom::*)()>(&GlobalNamespace::FmodResonanceAudioRoom::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FmodResonanceAudioRoom*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FmodResonanceAudioRoom::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FmodResonanceAudioRoom::*)()>(&GlobalNamespace::FmodResonanceAudioRoom::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FmodResonanceAudioRoom*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FmodResonanceAudioRoom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
