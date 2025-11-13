// 函数: sub_ec9fcc
// 地址: 0xec9fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg2)
void* __offset(vtable_for_Botan::Extensions, 0x10) arg_0 = _vtable_for_Botan::Extensions + 0x10
void arg_20
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &arg_20)

if (arg4 != 0)
    void** x8_1 = arg5
    void** x0_3 = arg4
    
    if (x8_1 != arg4)
        void** x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-4]
            *x22_1 = _vtable_for_Botan::OID + 0x10
            void* x0_4 = x22_1[1]
            
            if (x0_4 != 0)
                x8_1[-2] = x0_4
                operator delete(x0_4)
            
            x8_1 = x22_1
        while (arg4 != x22_1)
        
        x0_3 = arg4
    
    arg5 = arg4
    operator delete(x0_3)

void* __offset(vtable_for_Botan::AlternativeName, 0x10) arg_80 =
    _vtable_for_Botan::AlternativeName + 0x10
void arg_a0
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    &arg_a0)
void arg_88
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &arg_88)
int64_t arg_b8 = arg3 + 0x10
void* x20

if (arg11 == 0)
    x20 = arg9
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
    void* arg_e0 = arg11
    operator delete(arg11)
    x20 = arg9
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

void* x21_2 = arg10
void* x0_8 = x20

if (x21_2 != x20)
    bool cond:1_1
    
    do
        uint32_t x8_4 = zx.d(*(x21_2 - 0x20))
        *(x21_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_4 & 1) != 0)
            operator delete(*(x21_2 - 0x10))
        
        void* x0_10 = *(x21_2 - 0x38)
        
        if (x0_10 != 0)
            *(x21_2 - 0x30) = x0_10
            operator delete(x0_10)
        
        void* x0_11 = *(x21_2 - 0x58)
        *(x21_2 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_11 != 0)
            *(x21_2 - 0x50) = x0_11
            operator delete(x0_11)
        
        cond:1_1 = x20 == x21_2 - 0x60
        x21_2 -= 0x60
    while (not(cond:1_1))
    x0_8 = arg9

arg10 = x20
operator delete(x0_8)
sub_1101e04(arg1)
noreturn
