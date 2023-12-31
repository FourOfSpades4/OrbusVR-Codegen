// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: FisherBobber
  class FisherBobber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::FisherBobber);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::FisherBobber*, "MagicalActual", "FisherBobber");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.FisherBobber
  // [TokenAttribute] Offset: FFFFFFFF
  class FisherBobber : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // private System.Void FLJMJKAKNBH()
    // Offset: 0x14F8A84
    void FLJMJKAKNBH();
    // private System.Void NHADFEMILCC()
    // Offset: 0x14F8A88
    void NHADFEMILCC();
    // private System.Void BLIPCIAAIHI()
    // Offset: 0x14F8A8C
    void BLIPCIAAIHI();
    // private System.Void JENOIOBAEPG()
    // Offset: 0x14F8A90
    void JENOIOBAEPG();
    // public System.Void .ctor()
    // Offset: 0x14F8A94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FisherBobber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::FisherBobber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FisherBobber*, creationType>()));
    }
    // private System.Void FixedUpdate()
    // Offset: 0x14F8AEC
    void FixedUpdate();
    // private System.Void FGGKEEKHDHN()
    // Offset: 0x14F8AF0
    void FGGKEEKHDHN();
    // private System.Void NNDKJCJFIAK()
    // Offset: 0x14F8AF4
    void NNDKJCJFIAK();
    // private System.Void DGJGAFKDIDK()
    // Offset: 0x14F8AF8
    void DGJGAFKDIDK();
    // private System.Void JPHEBENNLCB()
    // Offset: 0x14F8AFC
    void JPHEBENNLCB();
    // private System.Void IPIFMKAGODD()
    // Offset: 0x14F8B00
    void IPIFMKAGODD();
    // private System.Void MKHEDAAIDIE()
    // Offset: 0x14F8B04
    void MKHEDAAIDIE();
    // private System.Void NIGOCBKLOFH()
    // Offset: 0x14F8B08
    void NIGOCBKLOFH();
    // private System.Void KPOAAAHLGLA()
    // Offset: 0x14F8B0C
    void KPOAAAHLGLA();
    // private System.Void GKIOLADOCOK()
    // Offset: 0x14F8B10
    void GKIOLADOCOK();
    // private System.Void FNGLOIECKDG()
    // Offset: 0x14F8B14
    void FNGLOIECKDG();
    // private System.Void BIMCNDAFFJC()
    // Offset: 0x14F8B18
    void BIMCNDAFFJC();
    // private System.Void Start()
    // Offset: 0x14F8B1C
    void Start();
    // private System.Void AMGJNJLJIFO()
    // Offset: 0x14F8B20
    void AMGJNJLJIFO();
    // private System.Void CBMDGNKFPIO()
    // Offset: 0x14F8B24
    void CBMDGNKFPIO();
    // private System.Void ANKCGGIBCAI()
    // Offset: 0x14F8B28
    void ANKCGGIBCAI();
    // private System.Void ICEGDGKAIIB()
    // Offset: 0x14F8B2C
    void ICEGDGKAIIB();
    // private System.Void ABIHCGOKNCL()
    // Offset: 0x14F8B30
    void ABIHCGOKNCL();
    // private System.Void EPCHNEGNKNF()
    // Offset: 0x14F8B34
    void EPCHNEGNKNF();
    // private System.Void FGIFGGNGKPK()
    // Offset: 0x14F8B38
    void FGIFGGNGKPK();
  }; // MagicalActual.FisherBobber
  #pragma pack(pop)
  static check_size<sizeof(FisherBobber), 24 + sizeof(::StringW)> __MagicalActual_FisherBobberSizeCheck;
  static_assert(sizeof(FisherBobber) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::FisherBobber::FLJMJKAKNBH
// Il2CppName: FLJMJKAKNBH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::FLJMJKAKNBH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "FLJMJKAKNBH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::NHADFEMILCC
// Il2CppName: NHADFEMILCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::NHADFEMILCC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "NHADFEMILCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::BLIPCIAAIHI
// Il2CppName: BLIPCIAAIHI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::BLIPCIAAIHI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "BLIPCIAAIHI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::JENOIOBAEPG
// Il2CppName: JENOIOBAEPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::JENOIOBAEPG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "JENOIOBAEPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MagicalActual::FisherBobber::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::FGGKEEKHDHN
// Il2CppName: FGGKEEKHDHN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::FGGKEEKHDHN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "FGGKEEKHDHN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::NNDKJCJFIAK
// Il2CppName: NNDKJCJFIAK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::NNDKJCJFIAK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "NNDKJCJFIAK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::DGJGAFKDIDK
// Il2CppName: DGJGAFKDIDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::DGJGAFKDIDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "DGJGAFKDIDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::JPHEBENNLCB
// Il2CppName: JPHEBENNLCB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::JPHEBENNLCB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "JPHEBENNLCB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::IPIFMKAGODD
// Il2CppName: IPIFMKAGODD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::IPIFMKAGODD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "IPIFMKAGODD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::MKHEDAAIDIE
// Il2CppName: MKHEDAAIDIE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::MKHEDAAIDIE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "MKHEDAAIDIE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::NIGOCBKLOFH
// Il2CppName: NIGOCBKLOFH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::NIGOCBKLOFH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "NIGOCBKLOFH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::KPOAAAHLGLA
// Il2CppName: KPOAAAHLGLA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::KPOAAAHLGLA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "KPOAAAHLGLA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::GKIOLADOCOK
// Il2CppName: GKIOLADOCOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::GKIOLADOCOK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "GKIOLADOCOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::FNGLOIECKDG
// Il2CppName: FNGLOIECKDG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::FNGLOIECKDG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "FNGLOIECKDG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::BIMCNDAFFJC
// Il2CppName: BIMCNDAFFJC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::BIMCNDAFFJC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "BIMCNDAFFJC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::AMGJNJLJIFO
// Il2CppName: AMGJNJLJIFO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::AMGJNJLJIFO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "AMGJNJLJIFO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::CBMDGNKFPIO
// Il2CppName: CBMDGNKFPIO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::CBMDGNKFPIO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "CBMDGNKFPIO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::ANKCGGIBCAI
// Il2CppName: ANKCGGIBCAI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::ANKCGGIBCAI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "ANKCGGIBCAI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::ICEGDGKAIIB
// Il2CppName: ICEGDGKAIIB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::ICEGDGKAIIB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "ICEGDGKAIIB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::ABIHCGOKNCL
// Il2CppName: ABIHCGOKNCL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::ABIHCGOKNCL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "ABIHCGOKNCL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::EPCHNEGNKNF
// Il2CppName: EPCHNEGNKNF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::EPCHNEGNKNF)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "EPCHNEGNKNF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MagicalActual::FisherBobber::FGIFGGNGKPK
// Il2CppName: FGIFGGNGKPK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MagicalActual::FisherBobber::*)()>(&MagicalActual::FisherBobber::FGIFGGNGKPK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MagicalActual::FisherBobber*), "FGIFGGNGKPK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
