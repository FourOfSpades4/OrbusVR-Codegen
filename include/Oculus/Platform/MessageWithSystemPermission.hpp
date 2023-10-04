// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: SystemPermission
  class SystemPermission;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithSystemPermission
  class MessageWithSystemPermission;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithSystemPermission);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSystemPermission*, "Oculus.Platform", "MessageWithSystemPermission");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithSystemPermission
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithSystemPermission : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SystemPermission*> {
    public:
    // protected Oculus.Platform.Models.SystemPermission GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xF7E708
    ::Oculus::Platform::Models::SystemPermission* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xF7E658
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithSystemPermission* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithSystemPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithSystemPermission*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.SystemPermission GetSystemPermission()
    // Offset: 0xF7E6B8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.SystemPermission Message::GetSystemPermission()
    ::Oculus::Platform::Models::SystemPermission* GetSystemPermission();
  }; // Oculus.Platform.MessageWithSystemPermission
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSystemPermission::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemPermission* (Oculus::Platform::MessageWithSystemPermission::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithSystemPermission::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithSystemPermission*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSystemPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSystemPermission::GetSystemPermission
// Il2CppName: GetSystemPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemPermission* (Oculus::Platform::MessageWithSystemPermission::*)()>(&Oculus::Platform::MessageWithSystemPermission::GetSystemPermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithSystemPermission*), "GetSystemPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
