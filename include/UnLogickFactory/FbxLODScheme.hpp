// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: LODGroup
  class LODGroup;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: UnLogickFactory
namespace UnLogickFactory {
  // Forward declaring type: FbxExportCollection
  class FbxExportCollection;
  // Forward declaring type: FbxExportSettings
  class FbxExportSettings;
}
// Completed forward declares
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Forward declaring type: FbxLODScheme
  class FbxLODScheme;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnLogickFactory::FbxLODScheme);
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::FbxLODScheme*, "UnLogickFactory", "FbxLODScheme");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.FbxLODScheme
  // [TokenAttribute] Offset: FFFFFFFF
  class FbxLODScheme : public ::Il2CppObject {
    public:
    // Nested type: ::UnLogickFactory::FbxLODScheme::LODScheme
    struct LODScheme;
    // Nested type: ::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags
    struct LODSchemeEnumMaskFlags;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnLogickFactory.FbxLODScheme/LODScheme
    // [TokenAttribute] Offset: FFFFFFFF
    struct LODScheme/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LODScheme
      constexpr LODScheme(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme IgnoreLOD
      static constexpr const int IgnoreLOD = 0;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme IgnoreLOD
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_IgnoreLOD();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme IgnoreLOD
      static void _set_IgnoreLOD(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme MainCamera
      static constexpr const int MainCamera = 1;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme MainCamera
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_MainCamera();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme MainCamera
      static void _set_MainCamera(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme OtherCameras
      static constexpr const int OtherCameras = 2;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme OtherCameras
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_OtherCameras();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme OtherCameras
      static void _set_OtherCameras(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme AllCameras
      static constexpr const int AllCameras = 3;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme AllCameras
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_AllCameras();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme AllCameras
      static void _set_AllCameras(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme PerformCulling
      static constexpr const int PerformCulling = 4;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme PerformCulling
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_PerformCulling();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme PerformCulling
      static void _set_PerformCulling(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme CullMainCamera
      static constexpr const int CullMainCamera = 5;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme CullMainCamera
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_CullMainCamera();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme CullMainCamera
      static void _set_CullMainCamera(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme CullOtherCameras
      static constexpr const int CullOtherCameras = 6;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme CullOtherCameras
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_CullOtherCameras();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme CullOtherCameras
      static void _set_CullOtherCameras(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // static field const value: static public UnLogickFactory.FbxLODScheme/LODScheme CullAllCameras
      static constexpr const int CullAllCameras = 8;
      // Get static field: static public UnLogickFactory.FbxLODScheme/LODScheme CullAllCameras
      static ::UnLogickFactory::FbxLODScheme::LODScheme _get_CullAllCameras();
      // Set static field: static public UnLogickFactory.FbxLODScheme/LODScheme CullAllCameras
      static void _set_CullAllCameras(::UnLogickFactory::FbxLODScheme::LODScheme value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnLogickFactory.FbxLODScheme/LODScheme
    #pragma pack(pop)
    static check_size<sizeof(FbxLODScheme::LODScheme), 0 + sizeof(int)> __UnLogickFactory_FbxLODScheme_LODSchemeSizeCheck;
    static_assert(sizeof(FbxLODScheme::LODScheme) == 0x4);
    public:
    // public UnLogickFactory.FbxLODScheme/LODScheme Scheme
    // Size: 0x4
    // Offset: 0x10
    ::UnLogickFactory::FbxLODScheme::LODScheme Scheme;
    // Field size check
    static_assert(sizeof(::UnLogickFactory::FbxLODScheme::LODScheme) == 0x4);
    // Padding between fields: Scheme and: lodCameras
    char __padding0[0x4] = {};
    // private UnityEngine.Camera[] _lodCameras
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Camera*> lodCameras;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Camera*>) == 0x8);
    public:
    // Get instance field reference: public UnLogickFactory.FbxLODScheme/LODScheme Scheme
    [[deprecated("Use field access instead!")]] ::UnLogickFactory::FbxLODScheme::LODScheme& dyn_Scheme();
    // Get instance field reference: private UnityEngine.Camera[] _lodCameras
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Camera*>& dyn__lodCameras();
    // public UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags get_SchemeMask()
    // Offset: 0x2128DD0
    ::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags get_SchemeMask();
    // public System.Void set_SchemeMask(UnLogickFactory.FbxLODScheme/LODSchemeEnumMaskFlags value)
    // Offset: 0x2128DD8
    void set_SchemeMask(::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags value);
    // public System.Void Prepare(System.Int32 logLevel)
    // Offset: 0x2128DE0
    void Prepare(int logLevel);
    // public System.Void GetRenderers(UnityEngine.LODGroup lodGroup, UnLogickFactory.FbxExportCollection result, UnLogickFactory.FbxExportSettings settings)
    // Offset: 0x212901C
    void GetRenderers(::UnityEngine::LODGroup* lodGroup, ::UnLogickFactory::FbxExportCollection* result, ::UnLogickFactory::FbxExportSettings* settings);
    // private System.Void _Prepare()
    // Offset: 0x2128DE4
    void _Prepare();
    // private System.Void _GetRenderers(UnityEngine.LODGroup lodGroup, UnLogickFactory.FbxExportCollection result, UnLogickFactory.FbxExportSettings settings)
    // Offset: 0x2129020
    void _GetRenderers(::UnityEngine::LODGroup* lodGroup, ::UnLogickFactory::FbxExportCollection* result, ::UnLogickFactory::FbxExportSettings* settings);
    // private System.Boolean IsCulled(UnityEngine.Renderer renderer)
    // Offset: 0x2129784
    bool IsCulled(::UnityEngine::Renderer* renderer);
    // private System.Int32 DetermineLODGroup(UnityEngine.LODGroup lodGroup)
    // Offset: 0x2129688
    int DetermineLODGroup(::UnityEngine::LODGroup* lodGroup);
    // static private System.Int32 DetermineLOD(UnityEngine.LODGroup lodGroup, UnityEngine.Camera camera)
    // Offset: 0x2129D80
    static int DetermineLOD(::UnityEngine::LODGroup* lodGroup, ::UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x212A200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FbxLODScheme* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnLogickFactory::FbxLODScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FbxLODScheme*, creationType>()));
    }
  }; // UnLogickFactory.FbxLODScheme
  #pragma pack(pop)
  static check_size<sizeof(FbxLODScheme), 24 + sizeof(::ArrayW<::UnityEngine::Camera*>)> __UnLogickFactory_FbxLODSchemeSizeCheck;
  static_assert(sizeof(FbxLODScheme) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::FbxLODScheme::LODScheme, "UnLogickFactory", "FbxLODScheme/LODScheme");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::get_SchemeMask
// Il2CppName: get_SchemeMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags (UnLogickFactory::FbxLODScheme::*)()>(&UnLogickFactory::FbxLODScheme::get_SchemeMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "get_SchemeMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::set_SchemeMask
// Il2CppName: set_SchemeMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxLODScheme::*)(::UnLogickFactory::FbxLODScheme::LODSchemeEnumMaskFlags)>(&UnLogickFactory::FbxLODScheme::set_SchemeMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnLogickFactory", "FbxLODScheme/LODSchemeEnumMaskFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "set_SchemeMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::Prepare
// Il2CppName: Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxLODScheme::*)(int)>(&UnLogickFactory::FbxLODScheme::Prepare)> {
  static const MethodInfo* get() {
    static auto* logLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logLevel});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::GetRenderers
// Il2CppName: GetRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxLODScheme::*)(::UnityEngine::LODGroup*, ::UnLogickFactory::FbxExportCollection*, ::UnLogickFactory::FbxExportSettings*)>(&UnLogickFactory::FbxLODScheme::GetRenderers)> {
  static const MethodInfo* get() {
    static auto* lodGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "LODGroup")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("UnLogickFactory", "FbxExportCollection")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("UnLogickFactory", "FbxExportSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "GetRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lodGroup, result, settings});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::_Prepare
// Il2CppName: _Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxLODScheme::*)()>(&UnLogickFactory::FbxLODScheme::_Prepare)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "_Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::_GetRenderers
// Il2CppName: _GetRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnLogickFactory::FbxLODScheme::*)(::UnityEngine::LODGroup*, ::UnLogickFactory::FbxExportCollection*, ::UnLogickFactory::FbxExportSettings*)>(&UnLogickFactory::FbxLODScheme::_GetRenderers)> {
  static const MethodInfo* get() {
    static auto* lodGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "LODGroup")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("UnLogickFactory", "FbxExportCollection")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("UnLogickFactory", "FbxExportSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "_GetRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lodGroup, result, settings});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::IsCulled
// Il2CppName: IsCulled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnLogickFactory::FbxLODScheme::*)(::UnityEngine::Renderer*)>(&UnLogickFactory::FbxLODScheme::IsCulled)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "IsCulled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::DetermineLODGroup
// Il2CppName: DetermineLODGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnLogickFactory::FbxLODScheme::*)(::UnityEngine::LODGroup*)>(&UnLogickFactory::FbxLODScheme::DetermineLODGroup)> {
  static const MethodInfo* get() {
    static auto* lodGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "LODGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "DetermineLODGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lodGroup});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::DetermineLOD
// Il2CppName: DetermineLOD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::LODGroup*, ::UnityEngine::Camera*)>(&UnLogickFactory::FbxLODScheme::DetermineLOD)> {
  static const MethodInfo* get() {
    static auto* lodGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "LODGroup")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnLogickFactory::FbxLODScheme*), "DetermineLOD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lodGroup, camera});
  }
};
// Writing MetadataGetter for method: UnLogickFactory::FbxLODScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!