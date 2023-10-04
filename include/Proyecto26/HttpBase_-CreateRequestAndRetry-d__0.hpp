// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Proyecto26.HttpBase
#include "Proyecto26/HttpBase.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Proyecto26
namespace Proyecto26 {
  // Forward declaring type: RequestHelper
  class RequestHelper;
  // Forward declaring type: RequestException
  class RequestException;
  // Forward declaring type: ResponseHelper
  class ResponseHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Proyecto26::HttpBase::$CreateRequestAndRetry$d__0);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::HttpBase::$CreateRequestAndRetry$d__0*, "Proyecto26", "HttpBase/<CreateRequestAndRetry>d__0");
// Type namespace: Proyecto26
namespace Proyecto26 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Proyecto26.HttpBase/<CreateRequestAndRetry>d__0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD0E14
  class HttpBase::$CreateRequestAndRetry$d__0 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Proyecto26.RequestHelper options
    // Size: 0x8
    // Offset: 0x20
    ::Proyecto26::RequestHelper* options;
    // Field size check
    static_assert(sizeof(::Proyecto26::RequestHelper*) == 0x8);
    // public System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper> callback
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_2<::Proyecto26::RequestException*, ::Proyecto26::ResponseHelper*>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Proyecto26::RequestException*, ::Proyecto26::ResponseHelper*>*) == 0x8);
    // private System.Int32 <retries>5__2
    // Size: 0x4
    // Offset: 0x30
    int $retries$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $retries$5__2 and: $request$5__3
    char __padding4[0x4] = {};
    // private UnityEngine.Networking.UnityWebRequest <request>5__3
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Networking::UnityWebRequest* $request$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Proyecto26.RequestHelper options
    [[deprecated("Use field access instead!")]] ::Proyecto26::RequestHelper*& dyn_options();
    // Get instance field reference: public System.Action`2<Proyecto26.RequestException,Proyecto26.ResponseHelper> callback
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Proyecto26::RequestException*, ::Proyecto26::ResponseHelper*>*& dyn_callback();
    // Get instance field reference: private System.Int32 <retries>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$retries$5__2();
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <request>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_$request$5__3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xE23744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpBase::$CreateRequestAndRetry$d__0* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpBase::$CreateRequestAndRetry$d__0*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE23BB8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE23CA4
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0xE23BE4
    void $$m__Finally1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE243E0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE243E8
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE24450
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Proyecto26.HttpBase/<CreateRequestAndRetry>d__0
  #pragma pack(pop)
  static check_size<sizeof(HttpBase::$CreateRequestAndRetry$d__0), 56 + sizeof(::UnityEngine::Networking::UnityWebRequest*)> __Proyecto26_HttpBase_$CreateRequestAndRetry$d__0SizeCheck;
  static_assert(sizeof(HttpBase::$CreateRequestAndRetry$d__0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::*)()>(&Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::HttpBase::$CreateRequestAndRetry$d__0*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::*)()>(&Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::HttpBase::$CreateRequestAndRetry$d__0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::*)()>(&Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::HttpBase::$CreateRequestAndRetry$d__0*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::*)()>(&Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::HttpBase::$CreateRequestAndRetry$d__0*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::*)()>(&Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::HttpBase::$CreateRequestAndRetry$d__0*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::*)()>(&Proyecto26::HttpBase::$CreateRequestAndRetry$d__0::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::HttpBase::$CreateRequestAndRetry$d__0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};