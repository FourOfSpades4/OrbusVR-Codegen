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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: StudioEventEmitter
  class StudioEventEmitter;
  // Forward declaring type: ParamRef
  class ParamRef;
}
// Completed forward declares
// Type namespace: FMODUnity
namespace FMODUnity {
  // Forward declaring type: EmitterRef
  class EmitterRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMODUnity::EmitterRef);
DEFINE_IL2CPP_ARG_TYPE(::FMODUnity::EmitterRef*, "FMODUnity", "EmitterRef");
// Type namespace: FMODUnity
namespace FMODUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FMODUnity.EmitterRef
  // [TokenAttribute] Offset: FFFFFFFF
  class EmitterRef : public ::Il2CppObject {
    public:
    public:
    // public FMODUnity.StudioEventEmitter Target
    // Size: 0x8
    // Offset: 0x10
    ::FMODUnity::StudioEventEmitter* Target;
    // Field size check
    static_assert(sizeof(::FMODUnity::StudioEventEmitter*) == 0x8);
    // public FMODUnity.ParamRef[] Params
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::FMODUnity::ParamRef*> Params;
    // Field size check
    static_assert(sizeof(::ArrayW<::FMODUnity::ParamRef*>) == 0x8);
    public:
    // Get instance field reference: public FMODUnity.StudioEventEmitter Target
    [[deprecated("Use field access instead!")]] ::FMODUnity::StudioEventEmitter*& dyn_Target();
    // Get instance field reference: public FMODUnity.ParamRef[] Params
    [[deprecated("Use field access instead!")]] ::ArrayW<::FMODUnity::ParamRef*>& dyn_Params();
    // public System.Void .ctor()
    // Offset: 0x15D49EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmitterRef* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMODUnity::EmitterRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmitterRef*, creationType>()));
    }
  }; // FMODUnity.EmitterRef
  #pragma pack(pop)
  static check_size<sizeof(EmitterRef), 24 + sizeof(::ArrayW<::FMODUnity::ParamRef*>)> __FMODUnity_EmitterRefSizeCheck;
  static_assert(sizeof(EmitterRef) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMODUnity::EmitterRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
