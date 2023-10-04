// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.WebSocket
#include "WebSocketSharp/WebSocket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: WebSocketFrame
  class WebSocketFrame;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4*, "WebSocketSharp", "WebSocket/<startReceiving>c__AnonStorey4");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.WebSocket/<startReceiving>c__AnonStorey4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC0858
  class WebSocket::$startReceiving$c__AnonStorey4 : public ::Il2CppObject {
    public:
    public:
    // System.Action receive
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* receive;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // WebSocketSharp.WebSocket $this
    // Size: 0x8
    // Offset: 0x18
    ::WebSocketSharp::WebSocket* $this;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::WebSocket*) == 0x8);
    public:
    // Get instance field reference: System.Action receive
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_receive();
    // Get instance field reference: WebSocketSharp.WebSocket $this
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::WebSocket*& dyn_$this();
    // public System.Void .ctor()
    // Offset: 0x1F281BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocket::$startReceiving$c__AnonStorey4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocket::$startReceiving$c__AnonStorey4*, creationType>()));
    }
    // System.Void <>m__0()
    // Offset: 0x1F28AB8
    void $$m__0();
    // System.Void <>m__1(WebSocketSharp.WebSocketFrame frame)
    // Offset: 0x1F28D0C
    void $$m__1(::WebSocketSharp::WebSocketFrame* frame);
    // System.Void <>m__2(System.Exception ex)
    // Offset: 0x1F28E38
    void $$m__2(::System::Exception* ex);
  }; // WebSocketSharp.WebSocket/<startReceiving>c__AnonStorey4
  #pragma pack(pop)
  static check_size<sizeof(WebSocket::$startReceiving$c__AnonStorey4), 24 + sizeof(::WebSocketSharp::WebSocket*)> __WebSocketSharp_WebSocket_$startReceiving$c__AnonStorey4SizeCheck;
  static_assert(sizeof(WebSocket::$startReceiving$c__AnonStorey4) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::*)()>(&WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::$$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::$$m__1
// Il2CppName: <>m__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::*)(::WebSocketSharp::WebSocketFrame*)>(&WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::$$m__1)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4*), "<>m__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::$$m__2
// Il2CppName: <>m__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::*)(::System::Exception*)>(&WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4::$$m__2)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocket::$startReceiving$c__AnonStorey4*), "<>m__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
