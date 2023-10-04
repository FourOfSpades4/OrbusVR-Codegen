// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: CalApplicationFinalized
  class CalApplicationFinalized;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::CalApplicationFinalized);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CalApplicationFinalized*, "Oculus.Platform.Models", "CalApplicationFinalized");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CalApplicationFinalized
  // [TokenAttribute] Offset: FFFFFFFF
  class CalApplicationFinalized : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 CountdownMS
    // Size: 0x4
    // Offset: 0x10
    int CountdownMS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: CountdownMS and: _ID
    char __padding0[0x4] = {};
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x18
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String LaunchDetails
    // Size: 0x8
    // Offset: 0x20
    ::StringW LaunchDetails;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 CountdownMS
    [[deprecated("Use field access instead!")]] int& dyn_CountdownMS();
    // Get instance field reference: public readonly System.UInt64 ID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ID();
    // Get instance field reference: public readonly System.String LaunchDetails
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LaunchDetails();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xF76F2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalApplicationFinalized* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::CalApplicationFinalized::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalApplicationFinalized*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CalApplicationFinalized
  #pragma pack(pop)
  static check_size<sizeof(CalApplicationFinalized), 32 + sizeof(::StringW)> __Oculus_Platform_Models_CalApplicationFinalizedSizeCheck;
  static_assert(sizeof(CalApplicationFinalized) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CalApplicationFinalized::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
