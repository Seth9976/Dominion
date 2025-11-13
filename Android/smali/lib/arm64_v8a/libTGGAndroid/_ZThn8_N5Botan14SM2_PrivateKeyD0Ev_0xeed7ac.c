// 函数: _ZThn8_N5Botan14SM2_PrivateKeyD0Ev
// 地址: 0xeed7ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::SM2_PrivateKey::~SM2_PrivateKey()
*(arg1 + 0x58) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x88
*(arg1 - 8) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x20_1 = *(arg1 + 0x68)

if (x20_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20_1[1])
        i = __stlxr(x9_1 - 1, &x20_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()
        return operator delete(arg1 - 8) __tailcall

return operator delete(arg1 - 8) __tailcall
