// 函数: _ZNK5Botan16X509_Certificate11issuer_infoERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xebcf7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_2 = Botan::X509_DN::has_field(Botan::X509_Certificate::data() + 0x58)
void* x0_3 = Botan::X509_Certificate::data()

if ((x0_2 & 1) != 0)
    return Botan::X509_DN::get_attribute(x0_3 + 0x58) __tailcall

int64_t x0_7
int64_t x1_4
x0_7, x1_4 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__equal_range_multi<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    x0_3 + 0x398)

if (x0_7 != x1_4)
    return Botan::AlternativeName::get_attribute(Botan::X509_Certificate::data() + 0x390) __tailcall

char* entry_x1
uint64_t x10_2 = zx.q(*entry_x1)
uint64_t x8_4 = *(entry_x1 + 8)
int32_t x9_2 = x10_2.d & 1
uint64_t x10_3 = x10_2 u>> 1
uint64_t x11_2

x11_2 = x9_2 == 0 ? x10_3 : x8_4

if (x11_2 != 0x1a)
    goto label_ebd064

int64_t result
int64_t* entry_x8
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) x20_1

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x1, 0, -ffffffffffffffff, "X509.Certificate.v2.key_id") == 0)
    void* x0_20 = Botan::X509_Certificate::data()
    uint8_t* x9_4 = *(x0_20 + 0x1e8)
    Botan::hex_encode(x9_4, *(x0_20 + 0x1f0) - x9_4, true)
    __builtin_memset(entry_x8, 0, 0x18)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_22 = operator new(0x18)
    x20_1 = x0_22 + 0x18
    *entry_x8 = x0_22
    entry_x8[1] = x0_22
    entry_x8[2] = x20_1
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x0_22)
else
    uint64_t x10_4 = zx.q(*entry_x1)
    x8_4 = *(entry_x1 + 8)
    x9_2 = x10_4.d & 1
    x10_3 = x10_4 u>> 1
label_ebd064:
    uint64_t x11_3
    
    if ((x9_2 & 0xff) == 0)
        x11_3 = x10_3
    else
        x11_3 = x8_4
    
    if (x11_3 != 0x1d)
        goto label_ebd0a4
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            entry_x1, 0, -ffffffffffffffff, "X509v3.AuthorityKeyIdentifier") == 0)
        void* x0_23 = Botan::X509_Certificate::data()
        uint8_t* x9_5 = *(x0_23 + 0x268)
        Botan::hex_encode(x9_5, *(x0_23 + 0x270) - x9_5, true)
        __builtin_memset(entry_x8, 0, 0x18)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_25 = operator new(0x18)
        x20_1 = x0_25 + 0x18
        *entry_x8 = x0_25
        entry_x8[1] = x0_25
        entry_x8[2] = x20_1
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x0_25)
    else
        uint64_t x10_5 = zx.q(*entry_x1)
        x8_4 = *(entry_x1 + 8)
        x9_2 = x10_5.d & 1
        x10_3 = x10_5 u>> 1
    label_ebd0a4:
        uint64_t x8_5
        
        if ((x9_2 & 0xff) == 0)
            x8_5 = x10_3
        else
            x8_5 = x8_4
        
        int32_t x0_16
        
        if (x8_5 == 0x18)
            x0_16 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                entry_x1, 0, -ffffffffffffffff, "X509.Certificate.dn_bits")
        
        if (x8_5 != 0x18 || x0_16 != 0)
            return Botan::Data_Store::get(Botan::X509_Certificate::data() + 0x410) __tailcall
        
        void* x0_26 = Botan::X509_Certificate::data()
        uint8_t* x9_6 = *(x0_26 + 0xc8)
        Botan::hex_encode(x9_6, *(x0_26 + 0xd0) - x9_6, true)
        __builtin_memset(entry_x8, 0, 0x18)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_28 = operator new(0x18)
        x20_1 = x0_28 + 0x18
        *entry_x8 = x0_28
        entry_x8[1] = x0_28
        entry_x8[2] = x20_1
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x0_28)

entry_x8[1] = x20_1
char var_48

if ((zx.d(var_48) & 1) == 0)
    return result

void* var_38
return operator delete(var_38)
