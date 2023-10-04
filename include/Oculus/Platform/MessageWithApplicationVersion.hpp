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
  // Forward declaring type: ApplicationVersion
  class ApplicationVersion;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithApplicationVersion
  class MessageWithApplicationVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationVersion*, "Oculus.Platform", "MessageWithApplicationVersion");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithApplicationVersion
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithApplicationVersion : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion*> {
    public:
    // protected Oculus.Platform.Models.ApplicationVersion GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xF76164
    ::Oculus::Platform::Models::ApplicationVersion* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xF73420
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithApplicationVersion* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithApplicationVersion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithApplicationVersion*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.ApplicationVersion GetApplicationVersion()
    // Offset: 0xF76114
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ApplicationVersion Message::GetApplicationVersion()
    ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();
  }; // Oculus.Platform.MessageWithApplicationVersion
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (Oculus::Platform::MessageWithApplicationVersion::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithApplicationVersion*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithApplicationVersion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion
// Il2CppName: GetApplicationVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (Oculus::Platform::MessageWithApplicationVersion::*)()>(&Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithApplicationVersion*), "GetApplicationVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
