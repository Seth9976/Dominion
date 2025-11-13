// 函数: _ZThn8_N5Botan14RSA_PrivateKeyD0Ev
// 地址: 0xeed168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1[-1] = _vtable_for_Botan::RSA_PrivateKey + 0x88
int64_t* x20 = arg1[4]
*arg1 = _vtable_for_Botan::RSA_PrivateKey + 0x1c0

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

int64_t* x20_1 = arg1[2]
arg1[-1] = construction_vtable_for_Botan::RSA_PublicKey-in-Botan::RSA_PrivateKey + 0x180
*arg1 = construction_vtable_for_Botan::RSA_PublicKey-in-Botan::RSA_PrivateKey + 0x88

if (x20_1 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_3 - 1, &x20_1[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()
        return operator delete(&arg1[-1]) __tailcall

return operator delete(&arg1[-1]) __tailcall
