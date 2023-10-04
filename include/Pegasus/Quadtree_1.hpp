// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pegasus
namespace Pegasus {
  // Skipping declaration: QuadtreeNode because it is already included!
  // Skipping declaration: <Find>d__12 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Pegasus
namespace Pegasus {
  // Forward declaring type: Quadtree`1<T>
  template<typename T>
  class Quadtree_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Pegasus::Quadtree_1, "Pegasus", "Quadtree`1");
// Type namespace: Pegasus
namespace Pegasus {
  // WARNING Size may be invalid!
  // Autogenerated type: Pegasus.Quadtree`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Quadtree_1 : public ::Il2CppObject {
    public:
    // Nested type: ::Pegasus::Quadtree_1::QuadtreeNode<T>
    class QuadtreeNode;
    // Nested type: ::Pegasus::Quadtree_1::$Find$d__12<T>
    class $Find$d__12;
    // WARNING Size may be invalid!
    // Autogenerated type: Pegasus.Quadtree`1/QuadtreeNode
    // [TokenAttribute] Offset: FFFFFFFF
    class QuadtreeNode : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = Quadtree_1<T>*;
      static constexpr std::string_view NESTED_NAME = "QuadtreeNode";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // [CompilerGeneratedAttribute] Offset: 0xADFB30
      // private UnityEngine.Vector2 <Position>k__BackingField
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Vector2 Position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
      // [CompilerGeneratedAttribute] Offset: 0xADFB40
      // private T <Value>k__BackingField
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T Value;
      public:
      // Autogenerated instance field getter
      // Get instance field: private UnityEngine.Vector2 <Position>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$Position$k__BackingField() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::QuadtreeNode::dyn_$Position$k__BackingField");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Position>k__BackingField"))->offset;
        return *reinterpret_cast<::UnityEngine::Vector2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private T <Value>k__BackingField
      [[deprecated("Use field access instead!")]] T& dyn_$Value$k__BackingField() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::QuadtreeNode::dyn_$Value$k__BackingField");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Value>k__BackingField"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public UnityEngine.Vector2 get_Position()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::UnityEngine::Vector2 get_Position() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::QuadtreeNode::get_Position");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Position", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal__method);
      }
      // private System.Void set_Position(UnityEngine.Vector2 value)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void set_Position(::UnityEngine::Vector2 value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::QuadtreeNode::set_Position");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Position", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
      }
      // public T get_Value()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T get_Value() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::QuadtreeNode::get_Value");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Void set_Value(T value)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void set_Value(T value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::QuadtreeNode::set_Value");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
      }
      // public System.Void .ctor(UnityEngine.Vector2 position, T value)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Quadtree_1<T>::QuadtreeNode* New_ctor(::UnityEngine::Vector2 position, T value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::QuadtreeNode::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Quadtree_1<T>::QuadtreeNode*, creationType>(position, value)));
      }
    }; // Pegasus.Quadtree`1/QuadtreeNode
    // Could not write size check! Type: Pegasus.Quadtree`1/QuadtreeNode is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Pegasus.Quadtree`1/<Find>d__12
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: AD1540
    class $Find$d__12 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<T>, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = Quadtree_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<Find>d__12";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private T <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T $$2__current;
      // private System.Int32 <>l__initialThreadId
      // Size: 0x4
      // Offset: 0x0
      int $$l__initialThreadId;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public Pegasus.Quadtree`1<T> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::Pegasus::Quadtree_1<T>* $$4__this;
      // Field size check
      static_assert(sizeof(::Pegasus::Quadtree_1<T>*) == 0x8);
      // private UnityEngine.Rect range
      // Size: 0x10
      // Offset: 0x0
      ::UnityEngine::Rect range;
      // Field size check
      static_assert(sizeof(::UnityEngine::Rect) == 0x10);
      // public UnityEngine.Rect <>3__range
      // Size: 0x10
      // Offset: 0x0
      ::UnityEngine::Rect $$3__range;
      // Field size check
      static_assert(sizeof(::UnityEngine::Rect) == 0x10);
      // private System.Int32 <index>5__2
      // Size: 0x4
      // Offset: 0x0
      int $index$5__2;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Collections.Generic.IEnumerator`1<T> <>7__wrap2
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::IEnumerator_1<T>* $$7__wrap2;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<T>*) == 0x8);
      public:
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
      operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
      }
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
      operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      [[deprecated("Use field access instead!")]] int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private T <>2__current
      [[deprecated("Use field access instead!")]] T& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>l__initialThreadId
      [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_$$l__initialThreadId");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>l__initialThreadId"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Pegasus.Quadtree`1<T> <>4__this
      [[deprecated("Use field access instead!")]] ::Pegasus::Quadtree_1<T>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::Pegasus::Quadtree_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private UnityEngine.Rect range
      [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_range() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_range");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "range"))->offset;
        return *reinterpret_cast<::UnityEngine::Rect*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.Rect <>3__range
      [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_$$3__range() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_$$3__range");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__range"))->offset;
        return *reinterpret_cast<::UnityEngine::Rect*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <index>5__2
      [[deprecated("Use field access instead!")]] int& dyn_$index$5__2() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_$index$5__2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<index>5__2"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Collections.Generic.IEnumerator`1<T> <>7__wrap2
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<T>*& dyn_$$7__wrap2() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::dyn_$$7__wrap2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>7__wrap2"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Quadtree_1<T>::$Find$d__12* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Quadtree_1<T>::$Find$d__12*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Pegasus::Quadtree_1<T>::$Find$d__12*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::MoveNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Pegasus::Quadtree_1<T>::$Find$d__12*), -1));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // private System.Void <>m__Finally1()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $$m__Finally1() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::<>m__Finally1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private T System.Collections.Generic.IEnumerator<T>.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T System_Collections_Generic_IEnumerator$T$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::System.Collections.Generic.IEnumerator<T>.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Pegasus::Quadtree_1<T>::$Find$d__12*), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Pegasus::Quadtree_1<T>::$Find$d__12*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Pegasus::Quadtree_1<T>::$Find$d__12*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Pegasus::Quadtree_1<T>::$Find$d__12*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::$Find$d__12::System.Collections.IEnumerable.GetEnumerator");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Pegasus::Quadtree_1<T>::$Find$d__12*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
      }
    }; // Pegasus.Quadtree`1/<Find>d__12
    // Could not write size check! Type: Pegasus.Quadtree`1/<Find>d__12 is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.Int32 nodeCapacity
    // Size: 0x4
    // Offset: 0x0
    int nodeCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Collections.Generic.List`1<Pegasus.Quadtree`1/QuadtreeNode<T>> nodes
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<typename ::Pegasus::Quadtree_1<T>::QuadtreeNode*>* nodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<typename ::Pegasus::Quadtree_1<T>::QuadtreeNode*>*) == 0x8);
    // private Pegasus.Quadtree`1<T>[] children
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Pegasus::Quadtree_1<T>*> children;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pegasus::Quadtree_1<T>*>) == 0x8);
    // private UnityEngine.Rect boundaries
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Rect boundaries;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xADFB20
    // private System.Int32 <Count>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 nodeCapacity
    [[deprecated("Use field access instead!")]] int& dyn_nodeCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::dyn_nodeCapacity");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "nodeCapacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<Pegasus.Quadtree`1/QuadtreeNode<T>> nodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<typename ::Pegasus::Quadtree_1<T>::QuadtreeNode*>*& dyn_nodes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::dyn_nodes");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "nodes"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<typename ::Pegasus::Quadtree_1<T>::QuadtreeNode*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Pegasus.Quadtree`1<T>[] children
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pegasus::Quadtree_1<T>*>& dyn_children() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::dyn_children");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "children"))->offset;
      return *reinterpret_cast<::ArrayW<::Pegasus::Quadtree_1<T>*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Rect boundaries
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_boundaries() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::dyn_boundaries");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "boundaries"))->offset;
      return *reinterpret_cast<::UnityEngine::Rect*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <Count>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Count$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::dyn_$Count$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Count>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Void set_Count(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Count(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::set_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(UnityEngine.Rect boundaries, System.Int32 nodeCapacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Quadtree_1<T>* New_ctor(::UnityEngine::Rect boundaries, int nodeCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Quadtree_1<T>*, creationType>(boundaries, nodeCapacity)));
    }
    // public System.Boolean Insert(System.Single x, System.Single y, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Insert(float x, float y, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(y), ::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, x, y, value);
    }
    // public System.Boolean Insert(UnityEngine.Vector2 position, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Insert(::UnityEngine::Vector2 position, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(position), ::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, position, value);
    }
    // private System.Boolean Insert(Pegasus.Quadtree`1/QuadtreeNode<T> node)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Insert(typename ::Pegasus::Quadtree_1<T>::QuadtreeNode* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, node);
    }
    // public System.Collections.Generic.IEnumerable`1<T> Find(UnityEngine.Rect range)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<T>* Find(::UnityEngine::Rect range) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Find");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(range)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal__method, range);
    }
    // public System.Boolean Remove(System.Single x, System.Single z, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(float x, float z, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(z), ::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, x, z, value);
    }
    // public System.Boolean Remove(UnityEngine.Vector2 position, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(::UnityEngine::Vector2 position, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(position), ::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, position, value);
    }
    // private System.Void Subdivide()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Subdivide() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Subdivide");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Subdivide", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void Combine()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Combine() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::Quadtree_1::Combine");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Combine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Pegasus.Quadtree`1
  // Could not write size check! Type: Pegasus.Quadtree`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
