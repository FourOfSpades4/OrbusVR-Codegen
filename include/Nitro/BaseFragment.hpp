// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.BracketFragment
#include "Nitro/BracketFragment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: CodeLexer
  class CodeLexer;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: BaseFragment
  class BaseFragment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::BaseFragment);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::BaseFragment*, "Nitro", "BaseFragment");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.BaseFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseFragment : public ::Nitro::BracketFragment {
    public:
    // public System.Void .ctor(Nitro.CodeLexer sr)
    // Offset: 0xF572E0
    // Implemented from: Nitro.BracketFragment
    // Base method: System.Void BracketFragment::.ctor(Nitro.CodeLexer sr)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseFragment* New_ctor(::Nitro::CodeLexer* sr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::BaseFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseFragment*, creationType>(sr)));
    }
  }; // Nitro.BaseFragment
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::BaseFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
