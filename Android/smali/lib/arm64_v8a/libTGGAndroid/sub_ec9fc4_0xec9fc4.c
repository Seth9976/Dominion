// 函数: sub_ec9fc4
// 地址: 0xec9fc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::AlternativeName, 0x10) arg_80 =
    _vtable_for_Botan::AlternativeName + 0x10
void arg_a0
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    &arg_a0)
void arg_88
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &arg_88)
int64_t arg_b8 = arg2 + 0x10
void* x20

if (arg7 == 0)
    x20 = arg5
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
    void* arg_e0 = arg7
    operator delete(arg7)
    x20 = arg5
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

void* x21 = arg6
void* x0_4 = x20

if (x21 != x20)
    bool cond:0_1
    
    do
        uint32_t x8_2 = zx.d(*(x21 - 0x20))
        *(x21 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_2 & 1) != 0)
            operator delete(*(x21 - 0x10))
        
        void* x0_6 = *(x21 - 0x38)
        
        if (x0_6 != 0)
            *(x21 - 0x30) = x0_6
            operator delete(x0_6)
        
        void* x0_7 = *(x21 - 0x58)
        *(x21 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_7 != 0)
            *(x21 - 0x50) = x0_7
            operator delete(x0_7)
        
        cond:0_1 = x20 == x21 - 0x60
        x21 -= 0x60
    while (not(cond:0_1))
    x0_4 = arg5

arg6 = x20
operator delete(x0_4)
sub_1101e04(arg1)
noreturn
