// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRIOBuffer
#include "Valve/VR/IVRIOBuffer.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
  // Forward declaring type: EIOBufferMode
  struct EIOBufferMode;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: CVRIOBuffer
  class CVRIOBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRIOBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRIOBuffer*, "Valve.VR", "CVRIOBuffer");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRIOBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRIOBuffer : public ::Il2CppObject {
    public:
    public:
    // private Valve.VR.IVRIOBuffer FnTable
    // Size: 0x28
    // Offset: 0x10
    ::Valve::VR::IVRIOBuffer FnTable;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVRIOBuffer) == 0x28);
    public:
    // Creating conversion operator: operator ::Valve::VR::IVRIOBuffer
    constexpr operator ::Valve::VR::IVRIOBuffer() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRIOBuffer FnTable
    [[deprecated("Use field access instead!")]] ::Valve::VR::IVRIOBuffer& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFF6430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRIOBuffer* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRIOBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRIOBuffer*, creationType>(pInterface)));
    }
    // public Valve.VR.EIOBufferError Open(System.String pchPath, Valve.VR.EIOBufferMode mode, System.UInt32 unElementSize, System.UInt32 unElements, ref System.UInt64 pulBuffer)
    // Offset: 0xFF6518
    ::Valve::VR::EIOBufferError Open(::StringW pchPath, ::Valve::VR::EIOBufferMode mode, uint unElementSize, uint unElements, ByRef<uint64_t> pulBuffer);
    // public Valve.VR.EIOBufferError Close(System.UInt64 ulBuffer)
    // Offset: 0xFF6584
    ::Valve::VR::EIOBufferError Close(uint64_t ulBuffer);
    // public Valve.VR.EIOBufferError Read(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead)
    // Offset: 0xFF65BC
    ::Valve::VR::EIOBufferError Read(uint64_t ulBuffer, ::System::IntPtr pDst, uint unBytes, ByRef<uint> punRead);
    // public Valve.VR.EIOBufferError Write(System.UInt64 ulBuffer, System.IntPtr pSrc, System.UInt32 unBytes)
    // Offset: 0xFF6620
    ::Valve::VR::EIOBufferError Write(uint64_t ulBuffer, ::System::IntPtr pSrc, uint unBytes);
    // public System.UInt64 PropertyContainer(System.UInt64 ulBuffer)
    // Offset: 0xFF6670
    uint64_t PropertyContainer(uint64_t ulBuffer);
  }; // Valve.VR.CVRIOBuffer
  #pragma pack(pop)
  static check_size<sizeof(CVRIOBuffer), 16 + sizeof(::Valve::VR::IVRIOBuffer)> __Valve_VR_CVRIOBufferSizeCheck;
  static_assert(sizeof(CVRIOBuffer) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRIOBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRIOBuffer::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EIOBufferError (Valve::VR::CVRIOBuffer::*)(::StringW, ::Valve::VR::EIOBufferMode, uint, uint, ByRef<uint64_t>)>(&Valve::VR::CVRIOBuffer::Open)> {
  static const MethodInfo* get() {
    static auto* pchPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("Valve.VR", "EIOBufferMode")->byval_arg;
    static auto* unElementSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unElements = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRIOBuffer*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchPath, mode, unElementSize, unElements, pulBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRIOBuffer::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EIOBufferError (Valve::VR::CVRIOBuffer::*)(uint64_t)>(&Valve::VR::CVRIOBuffer::Close)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRIOBuffer*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRIOBuffer::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EIOBufferError (Valve::VR::CVRIOBuffer::*)(uint64_t, ::System::IntPtr, uint, ByRef<uint>)>(&Valve::VR::CVRIOBuffer::Read)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pDst = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* punRead = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRIOBuffer*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, pDst, unBytes, punRead});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRIOBuffer::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EIOBufferError (Valve::VR::CVRIOBuffer::*)(uint64_t, ::System::IntPtr, uint)>(&Valve::VR::CVRIOBuffer::Write)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pSrc = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRIOBuffer*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, pSrc, unBytes});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRIOBuffer::PropertyContainer
// Il2CppName: PropertyContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Valve::VR::CVRIOBuffer::*)(uint64_t)>(&Valve::VR::CVRIOBuffer::PropertyContainer)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRIOBuffer*), "PropertyContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer});
  }
};
