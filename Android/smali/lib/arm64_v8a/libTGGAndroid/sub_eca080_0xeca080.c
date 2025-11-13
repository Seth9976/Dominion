// 函数: sub_eca080
// 地址: 0xeca080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::Extensions, 0x10) arg_0 = _vtable_for_Botan::Extensions + 0x10
void arg_20
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &arg_20)

if (arg3 != 0)
    void** x8_1 = arg4
    void** x0_1 = arg3
    
    if (x8_1 != arg3)
        void** x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-4]
            *x22_1 = _vtable_for_Botan::OID + 0x10
            void* x0_2 = x22_1[1]
            
            if (x0_2 != 0)
                x8_1[-2] = x0_2
                operator delete(x0_2)
            
            x8_1 = x22_1
        while (arg3 != x22_1)
        
        x0_1 = arg3
    
    arg4 = arg3
    operator delete(x0_1)

void* __offset(vtable_for_Botan::AlternativeName, 0x10) arg_80 =
    _vtable_for_Botan::AlternativeName + 0x10
void arg_a0
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    &arg_a0)
void arg_88
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &arg_88)
int64_t arg_b8 = arg2 + 0x10
void* x20_1

if (arg10 == 0)
    x20_1 = arg8
    
    if (x20_1 == 0)
        sub_1101e04(arg1)
        noreturn
else
    void* arg_e0 = arg10
    operator delete(arg10)
    x20_1 = arg8
    
    if (x20_1 == 0)
        sub_1101e04(arg1)
        noreturn

void* x21_2 = arg9
void* x0_6 = x20_1

if (x21_2 != x20_1)
    bool cond:1_1
    
    do
        uint32_t x8_4 = zx.d(*(x21_2 - 0x20))
        *(x21_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_4 & 1) != 0)
            operator delete(*(x21_2 - 0x10))
        
        void* x0_8 = *(x21_2 - 0x38)
        
        if (x0_8 != 0)
            *(x21_2 - 0x30) = x0_8
            operator delete(x0_8)
        
        void* x0_9 = *(x21_2 - 0x58)
        *(x21_2 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_9 != 0)
            *(x21_2 - 0x50) = x0_9
            operator delete(x0_9)
        
        cond:1_1 = x20_1 == x21_2 - 0x60
        x21_2 -= 0x60
    while (not(cond:1_1))
    x0_6 = arg8

arg9 = x20_1
operator delete(x0_6)
sub_1101e04(arg1)
noreturn
