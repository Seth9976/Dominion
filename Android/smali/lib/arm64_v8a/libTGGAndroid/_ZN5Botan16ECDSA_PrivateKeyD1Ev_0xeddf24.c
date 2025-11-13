// 函数: _ZN5Botan16ECDSA_PrivateKeyD1Ev
// 地址: 0xeddf24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (** entry_x0)()
void* x0 = entry_x0[2]
entry_x0[7] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDSA_PrivateKey + 0x208
*entry_x0 = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDSA_PrivateKey + 0x300
entry_x0[1] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDSA_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = entry_x0[4]
    entry_x0[3] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

entry_x0[7] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PrivateKey + 0x88
*entry_x0 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PrivateKey + 0x180
int64_t result = Botan::PointGFp::~PointGFp()
int64_t* x19_1 = entry_x0[9]

if (x19_1 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_2 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
