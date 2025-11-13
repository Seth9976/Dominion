// 函数: _ZTv0_n24_N5Botan16ECDSA_PrivateKeyD0Ev
// 地址: 0xede2c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
void* x0 = *(x19 + 0x10)
*(x19 + 0x38) = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDSA_PrivateKey + 0x208
*x19 = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDSA_PrivateKey + 0x300
*(x19 + 8) = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDSA_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_3 = *(x19 + 0x20)
    *(x19 + 0x18) = x0
    Botan::deallocate_memory(x0, (x8_3 - x0) s>> 2, 4)

*(x19 + 0x38) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PrivateKey + 0x88
*x19 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x20 = *(x19 + 0x48)

if (x20 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20[1])
        i = __stlxr(x9_2 - 1, &x20[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()
        return operator delete(x19) __tailcall

return operator delete(x19) __tailcall
