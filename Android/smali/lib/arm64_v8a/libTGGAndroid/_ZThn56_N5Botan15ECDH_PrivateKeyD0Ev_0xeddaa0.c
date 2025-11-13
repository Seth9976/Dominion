// 函数: _ZThn56_N5Botan15ECDH_PrivateKeyD0Ev
// 地址: 0xeddaa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 - 0x38) = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x300
void* x0 = *(arg1 - 0x28)
*(arg1 + 8) = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x208
*(arg1 - 0x30) = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = *(arg1 - 0x18)
    *(arg1 - 0x20) = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

*(arg1 + 8) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x88
*(arg1 - 0x38) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x20 = *(arg1 + 0x18)

if (x20 != 0)
    int64_t x9_3
    int32_t i
    
    do
        x9_3 = __ldaxr(&x20[1])
        i = __stlxr(x9_3 - 1, &x20[1])
    while (i != 0)
    
    if (x9_3 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()
        return operator delete(arg1 - 0x38) __tailcall

return operator delete(arg1 - 0x38) __tailcall
