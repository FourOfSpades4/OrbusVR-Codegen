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
  // Forward declaring type: ChallengeList
  class ChallengeList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithChallengeList
  class MessageWithChallengeList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithChallengeList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallengeList*, "Oculus.Platform", "MessageWithChallengeList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithChallengeList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithChallengeList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeList*> {
    public:
    // protected Oculus.Platform.Models.ChallengeList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xF77AB0
    ::Oculus::Platform::Models::ChallengeList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xF737E0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithChallengeList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithChallengeList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithChallengeList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.ChallengeList GetChallengeList()
    // Offset: 0xF77A60
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ChallengeList Message::GetChallengeList()
    ::Oculus::Platform::Models::ChallengeList* GetChallengeList();
  }; // Oculus.Platform.MessageWithChallengeList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallengeList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeList* (Oculus::Platform::MessageWithChallengeList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithChallengeList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithChallengeList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallengeList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallengeList::GetChallengeList
// Il2CppName: GetChallengeList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeList* (Oculus::Platform::MessageWithChallengeList::*)()>(&Oculus::Platform::MessageWithChallengeList::GetChallengeList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithChallengeList*), "GetChallengeList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
