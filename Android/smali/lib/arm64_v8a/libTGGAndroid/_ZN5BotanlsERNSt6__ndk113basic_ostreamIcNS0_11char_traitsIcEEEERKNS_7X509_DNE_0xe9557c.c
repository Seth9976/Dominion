// 函数: _ZN5BotanlsERNSt6__ndk113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_7X509_DNE
// 地址: 0xe9557c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_90
std::__ndk1::vector<std::__ndk1::pair<Botan::OID, Botan::ASN1_String>, std::__ndk1::allocator<std::__ndk1::pair<Botan::OID, Botan::ASN1_String> > >::vector(
    &var_90)
void* var_88
void* x25 = var_88
void* x20

if (x25 == var_90)
    x20 = x25
else
    int64_t x28_1 = 0
    int64_t x8_3
    
    do
        Botan::OID::to_formatted_string()
        char var_78
        uint64_t x10_1 = zx.q(var_78)
        uint64_t var_70
        uint64_t x8_4 = var_70
        int32_t x9_1 = x10_1.d & 1
        uint64_t x10_2 = x10_1 u>> 1
        uint64_t x11_1
        
        x11_1 = x9_1 == 0 ? x10_2 : x8_4
        
        if (x11_1 != 0xf)
            goto label_e9565c
        
        char var_a8
        int16_t var_a7
        void* var_68
        int16_t x8_6
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "X520.CommonName") == 0)
            var_a8 = 4
            x8_6 = 0x4e43
        label_e9584c:
            var_a7 = x8_6
            char var_a5_1 = 0
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
        else
            uint64_t x10_3 = zx.q(var_78)
            x8_4 = var_70
            x9_1 = x10_3.d & 1
            x10_2 = x10_3 u>> 1
        label_e9565c:
            uint64_t x11_2
            
            if ((x9_1 & 0xff) == 0)
                x11_2 = x10_2
            else
                x11_2 = x8_4
            
            if (x11_2 != 0xc)
                goto label_e9569c
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "X520.Country") == 0)
                var_a8.w = 0x4302
                var_a7:1.b = 0
            else
                uint64_t x10_4 = zx.q(var_78)
                x8_4 = var_70
                x9_1 = x10_4.d & 1
                x10_2 = x10_4 u>> 1
            label_e9569c:
                uint64_t x11_3
                
                if ((x9_1 & 0xff) == 0)
                    x11_3 = x10_2
                else
                    x11_3 = x8_4
                
                if (x11_3 != 0x11)
                    goto label_e956dc
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_78, 0, -ffffffffffffffff, "X520.Organization") == 0)
                    var_a8.w = 0x4f02
                    var_a7:1.b = 0
                else
                    uint64_t x10_5 = zx.q(var_78)
                    x8_4 = var_70
                    x9_1 = x10_5.d & 1
                    x10_2 = x10_5 u>> 1
                label_e956dc:
                    uint64_t x8_5
                    
                    if ((x9_1 & 0xff) == 0)
                        x8_5 = x10_2
                    else
                        x8_5 = x8_4
                    
                    int32_t x0_9
                    
                    if (x8_5 == 0x17)
                        x0_9 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_78, 0, -ffffffffffffffff, "X520.OrganizationalUnit")
                    
                    if (x8_5 == 0x17 && x0_9 == 0)
                        var_a8 = 4
                        x8_6 = 0x554f
                        goto label_e9584c
                    
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &var_a8)
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
        uint64_t x8_9 = zx.q(var_a8)
        int32_t temp0_1 = x8_9.d & 1
        char* var_98
        char* x1_1
        
        if (temp0_1 == 0)
            x1_1 = &var_a8 | 1
        else
            x1_1 = var_98
        
        uint64_t x2_1
        uint64_t var_a0
        
        if (temp0_1 == 0)
            x2_1 = x8_9 u>> 1
        else
            x2_1 = var_a0
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, 
                x1_1, x2_1), 
            "="", 2)
        
        if ((zx.d(var_a8) & 1) != 0)
            operator delete(var_98)
        
        void* x8_11 = var_90
        uint64_t x9_3 = zx.q(*(x8_11 + x28_1 * 0x60 + 0x40))
        void* x20_1
        uint64_t i_1
        
        if ((x9_3.d & 1) != 0)
            void* x8_12 = x8_11 + x28_1 * 0x60
            i_1 = *(x8_12 + 0x48)
            x20_1 = *(x8_12 + 0x50)
            
            if (i_1 != 0)
            label_e957f8:
                uint64_t i
                
                do
                    uint32_t x23_1 = zx.d(*x20_1)
                    
                    if (x23_1 == 0x5c || x23_1 == 0x22)
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            arg1, "\", 1)
                    
                    var_78 = x23_1.b
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        arg1, &var_78, 1)
                    i = i_1
                    i_1 -= 1
                    x20_1 += 1
                while (i != 1)
        else
            x20_1 = x8_11 + x28_1 * 0x60 + 0x41
            i_1 = x9_3 u>> 1
            
            if (i_1 != 0)
                goto label_e957f8
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, """, 1)
        x20 = var_90
        x25 = var_88
        x28_1 += 1
        x8_3 = ((x25 - x20) s>> 5) * -0x5555555555555555
        
        if (x28_1 u< x8_3)
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, ",", 
                1)
            x20 = var_90
            x25 = var_88
            x8_3 = ((x25 - x20) s>> 5) * -0x5555555555555555
    while (x28_1 != x8_3)

if (x20 != 0)
    void* x0_22
    
    if (x25 == x20)
        x0_22 = x20
    else
        bool cond:1_1
        
        do
            uint32_t x8_16 = zx.d(*(x25 - 0x20))
            *(x25 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_16 & 1) != 0)
                operator delete(*(x25 - 0x10))
            
            void* x0_20 = *(x25 - 0x38)
            
            if (x0_20 != 0)
                *(x25 - 0x30) = x0_20
                operator delete(x0_20)
            
            void* x0_21 = *(x25 - 0x58)
            *(x25 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_21 != 0)
                *(x25 - 0x50) = x0_21
                operator delete(x0_21)
            
            cond:1_1 = x20 == x25 - 0x60
            x25 -= 0x60
        while (not(cond:1_1))
        x0_22 = var_90
    
    void* var_88_1 = x20
    operator delete(x0_22)

return arg1
