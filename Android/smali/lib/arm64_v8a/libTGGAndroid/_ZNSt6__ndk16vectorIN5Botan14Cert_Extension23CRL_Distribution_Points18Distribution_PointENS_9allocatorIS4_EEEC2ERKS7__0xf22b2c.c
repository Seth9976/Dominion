// 函数: _ZNSt6__ndk16vectorIN5Botan14Cert_Extension23CRL_Distribution_Points18Distribution_PointENS_9allocatorIS4_EEEC2ERKS7_
// 地址: 0xf22b2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t x21 = x8 - x9

if (x8 == x9)
    return 

std::__ndk1::vector<Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point, std::__ndk1::allocator<Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point> >
     const& x19_1 = arg1

if ((x21 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x21_2 = *x19_1
    
    if (x21_2 != 0)
        void** x22_2 = *(x19_1 + 8)
        void* x0_4 = x21_2
        
        if (x22_2 != x21_2)
            do
                x22_2 = &x22_2[-8]
                *x22_2 =
                    _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point
                    + 0x10
                x22_2[6]
                x22_2[1] = _vtable_for_Botan::AlternativeName + 0x10
                std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
                    &x22_2[5])
                x22_2[3]
                std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
                    &x22_2[2])
            while (x21_2 != x22_2)
            
            x0_4 = *x19_1
        
        *(x19_1 + 8) = x21_2
        operator delete(x0_4)
    
    sub_1101e04(x0_3)
    noreturn

arg1 = operator new(x21)
*x19_1 = arg1
*(x19_1 + 8) = arg1
*(x19_1 + 0x10) = arg1 + (x21 s>> 6 << 6)
int64_t x21_1 = *entry_x1
int64_t x22_1 = entry_x1[1]
std::__ndk1::vector<Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point, std::__ndk1::allocator<Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point> >
     const& x8_1 = arg1

if (x21_1 != x22_1)
    std::__ndk1::vector<Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point, std::__ndk1::allocator<Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point> >
         const& x23_1
    
    do
        void** x20_2 = x8_1
        x23_1 = x8_1
        *x20_2 =
            _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point + 0x10
        Botan::AlternativeName::AlternativeName(&x20_2[1])
        x21_1 += 0x40
        x8_1 = &x20_2[8]
    while (x22_1 != x21_1)
    
    x8_1 = x23_1 + 0x40

*(x19_1 + 8) = x8_1
