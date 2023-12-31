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
NEED_NO_BOX(::WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4*, "WebSocketSharp", "WebSocketFrame/<readHeaderAsync>c__AnonStorey4");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.WebSocketFrame/<readHeaderAsync>c__AnonStorey4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC0970
  class WebSocketFrame::$readHeaderAsync$c__AnonStorey4 : public ::Il2CppObject {
    public:
    public:
    // System.Action`1<WebSocketSharp.WebSocketFrame> completed
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed;
    // Field size check
    static_assert(sizeof(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*
    constexpr operator ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*() const noexcept {
      return completed;
    }
    // Get instance field reference: System.Action`1<WebSocketSharp.WebSocketFrame> completed
    [[deprecated("Use field access instead!")]] ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& dyn_completed();
    // public System.Void .ctor()
    // Offset: 0x1F2A7DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocketFrame::$readHeaderAsync$c__AnonStorey4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocketFrame::$readHeaderAsync$c__AnonStorey4*, creationType>()));
    }
    // System.Void <>m__0(System.Byte[] bytes)
    // Offset: 0x1F2B6F8
    void $$m__0(::ArrayW<uint8_t> bytes);
  }; // WebSocketSharp.WebSocketFrame/<readHeaderAsync>c__AnonStorey4
  #pragma pack(pop)
  static check_size<sizeof(WebSocketFrame::$readHeaderAsync$c__AnonStorey4), 16 + sizeof(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*)> __WebSocketSharp_WebSocketFrame_$readHeaderAsync$c__AnonStorey4SizeCheck;
  static_assert(sizeof(WebSocketFrame::$readHeaderAsync$c__AnonStorey4) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4::*)(::ArrayW<uint8_t>)>(&WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4::$$m__0)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
