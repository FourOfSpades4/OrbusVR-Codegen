// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: PlatformHelper
  class PlatformHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::PlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::PlatformHelper*, "System.Threading", "PlatformHelper");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.PlatformHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformHelper : public ::Il2CppObject {
    public:
    // Get static field: static private System.Int32 s_processorCount
    static int _get_s_processorCount();
    // Set static field: static private System.Int32 s_processorCount
    static void _set_s_processorCount(int value);
    // Get static field: static private System.Int32 s_lastProcessorCountRefreshTicks
    static int _get_s_lastProcessorCountRefreshTicks();
    // Set static field: static private System.Int32 s_lastProcessorCountRefreshTicks
    static void _set_s_lastProcessorCountRefreshTicks(int value);
    // static System.Int32 get_ProcessorCount()
    // Offset: 0x1F0B214
    static int get_ProcessorCount();
    // static System.Boolean get_IsSingleProcessor()
    // Offset: 0x1F0E214
    static bool get_IsSingleProcessor();
  }; // System.Threading.PlatformHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::PlatformHelper::get_ProcessorCount
// Il2CppName: get_ProcessorCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Threading::PlatformHelper::get_ProcessorCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::PlatformHelper*), "get_ProcessorCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::PlatformHelper::get_IsSingleProcessor
// Il2CppName: get_IsSingleProcessor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::PlatformHelper::get_IsSingleProcessor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::PlatformHelper*), "get_IsSingleProcessor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
