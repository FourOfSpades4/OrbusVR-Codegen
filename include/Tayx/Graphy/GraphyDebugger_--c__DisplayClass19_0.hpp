// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tayx.Graphy.GraphyDebugger
#include "Tayx/Graphy/GraphyDebugger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0*, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass19_0");
// Type namespace: Tayx.Graphy
namespace Tayx::Graphy {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.GraphyDebugger/<>c__DisplayClass19_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACEC10
  class GraphyDebugger::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 packetId
    // Size: 0x4
    // Offset: 0x10
    int packetId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return packetId;
    }
    // Get instance field reference: public System.Int32 packetId
    [[deprecated("Use field access instead!")]] int& dyn_packetId();
    // public System.Void .ctor()
    // Offset: 0x10462B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphyDebugger::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphyDebugger::$$c__DisplayClass19_0*, creationType>()));
    }
    // System.Boolean <GetAllDebugPacketsWithId>b__0(Tayx.Graphy.GraphyDebugger/DebugPacket x)
    // Offset: 0x1046EF0
    bool $GetAllDebugPacketsWithId$b__0(::Tayx::Graphy::GraphyDebugger::DebugPacket* x);
  }; // Tayx.Graphy.GraphyDebugger/<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(GraphyDebugger::$$c__DisplayClass19_0), 16 + sizeof(int)> __Tayx_Graphy_GraphyDebugger_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(GraphyDebugger::$$c__DisplayClass19_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0::$GetAllDebugPacketsWithId$b__0
// Il2CppName: <GetAllDebugPacketsWithId>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0::*)(::Tayx::Graphy::GraphyDebugger::DebugPacket*)>(&Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0::$GetAllDebugPacketsWithId$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Tayx.Graphy", "GraphyDebugger/DebugPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::GraphyDebugger::$$c__DisplayClass19_0*), "<GetAllDebugPacketsWithId>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
