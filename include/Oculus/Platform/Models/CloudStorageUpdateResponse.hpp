// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.CloudStorageUpdateStatus
#include "Oculus/Platform/CloudStorageUpdateStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageUpdateResponse
  class CloudStorageUpdateResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageUpdateResponse*, "Oculus.Platform.Models", "CloudStorageUpdateResponse");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CloudStorageUpdateResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorageUpdateResponse : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String Bucket
    // Size: 0x8
    // Offset: 0x10
    ::StringW Bucket;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String Key
    // Size: 0x8
    // Offset: 0x18
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.CloudStorageUpdateStatus Status
    // Size: 0x4
    // Offset: 0x20
    ::Oculus::Platform::CloudStorageUpdateStatus Status;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::CloudStorageUpdateStatus) == 0x4);
    // Padding between fields: Status and: VersionHandle
    char __padding2[0x4] = {};
    // public readonly System.String VersionHandle
    // Size: 0x8
    // Offset: 0x28
    ::StringW VersionHandle;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String Bucket
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Bucket();
    // Get instance field reference: public readonly System.String Key
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Key();
    // Get instance field reference: public readonly Oculus.Platform.CloudStorageUpdateStatus Status
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::CloudStorageUpdateStatus& dyn_Status();
    // Get instance field reference: public readonly System.String VersionHandle
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VersionHandle();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xF786A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStorageUpdateResponse* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::CloudStorageUpdateResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStorageUpdateResponse*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CloudStorageUpdateResponse
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageUpdateResponse), 40 + sizeof(::StringW)> __Oculus_Platform_Models_CloudStorageUpdateResponseSizeCheck;
  static_assert(sizeof(CloudStorageUpdateResponse) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CloudStorageUpdateResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
