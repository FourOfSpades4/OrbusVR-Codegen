// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: KeyEventArg`1<TK>
  template<typename TK>
  class KeyEventArg_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VivoxUnity::KeyEventArg_1, "VivoxUnity", "KeyEventArg`1");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: VivoxUnity.KeyEventArg`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TK>
  class KeyEventArg_1 : public ::System::EventArgs {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABDBF8
    // private TK <Key>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TK Key;
    public:
    // Autogenerated instance field getter
    // Get instance field: private TK <Key>k__BackingField
    [[deprecated("Use field access instead!")]] TK& dyn_$Key$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::KeyEventArg_1::dyn_$Key$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Key>k__BackingField"))->offset;
      return *reinterpret_cast<TK*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(TK key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyEventArg_1<TK>* New_ctor(TK key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::KeyEventArg_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyEventArg_1<TK>*, creationType>(key)));
    }
    // public TK get_Key()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TK get_Key() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::KeyEventArg_1::get_Key");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TK, false>(this, ___internal__method);
    }
    // public System.Void set_Key(TK value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Key(TK value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::KeyEventArg_1::set_Key");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Key", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
  }; // VivoxUnity.KeyEventArg`1
  // Could not write size check! Type: VivoxUnity.KeyEventArg`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
