// 函数: _ZNK5Botan16X509_Certificate12subject_infoERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xebc7fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
uint64_t x9 = zx.q(*entry_x1)
uint64_t x9_1

if ((x9.d & 1) == 0)
    x9_1 = x9 u>> 1
else
    x9_1 = *(entry_x1 + 8)

if (x9_1 == 5 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x1, 0, -ffffffffffffffff, "Email") == 0)
    char var_48_1 = 0xc
    int32_t var_47
    __builtin_strncpy(&var_47, "RFC822", 7)
    return Botan::X509_Certificate::subject_info(arg1)

int32_t x0_5 = Botan::X509_DN::has_field(Botan::X509_Certificate::data() + 0x90)
void* x0_7 = Botan::X509_Certificate::data()

if ((x0_5 & 1) != 0)
    return Botan::X509_DN::get_attribute(x0_7 + 0x90) __tailcall

int64_t x0_11
int64_t x1_4
x0_11, x1_4 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__equal_range_multi<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    x0_7 + 0x360)

if (x0_11 != x1_4)
    return Botan::AlternativeName::get_attribute(Botan::X509_Certificate::data() + 0x358) __tailcall

uint64_t x10_3 = zx.q(*entry_x1)
uint64_t x8_5 = *(entry_x1 + 8)
int32_t x9_4 = x10_3.d & 1
uint64_t x10_4 = x10_3 u>> 1
uint64_t x11_3

x11_3 = x9_4 == 0 ? x10_4 : x8_5

if (x11_3 != 0x1a)
    goto label_ebc978

int64_t result
int64_t* entry_x8
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) x20_1

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x1, 0, -ffffffffffffffff, "X509.Certificate.v2.key_id") == 0)
    void* x0_37 = Botan::X509_Certificate::data()
    uint8_t* x9_6 = *(x0_37 + 0x200)
    Botan::hex_encode(x9_6, *(x0_37 + 0x208) - x9_6, true)
    __builtin_memset(entry_x8, 0, 0x18)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_39 = operator new(0x18)
    x20_1 = x0_39 + 0x18
    *entry_x8 = x0_39
    entry_x8[1] = x0_39
    entry_x8[2] = x20_1
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x0_39)
else
    uint64_t x10_5 = zx.q(*entry_x1)
    x8_5 = *(entry_x1 + 8)
    x9_4 = x10_5.d & 1
    x10_4 = x10_5 u>> 1
label_ebc978:
    uint64_t x11_4
    
    if ((x9_4 & 0xff) == 0)
        x11_4 = x10_4
    else
        x11_4 = x8_5
    
    if (x11_4 != 0x1b)
        goto label_ebc9b8
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            entry_x1, 0, -ffffffffffffffff, "X509v3.SubjectKeyIdentifier") == 0)
        void* x0_41 = Botan::X509_Certificate::data()
        uint8_t* x9_7 = *(x0_41 + 0x280)
        Botan::hex_encode(x9_7, *(x0_41 + 0x288) - x9_7, true)
        __builtin_memset(entry_x8, 0, 0x18)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_43 = operator new(0x18)
        x20_1 = x0_43 + 0x18
        *entry_x8 = x0_43
        entry_x8[1] = x0_43
        entry_x8[2] = x20_1
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x0_43)
    else
        uint64_t x10_6 = zx.q(*entry_x1)
        x8_5 = *(entry_x1 + 8)
        x9_4 = x10_6.d & 1
        x10_4 = x10_6 u>> 1
    label_ebc9b8:
        uint64_t x11_5
        
        if ((x9_4 & 0xff) == 0)
            x11_5 = x10_4
        else
            x11_5 = x8_5
        
        if (x11_5 != 0x18)
            goto label_ebc9f8
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                entry_x1, 0, -ffffffffffffffff, "X509.Certificate.dn_bits") == 0)
            void* x0_45 = Botan::X509_Certificate::data()
            uint8_t* x9_8 = *(x0_45 + 0xe0)
            Botan::hex_encode(x9_8, *(x0_45 + 0xe8) - x9_8, true)
            __builtin_memset(entry_x8, 0, 0x18)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x0_47 = operator new(0x18)
            x20_1 = x0_47 + 0x18
            *entry_x8 = x0_47
            entry_x8[1] = x0_47
            entry_x8[2] = x20_1
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                x0_47)
        else
            uint64_t x10_7 = zx.q(*entry_x1)
            x8_5 = *(entry_x1 + 8)
            x9_4 = x10_7.d & 1
            x10_4 = x10_7 u>> 1
        label_ebc9f8:
            uint64_t x11_6
            
            if ((x9_4 & 0xff) == 0)
                x11_6 = x10_4
            else
                x11_6 = x8_5
            
            if (x11_6 != 0x16)
                goto label_ebca38
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    entry_x1, 0, -ffffffffffffffff, "X509.Certificate.start") == 0)
                Botan::X509_Certificate::data()
                Botan::ASN1_Time::to_string()
                __builtin_memset(entry_x8, 0, 0x18)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                    * x0_51 = operator new(0x18)
                x20_1 = x0_51 + 0x18
                *entry_x8 = x0_51
                entry_x8[1] = x0_51
                entry_x8[2] = x20_1
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    x0_51)
            else
                uint64_t x10_8 = zx.q(*entry_x1)
                x8_5 = *(entry_x1 + 8)
                x9_4 = x10_8.d & 1
                x10_4 = x10_8 u>> 1
            label_ebca38:
                uint64_t x11_7
                
                if ((x9_4 & 0xff) == 0)
                    x11_7 = x10_4
                else
                    x11_7 = x8_5
                
                if (x11_7 != 0x14)
                    goto label_ebca78
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        entry_x1, 0, -ffffffffffffffff, "X509.Certificate.end") == 0)
                    Botan::X509_Certificate::data()
                    Botan::ASN1_Time::to_string()
                    __builtin_memset(entry_x8, 0, 0x18)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        * x0_55 = operator new(0x18)
                    x20_1 = x0_55 + 0x18
                    *entry_x8 = x0_55
                    entry_x8[1] = x0_55
                    entry_x8[2] = x20_1
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        x0_55)
                else
                    uint64_t x10_9 = zx.q(*entry_x1)
                    x8_5 = *(entry_x1 + 8)
                    x9_4 = x10_9.d & 1
                    x10_4 = x10_9 u>> 1
                label_ebca78:
                    uint64_t x11_8
                    
                    if ((x9_4 & 0xff) == 0)
                        x11_8 = x10_4
                    else
                        x11_8 = x8_5
                    
                    if (x11_8 != 0x18)
                        goto label_ebcab8
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            entry_x1, 0, -ffffffffffffffff, "X509.Certificate.version") == 0)
                        std::__ndk1::to_string(*(Botan::X509_Certificate::data() + 0x428))
                        __builtin_memset(entry_x8, 0, 0x18)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            * x0_59 = operator new(0x18)
                        x20_1 = x0_59 + 0x18
                        *entry_x8 = x0_59
                        entry_x8[1] = x0_59
                        entry_x8[2] = x20_1
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            x0_59)
                    else
                        uint64_t x10_10 = zx.q(*entry_x1)
                        x8_5 = *(entry_x1 + 8)
                        x9_4 = x10_10.d & 1
                        x10_4 = x10_10 u>> 1
                    label_ebcab8:
                        uint64_t x8_6
                        
                        if ((x9_4 & 0xff) == 0)
                            x8_6 = x10_4
                        else
                            x8_6 = x8_5
                        
                        int32_t x0_31
                        
                        if (x8_6 == 0x17)
                            x0_31 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                entry_x1, 0, -ffffffffffffffff, "X509.Certificate.serial")
                        
                        if (x8_6 != 0x17 || x0_31 != 0)
                            return Botan::Data_Store::get(Botan::X509_Certificate::data() + 0x3f8)
                                __tailcall
                        
                        int64_t* x0_61 = Botan::X509_Certificate::data()
                        uint8_t* x9_9 = *x0_61
                        Botan::hex_encode(x9_9, x0_61[1] - x9_9, true)
                        __builtin_memset(entry_x8, 0, 0x18)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                            * x0_63 = operator new(0x18)
                        x20_1 = x0_63 + 0x18
                        *entry_x8 = x0_63
                        entry_x8[1] = x0_63
                        entry_x8[2] = x20_1
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            x0_63)

entry_x8[1] = x20_1
char var_48
void* var_38

if ((zx.d(var_48) & 1) != 0)
    return operator delete(var_38)
return result
