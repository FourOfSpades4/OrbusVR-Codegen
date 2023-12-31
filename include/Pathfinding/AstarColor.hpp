// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: AstarColor
  class AstarColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::AstarColor);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AstarColor*, "Pathfinding", "AstarColor");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.AstarColor
  // [TokenAttribute] Offset: FFFFFFFF
  class AstarColor : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Color _NodeConnection
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color NodeConnection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _UnwalkableNode
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color UnwalkableNode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _BoundsHandles
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color BoundsHandles;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _ConnectionLowLerp
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color ConnectionLowLerp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _ConnectionHighLerp
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color ConnectionHighLerp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _MeshEdgeColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color MeshEdgeColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _MeshColor
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Color MeshColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color[] _AreaColors
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::UnityEngine::Color> AreaColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    public:
    // Get static field: static public UnityEngine.Color NodeConnection
    static ::UnityEngine::Color _get_NodeConnection();
    // Set static field: static public UnityEngine.Color NodeConnection
    static void _set_NodeConnection(::UnityEngine::Color value);
    // Get static field: static public UnityEngine.Color UnwalkableNode
    static ::UnityEngine::Color _get_UnwalkableNode();
    // Set static field: static public UnityEngine.Color UnwalkableNode
    static void _set_UnwalkableNode(::UnityEngine::Color value);
    // Get static field: static public UnityEngine.Color BoundsHandles
    static ::UnityEngine::Color _get_BoundsHandles();
    // Set static field: static public UnityEngine.Color BoundsHandles
    static void _set_BoundsHandles(::UnityEngine::Color value);
    // Get static field: static public UnityEngine.Color ConnectionLowLerp
    static ::UnityEngine::Color _get_ConnectionLowLerp();
    // Set static field: static public UnityEngine.Color ConnectionLowLerp
    static void _set_ConnectionLowLerp(::UnityEngine::Color value);
    // Get static field: static public UnityEngine.Color ConnectionHighLerp
    static ::UnityEngine::Color _get_ConnectionHighLerp();
    // Set static field: static public UnityEngine.Color ConnectionHighLerp
    static void _set_ConnectionHighLerp(::UnityEngine::Color value);
    // Get static field: static public UnityEngine.Color MeshEdgeColor
    static ::UnityEngine::Color _get_MeshEdgeColor();
    // Set static field: static public UnityEngine.Color MeshEdgeColor
    static void _set_MeshEdgeColor(::UnityEngine::Color value);
    // Get static field: static public UnityEngine.Color MeshColor
    static ::UnityEngine::Color _get_MeshColor();
    // Set static field: static public UnityEngine.Color MeshColor
    static void _set_MeshColor(::UnityEngine::Color value);
    // Get static field: static private UnityEngine.Color[] AreaColors
    static ::ArrayW<::UnityEngine::Color> _get_AreaColors();
    // Set static field: static private UnityEngine.Color[] AreaColors
    static void _set_AreaColors(::ArrayW<::UnityEngine::Color> value);
    // Get instance field reference: public UnityEngine.Color _NodeConnection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__NodeConnection();
    // Get instance field reference: public UnityEngine.Color _UnwalkableNode
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__UnwalkableNode();
    // Get instance field reference: public UnityEngine.Color _BoundsHandles
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__BoundsHandles();
    // Get instance field reference: public UnityEngine.Color _ConnectionLowLerp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__ConnectionLowLerp();
    // Get instance field reference: public UnityEngine.Color _ConnectionHighLerp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__ConnectionHighLerp();
    // Get instance field reference: public UnityEngine.Color _MeshEdgeColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__MeshEdgeColor();
    // Get instance field reference: public UnityEngine.Color _MeshColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__MeshColor();
    // Get instance field reference: public UnityEngine.Color[] _AreaColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__AreaColors();
    // static public UnityEngine.Color GetAreaColor(System.UInt32 area)
    // Offset: 0x1033588
    static ::UnityEngine::Color GetAreaColor(uint area);
    // public System.Void OnEnable()
    // Offset: 0x103372C
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1033870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::AstarColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarColor*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1033A58
    static void _cctor();
  }; // Pathfinding.AstarColor
  #pragma pack(pop)
  static check_size<sizeof(AstarColor), 128 + sizeof(::ArrayW<::UnityEngine::Color>)> __Pathfinding_AstarColorSizeCheck;
  static_assert(sizeof(AstarColor) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::AstarColor::GetAreaColor
// Il2CppName: GetAreaColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(uint)>(&Pathfinding::AstarColor::GetAreaColor)> {
  static const MethodInfo* get() {
    static auto* area = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarColor*), "GetAreaColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{area});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarColor::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AstarColor::*)()>(&Pathfinding::AstarColor::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarColor*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::AstarColor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::AstarColor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarColor*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
