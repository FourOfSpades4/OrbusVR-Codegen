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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADArgHolder
  class CADArgHolder;
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADMessageBase
  class CADMessageBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMessageBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMessageBase*, "System.Runtime.Remoting.Messaging", "CADMessageBase");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMessageBase
  // [TokenAttribute] Offset: FFFFFFFF
  class CADMessageBase : public ::Il2CppObject {
    public:
    public:
    // protected System.Object[] _args
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // protected System.Byte[] _serializedArgs
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> serializedArgs;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Int32 _propertyCount
    // Size: 0x4
    // Offset: 0x20
    int propertyCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: propertyCount and: callContext
    char __padding2[0x4] = {};
    // protected System.Runtime.Remoting.Messaging.CADArgHolder _callContext
    // Size: 0x8
    // Offset: 0x28
    ::System::Runtime::Remoting::Messaging::CADArgHolder* callContext;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::CADArgHolder*) == 0x8);
    // System.Byte[] serializedMethod
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> serializedMethod;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: protected System.Object[] _args
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__args();
    // Get instance field reference: protected System.Byte[] _serializedArgs
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__serializedArgs();
    // Get instance field reference: protected System.Int32 _propertyCount
    [[deprecated("Use field access instead!")]] int& dyn__propertyCount();
    // Get instance field reference: protected System.Runtime.Remoting.Messaging.CADArgHolder _callContext
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::CADArgHolder*& dyn__callContext();
    // Get instance field reference: System.Byte[] serializedMethod
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_serializedMethod();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage msg)
    // Offset: 0x1DAB088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADMessageBase* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::CADMessageBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADMessageBase*, creationType>(msg)));
    }
    // System.Reflection.MethodBase GetMethod()
    // Offset: 0x1DAB4CC
    ::System::Reflection::MethodBase* GetMethod();
    // static protected System.Type[] GetSignature(System.Reflection.MethodBase methodBase, System.Boolean load)
    // Offset: 0x1DABBA8
    static ::ArrayW<::System::Type*> GetSignature(::System::Reflection::MethodBase* methodBase, bool load);
    // static System.Int32 MarshalProperties(System.Collections.IDictionary dict, ref System.Collections.ArrayList args)
    // Offset: 0x1DABD9C
    static int MarshalProperties(::System::Collections::IDictionary* dict, ByRef<::System::Collections::ArrayList*> args);
    // static System.Void UnmarshalProperties(System.Collections.IDictionary dict, System.Int32 count, System.Collections.ArrayList args)
    // Offset: 0x1DAC5A4
    static void UnmarshalProperties(::System::Collections::IDictionary* dict, int count, ::System::Collections::ArrayList* args);
    // static private System.Boolean IsPossibleToIgnoreMarshal(System.Object obj)
    // Offset: 0x1DAC704
    static bool IsPossibleToIgnoreMarshal(::Il2CppObject* obj);
    // protected System.Object MarshalArgument(System.Object arg, ref System.Collections.ArrayList args)
    // Offset: 0x1DAC998
    ::Il2CppObject* MarshalArgument(::Il2CppObject* arg, ByRef<::System::Collections::ArrayList*> args);
    // protected System.Object UnmarshalArgument(System.Object arg, System.Collections.ArrayList args)
    // Offset: 0x1DACC14
    ::Il2CppObject* UnmarshalArgument(::Il2CppObject* arg, ::System::Collections::ArrayList* args);
    // System.Object[] MarshalArguments(System.Object[] arguments, ref System.Collections.ArrayList args)
    // Offset: 0x1DAD360
    ::ArrayW<::Il2CppObject*> MarshalArguments(::ArrayW<::Il2CppObject*> arguments, ByRef<::System::Collections::ArrayList*> args);
    // System.Object[] UnmarshalArguments(System.Object[] arguments, System.Collections.ArrayList args)
    // Offset: 0x1DAD4A8
    ::ArrayW<::Il2CppObject*> UnmarshalArguments(::ArrayW<::Il2CppObject*> arguments, ::System::Collections::ArrayList* args);
    // protected System.Void SaveLogicalCallContext(System.Runtime.Remoting.Messaging.IMethodMessage msg, ref System.Collections.ArrayList serializeList)
    // Offset: 0x1DAD5F0
    void SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* msg, ByRef<::System::Collections::ArrayList*> serializeList);
    // System.Runtime.Remoting.Messaging.LogicalCallContext GetLogicalCallContext(System.Collections.ArrayList args)
    // Offset: 0x1DAD8D0
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(::System::Collections::ArrayList* args);
  }; // System.Runtime.Remoting.Messaging.CADMessageBase
  #pragma pack(pop)
  static check_size<sizeof(CADMessageBase), 48 + sizeof(::ArrayW<uint8_t>)> __System_Runtime_Remoting_Messaging_CADMessageBaseSizeCheck;
  static_assert(sizeof(CADMessageBase) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod
// Il2CppName: GetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::CADMessageBase::*)()>(&System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "GetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::System::Reflection::MethodBase*, bool)>(&System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature)> {
  static const MethodInfo* get() {
    static auto* methodBase = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* load = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodBase, load});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties
// Il2CppName: MarshalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Collections::IDictionary*, ByRef<::System::Collections::ArrayList*>)>(&System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties)> {
  static const MethodInfo* get() {
    static auto* dict = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "MarshalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dict, args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties
// Il2CppName: UnmarshalProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IDictionary*, int, ::System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties)> {
  static const MethodInfo* get() {
    static auto* dict = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "UnmarshalProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dict, count, args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal
// Il2CppName: IsPossibleToIgnoreMarshal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "IsPossibleToIgnoreMarshal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument
// Il2CppName: MarshalArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::CADMessageBase::*)(::Il2CppObject*, ByRef<::System::Collections::ArrayList*>)>(&System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument)> {
  static const MethodInfo* get() {
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "MarshalArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg, args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument
// Il2CppName: UnmarshalArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::CADMessageBase::*)(::Il2CppObject*, ::System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument)> {
  static const MethodInfo* get() {
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "UnmarshalArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg, args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments
// Il2CppName: MarshalArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::CADMessageBase::*)(::ArrayW<::Il2CppObject*>, ByRef<::System::Collections::ArrayList*>)>(&System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments)> {
  static const MethodInfo* get() {
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "MarshalArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments, args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments
// Il2CppName: UnmarshalArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::CADMessageBase::*)(::ArrayW<::Il2CppObject*>, ::System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments)> {
  static const MethodInfo* get() {
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "UnmarshalArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments, args});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext
// Il2CppName: SaveLogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ByRef<::System::Collections::ArrayList*>)>(&System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMethodMessage")->byval_arg;
    static auto* serializeList = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "SaveLogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, serializeList});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext
// Il2CppName: GetLogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Collections::ArrayList*)>(&System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CADMessageBase*), "GetLogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
