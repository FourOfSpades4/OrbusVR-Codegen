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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3*, "WebSocketSharp", "WebSocketFrame/<readExtendedPayloadLengthAsync>c__AnonStorey3");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.WebSocketFrame/<readExtendedPayloadLengthAsync>c__AnonStorey3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC0960
  class WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3 : public ::Il2CppObject {
    public:
    public:
    // System.Int32 len
    // Size: 0x4
    // Offset: 0x10
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: len and: frame
    char __padding0[0x4] = {};
    // WebSocketSharp.WebSocketFrame frame
    // Size: 0x8
    // Offset: 0x18
    ::WebSocketSharp::WebSocketFrame* frame;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::WebSocketFrame*) == 0x8);
    // System.Action`1<WebSocketSharp.WebSocketFrame> completed
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed;
    // Field size check
    static_assert(sizeof(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*) == 0x8);
    public:
    // Get instance field reference: System.Int32 len
    [[deprecated("Use field access instead!")]] int& dyn_len();
    // Get instance field reference: WebSocketSharp.WebSocketFrame frame
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::WebSocketFrame*& dyn_frame();
    // Get instance field reference: System.Action`1<WebSocketSharp.WebSocketFrame> completed
    [[deprecated("Use field access instead!")]] ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& dyn_completed();
    // public System.Void .ctor()
    // Offset: 0x1F2A6F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3*, creationType>()));
    }
    // System.Void <>m__0(System.Byte[] bytes)
    // Offset: 0x1F2B614
    void $$m__0(::ArrayW<uint8_t> bytes);
  }; // WebSocketSharp.WebSocketFrame/<readExtendedPayloadLengthAsync>c__AnonStorey3
  #pragma pack(pop)
  static check_size<sizeof(WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3), 32 + sizeof(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*)> __WebSocketSharp_WebSocketFrame_$readExtendedPayloadLengthAsync$c__AnonStorey3SizeCheck;
  static_assert(sizeof(WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3::*)(::ArrayW<uint8_t>)>(&WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3::$$m__0)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
