// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore
#include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperCore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: GrouperData
  class GrouperData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Bounds
  struct Bounds;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_MeshBakerGrouperNone
  class MB3_MeshBakerGrouperNone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperNone");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshBakerGrouperNone
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshBakerGrouperNone : public ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore {
    public:
    // public System.Void .ctor(DigitalOpus.MB.Core.GrouperData d)
    // Offset: 0x1B58908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshBakerGrouperNone* New_ctor(::DigitalOpus::MB::Core::GrouperData* d) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshBakerGrouperNone*, creationType>(d)));
    }
    // public override System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Renderer>> FilterIntoGroups(System.Collections.Generic.List`1<UnityEngine.GameObject> selection)
    // Offset: 0x1B58934
    // Implemented from: DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore
    // Base method: System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Renderer>> MB3_MeshBakerGrouperCore::FilterIntoGroups(System.Collections.Generic.List`1<UnityEngine.GameObject> selection)
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* selection);
    // public override System.Void DrawGizmos(UnityEngine.Bounds sourceObjectBounds)
    // Offset: 0x1B58B3C
    // Implemented from: DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore
    // Base method: System.Void MB3_MeshBakerGrouperCore::DrawGizmos(UnityEngine.Bounds sourceObjectBounds)
    void DrawGizmos(::UnityEngine::Bounds sourceObjectBounds);
  }; // DigitalOpus.MB.Core.MB3_MeshBakerGrouperNone
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::FilterIntoGroups
// Il2CppName: FilterIntoGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* (DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::FilterIntoGroups)> {
  static const MethodInfo* get() {
    static auto* selection = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*), "FilterIntoGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selection});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::*)(::UnityEngine::Bounds)>(&DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::DrawGizmos)> {
  static const MethodInfo* get() {
    static auto* sourceObjectBounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceObjectBounds});
  }
};
