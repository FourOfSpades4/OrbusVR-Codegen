// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ArraySubsetEnumerator
  class ArraySubsetEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ArraySubsetEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ArraySubsetEnumerator*, "System.ComponentModel", "ArraySubsetEnumerator");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ArraySubsetEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ArraySubsetEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Array array
    // Size: 0x8
    // Offset: 0x10
    ::System::Array* array;
    // Field size check
    static_assert(sizeof(::System::Array*) == 0x8);
    // private System.Int32 total
    // Size: 0x4
    // Offset: 0x18
    int total;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 current
    // Size: 0x4
    // Offset: 0x1C
    int current;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Array array
    [[deprecated("Use field access instead!")]] ::System::Array*& dyn_array();
    // Get instance field reference: private System.Int32 total
    [[deprecated("Use field access instead!")]] int& dyn_total();
    // Get instance field reference: private System.Int32 current
    [[deprecated("Use field access instead!")]] int& dyn_current();
    // public System.Void .ctor(System.Array array, System.Int32 count)
    // Offset: 0x1C32FB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArraySubsetEnumerator* New_ctor(::System::Array* array, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ArraySubsetEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArraySubsetEnumerator*, creationType>(array, count)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1C32FF0
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1C33018
    void Reset();
    // public System.Object get_Current()
    // Offset: 0x1C33024
    ::Il2CppObject* get_Current();
  }; // System.ComponentModel.ArraySubsetEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ArraySubsetEnumerator), 28 + sizeof(int)> __System_ComponentModel_ArraySubsetEnumeratorSizeCheck;
  static_assert(sizeof(ArraySubsetEnumerator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ArraySubsetEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ArraySubsetEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ArraySubsetEnumerator::*)()>(&System::ComponentModel::ArraySubsetEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ArraySubsetEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ArraySubsetEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ArraySubsetEnumerator::*)()>(&System::ComponentModel::ArraySubsetEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ArraySubsetEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ArraySubsetEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ArraySubsetEnumerator::*)()>(&System::ComponentModel::ArraySubsetEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ArraySubsetEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
