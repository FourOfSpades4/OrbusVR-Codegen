// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Reflection::MonoProperty::StaticGetter_1, "System.Reflection", "MonoProperty/StaticGetter`1");
// Type namespace: System.Reflection
namespace System::Reflection {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Reflection.MonoProperty/StaticGetter`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename R>
  class MonoProperty::StaticGetter_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoProperty::StaticGetter_1<R>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoProperty::StaticGetter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoProperty::StaticGetter_1<R>*, creationType>(object, method)));
    }
    // public R Invoke()
    // Offset: 0xFFFFFFFFFFFFFFFF
    R Invoke() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoProperty::StaticGetter_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Reflection::MonoProperty::StaticGetter_1<R>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<R, false>(this, ___internal__method);
    }
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoProperty::StaticGetter_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Reflection::MonoProperty::StaticGetter_1<R>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, callback, object);
    }
    // public R EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    R EndInvoke(::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoProperty::StaticGetter_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Reflection::MonoProperty::StaticGetter_1<R>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<R, false>(this, ___internal__method, result);
    }
  }; // System.Reflection.MonoProperty/StaticGetter`1
  // Could not write size check! Type: System.Reflection.MonoProperty/StaticGetter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
