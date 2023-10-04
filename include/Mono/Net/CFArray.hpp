// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.CFObject
#include "Mono/Net/CFObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFArray
  class CFArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::CFArray);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFArray*, "Mono.Net", "CFArray");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A64DBC
  class CFArray : public ::Mono::Net::CFObject {
    public:
    // Get static field: static private readonly System.IntPtr kCFTypeArrayCallbacks
    static ::System::IntPtr _get_kCFTypeArrayCallbacks();
    // Set static field: static private readonly System.IntPtr kCFTypeArrayCallbacks
    static void _set_kCFTypeArrayCallbacks(::System::IntPtr value);
    // static private System.Void .cctor()
    // Offset: 0x191E210
    static void _cctor();
    // static private System.IntPtr CFArrayGetCount(System.IntPtr handle)
    // Offset: 0x191E44C
    static ::System::IntPtr CFArrayGetCount(::System::IntPtr handle);
    // public System.Int32 get_Count()
    // Offset: 0x191E4E8
    int get_Count();
    // static private System.IntPtr CFArrayGetValueAtIndex(System.IntPtr handle, System.IntPtr index)
    // Offset: 0x191E560
    static ::System::IntPtr CFArrayGetValueAtIndex(::System::IntPtr handle, ::System::IntPtr index);
    // public System.IntPtr get_Item(System.Int32 index)
    // Offset: 0x191E60C
    ::System::IntPtr get_Item(int index);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x191E170
    // Implemented from: Mono.Net.CFObject
    // Base method: System.Void CFObject::.ctor(System.IntPtr handle, System.Boolean own)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFArray* New_ctor(::System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::CFArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFArray*, creationType>(handle, own)));
    }
  }; // Mono.Net.CFArray
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFArray::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::CFArray::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFArray*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFArray::CFArrayGetCount
// Il2CppName: CFArrayGetCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&Mono::Net::CFArray::CFArrayGetCount)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFArray*), "CFArrayGetCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFArray::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Net::CFArray::*)()>(&Mono::Net::CFArray::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFArray*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFArray::CFArrayGetValueAtIndex
// Il2CppName: CFArrayGetValueAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&Mono::Net::CFArray::CFArrayGetValueAtIndex)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFArray*), "CFArrayGetValueAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, index});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::Net::CFArray::*)(int)>(&Mono::Net::CFArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
