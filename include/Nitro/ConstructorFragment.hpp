// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Nitro.CodeFragment
#include "Nitro/CodeFragment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: TypeFragment
  class TypeFragment;
  // Forward declaring type: BracketFragment
  class BracketFragment;
  // Forward declaring type: CompiledFragment
  class CompiledFragment;
  // Forward declaring type: CompiledMethod
  class CompiledMethod;
}
// Completed forward declares
// Type namespace: Nitro
namespace Nitro {
  // Forward declaring type: ConstructorFragment
  class ConstructorFragment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Nitro::ConstructorFragment);
DEFINE_IL2CPP_ARG_TYPE(::Nitro::ConstructorFragment*, "Nitro", "ConstructorFragment");
// Type namespace: Nitro
namespace Nitro {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Nitro.ConstructorFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstructorFragment : public ::Nitro::CodeFragment {
    public:
    public:
    // public Nitro.TypeFragment NewType
    // Size: 0x8
    // Offset: 0x40
    ::Nitro::TypeFragment* NewType;
    // Field size check
    static_assert(sizeof(::Nitro::TypeFragment*) == 0x8);
    // public Nitro.BracketFragment Brackets
    // Size: 0x8
    // Offset: 0x48
    ::Nitro::BracketFragment* Brackets;
    // Field size check
    static_assert(sizeof(::Nitro::BracketFragment*) == 0x8);
    public:
    // Get instance field reference: public Nitro.TypeFragment NewType
    [[deprecated("Use field access instead!")]] ::Nitro::TypeFragment*& dyn_NewType();
    // Get instance field reference: public Nitro.BracketFragment Brackets
    [[deprecated("Use field access instead!")]] ::Nitro::BracketFragment*& dyn_Brackets();
    // public System.Void .ctor(Nitro.TypeFragment type, Nitro.BracketFragment brackets)
    // Offset: 0xF60920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructorFragment* New_ctor(::Nitro::TypeFragment* type, ::Nitro::BracketFragment* brackets) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Nitro::ConstructorFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructorFragment*, creationType>(type, brackets)));
    }
    // public override Nitro.CompiledFragment Compile(Nitro.CompiledMethod parent)
    // Offset: 0xF60960
    // Implemented from: Nitro.CodeFragment
    // Base method: Nitro.CompiledFragment CodeFragment::Compile(Nitro.CompiledMethod parent)
    ::Nitro::CompiledFragment* Compile(::Nitro::CompiledMethod* parent);
    // public override System.String ToString()
    // Offset: 0xF609DC
    // Implemented from: Nitro.CodeFragment
    // Base method: System.String CodeFragment::ToString()
    ::StringW ToString();
  }; // Nitro.ConstructorFragment
  #pragma pack(pop)
  static check_size<sizeof(ConstructorFragment), 72 + sizeof(::Nitro::BracketFragment*)> __Nitro_ConstructorFragmentSizeCheck;
  static_assert(sizeof(ConstructorFragment) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Nitro::ConstructorFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Nitro::ConstructorFragment::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::CompiledFragment* (Nitro::ConstructorFragment::*)(::Nitro::CompiledMethod*)>(&Nitro::ConstructorFragment::Compile)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("Nitro", "CompiledMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Nitro::ConstructorFragment*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: Nitro::ConstructorFragment::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Nitro::ConstructorFragment::*)()>(&Nitro::ConstructorFragment::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Nitro::ConstructorFragment*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
