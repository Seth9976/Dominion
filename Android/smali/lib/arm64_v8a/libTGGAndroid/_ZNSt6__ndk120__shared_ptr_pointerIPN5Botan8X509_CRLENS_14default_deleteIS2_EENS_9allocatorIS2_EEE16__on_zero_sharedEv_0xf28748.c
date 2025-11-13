// 函数: _ZNSt6__ndk120__shared_ptr_pointerIPN5Botan8X509_CRLENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv
// 地址: 0xf28748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void** x19 = *(entry_x0 + 0x18)

if (x19 == 0)
    return 

int64_t* x20 = x19[0x10]
*x19 = _vtable_for_Botan::X509_CRL + 0x10

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

void* x0_2 = x19[0xc]
*x19 = _vtable_for_Botan::X509_Object + 0x10

if (x0_2 != 0)
    x19[0xd] = x0_2
    operator delete(x0_2)

void* x0_3 = x19[9]

if (x0_3 != 0)
    x19[0xa] = x0_3
    operator delete(x0_3)

void* x0_4 = x19[6]
x19[1] = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_4 != 0)
    x19[7] = x0_4
    operator delete(x0_4)

void* x0_5 = x19[3]
x19[2] = _vtable_for_Botan::OID + 0x10

if (x0_5 != 0)
    x19[4] = x0_5
    operator delete(x0_5)

return operator delete(x19) __tailcall
