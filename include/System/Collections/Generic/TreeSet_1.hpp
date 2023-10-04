// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.SortedSet`1
#include "System/Collections/Generic/SortedSet_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: TreeSet`1<T>
  template<typename T>
  class TreeSet_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::TreeSet_1, "System.Collections.Generic", "TreeSet`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.TreeSet`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TreeSet_1 : public ::System::Collections::Generic::SortedSet_1<T> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.SortedSet`1
    // Base method: System.Void SortedSet_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreeSet_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::TreeSet_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreeSet_1<T>*, creationType>()));
    }
    // public System.Void .ctor(System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.SortedSet`1
    // Base method: System.Void SortedSet_1::.ctor(System.Collections.Generic.IComparer`1<T> comparer)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreeSet_1<T>* New_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::TreeSet_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreeSet_1<T>*, creationType>(comparer)));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo siInfo, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.SortedSet`1
    // Base method: System.Void SortedSet_1::.ctor(System.Runtime.Serialization.SerializationInfo siInfo, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreeSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* siInfo, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::TreeSet_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreeSet_1<T>*, creationType>(siInfo, context)));
    }
    // override System.Boolean AddIfNotPresent(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Collections.Generic.SortedSet`1
    // Base method: System.Boolean SortedSet_1::AddIfNotPresent(T item)
    bool AddIfNotPresent(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::TreeSet_1::AddIfNotPresent");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::SortedSet_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
  }; // System.Collections.Generic.TreeSet`1
  // Could not write size check! Type: System.Collections.Generic.TreeSet`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"