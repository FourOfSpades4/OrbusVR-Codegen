// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileAccess
  struct FileAccess;
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: NetworkStream
  class NetworkStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::NetworkStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::NetworkStream*, "System.Net.Sockets", "NetworkStream");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.NetworkStream
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkStream : public ::System::IO::Stream {
    public:
    public:
    // private System.Net.Sockets.Socket m_StreamSocket
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::Sockets::Socket* m_StreamSocket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private System.Boolean m_Readable
    // Size: 0x1
    // Offset: 0x30
    bool m_Readable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_Writeable
    // Size: 0x1
    // Offset: 0x31
    bool m_Writeable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_OwnsSocket
    // Size: 0x1
    // Offset: 0x32
    bool m_OwnsSocket;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_OwnsSocket and: m_CloseTimeout
    char __padding3[0x1] = {};
    // private System.Int32 m_CloseTimeout
    // Size: 0x4
    // Offset: 0x34
    int m_CloseTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_CleanedUp
    // Size: 0x1
    // Offset: 0x38
    bool m_CleanedUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_CleanedUp and: m_CurrentReadTimeout
    char __padding5[0x3] = {};
    // private System.Int32 m_CurrentReadTimeout
    // Size: 0x4
    // Offset: 0x3C
    int m_CurrentReadTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_CurrentWriteTimeout
    // Size: 0x4
    // Offset: 0x40
    int m_CurrentWriteTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Net.Sockets.Socket m_StreamSocket
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_m_StreamSocket();
    // Get instance field reference: private System.Boolean m_Readable
    [[deprecated("Use field access instead!")]] bool& dyn_m_Readable();
    // Get instance field reference: private System.Boolean m_Writeable
    [[deprecated("Use field access instead!")]] bool& dyn_m_Writeable();
    // Get instance field reference: private System.Boolean m_OwnsSocket
    [[deprecated("Use field access instead!")]] bool& dyn_m_OwnsSocket();
    // Get instance field reference: private System.Int32 m_CloseTimeout
    [[deprecated("Use field access instead!")]] int& dyn_m_CloseTimeout();
    // Get instance field reference: private System.Boolean m_CleanedUp
    [[deprecated("Use field access instead!")]] bool& dyn_m_CleanedUp();
    // Get instance field reference: private System.Int32 m_CurrentReadTimeout
    [[deprecated("Use field access instead!")]] int& dyn_m_CurrentReadTimeout();
    // Get instance field reference: private System.Int32 m_CurrentWriteTimeout
    [[deprecated("Use field access instead!")]] int& dyn_m_CurrentWriteTimeout();
    // public System.Void .ctor(System.Net.Sockets.Socket socket)
    // Offset: 0x162D414
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::NetworkStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkStream*, creationType>(socket)));
    }
    // public System.Void .ctor(System.Net.Sockets.Socket socket, System.Boolean ownsSocket)
    // Offset: 0x162D608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::NetworkStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkStream*, creationType>(socket, ownsSocket)));
    }
    // public System.Boolean get_DataAvailable()
    // Offset: 0x162DA34
    bool get_DataAvailable();
    // System.Void InitNetworkStream(System.Net.Sockets.Socket socket, System.IO.FileAccess Access)
    // Offset: 0x162D4EC
    void InitNetworkStream(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess Access);
    // public override System.Boolean get_CanRead()
    // Offset: 0x162D6F0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x162D6F8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x162D700
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x162D708
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x162D9B8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // public override System.Int64 get_Length()
    // Offset: 0x162DC6C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x162DCF4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x162DD7C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x162DE04
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x162DEA4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(ByRef<::ArrayW<uint8_t>> buffer, int offset, int size);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x162E380
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::ArrayW<uint8_t> buffer, int offset, int size);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x162E85C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void Finalize()
    // Offset: 0x162E97C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x162EA00
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x162EF14
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(::System::IAsyncResult* asyncResult);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x162F2F0
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x162F804
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(::System::IAsyncResult* asyncResult);
    // public override System.Void Flush()
    // Offset: 0x162FBE0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x162FBE4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
  }; // System.Net.Sockets.NetworkStream
  #pragma pack(pop)
  static check_size<sizeof(NetworkStream), 64 + sizeof(int)> __System_Net_Sockets_NetworkStreamSizeCheck;
  static_assert(sizeof(NetworkStream) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_DataAvailable
// Il2CppName: get_DataAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_DataAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_DataAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::InitNetworkStream
// Il2CppName: InitNetworkStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::Socket*, ::System::IO::FileAccess)>(&System::Net::Sockets::NetworkStream::InitNetworkStream)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    static auto* Access = &::il2cpp_utils::GetClassFromName("System.IO", "FileAccess")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "InitNetworkStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket, Access});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_ReadTimeout
// Il2CppName: get_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_ReadTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_WriteTimeout
// Il2CppName: get_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_WriteTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)(int64_t)>(&System::Net::Sockets::NetworkStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Sockets::NetworkStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Net::Sockets::NetworkStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::NetworkStream::*)(ByRef<::ArrayW<uint8_t>>, int, int)>(&System::Net::Sockets::NetworkStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::Sockets::NetworkStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)(bool)>(&System::Net::Sockets::NetworkStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Sockets::NetworkStream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::NetworkStream::*)(::System::IAsyncResult*)>(&System::Net::Sockets::NetworkStream::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Sockets::NetworkStream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)(::System::IAsyncResult*)>(&System::Net::Sockets::NetworkStream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)()>(&System::Net::Sockets::NetworkStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::NetworkStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::NetworkStream::*)(int64_t)>(&System::Net::Sockets::NetworkStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::NetworkStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};