// 函数: sub_f28658
// 地址: 0xf28658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg2[0x10]
*arg2 = _vtable_for_Botan::X509_CRL + 0x10

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

void* x0_2 = arg2[0xc]
*arg2 = _vtable_for_Botan::X509_Object + 0x10

if (x0_2 != 0)
    arg2[0xd] = x0_2
    operator delete(x0_2)

void* x0_3 = arg2[9]

if (x0_3 != 0)
    arg2[0xa] = x0_3
    operator delete(x0_3)

void* x0_4 = arg2[6]
arg2[1] = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_4 != 0)
    arg2[7] = x0_4
    operator delete(x0_4)

void* result = arg2[3]
arg2[2] = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

arg2[4] = result
return operator delete(result) __tailcall
