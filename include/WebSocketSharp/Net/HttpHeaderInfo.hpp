// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.Net.HttpHeaderType
#include "WebSocketSharp/Net/HttpHeaderType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: WebSocketSharp.Net
namespace WebSocketSharp::Net {
  // Forward declaring type: HttpHeaderInfo
  class HttpHeaderInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::Net::HttpHeaderInfo);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::Net::HttpHeaderInfo*, "WebSocketSharp.Net", "HttpHeaderInfo");
// Type namespace: WebSocketSharp.Net
namespace WebSocketSharp::Net {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.Net.HttpHeaderInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpHeaderInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private WebSocketSharp.Net.HttpHeaderType _type
    // Size: 0x4
    // Offset: 0x18
    ::WebSocketSharp::Net::HttpHeaderType type;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::Net::HttpHeaderType) == 0x4);
    public:
    // Get instance field reference: private System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private WebSocketSharp.Net.HttpHeaderType _type
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::Net::HttpHeaderType& dyn__type();
    // System.Void .ctor(System.String name, WebSocketSharp.Net.HttpHeaderType type)
    // Offset: 0x1F1E824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpHeaderInfo* New_ctor(::StringW name, ::WebSocketSharp::Net::HttpHeaderType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::Net::HttpHeaderInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpHeaderInfo*, creationType>(name, type)));
    }
    // System.Boolean get_IsMultiValueInRequest()
    // Offset: 0x1F1E860
    bool get_IsMultiValueInRequest();
    // System.Boolean get_IsMultiValueInResponse()
    // Offset: 0x1F1E86C
    bool get_IsMultiValueInResponse();
    // public System.Boolean get_IsRequest()
    // Offset: 0x1F1E878
    bool get_IsRequest();
    // public System.Boolean get_IsResponse()
    // Offset: 0x1F1E884
    bool get_IsResponse();
    // public System.String get_Name()
    // Offset: 0x1F1E890
    ::StringW get_Name();
    // public System.Boolean IsMultiValue(System.Boolean response)
    // Offset: 0x1F1E898
    bool IsMultiValue(bool response);
    // public System.Boolean IsRestricted(System.Boolean response)
    // Offset: 0x1F1E8C8
    bool IsRestricted(bool response);
  }; // WebSocketSharp.Net.HttpHeaderInfo
  #pragma pack(pop)
  static check_size<sizeof(HttpHeaderInfo), 24 + sizeof(::WebSocketSharp::Net::HttpHeaderType)> __WebSocketSharp_Net_HttpHeaderInfoSizeCheck;
  static_assert(sizeof(HttpHeaderInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInRequest
// Il2CppName: get_IsMultiValueInRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Net::HttpHeaderInfo::*)()>(&WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::HttpHeaderInfo*), "get_IsMultiValueInRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInResponse
// Il2CppName: get_IsMultiValueInResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Net::HttpHeaderInfo::*)()>(&WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::HttpHeaderInfo*), "get_IsMultiValueInResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::get_IsRequest
// Il2CppName: get_IsRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Net::HttpHeaderInfo::*)()>(&WebSocketSharp::Net::HttpHeaderInfo::get_IsRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::HttpHeaderInfo*), "get_IsRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::get_IsResponse
// Il2CppName: get_IsResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Net::HttpHeaderInfo::*)()>(&WebSocketSharp::Net::HttpHeaderInfo::get_IsResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::HttpHeaderInfo*), "get_IsResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::Net::HttpHeaderInfo::*)()>(&WebSocketSharp::Net::HttpHeaderInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::HttpHeaderInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::IsMultiValue
// Il2CppName: IsMultiValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Net::HttpHeaderInfo::*)(bool)>(&WebSocketSharp::Net::HttpHeaderInfo::IsMultiValue)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::HttpHeaderInfo*), "IsMultiValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::Net::HttpHeaderInfo::IsRestricted
// Il2CppName: IsRestricted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::Net::HttpHeaderInfo::*)(bool)>(&WebSocketSharp::Net::HttpHeaderInfo::IsRestricted)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Net::HttpHeaderInfo*), "IsRestricted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};