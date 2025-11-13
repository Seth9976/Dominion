// 函数: sub_f58450
// 地址: 0xf58450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x158)
x0[2] = 0
x0[4] = 0
x0[5] = 0
__builtin_memset(&x0[8], 0, 0x18)
x0[0xb].d = 0xff00
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::OCSP::Response const, std::__ndk1::allocator<Botan::OCSP::Response const> >
    + 0x10
x0[1] = 0
x0[6] = 0
x0[7] = _vtable_for_Botan::ASN1_Time + 0x10
x0[0xc] = _vtable_for_Botan::X509_DN + 0x10
x0[0x19] = _vtable_for_Botan::AlgorithmIdentifier + 0x10
x0[0x1a] = _vtable_for_Botan::OID + 0x10
__builtin_memset(&x0[0xd], 0, 0x60)
x0[3].d = 0
*(x0 + 0xd8) = zx.o(0)
__builtin_memset(&x0[0x21], 0, 0x48)
__builtin_memset(&x0[0x1d], 0, 0x20)
x0[0x2a].d = 0x1f6
void* var_30 = &x0[3]
int64_t result = sub_f58300(arg1, &var_30)

if (x0 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x0[1])
        i = __stlxr(x9_2 - 1, &x0[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x0 + 0x10))(x0)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
