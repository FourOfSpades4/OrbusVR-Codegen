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
// Type namespace: CodeStage.AntiCheat.Common
namespace CodeStage::AntiCheat::Common {
  // Forward declaring type: ACTkConstants
  class ACTkConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::CodeStage::AntiCheat::Common::ACTkConstants);
DEFINE_IL2CPP_ARG_TYPE(::CodeStage::AntiCheat::Common::ACTkConstants*, "CodeStage.AntiCheat.Common", "ACTkConstants");
// Type namespace: CodeStage.AntiCheat.Common
namespace CodeStage::AntiCheat::Common {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CodeStage.AntiCheat.Common.ACTkConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class ACTkConstants : public ::Il2CppObject {
    public:
    // static field const value: static System.String VERSION
    static constexpr const char* _VERSION = "1.5.6.1";
    // Get static field: static System.String VERSION
    static ::StringW _get_VERSION();
    // Set static field: static System.String VERSION
    static void _set_VERSION(::StringW value);
    // static field const value: static System.String LOG_PREFIX
    static constexpr const char* LOG_PREFIX = "[ACTk] ";
    // Get static field: static System.String LOG_PREFIX
    static ::StringW _get_LOG_PREFIX();
    // Set static field: static System.String LOG_PREFIX
    static void _set_LOG_PREFIX(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x1E5B684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ACTkConstants* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::CodeStage::AntiCheat::Common::ACTkConstants::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ACTkConstants*, creationType>()));
    }
  }; // CodeStage.AntiCheat.Common.ACTkConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CodeStage::AntiCheat::Common::ACTkConstants::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
