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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ExportTerrainData
  class ExportTerrainData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ExportTerrainData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExportTerrainData*, "", "ExportTerrainData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: ExportTerrainData
  // [TokenAttribute] Offset: FFFFFFFF
  class ExportTerrainData : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean export
    // Size: 0x1
    // Offset: 0x18
    bool _export;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean export
    [[deprecated("Use field access instead!")]] bool& dyn_export();
    // private System.Void OnDrawGizmos()
    // Offset: 0xF46E64
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0xF46E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExportTerrainData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ExportTerrainData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExportTerrainData*, creationType>()));
    }
  }; // ExportTerrainData
  #pragma pack(pop)
  static check_size<sizeof(ExportTerrainData), 24 + sizeof(bool)> __GlobalNamespace_ExportTerrainDataSizeCheck;
  static_assert(sizeof(ExportTerrainData) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ExportTerrainData::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ExportTerrainData::*)()>(&GlobalNamespace::ExportTerrainData::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExportTerrainData*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExportTerrainData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
