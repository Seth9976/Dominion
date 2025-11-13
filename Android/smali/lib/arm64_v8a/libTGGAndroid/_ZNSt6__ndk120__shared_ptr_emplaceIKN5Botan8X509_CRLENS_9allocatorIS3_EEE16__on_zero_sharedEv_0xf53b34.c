// 函数: _ZNSt6__ndk120__shared_ptr_emplaceIKN5Botan8X509_CRLENS_9allocatorIS3_EEE16__on_zero_sharedEv
// 地址: 0xf53b34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x20 = *(entry_x0 + 0x98)
*(entry_x0 + 0x18) = _vtable_for_Botan::X509_CRL + 0x10

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

void* x0_2 = *(entry_x0 + 0x78)
*(entry_x0 + 0x18) = _vtable_for_Botan::X509_Object + 0x10

if (x0_2 != 0)
    *(entry_x0 + 0x80) = x0_2
    operator delete(x0_2)

void* x0_3 = *(entry_x0 + 0x60)

if (x0_3 != 0)
    *(entry_x0 + 0x68) = x0_3
    operator delete(x0_3)

void* x0_4 = *(entry_x0 + 0x48)
*(entry_x0 + 0x20) = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_4 != 0)
    *(entry_x0 + 0x50) = x0_4
    operator delete(x0_4)

void* result = *(entry_x0 + 0x30)
*(entry_x0 + 0x28) = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

*(entry_x0 + 0x38) = result
return operator delete(result) __tailcall
