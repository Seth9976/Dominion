// 函数: sub_ec91dc
// 地址: 0xec91dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void arg_78
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &arg_78)

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

void* __offset(vtable_for_Botan::AlternativeName, 0x10) arg_90 =
    _vtable_for_Botan::AlternativeName + 0x10
void arg_b0
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::ASN1_String> > >::destroy(
    &arg_b0)
void arg_98
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &arg_98)
int64_t arg_c8 = arg3 + 0x10
void* x19

if (arg13 == 0)
    x19 = arg11
    
    if (x19 != 0)
    label_ec93a0:
        void* x22_1 = arg12
        void* x0_6 = x19
        
        if (x22_1 != x19)
            bool cond:0_1
            
            do
                uint32_t x8_4 = zx.d(*(x22_1 - 0x20))
                *(x22_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                
                if ((x8_4 & 1) != 0)
                    operator delete(*(x22_1 - 0x10))
                
                void* x0_8 = *(x22_1 - 0x38)
                
                if (x0_8 != 0)
                    *(x22_1 - 0x30) = x0_8
                    operator delete(x0_8)
                
                void* x0_9 = *(x22_1 - 0x58)
                *(x22_1 - 0x60) = arg2 + 0x10
                
                if (x0_9 != 0)
                    *(x22_1 - 0x50) = x0_9
                    operator delete(x0_9)
                
                cond:0_1 = x19 == x22_1 - 0x60
                x22_1 -= 0x60
            while (not(cond:0_1))
            x0_6 = arg11
        
        arg12 = x19
        operator delete(x0_6)
else
    void* arg_f0 = arg13
    operator delete(arg13)
    x19 = arg11
    
    if (x19 != 0)
        goto label_ec93a0
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) arg_100 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
int64_t arg_108
void* x0_11

if (arg15 != 0)
    void* arg_130 = arg15
    operator delete(arg15)
    x0_11 = arg14
    arg_108 = arg2 + 0x10
    
    if (x0_11 != 0)
    label_ec94a4:
        void* arg_118 = x0_11
        operator delete(x0_11)
        sub_1101e04(arg1)
        noreturn
else
    x0_11 = arg14
    arg_108 = arg2 + 0x10
    
    if (x0_11 != 0)
        goto label_ec94a4
sub_1101e04(arg1)
noreturn
