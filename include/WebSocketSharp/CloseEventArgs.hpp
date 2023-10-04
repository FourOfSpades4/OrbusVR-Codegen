// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: WebSocketSharp.CloseStatusCode
#include "WebSocketSharp/CloseStatusCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: PayloadData
  class PayloadData;
}
// Completed forward declares
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: CloseEventArgs
  class CloseEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::CloseEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::CloseEventArgs*, "WebSocketSharp", "CloseEventArgs");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.CloseEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class CloseEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Boolean _clean
    // Size: 0x1
    // Offset: 0x10
    bool clean;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: clean and: code
    char __padding0[0x1] = {};
    // private System.UInt16 _code
    // Size: 0x2
    // Offset: 0x12
    uint16_t code;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: code and: payloadData
    char __padding1[0x4] = {};
    // private WebSocketSharp.PayloadData _payloadData
    // Size: 0x8
    // Offset: 0x18
    ::WebSocketSharp::PayloadData* payloadData;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::PayloadData*) == 0x8);
    // private System.String _reason
    // Size: 0x8
    // Offset: 0x20
    ::StringW reason;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Boolean _clean
    [[deprecated("Use field access instead!")]] bool& dyn__clean();
    // Get instance field reference: private System.UInt16 _code
    [[deprecated("Use field access instead!")]] uint16_t& dyn__code();
    // Get instance field reference: private WebSocketSharp.PayloadData _payloadData
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::PayloadData*& dyn__payloadData();
    // Get instance field reference: private System.String _reason
    [[deprecated("Use field access instead!")]] ::StringW& dyn__reason();
    // System.Void .ctor()
    // Offset: 0x1F1146C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloseEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::CloseEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloseEventArgs*, creationType>()));
    }
    // System.Void .ctor(System.UInt16 code)
    // Offset: 0x1F11510
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloseEventArgs* New_ctor(uint16_t code) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::CloseEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloseEventArgs*, creationType>(code)));
    }
    // System.Void .ctor(WebSocketSharp.CloseStatusCode code)
    // Offset: 0x1F1158C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloseEventArgs* New_ctor(::WebSocketSharp::CloseStatusCode code) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::CloseEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloseEventArgs*, creationType>(code)));
    }
    // System.Void .ctor(WebSocketSharp.PayloadData payloadData)
    // Offset: 0x1F11590
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloseEventArgs* New_ctor(::WebSocketSharp::PayloadData* payloadData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::CloseEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloseEventArgs*, creationType>(payloadData)));
    }
    // System.Void .ctor(System.UInt16 code, System.String reason)
    // Offset: 0x1F11920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloseEventArgs* New_ctor(uint16_t code, ::StringW reason) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::CloseEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloseEventArgs*, creationType>(code, reason)));
    }
    // System.Void .ctor(WebSocketSharp.CloseStatusCode code, System.String reason)
    // Offset: 0x1F119A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloseEventArgs* New_ctor(::WebSocketSharp::CloseStatusCode code, ::StringW reason) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::CloseEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloseEventArgs*, creationType>(code, reason)));
    }
    // WebSocketSharp.PayloadData get_PayloadData()
    // Offset: 0x1F119A8
    ::WebSocketSharp::PayloadData* get_PayloadData();
    // public System.UInt16 get_Code()
    // Offset: 0x1F11C08
    uint16_t get_Code();
    // public System.String get_Reason()
    // Offset: 0x1F11C10
    ::StringW get_Reason();
    // System.Void set_WasClean(System.Boolean value)
    // Offset: 0x1F11C6C
    void set_WasClean(bool value);
  }; // WebSocketSharp.CloseEventArgs
  #pragma pack(pop)
  static check_size<sizeof(CloseEventArgs), 32 + sizeof(::StringW)> __WebSocketSharp_CloseEventArgsSizeCheck;
  static_assert(sizeof(CloseEventArgs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::get_PayloadData
// Il2CppName: get_PayloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::PayloadData* (WebSocketSharp::CloseEventArgs::*)()>(&WebSocketSharp::CloseEventArgs::get_PayloadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::CloseEventArgs*), "get_PayloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::get_Code
// Il2CppName: get_Code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (WebSocketSharp::CloseEventArgs::*)()>(&WebSocketSharp::CloseEventArgs::get_Code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::CloseEventArgs*), "get_Code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::get_Reason
// Il2CppName: get_Reason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::CloseEventArgs::*)()>(&WebSocketSharp::CloseEventArgs::get_Reason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::CloseEventArgs*), "get_Reason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::CloseEventArgs::set_WasClean
// Il2CppName: set_WasClean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::CloseEventArgs::*)(bool)>(&WebSocketSharp::CloseEventArgs::set_WasClean)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::CloseEventArgs*), "set_WasClean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};