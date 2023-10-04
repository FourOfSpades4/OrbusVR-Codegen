// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: NetFxCoreExtensions
  class NetFxCoreExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngineInternal::NetFxCoreExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::NetFxCoreExtensions*, "UnityEngineInternal", "NetFxCoreExtensions");
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.NetFxCoreExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class NetFxCoreExtensions : public ::Il2CppObject {
    public:
    // static public System.Delegate CreateDelegate(System.Reflection.MethodInfo self, System.Type delegateType, System.Object target)
    // Offset: 0x283F8F0
    static ::System::Delegate* CreateDelegate(::System::Reflection::MethodInfo* self, ::System::Type* delegateType, ::Il2CppObject* target);
    // static public System.Reflection.MethodInfo GetMethodInfo(System.Delegate self)
    // Offset: 0x283F908
    static ::System::Reflection::MethodInfo* GetMethodInfo(::System::Delegate* self);
  }; // UnityEngineInternal.NetFxCoreExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngineInternal::NetFxCoreExtensions::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Reflection::MethodInfo*, ::System::Type*, ::Il2CppObject*)>(&UnityEngineInternal::NetFxCoreExtensions::CreateDelegate)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* delegateType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::NetFxCoreExtensions*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, delegateType, target});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::NetFxCoreExtensions::GetMethodInfo
// Il2CppName: GetMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Delegate*)>(&UnityEngineInternal::NetFxCoreExtensions::GetMethodInfo)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::NetFxCoreExtensions*), "GetMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};