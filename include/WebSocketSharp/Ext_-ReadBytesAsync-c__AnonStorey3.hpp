// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: WebSocketSharp.Ext
#include "WebSocketSharp/Ext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3*, "WebSocketSharp", "Ext/<ReadBytesAsync>c__AnonStorey3");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AC0808
  class Ext::$ReadBytesAsync$c__AnonStorey3 : public ::Il2CppObject {
    public:
    public:
    // System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // System.Int32 length
    // Size: 0x4
    // Offset: 0x18
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: length and: completed
    char __padding1[0x4] = {};
    // System.Action`1<System.Byte[]> completed
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::ArrayW<uint8_t>>* completed;
    // Field size check
    static_assert(sizeof(::System::Action_1<::ArrayW<uint8_t>>*) == 0x8);
    // System.Byte[] buff
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> buff;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Int32 offset
    // Size: 0x4
    // Offset: 0x30
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: offset and: callback
    char __padding4[0x4] = {};
    // System.AsyncCallback callback
    // Size: 0x8
    // Offset: 0x38
    ::System::AsyncCallback* callback;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    // System.Action`1<System.Exception> error
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::System::Exception*>* error;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Exception*>*) == 0x8);
    public:
    // Get instance field reference: System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream();
    // Get instance field reference: System.Int32 length
    [[deprecated("Use field access instead!")]] int& dyn_length();
    // Get instance field reference: System.Action`1<System.Byte[]> completed
    [[deprecated("Use field access instead!")]] ::System::Action_1<::ArrayW<uint8_t>>*& dyn_completed();
    // Get instance field reference: System.Byte[] buff
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buff();
    // Get instance field reference: System.Int32 offset
    [[deprecated("Use field access instead!")]] int& dyn_offset();
    // Get instance field reference: System.AsyncCallback callback
    [[deprecated("Use field access instead!")]] ::System::AsyncCallback*& dyn_callback();
    // Get instance field reference: System.Action`1<System.Exception> error
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Exception*>*& dyn_error();
    // public System.Void .ctor()
    // Offset: 0x1F14088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ext::$ReadBytesAsync$c__AnonStorey3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ext::$ReadBytesAsync$c__AnonStorey3*, creationType>()));
    }
    // System.Void <>m__0(System.IAsyncResult ar)
    // Offset: 0x1F1562C
    void $$m__0(::System::IAsyncResult* ar);
  }; // WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStorey3
  #pragma pack(pop)
  static check_size<sizeof(Ext::$ReadBytesAsync$c__AnonStorey3), 64 + sizeof(::System::Action_1<::System::Exception*>*)> __WebSocketSharp_Ext_$ReadBytesAsync$c__AnonStorey3SizeCheck;
  static_assert(sizeof(Ext::$ReadBytesAsync$c__AnonStorey3) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3::*)(::System::IAsyncResult*)>(&WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3::$$m__0)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::Ext::$ReadBytesAsync$c__AnonStorey3*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
