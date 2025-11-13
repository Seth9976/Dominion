// 函数: _ZN5Botan8X509_CRLD2Ev
// 地址: 0xcfa504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x20 = entry_x0[0x10]
*entry_x0 = _vtable_for_Botan::X509_CRL + 0x10

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

void* x0_2 = entry_x0[0xc]
*entry_x0 = _vtable_for_Botan::X509_Object + 0x10

if (x0_2 != 0)
    entry_x0[0xd] = x0_2
    operator delete(x0_2)

void* x0_3 = entry_x0[9]

if (x0_3 != 0)
    entry_x0[0xa] = x0_3
    operator delete(x0_3)

void* x0_4 = entry_x0[6]
entry_x0[1] = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_4 != 0)
    entry_x0[7] = x0_4
    operator delete(x0_4)

void* result = entry_x0[3]
entry_x0[2] = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

entry_x0[4] = result
return operator delete(result) __tailcall
