// 函数: _ZTv0_n24_N5Botan17ElGamal_PublicKeyD1Ev
// 地址: 0xedf1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1 + *(*arg1 - 0x18)
int64_t* x19 = *(x20 + 0x40)
*x20 = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::ElGamal_PublicKey + 0x190
*(x20 + 8) = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::ElGamal_PublicKey + 0x90
int64_t x9_1

if (x19 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19[1])
        i = __stlxr(x9_1 - 1, &x19[1])
    while (i != 0)

void* result

if (x19 != 0 && x9_1 == 0)
    (*(*x19 + 0x10))(x19)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = *(x20 + 0x10)
    
    if (result != 0)
        goto label_edf240
else
    result = *(x20 + 0x10)
    
    if (result != 0)
    label_edf240:
        int64_t x8_4 = *(x20 + 0x20)
        *(x20 + 0x18) = result
        return Botan::deallocate_memory(result, (x8_4 - result) s>> 2, 4)

return result
