// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: NclUtilities
  class NclUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NclUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NclUtilities*, "System.Net", "NclUtilities");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NclUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class NclUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private System.Net.IPAddress[] _LocalAddresses
    static ::ArrayW<::System::Net::IPAddress*> _get__LocalAddresses();
    // Set static field: static private System.Net.IPAddress[] _LocalAddresses
    static void _set__LocalAddresses(::ArrayW<::System::Net::IPAddress*> value);
    // Get static field: static private System.Object _LocalAddressesLock
    static ::Il2CppObject* _get__LocalAddressesLock();
    // Set static field: static private System.Object _LocalAddressesLock
    static void _set__LocalAddressesLock(::Il2CppObject* value);
    // Get static field: static System.String _LocalDomainName
    static ::StringW _get__LocalDomainName();
    // Set static field: static System.String _LocalDomainName
    static void _set__LocalDomainName(::StringW value);
    // static System.Boolean IsAddressLocal(System.Net.IPAddress ipAddress)
    // Offset: 0x1623C7C
    static bool IsAddressLocal(::System::Net::IPAddress* ipAddress);
    // static private System.Net.IPHostEntry GetLocalHost()
    // Offset: 0x162415C
    static ::System::Net::IPHostEntry* GetLocalHost();
    // static System.Net.IPAddress[] get_LocalAddresses()
    // Offset: 0x1623D18
    static ::ArrayW<::System::Net::IPAddress*> get_LocalAddresses();
    // static private System.Object get_LocalAddressesLock()
    // Offset: 0x16241C4
    static ::Il2CppObject* get_LocalAddressesLock();
  }; // System.Net.NclUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NclUtilities::IsAddressLocal
// Il2CppName: IsAddressLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::IPAddress*)>(&System::Net::NclUtilities::IsAddressLocal)> {
  static const MethodInfo* get() {
    static auto* ipAddress = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "IsAddressLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipAddress});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::GetLocalHost
// Il2CppName: GetLocalHost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)()>(&System::Net::NclUtilities::GetLocalHost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "GetLocalHost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::get_LocalAddresses
// Il2CppName: get_LocalAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)()>(&System::Net::NclUtilities::get_LocalAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "get_LocalAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::get_LocalAddressesLock
// Il2CppName: get_LocalAddressesLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Net::NclUtilities::get_LocalAddressesLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "get_LocalAddressesLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};