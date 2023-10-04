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
// Type namespace: Xefier.Threading
namespace Xefier::Threading {
  // Forward declaring type: AutoLock`1<T>
  template<typename T>
  class AutoLock_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Xefier::Threading::AutoLock_1, "Xefier.Threading", "AutoLock`1");
// Type namespace: Xefier.Threading
namespace Xefier::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: Xefier.Threading.AutoLock`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AutoLock_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Object lockObj
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* lockObj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private T value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Object lockObj
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_lockObj() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::AutoLock_1::dyn_lockObj");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "lockObj"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T value
    [[deprecated("Use field access instead!")]] T& dyn_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::AutoLock_1::dyn_value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoLock_1<T>* New_ctor(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::AutoLock_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoLock_1<T>*, creationType>(value)));
    }
    // T get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::AutoLock_1::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // System.Void set_Value(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Xefier::Threading::AutoLock_1::set_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
  }; // Xefier.Threading.AutoLock`1
  // Could not write size check! Type: Xefier.Threading.AutoLock`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
