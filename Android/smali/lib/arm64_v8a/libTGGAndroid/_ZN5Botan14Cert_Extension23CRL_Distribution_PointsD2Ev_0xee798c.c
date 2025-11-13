// 函数: _ZN5Botan14Cert_Extension23CRL_Distribution_PointsD2Ev
// 地址: 0xee798c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points + 0x10

if (x20 != 0)
    char* x8_1 = entry_x0[5]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = entry_x0[4]
    
    entry_x0[5] = x20
    operator delete(x0_1)

void* x20_1 = entry_x0[1]

if (x20_1 == 0)
    return 

void** x21_2 = entry_x0[2]
void* x0_4

if (x21_2 == x20_1)
    x0_4 = x20_1
else
    do
        x21_2 = &x21_2[-8]
        *x21_2 =
            _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point + 0x10
        x21_2[6]
        x21_2[1] = _vtable_for_Botan::AlternativeName + 0x10
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
            &x21_2[5])
        x21_2[3]
        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
            &x21_2[2])
    while (x20_1 != x21_2)
    
    x0_4 = entry_x0[1]

entry_x0[2] = x20_1
return operator delete(x0_4) __tailcall
