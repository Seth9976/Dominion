// 函数: _ZTv0_n24_N5Botan12DH_PublicKeyD0Ev
// 地址: 0xeea658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
int64_t* x20 = *(x19 + 0x40)
*x19 = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey + 0x190
*(x19 + 8) = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey + 0x90
int64_t x9_1

if (x20 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)

void* x0

if (x20 != 0 && x9_1 == 0)
    (*(*x20 + 0x10))(x20)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0 = *(x19 + 0x10)
    
    if (x0 != 0)
        goto label_eea6a8
else
    x0 = *(x19 + 0x10)
    
    if (x0 != 0)
    label_eea6a8:
        int64_t x8_4 = *(x19 + 0x20)
        *(x19 + 0x18) = x0
        Botan::deallocate_memory(x0, (x8_4 - x0) s>> 2, 4)
return operator delete(x19) __tailcall
