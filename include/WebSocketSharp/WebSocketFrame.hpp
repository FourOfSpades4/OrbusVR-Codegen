// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: WebSocketSharp.Fin
#include "WebSocketSharp/Fin.hpp"
// Including type: WebSocketSharp.Mask
#include "WebSocketSharp/Mask.hpp"
// Including type: WebSocketSharp.Opcode
#include "WebSocketSharp/Opcode.hpp"
// Including type: WebSocketSharp.Rsv
#include "WebSocketSharp/Rsv.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: PayloadData
  class PayloadData;
}
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Forward declaring type: WebSocketFrame
  class WebSocketFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::WebSocketSharp::WebSocketFrame);
DEFINE_IL2CPP_ARG_TYPE(::WebSocketSharp::WebSocketFrame*, "WebSocketSharp", "WebSocketFrame");
// Type namespace: WebSocketSharp
namespace WebSocketSharp {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: WebSocketSharp.WebSocketFrame
  // [TokenAttribute] Offset: FFFFFFFF
  class WebSocketFrame : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<uint8_t>*/ {
    public:
    // Nested type: ::WebSocketSharp::WebSocketFrame::$dump$c__AnonStorey1
    class $dump$c__AnonStorey1;
    // Nested type: ::WebSocketSharp::WebSocketFrame::$readExtendedPayloadLengthAsync$c__AnonStorey3
    class $readExtendedPayloadLengthAsync$c__AnonStorey3;
    // Nested type: ::WebSocketSharp::WebSocketFrame::$readHeaderAsync$c__AnonStorey4
    class $readHeaderAsync$c__AnonStorey4;
    // Nested type: ::WebSocketSharp::WebSocketFrame::$readMaskingKeyAsync$c__AnonStorey5
    class $readMaskingKeyAsync$c__AnonStorey5;
    // Nested type: ::WebSocketSharp::WebSocketFrame::$readPayloadDataAsync$c__AnonStorey6
    class $readPayloadDataAsync$c__AnonStorey6;
    // Nested type: ::WebSocketSharp::WebSocketFrame::$ReadFrameAsync$c__AnonStorey7
    class $ReadFrameAsync$c__AnonStorey7;
    // Nested type: ::WebSocketSharp::WebSocketFrame::$GetEnumerator$c__Iterator0
    class $GetEnumerator$c__Iterator0;
    public:
    // private System.Byte[] _extPayloadLength
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> extPayloadLength;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private WebSocketSharp.Fin _fin
    // Size: 0x1
    // Offset: 0x18
    ::WebSocketSharp::Fin fin;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::Fin) == 0x1);
    // private WebSocketSharp.Mask _mask
    // Size: 0x1
    // Offset: 0x19
    ::WebSocketSharp::Mask mask;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::Mask) == 0x1);
    // Padding between fields: mask and: maskingKey
    char __padding2[0x6] = {};
    // private System.Byte[] _maskingKey
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> maskingKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private WebSocketSharp.Opcode _opcode
    // Size: 0x1
    // Offset: 0x28
    ::WebSocketSharp::Opcode opcode;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::Opcode) == 0x1);
    // Padding between fields: opcode and: payloadData
    char __padding4[0x7] = {};
    // private WebSocketSharp.PayloadData _payloadData
    // Size: 0x8
    // Offset: 0x30
    ::WebSocketSharp::PayloadData* payloadData;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::PayloadData*) == 0x8);
    // private System.Byte _payloadLength
    // Size: 0x1
    // Offset: 0x38
    uint8_t payloadLength;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private WebSocketSharp.Rsv _rsv1
    // Size: 0x1
    // Offset: 0x39
    ::WebSocketSharp::Rsv rsv1;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::Rsv) == 0x1);
    // private WebSocketSharp.Rsv _rsv2
    // Size: 0x1
    // Offset: 0x3A
    ::WebSocketSharp::Rsv rsv2;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::Rsv) == 0x1);
    // private WebSocketSharp.Rsv _rsv3
    // Size: 0x1
    // Offset: 0x3B
    ::WebSocketSharp::Rsv rsv3;
    // Field size check
    static_assert(sizeof(::WebSocketSharp::Rsv) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<uint8_t>
    operator ::System::Collections::Generic::IEnumerable_1<uint8_t>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<uint8_t>*>(this);
    }
    // Get static field: static readonly System.Byte[] EmptyPingBytes
    static ::ArrayW<uint8_t> _get_EmptyPingBytes();
    // Set static field: static readonly System.Byte[] EmptyPingBytes
    static void _set_EmptyPingBytes(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Byte[] _extPayloadLength
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__extPayloadLength();
    // Get instance field reference: private WebSocketSharp.Fin _fin
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::Fin& dyn__fin();
    // Get instance field reference: private WebSocketSharp.Mask _mask
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::Mask& dyn__mask();
    // Get instance field reference: private System.Byte[] _maskingKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__maskingKey();
    // Get instance field reference: private WebSocketSharp.Opcode _opcode
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::Opcode& dyn__opcode();
    // Get instance field reference: private WebSocketSharp.PayloadData _payloadData
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::PayloadData*& dyn__payloadData();
    // Get instance field reference: private System.Byte _payloadLength
    [[deprecated("Use field access instead!")]] uint8_t& dyn__payloadLength();
    // Get instance field reference: private WebSocketSharp.Rsv _rsv1
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::Rsv& dyn__rsv1();
    // Get instance field reference: private WebSocketSharp.Rsv _rsv2
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::Rsv& dyn__rsv2();
    // Get instance field reference: private WebSocketSharp.Rsv _rsv3
    [[deprecated("Use field access instead!")]] ::WebSocketSharp::Rsv& dyn__rsv3();
    // static private System.Void .cctor()
    // Offset: 0x1F290C0
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1F291D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocketFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocketFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocketFrame*, creationType>()));
    }
    // System.Void .ctor(WebSocketSharp.Opcode opcode, WebSocketSharp.PayloadData payloadData, System.Boolean mask)
    // Offset: 0x1F26CD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocketFrame* New_ctor(::WebSocketSharp::Opcode opcode, ::WebSocketSharp::PayloadData* payloadData, bool mask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocketFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocketFrame*, creationType>(opcode, payloadData, mask)));
    }
    // System.Void .ctor(WebSocketSharp.Fin fin, WebSocketSharp.Opcode opcode, System.Byte[] data, System.Boolean compressed, System.Boolean mask)
    // Offset: 0x1F27B2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocketFrame* New_ctor(::WebSocketSharp::Fin fin, ::WebSocketSharp::Opcode opcode, ::ArrayW<uint8_t> data, bool compressed, bool mask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocketFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocketFrame*, creationType>(fin, opcode, data, compressed, mask)));
    }
    // System.Void .ctor(WebSocketSharp.Fin fin, WebSocketSharp.Opcode opcode, WebSocketSharp.PayloadData payloadData, System.Boolean compressed, System.Boolean mask)
    // Offset: 0x1F291D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebSocketFrame* New_ctor(::WebSocketSharp::Fin fin, ::WebSocketSharp::Opcode opcode, ::WebSocketSharp::PayloadData* payloadData, bool compressed, bool mask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::WebSocketSharp::WebSocketFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebSocketFrame*, creationType>(fin, opcode, payloadData, compressed, mask)));
    }
    // System.Int32 get_ExtendedPayloadLengthCount()
    // Offset: 0x1F29470
    int get_ExtendedPayloadLengthCount();
    // System.UInt64 get_FullPayloadLength()
    // Offset: 0x1F29494
    uint64_t get_FullPayloadLength();
    // public System.Boolean get_IsClose()
    // Offset: 0x1F270B4
    bool get_IsClose();
    // public System.Boolean get_IsCompressed()
    // Offset: 0x1F24098
    bool get_IsCompressed();
    // public System.Boolean get_IsContinuation()
    // Offset: 0x1F26B9C
    bool get_IsContinuation();
    // public System.Boolean get_IsData()
    // Offset: 0x1F24084
    bool get_IsData();
    // public System.Boolean get_IsFinal()
    // Offset: 0x1F26BAC
    bool get_IsFinal();
    // public System.Boolean get_IsFragment()
    // Offset: 0x1F27074
    bool get_IsFragment();
    // public System.Boolean get_IsMasked()
    // Offset: 0x1F24074
    bool get_IsMasked();
    // public System.Boolean get_IsPing()
    // Offset: 0x1F27094
    bool get_IsPing();
    // public System.Boolean get_IsPong()
    // Offset: 0x1F270A4
    bool get_IsPong();
    // public System.Boolean get_IsText()
    // Offset: 0x1F29544
    bool get_IsText();
    // public System.UInt64 get_Length()
    // Offset: 0x1F29554
    uint64_t get_Length();
    // public WebSocketSharp.Opcode get_Opcode()
    // Offset: 0x1F1926C
    ::WebSocketSharp::Opcode get_Opcode();
    // public WebSocketSharp.PayloadData get_PayloadData()
    // Offset: 0x1F19274
    ::WebSocketSharp::PayloadData* get_PayloadData();
    // public WebSocketSharp.Rsv get_Rsv2()
    // Offset: 0x1F240A8
    ::WebSocketSharp::Rsv get_Rsv2();
    // public WebSocketSharp.Rsv get_Rsv3()
    // Offset: 0x1F240B0
    ::WebSocketSharp::Rsv get_Rsv3();
    // static private System.Byte[] createMaskingKey()
    // Offset: 0x1F293C8
    static ::ArrayW<uint8_t> createMaskingKey();
    // static private System.String dump(WebSocketSharp.WebSocketFrame frame)
    // Offset: 0x1F295C0
    static ::StringW dump(::WebSocketSharp::WebSocketFrame* frame);
    // static private System.String print(WebSocketSharp.WebSocketFrame frame)
    // Offset: 0x1F29CC4
    static ::StringW print(::WebSocketSharp::WebSocketFrame* frame);
    // static private WebSocketSharp.WebSocketFrame processHeader(System.Byte[] header)
    // Offset: 0x1F2A254
    static ::WebSocketSharp::WebSocketFrame* processHeader(::ArrayW<uint8_t> header);
    // static private System.Void readExtendedPayloadLengthAsync(System.IO.Stream stream, WebSocketSharp.WebSocketFrame frame, System.Action`1<WebSocketSharp.WebSocketFrame> completed, System.Action`1<System.Exception> error)
    // Offset: 0x1F2A4C4
    static void readExtendedPayloadLengthAsync(::System::IO::Stream* stream, ::WebSocketSharp::WebSocketFrame* frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed, ::System::Action_1<::System::Exception*>* error);
    // static private System.Void readHeaderAsync(System.IO.Stream stream, System.Action`1<WebSocketSharp.WebSocketFrame> completed, System.Action`1<System.Exception> error)
    // Offset: 0x1F2A6FC
    static void readHeaderAsync(::System::IO::Stream* stream, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed, ::System::Action_1<::System::Exception*>* error);
    // static private System.Void readMaskingKeyAsync(System.IO.Stream stream, WebSocketSharp.WebSocketFrame frame, System.Action`1<WebSocketSharp.WebSocketFrame> completed, System.Action`1<System.Exception> error)
    // Offset: 0x1F2A7E4
    static void readMaskingKeyAsync(::System::IO::Stream* stream, ::WebSocketSharp::WebSocketFrame* frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed, ::System::Action_1<::System::Exception*>* error);
    // static private System.Void readPayloadDataAsync(System.IO.Stream stream, WebSocketSharp.WebSocketFrame frame, System.Action`1<WebSocketSharp.WebSocketFrame> completed, System.Action`1<System.Exception> error)
    // Offset: 0x1F2AA18
    static void readPayloadDataAsync(::System::IO::Stream* stream, ::WebSocketSharp::WebSocketFrame* frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed, ::System::Action_1<::System::Exception*>* error);
    // static WebSocketSharp.WebSocketFrame CreateCloseFrame(WebSocketSharp.PayloadData payloadData, System.Boolean mask)
    // Offset: 0x1F2447C
    static ::WebSocketSharp::WebSocketFrame* CreateCloseFrame(::WebSocketSharp::PayloadData* payloadData, bool mask);
    // static WebSocketSharp.WebSocketFrame CreatePingFrame(System.Boolean mask)
    // Offset: 0x1F2912C
    static ::WebSocketSharp::WebSocketFrame* CreatePingFrame(bool mask);
    // static System.Void ReadFrameAsync(System.IO.Stream stream, System.Boolean unmask, System.Action`1<WebSocketSharp.WebSocketFrame> completed, System.Action`1<System.Exception> error)
    // Offset: 0x1F28BAC
    static void ReadFrameAsync(::System::IO::Stream* stream, bool unmask, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* completed, ::System::Action_1<::System::Exception*>* error);
    // System.Void Unmask()
    // Offset: 0x1F26FD0
    void Unmask();
    // public System.Collections.Generic.IEnumerator`1<System.Byte> GetEnumerator()
    // Offset: 0x1F2AD24
    ::System::Collections::Generic::IEnumerator_1<uint8_t>* GetEnumerator();
    // public System.String PrintToString(System.Boolean dumped)
    // Offset: 0x1F27188
    ::StringW PrintToString(bool dumped);
    // public System.Byte[] ToArray()
    // Offset: 0x1F244F8
    ::ArrayW<uint8_t> ToArray();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1F2AE14
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.String ToString()
    // Offset: 0x1F2AD9C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // WebSocketSharp.WebSocketFrame
  #pragma pack(pop)
  static check_size<sizeof(WebSocketFrame), 59 + sizeof(::WebSocketSharp::Rsv)> __WebSocketSharp_WebSocketFrameSizeCheck;
  static_assert(sizeof(WebSocketFrame) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&WebSocketSharp::WebSocketFrame::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_ExtendedPayloadLengthCount
// Il2CppName: get_ExtendedPayloadLengthCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_ExtendedPayloadLengthCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_ExtendedPayloadLengthCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_FullPayloadLength
// Il2CppName: get_FullPayloadLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_FullPayloadLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_FullPayloadLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsClose
// Il2CppName: get_IsClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsClose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsCompressed
// Il2CppName: get_IsCompressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsCompressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsCompressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsContinuation
// Il2CppName: get_IsContinuation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsContinuation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsContinuation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsData
// Il2CppName: get_IsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsFinal
// Il2CppName: get_IsFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsFragment
// Il2CppName: get_IsFragment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsFragment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsFragment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsMasked
// Il2CppName: get_IsMasked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsMasked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsMasked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsPing
// Il2CppName: get_IsPing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsPing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsPing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsPong
// Il2CppName: get_IsPong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsPong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsPong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_IsText
// Il2CppName: get_IsText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_IsText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_IsText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_Opcode
// Il2CppName: get_Opcode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::Opcode (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_Opcode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_Opcode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_PayloadData
// Il2CppName: get_PayloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::PayloadData* (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_PayloadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_PayloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_Rsv2
// Il2CppName: get_Rsv2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::Rsv (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_Rsv2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_Rsv2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::get_Rsv3
// Il2CppName: get_Rsv3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::Rsv (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::get_Rsv3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "get_Rsv3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::createMaskingKey
// Il2CppName: createMaskingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)()>(&WebSocketSharp::WebSocketFrame::createMaskingKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "createMaskingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::dump
// Il2CppName: dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::WebSocketSharp::WebSocketFrame*)>(&WebSocketSharp::WebSocketFrame::dump)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::print
// Il2CppName: print
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::WebSocketSharp::WebSocketFrame*)>(&WebSocketSharp::WebSocketFrame::print)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "print", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::processHeader
// Il2CppName: processHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::WebSocketFrame* (*)(::ArrayW<uint8_t>)>(&WebSocketSharp::WebSocketFrame::processHeader)> {
  static const MethodInfo* get() {
    static auto* header = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "processHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{header});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::readExtendedPayloadLengthAsync
// Il2CppName: readExtendedPayloadLengthAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::WebSocketSharp::WebSocketFrame*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&WebSocketSharp::WebSocketFrame::readExtendedPayloadLengthAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* frame = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    static auto* completed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")})->byval_arg;
    static auto* error = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Exception")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "readExtendedPayloadLengthAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, frame, completed, error});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::readHeaderAsync
// Il2CppName: readHeaderAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&WebSocketSharp::WebSocketFrame::readHeaderAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* completed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")})->byval_arg;
    static auto* error = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Exception")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "readHeaderAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, completed, error});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::readMaskingKeyAsync
// Il2CppName: readMaskingKeyAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::WebSocketSharp::WebSocketFrame*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&WebSocketSharp::WebSocketFrame::readMaskingKeyAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* frame = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    static auto* completed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")})->byval_arg;
    static auto* error = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Exception")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "readMaskingKeyAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, frame, completed, error});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::readPayloadDataAsync
// Il2CppName: readPayloadDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::WebSocketSharp::WebSocketFrame*, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&WebSocketSharp::WebSocketFrame::readPayloadDataAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* frame = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")->byval_arg;
    static auto* completed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")})->byval_arg;
    static auto* error = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Exception")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "readPayloadDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, frame, completed, error});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::CreateCloseFrame
// Il2CppName: CreateCloseFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::WebSocketFrame* (*)(::WebSocketSharp::PayloadData*, bool)>(&WebSocketSharp::WebSocketFrame::CreateCloseFrame)> {
  static const MethodInfo* get() {
    static auto* payloadData = &::il2cpp_utils::GetClassFromName("WebSocketSharp", "PayloadData")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "CreateCloseFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{payloadData, mask});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::CreatePingFrame
// Il2CppName: CreatePingFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::WebSocketSharp::WebSocketFrame* (*)(bool)>(&WebSocketSharp::WebSocketFrame::CreatePingFrame)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "CreatePingFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::ReadFrameAsync
// Il2CppName: ReadFrameAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, bool, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*, ::System::Action_1<::System::Exception*>*)>(&WebSocketSharp::WebSocketFrame::ReadFrameAsync)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* unmask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* completed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("WebSocketSharp", "WebSocketFrame")})->byval_arg;
    static auto* error = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Exception")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "ReadFrameAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, unmask, completed, error});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::Unmask
// Il2CppName: Unmask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::Unmask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "Unmask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>* (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::PrintToString
// Il2CppName: PrintToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::WebSocketFrame::*)(bool)>(&WebSocketSharp::WebSocketFrame::PrintToString)> {
  static const MethodInfo* get() {
    static auto* dumped = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "PrintToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dumped});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: WebSocketSharp::WebSocketFrame::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (WebSocketSharp::WebSocketFrame::*)()>(&WebSocketSharp::WebSocketFrame::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(WebSocketSharp::WebSocketFrame*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
