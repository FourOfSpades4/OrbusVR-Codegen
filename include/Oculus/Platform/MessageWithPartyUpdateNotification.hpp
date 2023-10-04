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
  // Forward declaring type: PartyUpdateNotification
  class PartyUpdateNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithPartyUpdateNotification
  class MessageWithPartyUpdateNotification;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithPartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPartyUpdateNotification*, "Oculus.Platform", "MessageWithPartyUpdateNotification");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithPartyUpdateNotification
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithPartyUpdateNotification : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PartyUpdateNotification*> {
    public:
    // protected Oculus.Platform.Models.PartyUpdateNotification GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xF7C824
    ::Oculus::Platform::Models::PartyUpdateNotification* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xF73FC0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithPartyUpdateNotification* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithPartyUpdateNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithPartyUpdateNotification*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.PartyUpdateNotification GetPartyUpdateNotification()
    // Offset: 0xF7C7D4
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PartyUpdateNotification Message::GetPartyUpdateNotification()
    ::Oculus::Platform::Models::PartyUpdateNotification* GetPartyUpdateNotification();
  }; // Oculus.Platform.MessageWithPartyUpdateNotification
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPartyUpdateNotification::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification* (Oculus::Platform::MessageWithPartyUpdateNotification::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithPartyUpdateNotification::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPartyUpdateNotification*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPartyUpdateNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPartyUpdateNotification::GetPartyUpdateNotification
// Il2CppName: GetPartyUpdateNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification* (Oculus::Platform::MessageWithPartyUpdateNotification::*)()>(&Oculus::Platform::MessageWithPartyUpdateNotification::GetPartyUpdateNotification)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPartyUpdateNotification*), "GetPartyUpdateNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
