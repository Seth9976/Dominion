// 函数: sub_eff614
// 地址: 0xeff614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[9]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey{for `Botan::EC_PrivateKey'}
arg1[6] =
    &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey{for `Botan::PK_Key_Agreement_Key'}
arg1[7] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x300
arg1[0x24] = &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey
arg1[0xf] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x208
arg1[8] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = arg1[0xb]
    arg1[0xa] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

arg1[0xf] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x88
arg1[7] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x20 = arg1[0x11]

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_4 = arg1[1]
arg1[0x24] = &_vtable_for_Botan::EC_PrivateKey
*arg1 = &_vtable_for_Botan::EC_PrivateKey

if (x0_4 != 0)
    int64_t x8_7 = arg1[3]
    arg1[2] = x0_4
    Botan::deallocate_memory(x0_4, (x8_7 - x0_4) s>> 2, 4)

arg1[0x24] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::EC_PrivateKey + 0x88
int64_t result = Botan::PointGFp::~PointGFp()
int64_t* x19_1 = arg1[0x26]

if (x19_1 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x19_1[1])
        i_1 = __stlxr(x9_2 - 1, &x19_1[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
