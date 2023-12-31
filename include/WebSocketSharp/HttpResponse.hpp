// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.HttpBase
#include "WebSocketSharp/HttpBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NameValueCollection
  class NameValueCollection;
}
// Forward declaring namespace: WebSocketSharp::Net
namespace WebSocketSharp::Net {
  // Forward declaring type: CookieCollection
  class CookieCollection;
}
// Completed forward declares
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: HttpResponse
  class HttpResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::HttpResponse);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::HttpResponse*, "WebSocketSharp", "HttpResponse");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.HttpResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpResponse : public ::WebSocketSharp::HttpBase {
    public:
    public:
    // private System.String _code
    // Size: 0x8
    // Offset: 0x28
    ::StringW code;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _reason
    // Size: 0x8
    // Offset: 0x30
    ::StringW reason;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _code
    [[deprecated("Use field access instead!")]] ::StringW& dyn__code();
    // Get instance field reference: private System.String _reason
    [[deprecated("Use field access instead!")]] ::StringW& dyn__reason();
    // private System.Void .ctor(System.String code, System.String reason, System.Version version, System.Collections.Specialized.NameValueCollection headers)
    // Offset: 0x1F17974
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpResponse* New_ctor(::StringW code, ::StringW reason, ::System::Version* version, ::System::Collections::Specialized::NameValueCollection* headers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::HttpResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpResponse*, creationType>(code, reason, version, headers)));
    }
    // public WebSocketSharp.Net.CookieCollection get_Cookies()
    // Offset: 0x1F179C0
    ::WebSocketSharp::Net::CookieCollection* get_Cookies();
    // public System.Boolean get_HasConnectionClose()
    // Offset: 0x1F17A2C
    bool get_HasConnectionClose();
    // public System.Boolean get_IsProxyAuthenticationRequired()
    // Offset: 0x1F17AAC
    bool get_IsProxyAuthenticationRequired();
    // public System.Boolean get_IsRedirect()
    // Offset: 0x1F17B00
    bool get_IsRedirect();
    // public System.Boolean get_IsUnauthorized()
    // Offset: 0x1F17B80
    bool get_IsUnauthorized();
    // public System.Boolean get_IsWebSocketResponse()
    // Offset: 0x1F17BD4
    bool get_IsWebSocketResponse();
    // public System.String get_StatusCode()
    // Offset: 0x1F17D24
    ::StringW get_StatusCode();
    // static WebSocketSharp.HttpResponse Parse(System.String[] headerParts)
    // Offset: 0x1F17D2C
    static ::WebSocketSharp::HttpResponse* Parse(::ArrayW<::StringW> headerParts);
    // public override System.String ToString()
    // Offset: 0x1F180D8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // WebSocketSharp.HttpResponse
  #pragma pack(pop)
  static check_size<sizeof(HttpResponse), 48 + sizeof(::StringW)> __WebSocketSharp_HttpResponseSizeCheck;
  static_assert(sizeof(HttpResponse) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::get_Cookies
// Il2CppName: get_Cookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::Net::CookieCollection* (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::get_Cookies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "get_Cookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::get_HasConnectionClose
// Il2CppName: get_HasConnectionClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::get_HasConnectionClose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "get_HasConnectionClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::get_IsProxyAuthenticationRequired
// Il2CppName: get_IsProxyAuthenticationRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::get_IsProxyAuthenticationRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "get_IsProxyAuthenticationRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::get_IsRedirect
// Il2CppName: get_IsRedirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::get_IsRedirect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "get_IsRedirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::get_IsUnauthorized
// Il2CppName: get_IsUnauthorized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::get_IsUnauthorized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "get_IsUnauthorized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::get_IsWebSocketResponse
// Il2CppName: get_IsWebSocketResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::get_IsWebSocketResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "get_IsWebSocketResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::HttpResponse* (*)(::ArrayW<::StringW>)>(&WebSocketSharp::HttpResponse::Parse)> {
  static const MethodInfo* get() {
    static auto* headerParts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headerParts});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::HttpResponse::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::HttpResponse::*)()>(&WebSocketSharp::HttpResponse::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::HttpResponse*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
