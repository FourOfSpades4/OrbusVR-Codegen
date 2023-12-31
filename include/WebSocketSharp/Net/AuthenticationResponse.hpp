// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.Net.AuthenticationBase
#include "WebSocketSharp/Net/AuthenticationBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: WebSocketSharp::Net
namespace WebSocketSharp::Net {
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
  // Forward declaring type: AuthenticationChallenge
  class AuthenticationChallenge;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NameValueCollection
  class NameValueCollection;
}
// Completed forward declares
// Type namespace: WebSocketSharp.Net
namespace WebSocketSharp::Net {
  // Forward declaring type: AuthenticationResponse
  class AuthenticationResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::Net::AuthenticationResponse);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::Net::AuthenticationResponse*, "WebSocketSharp.Net", "AuthenticationResponse");
// Type namespace: WebSocketSharp.Net
namespace WebSocketSharp::Net {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.Net.AuthenticationResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticationResponse : public ::WebSocketSharp::Net::AuthenticationBase {
    public:
    public:
    // private System.UInt32 _nonceCount
    // Size: 0x4
    // Offset: 0x20
    uint nonceCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return nonceCount;
    }
    // [CompilerGeneratedAttribute] Offset: 0xAC0A7C
    // Get static field: static private System.Func`2<System.String,System.Boolean> <>f__am$cache0
    static ::System::Func_2<::StringW, bool>* _get_$$f__am$cache0();
    // Set static field: static private System.Func`2<System.String,System.Boolean> <>f__am$cache0
    static void _set_$$f__am$cache0(::System::Func_2<::StringW, bool>* value);
    // Get instance field reference: private System.UInt32 _nonceCount
    [[deprecated("Use field access instead!")]] uint& dyn__nonceCount();
    // System.Void .ctor(WebSocketSharp.Net.NetworkCredential credentials)
    // Offset: 0x1F1A120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationResponse* New_ctor(::WebSocketSharp::Net::NetworkCredential* credentials) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::Net::AuthenticationResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationResponse*, creationType>(credentials)));
    }
    // System.Void .ctor(WebSocketSharp.Net.AuthenticationChallenge challenge, WebSocketSharp.Net.NetworkCredential credentials, System.UInt32 nonceCount)
    // Offset: 0x1F1A354
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationResponse* New_ctor(::WebSocketSharp::Net::AuthenticationChallenge* challenge, ::WebSocketSharp::Net::NetworkCredential* credentials, uint nonceCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::Net::AuthenticationResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationResponse*, creationType>(challenge, credentials, nonceCount)));
    }
    // System.Void .ctor(WebSocketSharp.Net.AuthenticationSchemes scheme, System.Collections.Specialized.NameValueCollection parameters, WebSocketSharp.Net.NetworkCredential credentials, System.UInt32 nonceCount)
    // Offset: 0x1F1A19C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationResponse* New_ctor(::WebSocketSharp::Net::AuthenticationSchemes scheme, ::System::Collections::Specialized::NameValueCollection* parameters, ::WebSocketSharp::Net::NetworkCredential* credentials, uint nonceCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::Net::AuthenticationResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationResponse*, creationType>(scheme, parameters, credentials, nonceCount)));
    }
    // System.UInt32 get_NonceCount()
    // Offset: 0x1F1A744
    uint get_NonceCount();
    // static private System.String createA1(System.String username, System.String password, System.String realm)
    // Offset: 0x1F1A754
    static ::StringW createA1(::StringW username, ::StringW password, ::StringW realm);
    // static private System.String createA1(System.String username, System.String password, System.String realm, System.String nonce, System.String cnonce)
    // Offset: 0x1F1A7C0
    static ::StringW createA1(::StringW username, ::StringW password, ::StringW realm, ::StringW nonce, ::StringW cnonce);
    // static private System.String createA2(System.String method, System.String uri)
    // Offset: 0x1F1A9C4
    static ::StringW createA2(::StringW method, ::StringW uri);
    // static private System.String createA2(System.String method, System.String uri, System.String entity)
    // Offset: 0x1F1AA28
    static ::StringW createA2(::StringW method, ::StringW uri, ::StringW entity);
    // static private System.String hash(System.String value)
    // Offset: 0x1F1A854
    static ::StringW hash(::StringW value);
    // private System.Void initAsDigest()
    // Offset: 0x1F1A484
    void initAsDigest();
    // static System.String CreateRequestDigest(System.Collections.Specialized.NameValueCollection parameters)
    // Offset: 0x1F1AAA0
    static ::StringW CreateRequestDigest(::System::Collections::Specialized::NameValueCollection* parameters);
    // static private System.Boolean <initAsDigest>m__0(System.String qop)
    // Offset: 0x1F1B5F4
    static bool $initAsDigest$m__0(::StringW qop);
    // override System.String ToBasicString()
    // Offset: 0x1F1B048
    // Implemented from: WebSocketSharp.Net.AuthenticationBase
    // Base method: System.String AuthenticationBase::ToBasicString()
    ::StringW ToBasicString();
    // override System.String ToDigestString()
    // Offset: 0x1F1B178
    // Implemented from: WebSocketSharp.Net.AuthenticationBase
    // Base method: System.String AuthenticationBase::ToDigestString()
    ::StringW ToDigestString();
  }; // WebSocketSharp.Net.AuthenticationResponse
  #pragma pack(pop)
  static check_size<sizeof(AuthenticationResponse), 32 + sizeof(uint)> __WebSocketSharp_Net_AuthenticationResponseSizeCheck;
  static_assert(sizeof(AuthenticationResponse) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::get_NonceCount
// Il2CppName: get_NonceCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (WebSocketSharp::Net::AuthenticationResponse::*)()>(&WebSocketSharp::Net::AuthenticationResponse::get_NonceCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "get_NonceCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::createA1
// Il2CppName: createA1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&WebSocketSharp::Net::AuthenticationResponse::createA1)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* realm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "createA1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, password, realm});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::createA1
// Il2CppName: createA1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&WebSocketSharp::Net::AuthenticationResponse::createA1)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* realm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nonce = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cnonce = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "createA1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, password, realm, nonce, cnonce});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::createA2
// Il2CppName: createA2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&WebSocketSharp::Net::AuthenticationResponse::createA2)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "createA2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, uri});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::createA2
// Il2CppName: createA2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&WebSocketSharp::Net::AuthenticationResponse::createA2)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entity = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "createA2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, uri, entity});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::hash
// Il2CppName: hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&WebSocketSharp::Net::AuthenticationResponse::hash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::initAsDigest
// Il2CppName: initAsDigest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::Net::AuthenticationResponse::*)()>(&WebSocketSharp::Net::AuthenticationResponse::initAsDigest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "initAsDigest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::CreateRequestDigest
// Il2CppName: CreateRequestDigest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Specialized::NameValueCollection*)>(&WebSocketSharp::Net::AuthenticationResponse::CreateRequestDigest)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Collections.Specialized", "NameValueCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "CreateRequestDigest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::$initAsDigest$m__0
// Il2CppName: <initAsDigest>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&WebSocketSharp::Net::AuthenticationResponse::$initAsDigest$m__0)> {
  static const MethodInfo* get() {
    static auto* qop = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "<initAsDigest>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qop});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::ToBasicString
// Il2CppName: ToBasicString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::Net::AuthenticationResponse::*)()>(&WebSocketSharp::Net::AuthenticationResponse::ToBasicString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "ToBasicString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::AuthenticationResponse::ToDigestString
// Il2CppName: ToDigestString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::Net::AuthenticationResponse::*)()>(&WebSocketSharp::Net::AuthenticationResponse::ToDigestString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::AuthenticationResponse*), "ToDigestString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
