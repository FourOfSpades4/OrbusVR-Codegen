// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: IStructuralEquatable
  class IStructuralEquatable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::IStructuralEquatable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IStructuralEquatable*, "System.Collections", "IStructuralEquatable");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IStructuralEquatable
  // [TokenAttribute] Offset: FFFFFFFF
  class IStructuralEquatable {
    public:
    // public System.Boolean Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::Il2CppObject* other, ::System::Collections::IEqualityComparer* comparer);
    // public System.Int32 GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetHashCode(::System::Collections::IEqualityComparer* comparer);
  }; // System.Collections.IStructuralEquatable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::IStructuralEquatable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::IStructuralEquatable::*)(::Il2CppObject*, ::System::Collections::IEqualityComparer*)>(&System::Collections::IStructuralEquatable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IEqualityComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IStructuralEquatable*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, comparer});
  }
};
// Writing MetadataGetter for method: System::Collections::IStructuralEquatable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::IStructuralEquatable::*)(::System::Collections::IEqualityComparer*)>(&System::Collections::IStructuralEquatable::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IEqualityComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IStructuralEquatable*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparer});
  }
};
