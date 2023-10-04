// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: SinkProviderData
  class SinkProviderData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Channels::SinkProviderData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::SinkProviderData*, "System.Runtime.Remoting.Channels", "SinkProviderData");
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.SinkProviderData
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A5B888
  class SinkProviderData : public ::Il2CppObject {
    public:
    public:
    // private System.String sinkName
    // Size: 0x8
    // Offset: 0x10
    ::StringW sinkName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.ArrayList children
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* children;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Hashtable properties
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Hashtable* properties;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Get instance field reference: private System.String sinkName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sinkName();
    // Get instance field reference: private System.Collections.ArrayList children
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_children();
    // Get instance field reference: private System.Collections.Hashtable properties
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_properties();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1430908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinkProviderData* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Channels::SinkProviderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinkProviderData*, creationType>(name)));
    }
    // public System.Collections.IList get_Children()
    // Offset: 0x14309A4
    ::System::Collections::IList* get_Children();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x14309AC
    ::System::Collections::IDictionary* get_Properties();
  }; // System.Runtime.Remoting.Channels.SinkProviderData
  #pragma pack(pop)
  static check_size<sizeof(SinkProviderData), 32 + sizeof(::System::Collections::Hashtable*)> __System_Runtime_Remoting_Channels_SinkProviderDataSizeCheck;
  static_assert(sizeof(SinkProviderData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::SinkProviderData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::SinkProviderData::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (System::Runtime::Remoting::Channels::SinkProviderData::*)()>(&System::Runtime::Remoting::Channels::SinkProviderData::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::SinkProviderData*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::SinkProviderData::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Channels::SinkProviderData::*)()>(&System::Runtime::Remoting::Channels::SinkProviderData::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::SinkProviderData*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};