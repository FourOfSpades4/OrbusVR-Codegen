// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CloseExState
  struct CloseExState;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ICloseEx
  class ICloseEx;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ICloseEx);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICloseEx*, "System.Net", "ICloseEx");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ICloseEx
  // [TokenAttribute] Offset: FFFFFFFF
  class ICloseEx {
    public:
    // public System.Void CloseEx(System.Net.CloseExState closeState)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CloseEx(::System::Net::CloseExState closeState);
  }; // System.Net.ICloseEx
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ICloseEx::CloseEx
// Il2CppName: CloseEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ICloseEx::*)(::System::Net::CloseExState)>(&System::Net::ICloseEx::CloseEx)> {
  static const MethodInfo* get() {
    static auto* closeState = &::il2cpp_utils::GetClassFromName("System.Net", "CloseExState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ICloseEx*), "CloseEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{closeState});
  }
};
