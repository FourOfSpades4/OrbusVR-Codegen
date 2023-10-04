// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Nitro
namespace Nitro {
  // Forward declaring type: NitroDomainManager
  class NitroDomainManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: GetSecurityDomain
  class GetSecurityDomain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::GetSecurityDomain);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::GetSecurityDomain*, "PowerUI", "GetSecurityDomain");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.GetSecurityDomain
  // [TokenAttribute] Offset: FFFFFFFF
  class GetSecurityDomain : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A4825C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetSecurityDomain* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::GetSecurityDomain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetSecurityDomain*, creationType>(object, method)));
    }
    // public Nitro.NitroDomainManager Invoke()
    // Offset: 0x1A4826C
    ::Nitro::NitroDomainManager* Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A48688
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Nitro.NitroDomainManager EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A486BC
    ::Nitro::NitroDomainManager* EndInvoke(::System::IAsyncResult* result);
  }; // PowerUI.GetSecurityDomain
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::GetSecurityDomain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::GetSecurityDomain::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::NitroDomainManager* (PowerUI::GetSecurityDomain::*)()>(&PowerUI::GetSecurityDomain::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::GetSecurityDomain*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::GetSecurityDomain::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (PowerUI::GetSecurityDomain::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&PowerUI::GetSecurityDomain::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::GetSecurityDomain*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: PowerUI::GetSecurityDomain::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Nitro::NitroDomainManager* (PowerUI::GetSecurityDomain::*)(::System::IAsyncResult*)>(&PowerUI::GetSecurityDomain::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::GetSecurityDomain*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
