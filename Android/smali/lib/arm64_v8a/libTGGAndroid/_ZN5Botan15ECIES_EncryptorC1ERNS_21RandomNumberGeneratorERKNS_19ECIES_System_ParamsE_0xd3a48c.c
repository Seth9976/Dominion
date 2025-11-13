// 函数: _ZN5Botan15ECIES_EncryptorC1ERNS_21RandomNumberGeneratorERKNS_19ECIES_System_ParamsE
// 地址: 0xd3a48c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_138 = 0
int64_t var_128 = -1
int128_t var_c0
__builtin_memset(&var_c0, 0, 0x88)
int128_t var_a0
var_a0:8.q = -1
int128_t var_70
var_70.q = -1
int128_t var_50
var_50:8.q = -1
int32_t var_120 = 1
int128_t var_90
var_90.d = 1
var_70:8.d = 1
int64_t var_40
var_40.d = 1
int64_t (* var_d8)() =
    construction_vtable_for_Botan::ECDH_PublicKey-in-Botan::ECDH_PrivateKey + 0x190
int128_t var_d0 = zx.o(0)
__builtin_memset(&var_90:8, 0, 0x18)
int128_t var_60
__builtin_memset(&var_60, 0, 0x18)
int64_t var_38 = 0
int64_t (* var_118)() =
    construction_vtable_for_Botan::ECDH_PublicKey-in-Botan::ECDH_PrivateKey + 0x90
int64_t (* var_110)() = construction_vtable_for_Botan::Private_Key-in-Botan::ECDH_PrivateKey + 0xc0
Botan::RandomNumberGenerator* entry_x2
Botan::EC_PrivateKey::EC_PrivateKey(&var_110, _VTT_for_Botan::ECDH_PrivateKey + 0x20, arg2, 
    entry_x2.b + 8)
void* __offset(vtable_for_Botan::ECDH_PrivateKey, 0x98) var_118_1 =
    _vtable_for_Botan::ECDH_PrivateKey + 0x98
var_110 = _vtable_for_Botan::ECDH_PrivateKey + 0x1f0
void* __offset(vtable_for_Botan::ECDH_PrivateKey, 0x368) var_e0 =
    _vtable_for_Botan::ECDH_PrivateKey + 0x368
void* __offset(vtable_for_Botan::ECDH_PrivateKey, 0x4a8) var_d8_1 =
    _vtable_for_Botan::ECDH_PrivateKey + 0x4a8
Botan::ECIES_Encryptor::ECIES_Encryptor(arg1, &var_e0, entry_x2)
int64_t (* var_d8_2)() =
    construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x208
int64_t (* var_118_2)() =
    construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x300
var_110 = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0xd0
void* var_108

if (var_108 != 0)
    void* var_100_1 = var_108
    int64_t var_f8
    Botan::deallocate_memory(var_108, (var_f8 - var_108) s>> 2, 4)

int64_t (* var_d8_3)() =
    construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x88
int64_t (* var_118_3)() =
    construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x19_1 = var_d0:8.q

if (x19_1 != 0)
    int64_t x9_4
    int32_t i
    
    do
        x9_4 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_4 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_4 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        std::__ndk1::__shared_weak_count::__release_weak()

return 0
