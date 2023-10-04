// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::NameObjectCollectionBase::KeysCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameObjectCollectionBase::KeysCollection*, "System.Collections.Specialized", "NameObjectCollectionBase/KeysCollection");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A66090
  class NameObjectCollectionBase::KeysCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    public:
    // private System.Collections.Specialized.NameObjectCollectionBase _coll
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Specialized::NameObjectCollectionBase* coll;
    // Field size check
    static_assert(sizeof(::System::Collections::Specialized::NameObjectCollectionBase*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Specialized::NameObjectCollectionBase*
    constexpr operator ::System::Collections::Specialized::NameObjectCollectionBase*() const noexcept {
      return coll;
    }
    // Get instance field reference: private System.Collections.Specialized.NameObjectCollectionBase _coll
    [[deprecated("Use field access instead!")]] ::System::Collections::Specialized::NameObjectCollectionBase*& dyn__coll();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1C2E838
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Int32 get_Count()
    // Offset: 0x1C2E89C
    int get_Count();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1C2E8D4
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x1C2EBFC
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // private System.Boolean System.Collections.ICollection.get_IsSynchronized()
    // Offset: 0x1C2ECB4
    bool System_Collections_ICollection_get_IsSynchronized();
    // System.Void .ctor()
    // Offset: 0x1C2ECBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase::KeysCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase::KeysCollection*, creationType>()));
    }
  }; // System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
  #pragma pack(pop)
  static check_size<sizeof(NameObjectCollectionBase::KeysCollection), 16 + sizeof(::System::Collections::Specialized::NameObjectCollectionBase*)> __System_Collections_Specialized_NameObjectCollectionBase_KeysCollectionSizeCheck;
  static_assert(sizeof(NameObjectCollectionBase::KeysCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::KeysCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::KeysCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::*)(::System::Array*, int)>(&System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::KeysCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::KeysCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::System_Collections_ICollection_get_IsSynchronized
// Il2CppName: System.Collections.ICollection.get_IsSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::*)()>(&System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::System_Collections_ICollection_get_IsSynchronized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NameObjectCollectionBase::KeysCollection*), "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::KeysCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
