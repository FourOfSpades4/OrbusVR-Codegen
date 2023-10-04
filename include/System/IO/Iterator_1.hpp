// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: Iterator`1<TSource>
  template<typename TSource>
  class Iterator_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Iterator_1, "System.IO", "Iterator`1");
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.Iterator`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource>
  class Iterator_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<TSource>, public ::System::Collections::Generic::IEnumerator_1<TSource>*/ {
    public:
    public:
    // private System.Int32 threadId
    // Size: 0x4
    // Offset: 0x0
    int threadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 state
    // Size: 0x4
    // Offset: 0x0
    int state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // TSource current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TSource current;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<TSource>
    operator ::System::Collections::Generic::IEnumerable_1<TSource>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<TSource>
    operator ::System::Collections::Generic::IEnumerator_1<TSource>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 threadId
    [[deprecated("Use field access instead!")]] int& dyn_threadId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::dyn_threadId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "threadId"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 state
    [[deprecated("Use field access instead!")]] int& dyn_state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::dyn_state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: TSource current
    [[deprecated("Use field access instead!")]] TSource& dyn_current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::dyn_current");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "current"))->offset;
      return *reinterpret_cast<TSource*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public TSource get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TSource get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::get_Current");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<TSource, false>(this, ___internal__method);
    }
    // protected System.IO.Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IO::Iterator_1<TSource>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::Clone");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IO::Iterator_1<TSource>*, false>(this, ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose(bool disposing) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, disposing);
    }
    // public System.Collections.Generic.IEnumerator`1<TSource> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<TSource>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal__method);
    }
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::IO::Iterator_1<TSource>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Iterator_1<TSource>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Iterator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Iterator_1<TSource>*, creationType>()));
    }
  }; // System.IO.Iterator`1
  // Could not write size check! Type: System.IO.Iterator`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"