// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.WebSocketFrame
#include "WebSocketSharp/WebSocketFrame.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7*, "WebSocketSharp", "WebSocketFrame/<ReadFrameAsync>c__AnonStorey7");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.WebSocketFrame/<ReadFrameAsync>c__AnonStorey7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC09A0
  class WebSocketFrame::$ReadFrameAsync$c__AnonStorey7 : public ::Il2CppObject {
    public:
    public:
    // System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // System.Action`1<System.Exception> error
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::System::Exception*>* error;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Exception*>*) == 0x8);
    // System.Boolean unmask
    // Size: 0x1
    // Offset: 0x20
    bool unmask;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: unmask and: completed
    char __padding2[0x7] = {};
    // System.Action`1<WebSocketSharp.WebSocketFrame> completed
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed;
    // Field size check
    static_assert(sizeof(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*) == 0x8);
    public:
    // Get instance field reference: System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream();
    // Get instance field reference: System.Action`1<System.Exception> error
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Exception*>*& dyn_error();
    // Get instance field reference: System.Boolean unmask
    [[deprecated("Use field access instead!")]] bool& dyn_unmask();
    // Get instance field reference: System.Action`1<WebSocketSharp.WebSocketFrame> completed
    [[deprecated("Use field access instead!")]] ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& dyn_completed();
    // public System.Void .ctor()
    // Offset: 0x1F2AD1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocketFrame::$ReadFrameAsync$c__AnonStorey7* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocketFrame::$ReadFrameAsync$c__AnonStorey7*, creationType>()));
    }
    // System.Void <>m__0(WebSocketSharp.WebSocketFrame frame)
    // Offset: 0x1F2B030
    void $$m__0(::WebSocketSharp::WebSocketFrame* frame);
    // System.Void <>m__1(WebSocketSharp.WebSocketFrame frame1)
    // Offset: 0x1F2B0E8
    void $$m__1(::WebSocketSharp::WebSocketFrame* frame1);
    // System.Void <>m__2(WebSocketSharp.WebSocketFrame frame2)
    // Offset: 0x1F2B1A0
    void $$m__2(::WebSocketSharp::WebSocketFrame* frame2);
    // System.Void <>m__3(WebSocketSharp.WebSocketFrame frame3)
    // Offset: 0x1F2B258
    void $$m__3(::WebSocketSharp::WebSocketFrame* frame3);
  }; // WebSocketSharp.WebSocketFrame/<ReadFrameAsync>c__AnonStorey7
  #pragma pack(pop)
  static check_size<sizeof(WebSocketFrame::$ReadFrameAsync$c__AnonStorey7), 40 + sizeof(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*)> __WebSocketSharp_WebSocketFrame_$ReadFrameAsync$c__AnonStorey7SizeCheck;
  static_assert(sizeof(WebSocketFrame::$ReadFrameAsync$c__AnonStorey7) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::*)(::WebSocketSharp::WebSocketFrame*)>(&WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__0)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__1
// Il2CppName: <>m__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::*)(::WebSocketSharp::WebSocketFrame*)>(&WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__1)> {
  static const MethodInfo* get() {
    static auto* frame1 = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7*), "<>m__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame1});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__2
// Il2CppName: <>m__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::*)(::WebSocketSharp::WebSocketFrame*)>(&WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__2)> {
  static const MethodInfo* get() {
    static auto* frame2 = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7*), "<>m__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame2});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__3
// Il2CppName: <>m__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::*)(::WebSocketSharp::WebSocketFrame*)>(&WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7::$$m__3)> {
  static const MethodInfo* get() {
    static auto* frame3 = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7*), "<>m__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame3});
  }
};
