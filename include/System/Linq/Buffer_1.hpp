// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Forward declaring type: Buffer`1<TElement>
  template<typename TElement>
  struct Buffer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Linq::Buffer_1, "System.Linq", "Buffer`1");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Linq.Buffer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  struct Buffer_1/*, public ::System::ValueType*/ {
    public:
    public:
    // TElement[] items
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<TElement> items;
    // Field size check
    static_assert(sizeof(::ArrayW<TElement>) == 0x8);
    // System.Int32 count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Buffer_1
    constexpr Buffer_1(::ArrayW<TElement> items_ = ::ArrayW<TElement>(static_cast<void*>(nullptr)), int count_ = {}) noexcept : items{items_}, count{count_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: TElement[] items
    [[deprecated("Use field access instead!")]] ::ArrayW<TElement>& dyn_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Buffer_1::dyn_items");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "items"))->offset;
      return *reinterpret_cast<::ArrayW<TElement>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Buffer_1::dyn_count");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<TElement> source)
    // Offset: 0xFFFFFFFFFFFFFFFF
    Buffer_1(::System::Collections::Generic::IEnumerable_1<TElement>* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Buffer_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, source);
    }
    // TElement[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<TElement> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Buffer_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<TElement>, false>(this, ___internal__method);
    }
  }; // System.Linq.Buffer`1
  // Could not write size check! Type: System.Linq.Buffer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"