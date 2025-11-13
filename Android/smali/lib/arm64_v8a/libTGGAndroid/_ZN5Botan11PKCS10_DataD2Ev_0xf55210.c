// 函数: _ZN5Botan11PKCS10_DataD2Ev
// 地址: 0xf55210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
entry_x0[0x19]
entry_x0[0x14] = _vtable_for_Botan::Extensions + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &entry_x0[0x18])
void* x20 = entry_x0[0x15]

if (x20 != 0)
    void** x8_1 = entry_x0[0x16]
    void* x0_2
    
    if (x8_1 == x20)
        x0_2 = x20
    else
        void** x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-4]
            *x22_1 = _vtable_for_Botan::OID + 0x10
            void* x0_1 = x22_1[1]
            
            if (x0_1 != 0)
                x8_1[-2] = x0_1
                operator delete(x0_1)
            
            x8_1 = x22_1
        while (x20 != x22_1)
        
        x0_2 = entry_x0[0x15]
    
    entry_x0[0x16] = x20
    operator delete(x0_2)

if ((zx.d(entry_x0[0x11].b) & 1) != 0)
    operator delete(entry_x0[0x13])

entry_x0[0xf]
entry_x0[0xa] = _vtable_for_Botan::AlternativeName + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    &entry_x0[0xe])
entry_x0[0xc]
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &entry_x0[0xb])
void* x0_6 = entry_x0[7]

if (x0_6 != 0)
    entry_x0[8] = x0_6
    operator delete(x0_6)

void* result = entry_x0[4]
*entry_x0 = _vtable_for_Botan::X509_DN + 0x10

if (result != 0)
    entry_x0[5] = result
    result = operator delete(result)

void* x20_1 = entry_x0[1]

if (x20_1 == 0)
    return result

void* x23 = entry_x0[2]
void* x0_10

if (x23 == x20_1)
    x0_10 = x20_1
else
    bool cond:1_1
    
    do
        uint32_t x8_5 = zx.d(*(x23 - 0x20))
        *(x23 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_5 & 1) != 0)
            operator delete(*(x23 - 0x10))
        
        void* x0_8 = *(x23 - 0x38)
        
        if (x0_8 != 0)
            *(x23 - 0x30) = x0_8
            operator delete(x0_8)
        
        void* x0_9 = *(x23 - 0x58)
        *(x23 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_9 != 0)
            *(x23 - 0x50) = x0_9
            operator delete(x0_9)
        
        cond:1_1 = x20_1 == x23 - 0x60
        x23 -= 0x60
    while (not(cond:1_1))
    x0_10 = entry_x0[1]

entry_x0[2] = x20_1
return operator delete(x0_10) __tailcall
