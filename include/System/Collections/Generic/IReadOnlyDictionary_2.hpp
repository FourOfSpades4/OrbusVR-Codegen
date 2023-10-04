// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IReadOnlyCollection`1
#include "System/Collections/Generic/IReadOnlyCollection_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IReadOnlyDictionary_2, "System.Collections.Generic", "IReadOnlyDictionary`2");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IReadOnlyDictionary`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A5DEC8
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2/*, public ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>
    operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetValue(TKey key, ByRef<TValue> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IReadOnlyDictionary_2::TryGetValue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, key, byref(value));
    }
  }; // System.Collections.Generic.IReadOnlyDictionary`2
  // Could not write size check! Type: System.Collections.Generic.IReadOnlyDictionary`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
