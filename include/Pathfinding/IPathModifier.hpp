// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IPathModifier
  class IPathModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::IPathModifier);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::IPathModifier*, "Pathfinding", "IPathModifier");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.IPathModifier
  // [TokenAttribute] Offset: FFFFFFFF
  class IPathModifier {
    public:
    // public System.Int32 get_Order()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Order();
    // public System.Void Apply(Pathfinding.Path p)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Apply(::Pathfinding::Path* p);
    // public System.Void PreProcess(Pathfinding.Path p)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PreProcess(::Pathfinding::Path* p);
  }; // Pathfinding.IPathModifier
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::IPathModifier::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::IPathModifier::*)()>(&Pathfinding::IPathModifier::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IPathModifier*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IPathModifier::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::IPathModifier::*)(::Pathfinding::Path*)>(&Pathfinding::IPathModifier::Apply)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IPathModifier*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Pathfinding::IPathModifier::PreProcess
// Il2CppName: PreProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::IPathModifier::*)(::Pathfinding::Path*)>(&Pathfinding::IPathModifier::PreProcess)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IPathModifier*), "PreProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
