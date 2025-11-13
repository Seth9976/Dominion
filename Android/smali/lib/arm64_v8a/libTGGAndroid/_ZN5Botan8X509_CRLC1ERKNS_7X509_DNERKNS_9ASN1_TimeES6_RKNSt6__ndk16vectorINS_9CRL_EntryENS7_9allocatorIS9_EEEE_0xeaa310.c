// 函数: _ZN5Botan8X509_CRLC1ERKNS_7X509_DNERKNS_9ASN1_TimeES6_RKNSt6__ndk16vectorINS_9CRL_EntryENS7_9allocatorIS9_EEEE
// 地址: 0xeaa310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10
*arg1 = _vtable_for_Botan::X509_CRL + 0x10
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x48) = zx.o(0)
*(arg1 + 0x58) = zx.o(0)
*(arg1 + 0x68) = zx.o(0)
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
void** x0 = operator new(0x110)
__builtin_memset(&x0[1], 0, 0x30)
x0[9] = 0
x0[0xa] = 0
x0[0xe] = 0
x0[0xf] = 0
x0[0x11] = 0
x0[0x12] = 0
x0[0xb].d = 0xff00
x0[0x10].d = 0xff00
*x0 = _vtable_for_Botan::X509_DN + 0x10
x0[7] = _vtable_for_Botan::ASN1_Time + 0x10
x0[8] = 0
x0[0xc] = _vtable_for_Botan::ASN1_Time + 0x10
x0[0xd] = 0
x0[0x13] = 0
x0[0x14] = _vtable_for_Botan::Extensions + 0x10
__builtin_memset(&x0[0x1b], 0, 0x38)
void** x24 = x0
x0[0x19] = 0
__builtin_memset(&x0[0x15], 0, 0x18)
x0[0x1a] = 0
x0[0x18] = &x0[0x19]
void** x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new(0x20)
x0_1[2] = 0
x0_1[3] = x24
*x0_1 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::CRL_Data*, std::__ndk1::default_delete<Botan::CRL_Data>, std::__ndk1::allocator<Botan::CRL_Data> >
    + 0x10
x0_1[1] = 0
*(arg1 + 0x78) = x24
*(arg1 + 0x80) = x0_1

if (x24 != arg2)
    *(arg2 + 0x10)
    std::__ndk1::vector<std::__ndk1::pair<Botan::OID, Botan::ASN1_String>, std::__ndk1::allocator<std::__ndk1::pair<Botan::OID, Botan::ASN1_String> > >::assign<std::__ndk1::pair<Botan::OID, Botan::ASN1_String>*>(
        &x24[1], *(arg2 + 8))
    *(arg2 + 0x28)
    v0, v1 = std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(
        &x24[4], *(arg2 + 0x20))
    x24 = *(arg1 + 0x78)

v1 = *(arg3 + 8)
*(x24 + 0x4c) = *(arg3 + 0x14)
*(x24 + 0x40) = v1
void* x8_6 = *(arg1 + 0x78)
v1 = *(arg4 + 8)
*(x8_6 + 0x74) = *(arg4 + 0x14)
*(x8_6 + 0x68) = v1
Botan::CRL_Entry* result = *(arg1 + 0x78) + 0x88
int64_t* entry_x4

if (result == entry_x4)
    return result

entry_x4[1]
return std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> >::assign<Botan::CRL_Entry*>(
    result, *entry_x4)
