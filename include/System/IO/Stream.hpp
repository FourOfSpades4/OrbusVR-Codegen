// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Stream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream*, "System.IO", "Stream");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Stream
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A59A34
  class Stream : public ::System::MarshalByRefObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::System::IO::Stream::ReadWriteParameters
    struct ReadWriteParameters;
    // Nested type: ::System::IO::Stream::ReadWriteTask
    class ReadWriteTask;
    // Nested type: ::System::IO::Stream::NullStream
    class NullStream;
    // Nested type: ::System::IO::Stream::SynchronousAsyncResult
    class SynchronousAsyncResult;
    // Nested type: ::System::IO::Stream::$$c
    class $$c;
    public:
    // private System.IO.Stream/ReadWriteTask _activeReadWriteTask
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::Stream::ReadWriteTask* activeReadWriteTask;
    // Field size check
    static_assert(sizeof(::System::IO::Stream::ReadWriteTask*) == 0x8);
    // private System.Threading.SemaphoreSlim _asyncActiveSemaphore
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::SemaphoreSlim* asyncActiveSemaphore;
    // Field size check
    static_assert(sizeof(::System::Threading::SemaphoreSlim*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.Stream Null
    static ::System::IO::Stream* _get_Null();
    // Set static field: static public readonly System.IO.Stream Null
    static void _set_Null(::System::IO::Stream* value);
    // static field const value: static private System.Int32 _DefaultCopyBufferSize
    static constexpr const int _DefaultCopyBufferSize = 81920;
    // Get static field: static private System.Int32 _DefaultCopyBufferSize
    static int _get__DefaultCopyBufferSize();
    // Set static field: static private System.Int32 _DefaultCopyBufferSize
    static void _set__DefaultCopyBufferSize(int value);
    // Get instance field reference: private System.IO.Stream/ReadWriteTask _activeReadWriteTask
    [[deprecated("Use field access instead!")]] ::System::IO::Stream::ReadWriteTask*& dyn__activeReadWriteTask();
    // Get instance field reference: private System.Threading.SemaphoreSlim _asyncActiveSemaphore
    [[deprecated("Use field access instead!")]] ::System::Threading::SemaphoreSlim*& dyn__asyncActiveSemaphore();
    // System.Threading.SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized()
    // Offset: 0x19E17E0
    ::System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanRead();
    // public System.Boolean get_CanSeek()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanSeek();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_CanWrite();
    // public System.Int64 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_Length();
    // public System.Int64 get_Position()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_Position();
    // public System.Void set_Position(System.Int64 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Position(int64_t value);
    // public System.Int32 get_ReadTimeout()
    // Offset: 0x19E18D0
    int get_ReadTimeout();
    // public System.Int32 get_WriteTimeout()
    // Offset: 0x19E1988
    int get_WriteTimeout();
    // public System.Void Close()
    // Offset: 0x19E1A0C
    void Close();
    // public System.Void Dispose()
    // Offset: 0x19E1A8C
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x19D98EC
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Flush();
    // public System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x19E1A9C
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginReadInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0x19E1AA4
    ::System::IAsyncResult* BeginReadInternal(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // public System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x19E227C
    int EndRead(::System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x19E24AC
    ::System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.Int32> BeginEndReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x19E256C
    ::System::Threading::Tasks::Task_1<int>* BeginEndReadAsync(::ArrayW<uint8_t> buffer, int offset, int count);
    // public System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x19E270C
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginWriteInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0x19E2714
    ::System::IAsyncResult* BeginWriteInternal(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // private System.Void RunReadWriteTaskWhenReady(System.Threading.Tasks.Task asyncWaiter, System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0x19E203C
    void RunReadWriteTaskWhenReady(::System::Threading::Tasks::Task* asyncWaiter, ::System::IO::Stream::ReadWriteTask* readWriteTask);
    // private System.Void RunReadWriteTask(System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0x19E21D0
    void RunReadWriteTask(::System::IO::Stream::ReadWriteTask* readWriteTask);
    // public System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x19E2AB4
    void EndWrite(::System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x19E2CCC
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int count);
    // public System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x19E2D70
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task BeginEndWriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x19E2E28
    ::System::Threading::Tasks::Task* BeginEndWriteAsync(::ArrayW<uint8_t> buffer, int offset, int count);
    // public System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public System.Void SetLength(System.Int64 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetLength(int64_t value);
    // public System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Read(ByRef<::ArrayW<uint8_t>> buffer, int offset, int count);
    // public System.Int32 ReadByte()
    // Offset: 0x19E2FC8
    int ReadByte();
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public System.Void WriteByte(System.Byte value)
    // Offset: 0x19E3074
    void WriteByte(uint8_t value);
    // System.IAsyncResult BlockingBeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x19E1D58
    ::System::IAsyncResult* BlockingBeginRead(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Int32 BlockingEndRead(System.IAsyncResult asyncResult)
    // Offset: 0x19E24A8
    static int BlockingEndRead(::System::IAsyncResult* asyncResult);
    // System.IAsyncResult BlockingBeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x19E2940
    ::System::IAsyncResult* BlockingBeginWrite(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Void BlockingEndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x19E2CC8
    static void BlockingEndWrite(::System::IAsyncResult* asyncResult);
    // static private System.Void .cctor()
    // Offset: 0x19E3300
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x19D94EC
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Stream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream*, creationType>()));
    }
  }; // System.IO.Stream
  #pragma pack(pop)
  static check_size<sizeof(Stream), 32 + sizeof(::System::Threading::SemaphoreSlim*)> __System_IO_StreamSizeCheck;
  static_assert(sizeof(Stream) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized
// Il2CppName: EnsureAsyncActiveSemaphoreInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SemaphoreSlim* (System::IO::Stream::*)()>(&System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "EnsureAsyncActiveSemaphoreInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Stream::*)()>(&System::IO::Stream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Stream::*)()>(&System::IO::Stream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(int64_t)>(&System::IO::Stream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::get_ReadTimeout
// Il2CppName: get_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::*)()>(&System::IO::Stream::get_ReadTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "get_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::get_WriteTimeout
// Il2CppName: get_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::*)()>(&System::IO::Stream::get_WriteTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "get_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(bool)>(&System::IO::Stream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Stream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BeginReadInternal
// Il2CppName: BeginReadInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*, bool)>(&System::IO::Stream::BeginReadInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializeAsynchronously = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BeginReadInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state, serializeAsynchronously});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::*)(::System::IAsyncResult*)>(&System::IO::Stream::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::IO::Stream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BeginEndReadAsync
// Il2CppName: BeginEndReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Stream::BeginEndReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BeginEndReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Stream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BeginWriteInternal
// Il2CppName: BeginWriteInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*, bool)>(&System::IO::Stream::BeginWriteInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializeAsynchronously = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BeginWriteInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state, serializeAsynchronously});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::RunReadWriteTaskWhenReady
// Il2CppName: RunReadWriteTaskWhenReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(::System::Threading::Tasks::Task*, ::System::IO::Stream::ReadWriteTask*)>(&System::IO::Stream::RunReadWriteTaskWhenReady)> {
  static const MethodInfo* get() {
    static auto* asyncWaiter = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* readWriteTask = &::il2cpp_utils::GetClassFromName("System.IO", "Stream/ReadWriteTask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "RunReadWriteTaskWhenReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncWaiter, readWriteTask});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::RunReadWriteTask
// Il2CppName: RunReadWriteTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(::System::IO::Stream::ReadWriteTask*)>(&System::IO::Stream::RunReadWriteTask)> {
  static const MethodInfo* get() {
    static auto* readWriteTask = &::il2cpp_utils::GetClassFromName("System.IO", "Stream/ReadWriteTask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "RunReadWriteTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{readWriteTask});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(::System::IAsyncResult*)>(&System::IO::Stream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Stream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::IO::Stream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BeginEndWriteAsync
// Il2CppName: BeginEndWriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Stream::BeginEndWriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BeginEndWriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Stream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::IO::Stream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(int64_t)>(&System::IO::Stream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::*)(ByRef<::ArrayW<uint8_t>>, int, int)>(&System::IO::Stream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::*)()>(&System::IO::Stream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Stream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(uint8_t)>(&System::IO::Stream::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BlockingBeginRead
// Il2CppName: BlockingBeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Stream::BlockingBeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BlockingBeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BlockingEndRead
// Il2CppName: BlockingEndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IAsyncResult*)>(&System::IO::Stream::BlockingEndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BlockingEndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BlockingBeginWrite
// Il2CppName: BlockingBeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Stream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Stream::BlockingBeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BlockingBeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, callback, state});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::BlockingEndWrite
// Il2CppName: BlockingEndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&System::IO::Stream::BlockingEndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), "BlockingEndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Stream::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!