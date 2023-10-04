// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: Pathfinding.Ionic.Zlib.CompressionMode
#include "Pathfinding/Ionic/Zlib/CompressionMode.hpp"
// Including type: Pathfinding.Ionic.Zlib.CompressionLevel
#include "Pathfinding/Ionic/Zlib/CompressionLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: ZlibBaseStream
  class ZlibBaseStream;
  // Forward declaring type: CompressionStrategy
  struct CompressionStrategy;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: DeflateStream
  class DeflateStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zlib::DeflateStream);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::DeflateStream*, "Pathfinding.Ionic.Zlib", "DeflateStream");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.DeflateStream
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateStream : public ::System::IO::Stream {
    public:
    public:
    // Pathfinding.Ionic.Zlib.ZlibBaseStream _baseStream
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::Ionic::Zlib::ZlibBaseStream* baseStream;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::ZlibBaseStream*) == 0x8);
    // System.IO.Stream _innerStream
    // Size: 0x8
    // Offset: 0x30
    ::System::IO::Stream* innerStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0x38
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: Pathfinding.Ionic.Zlib.ZlibBaseStream _baseStream
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::ZlibBaseStream*& dyn__baseStream();
    // Get instance field reference: System.IO.Stream _innerStream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn__innerStream();
    // Get instance field reference: private System.Boolean _disposed
    [[deprecated("Use field access instead!")]] bool& dyn__disposed();
    // public System.Void .ctor(System.IO.Stream stream, Pathfinding.Ionic.Zlib.CompressionMode mode, System.Boolean leaveOpen)
    // Offset: 0x25DF90C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(::System::IO::Stream* stream, ::Pathfinding::Ionic::Zlib::CompressionMode mode, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zlib::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(stream, mode, leaveOpen)));
    }
    // public System.Void .ctor(System.IO.Stream stream, Pathfinding.Ionic.Zlib.CompressionMode mode, Pathfinding.Ionic.Zlib.CompressionLevel level, System.Boolean leaveOpen)
    // Offset: 0x25DF918
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(::System::IO::Stream* stream, ::Pathfinding::Ionic::Zlib::CompressionMode mode, ::Pathfinding::Ionic::Zlib::CompressionLevel level, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zlib::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(stream, mode, level, leaveOpen)));
    }
    // public System.Void set_BufferSize(System.Int32 value)
    // Offset: 0x25DFAD4
    void set_BufferSize(int value);
    // public System.Void set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy value)
    // Offset: 0x25DFC4C
    void set_Strategy(::Pathfinding::Ionic::Zlib::CompressionStrategy value);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x25DFCF8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Boolean get_CanRead()
    // Offset: 0x25DFDA0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x25DFE58
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x25DFE60
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Void Flush()
    // Offset: 0x25DFF18
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 get_Length()
    // Offset: 0x25DFFC4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x25E002C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x25E00D0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x25E0138
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x25E020C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x25E0274
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x25E02DC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
  }; // Pathfinding.Ionic.Zlib.DeflateStream
  #pragma pack(pop)
  static check_size<sizeof(DeflateStream), 56 + sizeof(bool)> __Pathfinding_Ionic_Zlib_DeflateStreamSizeCheck;
  static_assert(sizeof(DeflateStream) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::set_BufferSize
// Il2CppName: set_BufferSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::DeflateStream::*)(int)>(&Pathfinding::Ionic::Zlib::DeflateStream::set_BufferSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "set_BufferSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::set_Strategy
// Il2CppName: set_Strategy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::DeflateStream::*)(::Pathfinding::Ionic::Zlib::CompressionStrategy)>(&Pathfinding::Ionic::Zlib::DeflateStream::set_Strategy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zlib", "CompressionStrategy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "set_Strategy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::DeflateStream::*)(bool)>(&Pathfinding::Ionic::Zlib::DeflateStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&Pathfinding::Ionic::Zlib::DeflateStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&Pathfinding::Ionic::Zlib::DeflateStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&Pathfinding::Ionic::Zlib::DeflateStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&Pathfinding::Ionic::Zlib::DeflateStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&Pathfinding::Ionic::Zlib::DeflateStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&Pathfinding::Ionic::Zlib::DeflateStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::DeflateStream::*)(int64_t)>(&Pathfinding::Ionic::Zlib::DeflateStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Ionic::Zlib::DeflateStream::*)(::ArrayW<uint8_t>, int, int)>(&Pathfinding::Ionic::Zlib::DeflateStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Ionic::Zlib::DeflateStream::*)(int64_t, ::System::IO::SeekOrigin)>(&Pathfinding::Ionic::Zlib::DeflateStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::DeflateStream::*)(int64_t)>(&Pathfinding::Ionic::Zlib::DeflateStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::DeflateStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::DeflateStream::*)(::ArrayW<uint8_t>, int, int)>(&Pathfinding::Ionic::Zlib::DeflateStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::DeflateStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
