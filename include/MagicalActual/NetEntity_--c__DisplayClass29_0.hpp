// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MagicalActual.NetEntity
#include "MagicalActual/NetEntity.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::NetEntity::$$c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::NetEntity::$$c__DisplayClass29_0*, "MagicalActual", "NetEntity/<>c__DisplayClass29_0");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.NetEntity/<>c__DisplayClass29_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD78EC
  class NetEntity::$$c__DisplayClass29_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Byte FLBAJNFJKFL
    // Size: 0x1
    // Offset: 0x10
    uint8_t FLBAJNFJKFL;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: FLBAJNFJKFL and: CBNPFJGIFIH
    char __padding0[0x7] = {};
    // public System.IO.BinaryReader CBNPFJGIFIH
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::BinaryReader* CBNPFJGIFIH;
    // Field size check
    static_assert(sizeof(::System::IO::BinaryReader*) == 0x8);
    public:
    // Get instance field reference: public System.Byte FLBAJNFJKFL
    [[deprecated("Use field access instead!")]] uint8_t& dyn_FLBAJNFJKFL();
    // Get instance field reference: public System.IO.BinaryReader CBNPFJGIFIH
    [[deprecated("Use field access instead!")]] ::System::IO::BinaryReader*& dyn_CBNPFJGIFIH();
    // public System.Void .ctor()
    // Offset: 0x194B0C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEntity::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::NetEntity::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEntity::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // MagicalActual.NetEntity/<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(NetEntity::$$c__DisplayClass29_0), 24 + sizeof(::System::IO::BinaryReader*)> __MagicalActual_NetEntity_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(NetEntity::$$c__DisplayClass29_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::NetEntity::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!