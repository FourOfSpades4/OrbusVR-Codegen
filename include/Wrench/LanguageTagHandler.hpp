// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Wrench.TagHandler
#include "Wrench/TagHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Wrench
namespace Wrench {
  // Forward declaring type: LanguageTagHandler
  class LanguageTagHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Wrench::LanguageTagHandler);
DEFINE_IL2CPP_ARG_TYPE(::Wrench::LanguageTagHandler*, "Wrench", "LanguageTagHandler");
// Type namespace: Wrench
namespace Wrench {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Wrench.LanguageTagHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class LanguageTagHandler : public ::Wrench::TagHandler {
    public:
    // public System.Void .ctor()
    // Offset: 0x282B5DC
    // Implemented from: Wrench.TagHandler
    // Base method: System.Void TagHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguageTagHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Wrench::LanguageTagHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguageTagHandler*, creationType>()));
    }
  }; // Wrench.LanguageTagHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Wrench::LanguageTagHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
