// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Net.Security.AuthenticationLevel
#include "System/Net/Security/AuthenticationLevel.hpp"
// Including type: System.Security.Principal.TokenImpersonationLevel
#include "System/Security/Principal/TokenImpersonationLevel.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IWebProxy
  class IWebProxy;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System::Net::Cache
namespace System::Net::Cache {
  // Forward declaring type: RequestCachePolicy
  class RequestCachePolicy;
  // Forward declaring type: RequestCacheProtocol
  class RequestCacheProtocol;
  // Forward declaring type: RequestCacheBinding
  class RequestCacheBinding;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest*, "System.Net", "WebRequest");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequest : public ::System::MarshalByRefObject/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    // Nested type: ::System::Net::WebRequest::DesignerWebRequestCreate
    class DesignerWebRequestCreate;
    // Nested type: ::System::Net::WebRequest::WebProxyWrapperOpaque
    class WebProxyWrapperOpaque;
    // Nested type: ::System::Net::WebRequest::WebProxyWrapper
    class WebProxyWrapper;
    public:
    // private System.Net.Security.AuthenticationLevel m_AuthenticationLevel
    // Size: 0x4
    // Offset: 0x18
    ::System::Net::Security::AuthenticationLevel m_AuthenticationLevel;
    // Field size check
    static_assert(sizeof(::System::Net::Security::AuthenticationLevel) == 0x4);
    // private System.Security.Principal.TokenImpersonationLevel m_ImpersonationLevel
    // Size: 0x4
    // Offset: 0x1C
    ::System::Security::Principal::TokenImpersonationLevel m_ImpersonationLevel;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::TokenImpersonationLevel) == 0x4);
    // private System.Net.Cache.RequestCachePolicy m_CachePolicy
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Cache::RequestCachePolicy* m_CachePolicy;
    // Field size check
    static_assert(sizeof(::System::Net::Cache::RequestCachePolicy*) == 0x8);
    // private System.Net.Cache.RequestCacheProtocol m_CacheProtocol
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::Cache::RequestCacheProtocol* m_CacheProtocol;
    // Field size check
    static_assert(sizeof(::System::Net::Cache::RequestCacheProtocol*) == 0x8);
    // private System.Net.Cache.RequestCacheBinding m_CacheBinding
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::Cache::RequestCacheBinding* m_CacheBinding;
    // Field size check
    static_assert(sizeof(::System::Net::Cache::RequestCacheBinding*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private System.Collections.ArrayList s_PrefixList
    static ::System::Collections::ArrayList* _get_s_PrefixList();
    // Set static field: static private System.Collections.ArrayList s_PrefixList
    static void _set_s_PrefixList(::System::Collections::ArrayList* value);
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // Get static field: static private System.Net.TimerThread/Queue s_DefaultTimerQueue
    static ::System::Net::TimerThread::Queue* _get_s_DefaultTimerQueue();
    // Set static field: static private System.Net.TimerThread/Queue s_DefaultTimerQueue
    static void _set_s_DefaultTimerQueue(::System::Net::TimerThread::Queue* value);
    // Get static field: static private System.Net.WebRequest/DesignerWebRequestCreate webRequestCreate
    static ::System::Net::WebRequest::DesignerWebRequestCreate* _get_webRequestCreate();
    // Set static field: static private System.Net.WebRequest/DesignerWebRequestCreate webRequestCreate
    static void _set_webRequestCreate(::System::Net::WebRequest::DesignerWebRequestCreate* value);
    // Get static field: static private System.Net.IWebProxy s_DefaultWebProxy
    static ::System::Net::IWebProxy* _get_s_DefaultWebProxy();
    // Set static field: static private System.Net.IWebProxy s_DefaultWebProxy
    static void _set_s_DefaultWebProxy(::System::Net::IWebProxy* value);
    // Get static field: static private System.Boolean s_DefaultWebProxyInitialized
    static bool _get_s_DefaultWebProxyInitialized();
    // Set static field: static private System.Boolean s_DefaultWebProxyInitialized
    static void _set_s_DefaultWebProxyInitialized(bool value);
    // Get instance field reference: private System.Net.Security.AuthenticationLevel m_AuthenticationLevel
    [[deprecated("Use field access instead!")]] ::System::Net::Security::AuthenticationLevel& dyn_m_AuthenticationLevel();
    // Get instance field reference: private System.Security.Principal.TokenImpersonationLevel m_ImpersonationLevel
    [[deprecated("Use field access instead!")]] ::System::Security::Principal::TokenImpersonationLevel& dyn_m_ImpersonationLevel();
    // Get instance field reference: private System.Net.Cache.RequestCachePolicy m_CachePolicy
    [[deprecated("Use field access instead!")]] ::System::Net::Cache::RequestCachePolicy*& dyn_m_CachePolicy();
    // Get instance field reference: private System.Net.Cache.RequestCacheProtocol m_CacheProtocol
    [[deprecated("Use field access instead!")]] ::System::Net::Cache::RequestCacheProtocol*& dyn_m_CacheProtocol();
    // Get instance field reference: private System.Net.Cache.RequestCacheBinding m_CacheBinding
    [[deprecated("Use field access instead!")]] ::System::Net::Cache::RequestCacheBinding*& dyn_m_CacheBinding();
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x17198BC
    static ::Il2CppObject* get_InternalSyncObject();
    // static private System.Net.WebRequest Create(System.Uri requestUri, System.Boolean useUriBase)
    // Offset: 0x171999C
    static ::System::Net::WebRequest* Create(::System::Uri* requestUri, bool useUriBase);
    // static public System.Net.WebRequest Create(System.String requestUriString)
    // Offset: 0x170A3F0
    static ::System::Net::WebRequest* Create(::StringW requestUriString);
    // static public System.Net.WebRequest Create(System.Uri requestUri)
    // Offset: 0x171A0B8
    static ::System::Net::WebRequest* Create(::System::Uri* requestUri);
    // static System.Collections.ArrayList get_PrefixList()
    // Offset: 0x1719D28
    static ::System::Collections::ArrayList* get_PrefixList();
    // static private System.Collections.ArrayList PopulatePrefixList()
    // Offset: 0x171A198
    static ::System::Collections::ArrayList* PopulatePrefixList();
    // protected System.Void .ctor()
    // Offset: 0x171A3B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequest*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x171A3E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequest*, creationType>(serializationInfo, streamingContext)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x171A3F0
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x171A3FC
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // public System.Void set_CachePolicy(System.Net.Cache.RequestCachePolicy value)
    // Offset: 0x171A400
    void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value);
    // private System.Void InternalSetCachePolicy(System.Net.Cache.RequestCachePolicy policy)
    // Offset: 0x171A404
    void InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy* policy);
    // public System.String get_Method()
    // Offset: 0x171A544
    ::StringW get_Method();
    // public System.Void set_Method(System.String value)
    // Offset: 0x171A594
    void set_Method(::StringW value);
    // public System.Uri get_RequestUri()
    // Offset: 0x171A5E4
    ::System::Uri* get_RequestUri();
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x171A634
    ::System::Net::WebHeaderCollection* get_Headers();
    // public System.Int64 get_ContentLength()
    // Offset: 0x171A684
    int64_t get_ContentLength();
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x171A6D4
    ::System::Net::ICredentials* get_Credentials();
    // public System.Void set_Credentials(System.Net.ICredentials value)
    // Offset: 0x171A724
    void set_Credentials(::System::Net::ICredentials* value);
    // public System.Net.IWebProxy get_Proxy()
    // Offset: 0x171A774
    ::System::Net::IWebProxy* get_Proxy();
    // public System.Void set_Proxy(System.Net.IWebProxy value)
    // Offset: 0x171A7C4
    void set_Proxy(::System::Net::IWebProxy* value);
    // public System.Int32 get_Timeout()
    // Offset: 0x171A814
    int get_Timeout();
    // public System.Net.WebResponse GetResponse()
    // Offset: 0x171A864
    ::System::Net::WebResponse* GetResponse();
    // public System.IAsyncResult BeginGetResponse(System.AsyncCallback callback, System.Object state)
    // Offset: 0x171A8B4
    ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.Net.WebResponse EndGetResponse(System.IAsyncResult asyncResult)
    // Offset: 0x171A904
    ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);
    // public System.Void Abort()
    // Offset: 0x171A954
    void Abort();
    // System.Net.Cache.RequestCacheProtocol get_CacheProtocol()
    // Offset: 0x171A534
    ::System::Net::Cache::RequestCacheProtocol* get_CacheProtocol();
    // System.Void set_CacheProtocol(System.Net.Cache.RequestCacheProtocol value)
    // Offset: 0x171A53C
    void set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value);
    // static System.Net.IWebProxy get_InternalDefaultWebProxy()
    // Offset: 0x171A9A4
    static ::System::Net::IWebProxy* get_InternalDefaultWebProxy();
    // static public System.Net.IWebProxy get_DefaultWebProxy()
    // Offset: 0x171AB78
    static ::System::Net::IWebProxy* get_DefaultWebProxy();
    // static private System.Void .cctor()
    // Offset: 0x171ABD4
    static void _cctor();
  }; // System.Net.WebRequest
  #pragma pack(pop)
  static check_size<sizeof(WebRequest), 48 + sizeof(::System::Net::Cache::RequestCacheBinding*)> __System_Net_WebRequestSizeCheck;
  static_assert(sizeof(WebRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequest::get_InternalSyncObject
// Il2CppName: get_InternalSyncObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Net::WebRequest::get_InternalSyncObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_InternalSyncObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (*)(::System::Uri*, bool)>(&System::Net::WebRequest::Create)> {
  static const MethodInfo* get() {
    static auto* requestUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* useUriBase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUri, useUriBase});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (*)(::StringW)>(&System::Net::WebRequest::Create)> {
  static const MethodInfo* get() {
    static auto* requestUriString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUriString});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (*)(::System::Uri*)>(&System::Net::WebRequest::Create)> {
  static const MethodInfo* get() {
    static auto* requestUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUri});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_PrefixList
// Il2CppName: get_PrefixList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (*)()>(&System::Net::WebRequest::get_PrefixList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_PrefixList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::PopulatePrefixList
// Il2CppName: PopulatePrefixList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (*)()>(&System::Net::WebRequest::PopulatePrefixList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "PopulatePrefixList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::WebRequest::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_CachePolicy
// Il2CppName: set_CachePolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::System::Net::Cache::RequestCachePolicy*)>(&System::Net::WebRequest::set_CachePolicy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Cache", "RequestCachePolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_CachePolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::InternalSetCachePolicy
// Il2CppName: InternalSetCachePolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::System::Net::Cache::RequestCachePolicy*)>(&System::Net::WebRequest::InternalSetCachePolicy)> {
  static const MethodInfo* get() {
    static auto* policy = &::il2cpp_utils::GetClassFromName("System.Net.Cache", "RequestCachePolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "InternalSetCachePolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{policy});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::StringW)>(&System::Net::WebRequest::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_RequestUri
// Il2CppName: get_RequestUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_RequestUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_RequestUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_Credentials
// Il2CppName: set_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::System::Net::ICredentials*)>(&System::Net::WebRequest::set_Credentials)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Proxy
// Il2CppName: get_Proxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Proxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Proxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_Proxy
// Il2CppName: set_Proxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::System::Net::IWebProxy*)>(&System::Net::WebRequest::set_Proxy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IWebProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_Proxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_Timeout
// Il2CppName: get_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_Timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::GetResponse
// Il2CppName: GetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::GetResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "GetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::BeginGetResponse
// Il2CppName: BeginGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::WebRequest::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::WebRequest::BeginGetResponse)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "BeginGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::EndGetResponse
// Il2CppName: EndGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (System::Net::WebRequest::*)(::System::IAsyncResult*)>(&System::Net::WebRequest::EndGetResponse)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "EndGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)()>(&System::Net::WebRequest::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_CacheProtocol
// Il2CppName: get_CacheProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheProtocol* (System::Net::WebRequest::*)()>(&System::Net::WebRequest::get_CacheProtocol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_CacheProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::set_CacheProtocol
// Il2CppName: set_CacheProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequest::*)(::System::Net::Cache::RequestCacheProtocol*)>(&System::Net::WebRequest::set_CacheProtocol)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Cache", "RequestCacheProtocol")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "set_CacheProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_InternalDefaultWebProxy
// Il2CppName: get_InternalDefaultWebProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&System::Net::WebRequest::get_InternalDefaultWebProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_InternalDefaultWebProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::get_DefaultWebProxy
// Il2CppName: get_DefaultWebProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&System::Net::WebRequest::get_DefaultWebProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), "get_DefaultWebProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebRequest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
