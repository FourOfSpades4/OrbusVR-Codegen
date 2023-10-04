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
// Completed includes
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: CombineTexturesIntoAtlasesCoroutineResult
  class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, "DigitalOpus.MB.Core", "MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean success
    // Size: 0x1
    // Offset: 0x10
    bool success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isFinished
    // Size: 0x1
    // Offset: 0x11
    bool isFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean success
    [[deprecated("Use field access instead!")]] bool& dyn_success();
    // Get instance field reference: public System.Boolean isFinished
    [[deprecated("Use field access instead!")]] bool& dyn_isFinished();
    // public System.Void .ctor()
    // Offset: 0x18E4DA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult), 17 + sizeof(bool)> __DigitalOpus_MB_Core_MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResultSizeCheck;
  static_assert(sizeof(MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
