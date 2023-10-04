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
  // Forward declaring type: ProductList
  class ProductList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithProductList
  class MessageWithProductList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithProductList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithProductList*, "Oculus.Platform", "MessageWithProductList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithProductList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithProductList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ProductList*> {
    public:
    // protected Oculus.Platform.Models.ProductList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xF7CFDC
    ::Oculus::Platform::Models::ProductList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xF74080
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithProductList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithProductList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithProductList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.ProductList GetProductList()
    // Offset: 0xF7CF8C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ProductList Message::GetProductList()
    ::Oculus::Platform::Models::ProductList* GetProductList();
  }; // Oculus.Platform.MessageWithProductList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithProductList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ProductList* (Oculus::Platform::MessageWithProductList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithProductList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithProductList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithProductList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithProductList::GetProductList
// Il2CppName: GetProductList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ProductList* (Oculus::Platform::MessageWithProductList::*)()>(&Oculus::Platform::MessageWithProductList::GetProductList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithProductList*), "GetProductList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};