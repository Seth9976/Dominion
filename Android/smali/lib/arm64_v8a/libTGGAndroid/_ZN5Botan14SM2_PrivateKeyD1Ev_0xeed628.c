// 函数: _ZN5Botan14SM2_PrivateKeyD1Ev
// 地址: 0xeed628
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::SM2_PrivateKey::~SM2_PrivateKey()
int64_t (** entry_x0)()
entry_x0[0xc] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x88
*entry_x0 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x180
int64_t result = Botan::PointGFp::~PointGFp()
int64_t* x19_1 = entry_x0[0xe]

if (x19_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_1 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
