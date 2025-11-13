// 函数: _ZThn8_N5Botan20GOST_3410_PrivateKeyD0Ev
// 地址: 0xee05f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1[-1] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::GOST_3410_PrivateKey + 0x300
void* x0 = arg1[1]
arg1[6] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::GOST_3410_PrivateKey + 0x208
*arg1 = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::GOST_3410_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = arg1[3]
    arg1[2] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

arg1[6] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::GOST_3410_PrivateKey + 0x88
arg1[-1] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::GOST_3410_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x20 = arg1[8]

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
        return operator delete(&arg1[-1]) __tailcall

return operator delete(&arg1[-1]) __tailcall
