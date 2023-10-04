// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::ReadOnlyCollection_1, "System.Collections.ObjectModel", "ReadOnlyCollection`1");
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.ObjectModel.ReadOnlyCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: A5D970
  // [ComVisibleAttribute] Offset: A5D970
  // [DebuggerTypeProxyAttribute] Offset: A5D970
  // [DefaultMemberAttribute] Offset: A5D970
  template<typename T>
  class ReadOnlyCollection_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IList_1<T>, public ::System::Collections::IList, public ::System::Collections::Generic::IReadOnlyList_1<T>*/ {
    public:
    public:
    // private System.Collections.Generic.IList`1<T> list
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IList_1<T>* list;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<T>*) == 0x8);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IList_1<T>
    operator ::System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IReadOnlyList_1<T>
    operator ::System::Collections::Generic::IReadOnlyList_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IList`1<T> list
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<T>*& dyn_list() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::dyn_list");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "list"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IList_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object _syncRoot
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__syncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::dyn__syncRoot");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_syncRoot"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadOnlyCollection_1<T>* New_ctor(::System::Collections::Generic::IList_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadOnlyCollection_1<T>*, creationType>(list)));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::get_Count");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Boolean Contains(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::Contains");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value);
    }
    // public System.Void CopyTo(T[] array, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyTo(::ArrayW<T> array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::CopyTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, index);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // public System.Int32 IndexOf(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int IndexOf(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private T System.Collections.Generic.IList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T System_Collections_Generic_IList$T$_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // private System.Void System.Collections.Generic.IList<T>.set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_IList$T$_set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.set_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Add(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_ICollection$T$_Add(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.Add");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_ICollection$T$_Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.Clear");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.Generic.IList<T>.Insert(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_IList$T$_Insert(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.Insert");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Remove(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_Generic_ICollection$T$_Remove(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.Remove");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.Generic.IList<T>.RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_Generic_IList$T$_RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.RemoveAt");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Boolean System.Collections.ICollection.get_IsSynchronized()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_ICollection_get_IsSynchronized() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.ICollection.get_IsSynchronized");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.ICollection.get_SyncRoot");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.ICollection.CopyTo");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, index);
    }
    // private System.Boolean System.Collections.IList.get_IsFixedSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IList_get_IsFixedSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.get_IsFixedSize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IList_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.get_IsReadOnly");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IList_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, index);
    }
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.set_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IList_Add(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Add");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.IList.Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Clear");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static private System.Boolean IsCompatibleObject(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static bool IsCompatibleObject(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::IsCompatibleObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReadOnlyCollection_1<T>*>::get(), "IsCompatibleObject", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, value);
    }
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool System_Collections_IList_Contains(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Contains");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value);
    }
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int System_Collections_IList_IndexOf(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.IndexOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Insert");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_Remove(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Remove");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.IList.RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IList_RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.RemoveAt");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
  }; // System.Collections.ObjectModel.ReadOnlyCollection`1
  // Could not write size check! Type: System.Collections.ObjectModel.ReadOnlyCollection`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
