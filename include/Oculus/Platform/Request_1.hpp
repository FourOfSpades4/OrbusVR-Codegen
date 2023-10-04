// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Request
#include "Oculus/Platform/Request.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Message because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Request_1, "Oculus.Platform", "Request`1");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Request`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Request_1 : public ::Oculus::Platform::Request {
    public:
    public:
    // private Oculus.Platform.Message`1/Callback<T> callback_
    // Size: 0x8
    // Offset: 0x0
    typename ::Oculus::Platform::Message_1<T>::Callback* callback;
    // Field size check
    static_assert(sizeof(typename ::Oculus::Platform::Message_1<T>::Callback*) == 0x8);
    public:
    // Creating conversion operator: operator typename ::Oculus::Platform::Message_1<T>::Callback*
    constexpr operator typename ::Oculus::Platform::Message_1<T>::Callback*() const noexcept {
      return callback;
    }
    // Autogenerated instance field getter
    // Get instance field: private Oculus.Platform.Message`1/Callback<T> callback_
    [[deprecated("Use field access instead!")]] typename ::Oculus::Platform::Message_1<T>::Callback*& dyn_callback_() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Request_1::dyn_callback_");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callback_"))->offset;
      return *reinterpret_cast<typename ::Oculus::Platform::Message_1<T>::Callback**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Oculus.Platform.Request`1<T> OnComplete(Oculus.Platform.Message`1/Callback<T> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Oculus::Platform::Request_1<T>* OnComplete(typename ::Oculus::Platform::Message_1<T>::Callback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Request_1::OnComplete");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnComplete", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      return ::il2cpp_utils::RunMethodRethrow<::Oculus::Platform::Request_1<T>*, false>(this, ___internal__method, callback);
    }
    // public System.Void .ctor(System.UInt64 requestID)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Platform.Request
    // Base method: System.Void Request::.ctor(System.UInt64 requestID)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Request_1<T>* New_ctor(uint64_t requestID) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Request_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Request_1<T>*, creationType>(requestID)));
    }
    // public override System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Oculus.Platform.Request
    // Base method: System.Void Request::HandleMessage(Oculus.Platform.Message msg)
    void HandleMessage(::Oculus::Platform::Message* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Request_1::HandleMessage");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Platform::Request*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, msg);
    }
  }; // Oculus.Platform.Request`1
  // Could not write size check! Type: Oculus.Platform.Request`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
