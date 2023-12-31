// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: SteamNative.Platform
#include "SteamNative/Platform.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamAPICall_t
  struct SteamAPICall_t;
}
// Completed forward declares
// Type namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamUtils
  class SteamUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::SteamNative::SteamUtils);
DEFINE_IL2CPP_ARG_TYPE(::SteamNative::SteamUtils*, "SteamNative", "SteamUtils");
// Type namespace: SteamNative
namespace SteamNative {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SteamNative.SteamUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamUtils : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // SteamNative.Platform/Interface platform
    // Size: 0x8
    // Offset: 0x10
    ::SteamNative::Platform::Interface* platform;
    // Field size check
    static_assert(sizeof(::SteamNative::Platform::Interface*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::SteamNative::Platform::Interface*
    constexpr operator ::SteamNative::Platform::Interface*() const noexcept {
      return platform;
    }
    // Get instance field reference: SteamNative.Platform/Interface platform
    [[deprecated("Use field access instead!")]] ::SteamNative::Platform::Interface*& dyn_platform();
    // public System.Void Dispose()
    // Offset: 0x2846EE0
    void Dispose();
    // public System.Boolean GetImageRGBA(System.Int32 iImage, System.IntPtr pubDest, System.Int32 nDestBufferSize)
    // Offset: 0x28447EC
    bool GetImageRGBA(int iImage, ::System::IntPtr pubDest, int nDestBufferSize);
    // public System.Boolean GetImageSize(System.Int32 iImage, out System.UInt32 pnWidth, out System.UInt32 pnHeight)
    // Offset: 0x284470C
    bool GetImageSize(int iImage, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.Boolean IsAPICallCompleted(SteamNative.SteamAPICall_t hSteamAPICall, ref System.Boolean pbFailed)
    // Offset: 0x28460D0
    bool IsAPICallCompleted(::SteamNative::SteamAPICall_t hSteamAPICall, ByRef<bool> pbFailed);
  }; // SteamNative.SteamUtils
  #pragma pack(pop)
  static check_size<sizeof(SteamUtils), 16 + sizeof(::SteamNative::Platform::Interface*)> __SteamNative_SteamUtilsSizeCheck;
  static_assert(sizeof(SteamUtils) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: SteamNative::SteamUtils::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamNative::SteamUtils::*)()>(&SteamNative::SteamUtils::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(SteamNative::SteamUtils*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: SteamNative::SteamUtils::GetImageRGBA
// Il2CppName: GetImageRGBA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SteamNative::SteamUtils::*)(int, ::System::IntPtr, int)>(&SteamNative::SteamUtils::GetImageRGBA)> {
  static const MethodInfo* get() {
    static auto* iImage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pubDest = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* nDestBufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(SteamNative::SteamUtils*), "GetImageRGBA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iImage, pubDest, nDestBufferSize});
  }
};
// Writing MetadataGetter for method: SteamNative::SteamUtils::GetImageSize
// Il2CppName: GetImageSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SteamNative::SteamUtils::*)(int, ByRef<uint>, ByRef<uint>)>(&SteamNative::SteamUtils::GetImageSize)> {
  static const MethodInfo* get() {
    static auto* iImage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(SteamNative::SteamUtils*), "GetImageSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iImage, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: SteamNative::SteamUtils::IsAPICallCompleted
// Il2CppName: IsAPICallCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (SteamNative::SteamUtils::*)(::SteamNative::SteamAPICall_t, ByRef<bool>)>(&SteamNative::SteamUtils::IsAPICallCompleted)> {
  static const MethodInfo* get() {
    static auto* hSteamAPICall = &::il2cpp_utils::GetClassFromName("SteamNative", "SteamAPICall_t")->byval_arg;
    static auto* pbFailed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(SteamNative::SteamUtils*), "IsAPICallCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hSteamAPICall, pbFailed});
  }
};
