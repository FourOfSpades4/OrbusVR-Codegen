// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.ITTSMessageQueue
#include "VivoxUnity/ITTSMessageQueue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: TTSMessage
  class TTSMessage;
  // Forward declaring type: ITTSMessageQueueEventArgs
  class ITTSMessageQueueEventArgs;
}
// Forward declaring namespace: VivoxUnity::Private
namespace VivoxUnity::Private {
  // Forward declaring type: TextToSpeech
  class TextToSpeech;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyChangedEventArgs
  class PropertyChangedEventArgs;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Forward declaring type: TTSMessageQueue
  class TTSMessageQueue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::TTSMessageQueue);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::TTSMessageQueue*, "VivoxUnity.Private", "TTSMessageQueue");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.TTSMessageQueue
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSMessageQueue : public ::Il2CppObject/*, public ::VivoxUnity::ITTSMessageQueue*/ {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<VivoxUnity.TTSMessage> _messages
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::VivoxUnity::TTSMessage*>* messages;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VivoxUnity::TTSMessage*>*) == 0x8);
    // private VivoxUnity.Private.TextToSpeech _parentTTS
    // Size: 0x8
    // Offset: 0x18
    ::VivoxUnity::Private::TextToSpeech* parentTTS;
    // Field size check
    static_assert(sizeof(::VivoxUnity::Private::TextToSpeech*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE408
    // private System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> AfterMessageAdded
    // Size: 0x8
    // Offset: 0x20
    ::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* AfterMessageAdded;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE418
    // private System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> BeforeMessageRemoved
    // Size: 0x8
    // Offset: 0x28
    ::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* BeforeMessageRemoved;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABE428
    // private System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> AfterMessageUpdated
    // Size: 0x8
    // Offset: 0x30
    ::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* AfterMessageUpdated;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VivoxUnity::ITTSMessageQueue
    operator ::VivoxUnity::ITTSMessageQueue() noexcept {
      return *reinterpret_cast<::VivoxUnity::ITTSMessageQueue*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<VivoxUnity.TTSMessage> _messages
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VivoxUnity::TTSMessage*>*& dyn__messages();
    // Get instance field reference: private VivoxUnity.Private.TextToSpeech _parentTTS
    [[deprecated("Use field access instead!")]] ::VivoxUnity::Private::TextToSpeech*& dyn__parentTTS();
    // Get instance field reference: private System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> AfterMessageAdded
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*& dyn_AfterMessageAdded();
    // Get instance field reference: private System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> BeforeMessageRemoved
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*& dyn_BeforeMessageRemoved();
    // Get instance field reference: private System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> AfterMessageUpdated
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*& dyn_AfterMessageUpdated();
    // public System.Void add_AfterMessageAdded(System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> value)
    // Offset: 0x12D5138
    void add_AfterMessageAdded(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* value);
    // public System.Void remove_AfterMessageAdded(System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> value)
    // Offset: 0x12D5224
    void remove_AfterMessageAdded(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* value);
    // public System.Void add_BeforeMessageRemoved(System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> value)
    // Offset: 0x12D5310
    void add_BeforeMessageRemoved(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* value);
    // public System.Void remove_BeforeMessageRemoved(System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> value)
    // Offset: 0x12D53FC
    void remove_BeforeMessageRemoved(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* value);
    // public System.Void add_AfterMessageUpdated(System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> value)
    // Offset: 0x12D54E8
    void add_AfterMessageUpdated(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* value);
    // public System.Void remove_AfterMessageUpdated(System.EventHandler`1<VivoxUnity.ITTSMessageQueueEventArgs> value)
    // Offset: 0x12D55D4
    void remove_AfterMessageUpdated(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>* value);
    // System.Void .ctor(VivoxUnity.Private.TextToSpeech tts)
    // Offset: 0x12D56C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSMessageQueue* New_ctor(::VivoxUnity::Private::TextToSpeech* tts) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::TTSMessageQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSMessageQueue*, creationType>(tts)));
    }
    // System.Void Cleanup(VivoxUnity.TTSMessage message)
    // Offset: 0x12D5744
    void Cleanup(::VivoxUnity::TTSMessage* message);
    // public System.Void Clear()
    // Offset: 0x12D596C
    void Clear();
    // public System.Boolean Contains(VivoxUnity.TTSMessage message)
    // Offset: 0x12D5C90
    bool Contains(::VivoxUnity::TTSMessage* message);
    // public System.Int32 get_Count()
    // Offset: 0x12D5D00
    int get_Count();
    // public VivoxUnity.TTSMessage Dequeue()
    // Offset: 0x12D5D60
    ::VivoxUnity::TTSMessage* Dequeue();
    // public System.Void Enqueue(VivoxUnity.TTSMessage message)
    // Offset: 0x12D5E84
    void Enqueue(::VivoxUnity::TTSMessage* message);
    // private System.Void OnMessage_PropertyChanged(System.Object sender, System.ComponentModel.PropertyChangedEventArgs e)
    // Offset: 0x12D664C
    void OnMessage_PropertyChanged(::Il2CppObject* sender, ::System::ComponentModel::PropertyChangedEventArgs* e);
    // public VivoxUnity.TTSMessage Peek()
    // Offset: 0x12D6784
    ::VivoxUnity::TTSMessage* Peek();
    // public System.Boolean Remove(VivoxUnity.TTSMessage message)
    // Offset: 0x12D5AB8
    bool Remove(::VivoxUnity::TTSMessage* message);
    // public System.Collections.Generic.IEnumerator`1<VivoxUnity.TTSMessage> GetEnumerator()
    // Offset: 0x12D6898
    ::System::Collections::Generic::IEnumerator_1<::VivoxUnity::TTSMessage*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12D692C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // VivoxUnity.Private.TTSMessageQueue
  #pragma pack(pop)
  static check_size<sizeof(TTSMessageQueue), 48 + sizeof(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*)> __VivoxUnity_Private_TTSMessageQueueSizeCheck;
  static_assert(sizeof(TTSMessageQueue) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::add_AfterMessageAdded
// Il2CppName: add_AfterMessageAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*)>(&VivoxUnity::Private::TTSMessageQueue::add_AfterMessageAdded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VivoxUnity", "ITTSMessageQueueEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "add_AfterMessageAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::remove_AfterMessageAdded
// Il2CppName: remove_AfterMessageAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*)>(&VivoxUnity::Private::TTSMessageQueue::remove_AfterMessageAdded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VivoxUnity", "ITTSMessageQueueEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "remove_AfterMessageAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::add_BeforeMessageRemoved
// Il2CppName: add_BeforeMessageRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*)>(&VivoxUnity::Private::TTSMessageQueue::add_BeforeMessageRemoved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VivoxUnity", "ITTSMessageQueueEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "add_BeforeMessageRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::remove_BeforeMessageRemoved
// Il2CppName: remove_BeforeMessageRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*)>(&VivoxUnity::Private::TTSMessageQueue::remove_BeforeMessageRemoved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VivoxUnity", "ITTSMessageQueueEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "remove_BeforeMessageRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::add_AfterMessageUpdated
// Il2CppName: add_AfterMessageUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*)>(&VivoxUnity::Private::TTSMessageQueue::add_AfterMessageUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VivoxUnity", "ITTSMessageQueueEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "add_AfterMessageUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::remove_AfterMessageUpdated
// Il2CppName: remove_AfterMessageUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::System::EventHandler_1<::VivoxUnity::ITTSMessageQueueEventArgs*>*)>(&VivoxUnity::Private::TTSMessageQueue::remove_AfterMessageUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VivoxUnity", "ITTSMessageQueueEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "remove_AfterMessageUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::VivoxUnity::TTSMessage*)>(&VivoxUnity::Private::TTSMessageQueue::Cleanup)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("VivoxUnity", "TTSMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)()>(&VivoxUnity::Private::TTSMessageQueue::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::Private::TTSMessageQueue::*)(::VivoxUnity::TTSMessage*)>(&VivoxUnity::Private::TTSMessageQueue::Contains)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("VivoxUnity", "TTSMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VivoxUnity::Private::TTSMessageQueue::*)()>(&VivoxUnity::Private::TTSMessageQueue::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::Dequeue
// Il2CppName: Dequeue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::TTSMessage* (VivoxUnity::Private::TTSMessageQueue::*)()>(&VivoxUnity::Private::TTSMessageQueue::Dequeue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "Dequeue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::VivoxUnity::TTSMessage*)>(&VivoxUnity::Private::TTSMessageQueue::Enqueue)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("VivoxUnity", "TTSMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::OnMessage_PropertyChanged
// Il2CppName: OnMessage_PropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::TTSMessageQueue::*)(::Il2CppObject*, ::System::ComponentModel::PropertyChangedEventArgs*)>(&VivoxUnity::Private::TTSMessageQueue::OnMessage_PropertyChanged)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyChangedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "OnMessage_PropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VivoxUnity::TTSMessage* (VivoxUnity::Private::TTSMessageQueue::*)()>(&VivoxUnity::Private::TTSMessageQueue::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VivoxUnity::Private::TTSMessageQueue::*)(::VivoxUnity::TTSMessage*)>(&VivoxUnity::Private::TTSMessageQueue::Remove)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("VivoxUnity", "TTSMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::VivoxUnity::TTSMessage*>* (VivoxUnity::Private::TTSMessageQueue::*)()>(&VivoxUnity::Private::TTSMessageQueue::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VivoxUnity::Private::TTSMessageQueue::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VivoxUnity::Private::TTSMessageQueue::*)()>(&VivoxUnity::Private::TTSMessageQueue::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::TTSMessageQueue*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
