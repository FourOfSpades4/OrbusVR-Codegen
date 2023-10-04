// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationElementCollection
  class ConfigurationElementCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::ConfigurationElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationElementCollection*, "System.Configuration", "ConfigurationElementCollection");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: A6A7E0
  class ConfigurationElementCollection : public ::System::Configuration::ConfigurationElement/*, public ::System::Collections::ICollection*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0x28A6648
    int get_Count();
    // public System.Boolean get_IsSynchronized()
    // Offset: 0x28A66D0
    bool get_IsSynchronized();
    // public System.Object get_SyncRoot()
    // Offset: 0x28A6758
    ::Il2CppObject* get_SyncRoot();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x28A67E0
    ::System::Collections::IEnumerator* GetEnumerator();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array arr, System.Int32 index)
    // Offset: 0x28A69F8
    void System_Collections_ICollection_CopyTo(::System::Array* arr, int index);
    // protected internal override System.Boolean IsModified()
    // Offset: 0x28A6868
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Boolean ConfigurationElement::IsModified()
    bool IsModified();
    // protected internal override System.Void Reset(System.Configuration.ConfigurationElement parentElement)
    // Offset: 0x28A68F0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::Reset(System.Configuration.ConfigurationElement parentElement)
    void Reset(::System::Configuration::ConfigurationElement* parentElement);
    // protected internal override System.Void ResetModified()
    // Offset: 0x28A6974
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::ResetModified()
    void ResetModified();
  }; // System.Configuration.ConfigurationElementCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Configuration::ConfigurationElementCollection::*)()>(&System::Configuration::ConfigurationElementCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::get_IsSynchronized
// Il2CppName: get_IsSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Configuration::ConfigurationElementCollection::*)()>(&System::Configuration::ConfigurationElementCollection::get_IsSynchronized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "get_IsSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Configuration::ConfigurationElementCollection::*)()>(&System::Configuration::ConfigurationElementCollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Configuration::ConfigurationElementCollection::*)()>(&System::Configuration::ConfigurationElementCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationElementCollection::*)(::System::Array*, int)>(&System::Configuration::ConfigurationElementCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* arr = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arr, index});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::IsModified
// Il2CppName: IsModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Configuration::ConfigurationElementCollection::*)()>(&System::Configuration::ConfigurationElementCollection::IsModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "IsModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&System::Configuration::ConfigurationElementCollection::Reset)> {
  static const MethodInfo* get() {
    static auto* parentElement = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentElement});
  }
};
// Writing MetadataGetter for method: System::Configuration::ConfigurationElementCollection::ResetModified
// Il2CppName: ResetModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationElementCollection::*)()>(&System::Configuration::ConfigurationElementCollection::ResetModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::ConfigurationElementCollection*), "ResetModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};