// 函数: _ZNSt6__ndk120__shared_ptr_emplaceIKN5Botan16X509_CertificateENS_9allocatorIS3_EEED2Ev
// 地址: 0xf279c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x20 = entry_x0[0x13]
*entry_x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate const, std::__ndk1::allocator<Botan::X509_Certificate const> >
    + 0x10
entry_x0[3] = _vtable_for_Botan::X509_Certificate + 0x10

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

void* x0_2 = entry_x0[0xf]
entry_x0[3] = _vtable_for_Botan::X509_Object + 0x10

if (x0_2 != 0)
    entry_x0[0x10] = x0_2
    operator delete(x0_2)

void* x0_3 = entry_x0[0xc]

if (x0_3 != 0)
    entry_x0[0xd] = x0_3
    operator delete(x0_3)

void* x0_4 = entry_x0[9]
entry_x0[4] = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_4 != 0)
    entry_x0[0xa] = x0_4
    operator delete(x0_4)

void* x0_5 = entry_x0[6]
entry_x0[5] = _vtable_for_Botan::OID + 0x10

if (x0_5 != 0)
    entry_x0[7] = x0_5
    operator delete(x0_5)

return std::__ndk1::__shared_weak_count::~__shared_weak_count() __tailcall
