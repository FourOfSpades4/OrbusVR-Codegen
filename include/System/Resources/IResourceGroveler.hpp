// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceSet
  class ResourceSet;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: IResourceGroveler
  class IResourceGroveler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::IResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::IResourceGroveler*, "System.Resources", "IResourceGroveler");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.IResourceGroveler
  // [TokenAttribute] Offset: FFFFFFFF
  class IResourceGroveler {
    public:
    // public System.Resources.ResourceSet GrovelForResourceSet(System.Globalization.CultureInfo culture, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.Boolean tryParents, System.Boolean createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* culture, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents, bool createIfNotExists, ByRef<::System::Threading::StackCrawlMark> stackMark);
  }; // System.Resources.IResourceGroveler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::IResourceGroveler::GrovelForResourceSet
// Il2CppName: GrovelForResourceSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (System::Resources::IResourceGroveler::*)(::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, bool, bool, ByRef<::System::Threading::StackCrawlMark>)>(&System::Resources::IResourceGroveler::GrovelForResourceSet)> {
  static const MethodInfo* get() {
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* localResourceSets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System.Resources", "ResourceSet")})->byval_arg;
    static auto* tryParents = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createIfNotExists = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::IResourceGroveler*), "GrovelForResourceSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{culture, localResourceSets, tryParents, createIfNotExists, stackMark});
  }
};