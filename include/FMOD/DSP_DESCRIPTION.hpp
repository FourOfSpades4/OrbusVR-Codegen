// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_CREATECALLBACK
  class DSP_CREATECALLBACK;
  // Forward declaring type: DSP_RELEASECALLBACK
  class DSP_RELEASECALLBACK;
  // Forward declaring type: DSP_RESETCALLBACK
  class DSP_RESETCALLBACK;
  // Forward declaring type: DSP_READCALLBACK
  class DSP_READCALLBACK;
  // Forward declaring type: DSP_PROCESS_CALLBACK
  class DSP_PROCESS_CALLBACK;
  // Forward declaring type: DSP_SETPOSITIONCALLBACK
  class DSP_SETPOSITIONCALLBACK;
  // Forward declaring type: DSP_SETPARAM_FLOAT_CALLBACK
  class DSP_SETPARAM_FLOAT_CALLBACK;
  // Forward declaring type: DSP_SETPARAM_INT_CALLBACK
  class DSP_SETPARAM_INT_CALLBACK;
  // Forward declaring type: DSP_SETPARAM_BOOL_CALLBACK
  class DSP_SETPARAM_BOOL_CALLBACK;
  // Forward declaring type: DSP_SETPARAM_DATA_CALLBACK
  class DSP_SETPARAM_DATA_CALLBACK;
  // Forward declaring type: DSP_GETPARAM_FLOAT_CALLBACK
  class DSP_GETPARAM_FLOAT_CALLBACK;
  // Forward declaring type: DSP_GETPARAM_INT_CALLBACK
  class DSP_GETPARAM_INT_CALLBACK;
  // Forward declaring type: DSP_GETPARAM_BOOL_CALLBACK
  class DSP_GETPARAM_BOOL_CALLBACK;
  // Forward declaring type: DSP_GETPARAM_DATA_CALLBACK
  class DSP_GETPARAM_DATA_CALLBACK;
  // Forward declaring type: DSP_SHOULDIPROCESS_CALLBACK
  class DSP_SHOULDIPROCESS_CALLBACK;
  // Forward declaring type: DSP_SYSTEM_REGISTER_CALLBACK
  class DSP_SYSTEM_REGISTER_CALLBACK;
  // Forward declaring type: DSP_SYSTEM_DEREGISTER_CALLBACK
  class DSP_SYSTEM_DEREGISTER_CALLBACK;
  // Forward declaring type: DSP_SYSTEM_MIX_CALLBACK
  class DSP_SYSTEM_MIX_CALLBACK;
}
// Completed forward declares
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_DESCRIPTION
  struct DSP_DESCRIPTION;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_DESCRIPTION, "FMOD", "DSP_DESCRIPTION");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0xC8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.DSP_DESCRIPTION
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_DESCRIPTION/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 pluginsdkversion
    // Size: 0x4
    // Offset: 0x0
    uint pluginsdkversion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: pluginsdkversion and: name
    char __padding0[0x4] = {};
    // public System.Char[] name
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::Il2CppChar> name;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // public System.UInt32 version
    // Size: 0x4
    // Offset: 0x10
    uint version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 numinputbuffers
    // Size: 0x4
    // Offset: 0x14
    int numinputbuffers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numoutputbuffers
    // Size: 0x4
    // Offset: 0x18
    int numoutputbuffers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numoutputbuffers and: create
    char __padding4[0x4] = {};
    // public FMOD.DSP_CREATECALLBACK create
    // Size: 0x8
    // Offset: 0x20
    ::FMOD::DSP_CREATECALLBACK* create;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_CREATECALLBACK*) == 0x8);
    // public FMOD.DSP_RELEASECALLBACK release
    // Size: 0x8
    // Offset: 0x28
    ::FMOD::DSP_RELEASECALLBACK* release;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_RELEASECALLBACK*) == 0x8);
    // public FMOD.DSP_RESETCALLBACK reset
    // Size: 0x8
    // Offset: 0x30
    ::FMOD::DSP_RESETCALLBACK* reset;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_RESETCALLBACK*) == 0x8);
    // public FMOD.DSP_READCALLBACK read
    // Size: 0x8
    // Offset: 0x38
    ::FMOD::DSP_READCALLBACK* read;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_READCALLBACK*) == 0x8);
    // public FMOD.DSP_PROCESS_CALLBACK process
    // Size: 0x8
    // Offset: 0x40
    ::FMOD::DSP_PROCESS_CALLBACK* process;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_PROCESS_CALLBACK*) == 0x8);
    // public FMOD.DSP_SETPOSITIONCALLBACK setposition
    // Size: 0x8
    // Offset: 0x48
    ::FMOD::DSP_SETPOSITIONCALLBACK* setposition;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SETPOSITIONCALLBACK*) == 0x8);
    // public System.Int32 numparameters
    // Size: 0x4
    // Offset: 0x50
    int numparameters;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numparameters and: paramdesc
    char __padding11[0x4] = {};
    // public System.IntPtr paramdesc
    // Size: 0x8
    // Offset: 0x58
    ::System::IntPtr paramdesc;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public FMOD.DSP_SETPARAM_FLOAT_CALLBACK setparameterfloat
    // Size: 0x8
    // Offset: 0x60
    ::FMOD::DSP_SETPARAM_FLOAT_CALLBACK* setparameterfloat;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SETPARAM_FLOAT_CALLBACK*) == 0x8);
    // public FMOD.DSP_SETPARAM_INT_CALLBACK setparameterint
    // Size: 0x8
    // Offset: 0x68
    ::FMOD::DSP_SETPARAM_INT_CALLBACK* setparameterint;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SETPARAM_INT_CALLBACK*) == 0x8);
    // public FMOD.DSP_SETPARAM_BOOL_CALLBACK setparameterbool
    // Size: 0x8
    // Offset: 0x70
    ::FMOD::DSP_SETPARAM_BOOL_CALLBACK* setparameterbool;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SETPARAM_BOOL_CALLBACK*) == 0x8);
    // public FMOD.DSP_SETPARAM_DATA_CALLBACK setparameterdata
    // Size: 0x8
    // Offset: 0x78
    ::FMOD::DSP_SETPARAM_DATA_CALLBACK* setparameterdata;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SETPARAM_DATA_CALLBACK*) == 0x8);
    // public FMOD.DSP_GETPARAM_FLOAT_CALLBACK getparameterfloat
    // Size: 0x8
    // Offset: 0x80
    ::FMOD::DSP_GETPARAM_FLOAT_CALLBACK* getparameterfloat;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETPARAM_FLOAT_CALLBACK*) == 0x8);
    // public FMOD.DSP_GETPARAM_INT_CALLBACK getparameterint
    // Size: 0x8
    // Offset: 0x88
    ::FMOD::DSP_GETPARAM_INT_CALLBACK* getparameterint;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETPARAM_INT_CALLBACK*) == 0x8);
    // public FMOD.DSP_GETPARAM_BOOL_CALLBACK getparameterbool
    // Size: 0x8
    // Offset: 0x90
    ::FMOD::DSP_GETPARAM_BOOL_CALLBACK* getparameterbool;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETPARAM_BOOL_CALLBACK*) == 0x8);
    // public FMOD.DSP_GETPARAM_DATA_CALLBACK getparameterdata
    // Size: 0x8
    // Offset: 0x98
    ::FMOD::DSP_GETPARAM_DATA_CALLBACK* getparameterdata;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETPARAM_DATA_CALLBACK*) == 0x8);
    // public FMOD.DSP_SHOULDIPROCESS_CALLBACK shouldiprocess
    // Size: 0x8
    // Offset: 0xA0
    ::FMOD::DSP_SHOULDIPROCESS_CALLBACK* shouldiprocess;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SHOULDIPROCESS_CALLBACK*) == 0x8);
    // public System.IntPtr userdata
    // Size: 0x8
    // Offset: 0xA8
    ::System::IntPtr userdata;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public FMOD.DSP_SYSTEM_REGISTER_CALLBACK sys_register
    // Size: 0x8
    // Offset: 0xB0
    ::FMOD::DSP_SYSTEM_REGISTER_CALLBACK* sys_register;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SYSTEM_REGISTER_CALLBACK*) == 0x8);
    // public FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK sys_deregister
    // Size: 0x8
    // Offset: 0xB8
    ::FMOD::DSP_SYSTEM_DEREGISTER_CALLBACK* sys_deregister;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SYSTEM_DEREGISTER_CALLBACK*) == 0x8);
    // public FMOD.DSP_SYSTEM_MIX_CALLBACK sys_mix
    // Size: 0x8
    // Offset: 0xC0
    ::FMOD::DSP_SYSTEM_MIX_CALLBACK* sys_mix;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_SYSTEM_MIX_CALLBACK*) == 0x8);
    public:
    // Creating value type constructor for type: DSP_DESCRIPTION
    constexpr DSP_DESCRIPTION(uint pluginsdkversion_ = {}, ::ArrayW<::Il2CppChar> name_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), uint version_ = {}, int numinputbuffers_ = {}, int numoutputbuffers_ = {}, ::FMOD::DSP_CREATECALLBACK* create_ = {}, ::FMOD::DSP_RELEASECALLBACK* release_ = {}, ::FMOD::DSP_RESETCALLBACK* reset_ = {}, ::FMOD::DSP_READCALLBACK* read_ = {}, ::FMOD::DSP_PROCESS_CALLBACK* process_ = {}, ::FMOD::DSP_SETPOSITIONCALLBACK* setposition_ = {}, int numparameters_ = {}, ::System::IntPtr paramdesc_ = {}, ::FMOD::DSP_SETPARAM_FLOAT_CALLBACK* setparameterfloat_ = {}, ::FMOD::DSP_SETPARAM_INT_CALLBACK* setparameterint_ = {}, ::FMOD::DSP_SETPARAM_BOOL_CALLBACK* setparameterbool_ = {}, ::FMOD::DSP_SETPARAM_DATA_CALLBACK* setparameterdata_ = {}, ::FMOD::DSP_GETPARAM_FLOAT_CALLBACK* getparameterfloat_ = {}, ::FMOD::DSP_GETPARAM_INT_CALLBACK* getparameterint_ = {}, ::FMOD::DSP_GETPARAM_BOOL_CALLBACK* getparameterbool_ = {}, ::FMOD::DSP_GETPARAM_DATA_CALLBACK* getparameterdata_ = {}, ::FMOD::DSP_SHOULDIPROCESS_CALLBACK* shouldiprocess_ = {}, ::System::IntPtr userdata_ = {}, ::FMOD::DSP_SYSTEM_REGISTER_CALLBACK* sys_register_ = {}, ::FMOD::DSP_SYSTEM_DEREGISTER_CALLBACK* sys_deregister_ = {}, ::FMOD::DSP_SYSTEM_MIX_CALLBACK* sys_mix_ = {}) noexcept : pluginsdkversion{pluginsdkversion_}, name{name_}, version{version_}, numinputbuffers{numinputbuffers_}, numoutputbuffers{numoutputbuffers_}, create{create_}, release{release_}, reset{reset_}, read{read_}, process{process_}, setposition{setposition_}, numparameters{numparameters_}, paramdesc{paramdesc_}, setparameterfloat{setparameterfloat_}, setparameterint{setparameterint_}, setparameterbool{setparameterbool_}, setparameterdata{setparameterdata_}, getparameterfloat{getparameterfloat_}, getparameterint{getparameterint_}, getparameterbool{getparameterbool_}, getparameterdata{getparameterdata_}, shouldiprocess{shouldiprocess_}, userdata{userdata_}, sys_register{sys_register_}, sys_deregister{sys_deregister_}, sys_mix{sys_mix_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 pluginsdkversion
    [[deprecated("Use field access instead!")]] uint& dyn_pluginsdkversion();
    // Get instance field reference: public System.Char[] name
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_name();
    // Get instance field reference: public System.UInt32 version
    [[deprecated("Use field access instead!")]] uint& dyn_version();
    // Get instance field reference: public System.Int32 numinputbuffers
    [[deprecated("Use field access instead!")]] int& dyn_numinputbuffers();
    // Get instance field reference: public System.Int32 numoutputbuffers
    [[deprecated("Use field access instead!")]] int& dyn_numoutputbuffers();
    // Get instance field reference: public FMOD.DSP_CREATECALLBACK create
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_CREATECALLBACK*& dyn_create();
    // Get instance field reference: public FMOD.DSP_RELEASECALLBACK release
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_RELEASECALLBACK*& dyn_release();
    // Get instance field reference: public FMOD.DSP_RESETCALLBACK reset
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_RESETCALLBACK*& dyn_reset();
    // Get instance field reference: public FMOD.DSP_READCALLBACK read
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_READCALLBACK*& dyn_read();
    // Get instance field reference: public FMOD.DSP_PROCESS_CALLBACK process
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_PROCESS_CALLBACK*& dyn_process();
    // Get instance field reference: public FMOD.DSP_SETPOSITIONCALLBACK setposition
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SETPOSITIONCALLBACK*& dyn_setposition();
    // Get instance field reference: public System.Int32 numparameters
    [[deprecated("Use field access instead!")]] int& dyn_numparameters();
    // Get instance field reference: public System.IntPtr paramdesc
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_paramdesc();
    // Get instance field reference: public FMOD.DSP_SETPARAM_FLOAT_CALLBACK setparameterfloat
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SETPARAM_FLOAT_CALLBACK*& dyn_setparameterfloat();
    // Get instance field reference: public FMOD.DSP_SETPARAM_INT_CALLBACK setparameterint
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SETPARAM_INT_CALLBACK*& dyn_setparameterint();
    // Get instance field reference: public FMOD.DSP_SETPARAM_BOOL_CALLBACK setparameterbool
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SETPARAM_BOOL_CALLBACK*& dyn_setparameterbool();
    // Get instance field reference: public FMOD.DSP_SETPARAM_DATA_CALLBACK setparameterdata
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SETPARAM_DATA_CALLBACK*& dyn_setparameterdata();
    // Get instance field reference: public FMOD.DSP_GETPARAM_FLOAT_CALLBACK getparameterfloat
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETPARAM_FLOAT_CALLBACK*& dyn_getparameterfloat();
    // Get instance field reference: public FMOD.DSP_GETPARAM_INT_CALLBACK getparameterint
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETPARAM_INT_CALLBACK*& dyn_getparameterint();
    // Get instance field reference: public FMOD.DSP_GETPARAM_BOOL_CALLBACK getparameterbool
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETPARAM_BOOL_CALLBACK*& dyn_getparameterbool();
    // Get instance field reference: public FMOD.DSP_GETPARAM_DATA_CALLBACK getparameterdata
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETPARAM_DATA_CALLBACK*& dyn_getparameterdata();
    // Get instance field reference: public FMOD.DSP_SHOULDIPROCESS_CALLBACK shouldiprocess
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SHOULDIPROCESS_CALLBACK*& dyn_shouldiprocess();
    // Get instance field reference: public System.IntPtr userdata
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_userdata();
    // Get instance field reference: public FMOD.DSP_SYSTEM_REGISTER_CALLBACK sys_register
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SYSTEM_REGISTER_CALLBACK*& dyn_sys_register();
    // Get instance field reference: public FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK sys_deregister
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SYSTEM_DEREGISTER_CALLBACK*& dyn_sys_deregister();
    // Get instance field reference: public FMOD.DSP_SYSTEM_MIX_CALLBACK sys_mix
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_SYSTEM_MIX_CALLBACK*& dyn_sys_mix();
  }; // FMOD.DSP_DESCRIPTION
  #pragma pack(pop)
  static check_size<sizeof(DSP_DESCRIPTION), 192 + sizeof(::FMOD::DSP_SYSTEM_MIX_CALLBACK*)> __FMOD_DSP_DESCRIPTIONSizeCheck;
  static_assert(sizeof(DSP_DESCRIPTION) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"