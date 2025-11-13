// 函数: _ZTv0_n24_N5Botan14SM2_PrivateKeyD0Ev
// 地址: 0xeed8c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
Botan::SM2_PrivateKey::~SM2_PrivateKey()
*(x19 + 0x60) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x88
*x19 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x20 = *(x19 + 0x70)

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
        return operator delete(x19) __tailcall

return operator delete(x19) __tailcall
