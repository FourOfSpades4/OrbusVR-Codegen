// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.Remoting.Contexts.IContextAttribute
#include "System/Runtime/Remoting/Contexts/IContextAttribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RealProxy
  class RealProxy;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: ProxyAttribute
  class ProxyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::ProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::ProxyAttribute*, "System.Runtime.Remoting.Proxies", "ProxyAttribute");
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Proxies.ProxyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A5B608
  // [AttributeUsageAttribute] Offset: A5B608
  class ProxyAttribute : public ::System::Attribute/*, public ::System::Runtime::Remoting::Contexts::IContextAttribute*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Contexts::IContextAttribute
    operator ::System::Runtime::Remoting::Contexts::IContextAttribute() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(this);
    }
    // public System.MarshalByRefObject CreateInstance(System.Type serverType)
    // Offset: 0x1DBE9D8
    ::System::MarshalByRefObject* CreateInstance(::System::Type* serverType);
    // public System.Runtime.Remoting.Proxies.RealProxy CreateProxy(System.Runtime.Remoting.ObjRef objRef, System.Type serverType, System.Object serverObject, System.Runtime.Remoting.Contexts.Context serverContext)
    // Offset: 0x1DBEB70
    ::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* serverType, ::Il2CppObject* serverObject, ::System::Runtime::Remoting::Contexts::Context* serverContext);
    // public System.Void GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0x1DBECE0
    void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Boolean IsContextOK(System.Runtime.Remoting.Contexts.Context ctx, System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0x1DBECE4
    bool IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
  }; // System.Runtime.Remoting.Proxies.ProxyAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::MarshalByRefObject* (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Type*)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* serverType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::ProxyAttribute*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy
// Il2CppName: CreateProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Proxies::RealProxy* (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::Il2CppObject*, ::System::Runtime::Remoting::Contexts::Context*)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy)> {
  static const MethodInfo* get() {
    static auto* objRef = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ObjRef")->byval_arg;
    static auto* serverType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* serverObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serverContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "Context")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::ProxyAttribute*), "CreateProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objRef, serverType, serverObject, serverContext});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext
// Il2CppName: GetPropertiesForNewContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::ProxyAttribute*), "GetPropertiesForNewContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK
// Il2CppName: IsContextOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "Context")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::ProxyAttribute*), "IsContextOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx, msg});
  }
};
