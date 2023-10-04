// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: IResourceReader
  class IResourceReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::IResourceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::IResourceReader*, "System.Resources", "IResourceReader");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.IResourceReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A5853C
  class IResourceReader/*, public ::System::Collections::IEnumerable, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.Void Close()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Close();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
  }; // System.Resources.IResourceReader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::IResourceReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::IResourceReader::*)()>(&System::Resources::IResourceReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::IResourceReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::IResourceReader::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Resources::IResourceReader::*)()>(&System::Resources::IResourceReader::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::IResourceReader*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
