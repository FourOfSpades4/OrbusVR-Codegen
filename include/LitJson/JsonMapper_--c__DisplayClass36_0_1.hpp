// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LitJson.JsonMapper
#include "LitJson/JsonMapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LitJson
namespace LitJson {
  // Forward declaring type: FactoryFunc`1<T>
  template<typename T>
  class FactoryFunc_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LitJson::JsonMapper::$$c__DisplayClass36_0_1, "LitJson", "JsonMapper/<>c__DisplayClass36_0`1");
// Type namespace: LitJson
namespace LitJson {
  // WARNING Size may be invalid!
  // Autogenerated type: LitJson.JsonMapper/<>c__DisplayClass36_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACEBC0
  template<typename T>
  class JsonMapper::$$c__DisplayClass36_0_1 : public ::Il2CppObject {
    public:
    public:
    // public LitJson.FactoryFunc`1<T> factory
    // Size: 0x8
    // Offset: 0x0
    ::LitJson::FactoryFunc_1<T>* factory;
    // Field size check
    static_assert(sizeof(::LitJson::FactoryFunc_1<T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::LitJson::FactoryFunc_1<T>*
    constexpr operator ::LitJson::FactoryFunc_1<T>*() const noexcept {
      return factory;
    }
    // Autogenerated instance field getter
    // Get instance field: public LitJson.FactoryFunc`1<T> factory
    [[deprecated("Use field access instead!")]] ::LitJson::FactoryFunc_1<T>*& dyn_factory() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::JsonMapper::$$c__DisplayClass36_0_1::dyn_factory");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factory"))->offset;
      return *reinterpret_cast<::LitJson::FactoryFunc_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonMapper::$$c__DisplayClass36_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::JsonMapper::$$c__DisplayClass36_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonMapper::$$c__DisplayClass36_0_1<T>*, creationType>()));
    }
    // System.Object <RegisterFactory>b__0()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* $RegisterFactory$b__0() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::JsonMapper::$$c__DisplayClass36_0_1::<RegisterFactory>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RegisterFactory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
  }; // LitJson.JsonMapper/<>c__DisplayClass36_0`1
  // Could not write size check! Type: LitJson.JsonMapper/<>c__DisplayClass36_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
