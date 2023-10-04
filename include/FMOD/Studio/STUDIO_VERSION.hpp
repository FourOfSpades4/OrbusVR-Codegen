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
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: STUDIO_VERSION
  class STUDIO_VERSION;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMOD::Studio::STUDIO_VERSION);
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::STUDIO_VERSION*, "FMOD.Studio", "STUDIO_VERSION");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.Studio.STUDIO_VERSION
  // [TokenAttribute] Offset: FFFFFFFF
  class STUDIO_VERSION : public ::Il2CppObject {
    public:
    // static field const value: static public System.String dll
    static constexpr const char* dll = "fmodstudio";
    // Get static field: static public System.String dll
    static ::StringW _get_dll();
    // Set static field: static public System.String dll
    static void _set_dll(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x15C96A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STUDIO_VERSION* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMOD::Studio::STUDIO_VERSION::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STUDIO_VERSION*, creationType>()));
    }
  }; // FMOD.Studio.STUDIO_VERSION
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::Studio::STUDIO_VERSION::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
