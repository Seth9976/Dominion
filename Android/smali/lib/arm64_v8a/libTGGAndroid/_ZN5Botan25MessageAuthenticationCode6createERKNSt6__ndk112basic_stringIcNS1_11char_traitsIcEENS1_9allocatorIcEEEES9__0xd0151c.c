// 函数: _ZN5Botan25MessageAuthenticationCode6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xd0151c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_a8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a8)
char var_90
Botan::BlockCipher* result = Botan::SCAN_Name::SCAN_Name(&var_90)
void* var_98

if ((zx.d(var_a8) & 1) != 0)
    result = operator delete(var_98)
char var_78
uint64_t x8_1 = zx.q(var_78)
uint64_t var_70
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = var_70

char* result_1
char* result_7
int16_t var_d8
void* var_c8
char var_c0
void* var_b0
void* var_48
int64_t var_28
Botan::BlockCipher* result_2
Botan::BlockCipher** entry_x8
void* x19_1
Botan::BlockCipher* x20_1

if (x8_2 != 4)
label_d01668:
    uint64_t x8_10 = zx.q(var_78)
    uint64_t x8_11
    
    if ((x8_10.d & 1) == 0)
        x8_11 = x8_10 u>> 1
    else
        x8_11 = var_70
    
    if (x8_11 != 4)
    label_d01790:
        uint64_t x8_21 = zx.q(var_78)
        uint64_t x8_22
        
        if ((x8_21.d & 1) == 0)
            x8_22 = x8_21 u>> 1
        else
            x8_22 = var_70
        
        void* __offset(vtable_for_Botan::CBC_MAC, 0x98) x8_40
        void* __offset(vtable_for_Botan::CBC_MAC, 0x10) x9_14
        
        if (x8_22 != 8)
        label_d017d8:
            uint64_t x8_24 = zx.q(var_78)
            uint64_t x8_25
            
            if ((x8_24.d & 1) == 0)
                x8_25 = x8_24 u>> 1
            else
                x8_25 = var_70
            
            if (x8_25 != 7)
            label_d01814:
                uint64_t x10_6 = zx.q(var_78)
                uint64_t x8_26 = var_70
                int32_t x9_9 = x10_6.d & 1
                uint64_t x10_7 = x10_6 u>> 1
                uint64_t x11_1
                
                x11_1 = x9_9 == 0 ? x10_7 : x8_26
                
                if (x11_1 != 4)
                    goto label_d01864
                
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "CMAC")
                
                if (result.d != 0)
                    uint64_t x10_8 = zx.q(var_78)
                    x8_26 = var_70
                    x9_9 = x10_8.d & 1
                    x10_7 = x10_8 u>> 1
                label_d01864:
                    uint64_t x8_27
                    
                    if ((x9_9 & 0xff) == 0)
                        x8_27 = x10_7
                    else
                        x8_27 = x8_26
                    
                    if (x8_27 == 4)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_78, 0, -ffffffffffffffff, "OMAC")
                        
                        if (result.d == 0 && result_7 - result_1 == 0x18)
                            goto label_d018a0
                else if (result_7 - result_1 == 0x18)
                label_d018a0:
                    uint64_t x8_30 = zx.q(*arg2)
                    uint64_t x8_31
                    
                    if ((x8_30.d & 1) == 0)
                        x8_31 = x8_30 u>> 1
                    else
                        x8_31 = *(arg2 + 8)
                    
                    if (x8_31 == 0)
                    label_d018ec:
                        Botan::SCAN_Name::arg(&var_90)
                        var_d8 = 0
                        result = Botan::BlockCipher::create(&var_c0, &var_d8)
                        
                        if ((zx.d(var_d8.b) & 1) == 0)
                            if ((zx.d(var_c0) & 1) != 0)
                                goto label_d01a44
                            
                            goto label_d01918
                        
                        result = operator delete(var_c8)
                        
                        if ((zx.d(var_c0) & 1) == 0)
                        label_d01918:
                            
                            if (var_28 != 0)
                            label_d01920:
                                Botan::BlockCipher* x0_24 = operator new(0x88)
                                x20_1 = x0_24
                                result_2 = nullptr
                                Botan::CMAC::CMAC(x0_24)
                                goto label_d01934
                        else
                        label_d01a44:
                            result = operator delete(var_b0)
                            
                            if (var_28 != 0)
                                goto label_d01920
                    else if (x8_31 == 4)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg2, 0, -ffffffffffffffff, "base")
                        
                        if (result.d == 0)
                            goto label_d018ec
                
                uint64_t x8_42 = zx.q(var_78)
                uint64_t x8_43
                
                if ((x8_42.d & 1) == 0)
                    x8_43 = x8_42 u>> 1
                else
                    x8_43 = var_70
                
                if (x8_43 == 7)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_78, 0, -ffffffffffffffff, "CBC-MAC")
                    
                    if (result.d == 0 && result_7 - result_1 == 0x18)
                        uint64_t x8_46 = zx.q(*arg2)
                        uint64_t x8_47
                        
                        if ((x8_46.d & 1) == 0)
                            x8_47 = x8_46 u>> 1
                        else
                            x8_47 = *(arg2 + 8)
                        
                        if (x8_47 == 0)
                        label_d01ae8:
                            Botan::SCAN_Name::arg(&var_90)
                            var_d8 = 0
                            result = Botan::BlockCipher::create(&var_c0, &var_d8)
                            
                            if ((zx.d(var_d8.b) & 1) == 0)
                                if ((zx.d(var_c0) & 1) != 0)
                                    goto label_d01bd4
                                
                                goto label_d01b10
                            
                            result = operator delete(var_c8)
                            int64_t x22_4
                            
                            if ((zx.d(var_c0) & 1) == 0)
                            label_d01b10:
                                x22_4 = var_28
                                
                                if (x22_4 != 0)
                                label_d01b1c:
                                    result = operator new(0x38)
                                    *(result + 0x10) = x22_4
                                    __builtin_memset(result + 0x18, 0, 0x20)
                                    x9_14 = _vtable_for_Botan::CBC_MAC + 0x10
                                    x8_40 = _vtable_for_Botan::CBC_MAC + 0x98
                                    goto label_d01b40
                            else
                            label_d01bd4:
                                result = operator delete(var_b0)
                                x22_4 = var_28
                                
                                if (x22_4 != 0)
                                    goto label_d01b1c
                        else if (x8_47 == 4)
                            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg2, 0, -ffffffffffffffff, "base")
                            
                            if (result.d == 0)
                                goto label_d01ae8
                
                uint64_t x8_53 = zx.q(var_78)
                uint64_t x8_54
                
                if ((x8_53.d & 1) == 0)
                    x8_54 = x8_53 u>> 1
                else
                    x8_54 = var_70
                
                if (x8_54 != 9)
                label_d01c1c:
                    *entry_x8 = nullptr
                label_d01c20:
                    x19_1 = var_48
                    
                    if (x19_1 != 0)
                        goto label_d01c28
                else
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_78, 0, -ffffffffffffffff, "X9.19-MAC")
                    
                    if (result.d != 0)
                        goto label_d01c1c
                    
                    uint64_t x8_58 = zx.q(*arg2)
                    uint64_t x8_59
                    
                    if ((x8_58.d & 1) == 0)
                        x8_59 = x8_58 u>> 1
                    else
                        x8_59 = *(arg2 + 8)
                    
                    if (x8_59 != 0)
                        if (x8_59 != 4)
                            goto label_d01c1c
                        
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg2, 0, -ffffffffffffffff, "base")
                        
                        if (result.d != 0)
                            goto label_d01c1c
                    
                    Botan::BlockCipher* x0_44 = operator new(0x40)
                    result = Botan::ANSI_X919_MAC::ANSI_X919_MAC()
                    *entry_x8 = x0_44
                    x19_1 = var_48
                    
                    if (x19_1 != 0)
                        goto label_d01c28
            else
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "SipHash")
                
                if (result.d != 0)
                    goto label_d01814
                
                uint64_t x8_36 = zx.q(*arg2)
                uint64_t x8_37
                
                if ((x8_36.d & 1) == 0)
                    x8_37 = x8_36 u>> 1
                else
                    x8_37 = *(arg2 + 8)
                
                if (x8_37 != 0)
                    if (x8_37 != 4)
                        goto label_d01814
                    
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg2, 0, -ffffffffffffffff, "base")
                    
                    if (result.d != 0)
                        goto label_d01814
                    
                    goto label_d019a0
                
            label_d019a0:
                Botan::BlockCipher* x0_26 = operator new(0x50)
                result = result_1
                char* result_6 = result_7
                char* result_8
                uint64_t x21_1
                
                if (result_6 == result)
                    x21_1 = 2
                    result_8 = result_6
                else
                    result = Botan::to_u32bit(result)
                    result_6 = result_1
                    result_8 = result_7
                    x21_1 = zx.q(result.d)
                
                uint64_t x8_50
                
                if (((result_8 - result_6) s>> 3) * -0x5555555555555555 u< 2)
                    x8_50 = 4
                else
                    result = Botan::to_u32bit(&result_6[0x18])
                    x8_50 = zx.q(result.d)
                
                *(x0_26 + 0x10) = x21_1
                *(x0_26 + 0x18) = x8_50
                __builtin_memset(x0_26 + 0x20, 0, 0x29)
                *x0_26 = _vtable_for_Botan::SipHash + 0x10
                *(x0_26 + 8) = _vtable_for_Botan::SipHash + 0x98
                *entry_x8 = x0_26
                x19_1 = var_48
                
                if (x19_1 != 0)
                    goto label_d01c28
        else
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "Poly1305")
            
            if (result.d != 0 || result_7 != result_1)
                goto label_d017d8
            
            uint64_t x8_38 = zx.q(*arg2)
            uint64_t x8_39
            
            if ((x8_38.d & 1) == 0)
                x8_39 = x8_38 u>> 1
            else
                x8_39 = *(arg2 + 8)
            
            if (x8_39 != 0)
                if (x8_39 != 4)
                    goto label_d017d8
                
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg2, 0, -ffffffffffffffff, "base")
                
                if (result.d != 0)
                    goto label_d017d8
                
                goto label_d01a08
            
        label_d01a08:
            result = operator new(0x48)
            __builtin_memset(result + 0x10, 0, 0x38)
            x9_14 = _vtable_for_Botan::Poly1305 + 0x10
            x8_40 = _vtable_for_Botan::Poly1305 + 0x98
        label_d01b40:
            *result = x9_14
            *(result + 8) = x8_40
            *entry_x8 = result
            x19_1 = var_48
            
            if (x19_1 != 0)
                goto label_d01c28
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_78, 0, -ffffffffffffffff, "HMAC")
        
        if (result.d != 0 || result_7 - result_1 != 0x18)
            goto label_d01790
        
        uint64_t x8_14 = zx.q(*arg2)
        uint64_t x8_15
        
        if ((x8_14.d & 1) == 0)
            x8_15 = x8_14 u>> 1
        else
            x8_15 = *(arg2 + 8)
        
        if (x8_15 != 0)
            if (x8_15 != 4)
                goto label_d01790
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg2, 0, -ffffffffffffffff, "base")
            
            if (result.d != 0)
                goto label_d01790
            
            goto label_d01700
        
    label_d01700:
        Botan::SCAN_Name::arg(&var_90)
        var_d8 = 0
        result = Botan::HashFunction::create(&var_c0, &var_d8)
        
        if ((zx.d(var_d8.b) & 1) == 0)
            if ((zx.d(var_c0) & 1) != 0)
                goto label_d01784
            
            goto label_d0172c
        
        result = operator delete(var_c8)
        
        if ((zx.d(var_c0) & 1) != 0)
        label_d01784:
            result = operator delete(var_b0)
            
            if (var_28 != 0)
                goto label_d01734
            
            goto label_d01790
        
    label_d0172c:
        
        if (var_28 == 0)
            goto label_d01790
        
    label_d01734:
        Botan::BlockCipher* x0_14 = operator new(0x58)
        Botan::BlockCipher* result_3 = nullptr
        Botan::HMAC::HMAC(x0_14)
        result = result_3
        *entry_x8 = x0_14
        int64_t var_28_1 = 0
        
        if (result == 0)
            goto label_d01c20
        
        result = (*(*result + 0x10))()
        x19_1 = var_48
        
        if (x19_1 != 0)
            goto label_d01c28
else
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_78, 0, -ffffffffffffffff, "GMAC")
    
    if (result.d != 0 || result_7 - result_1 != 0x18)
        goto label_d01668
    
    uint64_t x8_5 = zx.q(*arg2)
    uint64_t x8_6
    
    if ((x8_5.d & 1) == 0)
        x8_6 = x8_5 u>> 1
    else
        x8_6 = *(arg2 + 8)
    
    if (x8_6 != 0)
        if (x8_6 != 4)
            goto label_d01668
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg2, 0, -ffffffffffffffff, "base")
        
        if (result.d != 0)
            goto label_d01668
        
        goto label_d015fc
    
label_d015fc:
    Botan::SCAN_Name::arg(&var_90)
    var_d8 = 0
    result = Botan::BlockCipher::create(&var_c0, &var_d8)
    
    if ((zx.d(var_d8.b) & 1) == 0)
        if ((zx.d(var_c0) & 1) != 0)
            goto label_d0165c
        
        goto label_d01628
    
    result = operator delete(var_c8)
    
    if ((zx.d(var_c0) & 1) != 0)
    label_d0165c:
        result = operator delete(var_b0)
        
        if (var_28 != 0)
            goto label_d01630
        
        goto label_d01668
    
label_d01628:
    
    if (var_28 == 0)
        goto label_d01668
    
label_d01630:
    Botan::BlockCipher* x0_7 = operator new(0x48)
    x20_1 = x0_7
    result_2 = nullptr
    Botan::GMAC::GMAC(x0_7)
label_d01934:
    result = result_2
    *entry_x8 = x20_1
    int64_t var_28_2 = 0
    
    if (result == 0)
        goto label_d01c20
    
    result = (*(*result + 8))()
    x19_1 = var_48
    
    if (x19_1 != 0)
    label_d01c28:
        char* var_40
        char* x8_55 = var_40
        void* x0_39
        
        if (x8_55 == x19_1)
            x0_39 = x19_1
        else
            char* x20_4 = x8_55
            
            do
                x20_4 = &x20_4[-0x18]
                
                if ((zx.d(*x20_4) & 1) != 0)
                    operator delete(*(x8_55 - 8))
                
                x8_55 = x20_4
            while (x19_1 != x20_4)
            
            x0_39 = var_48
        
        void* var_40_1 = x19_1
        result = operator delete(x0_39)

if (result_1 != 0)
    char* result_9 = result_7
    char* result_5
    
    if (result_9 == result_1)
        result_5 = result_1
    else
        char* result_10 = result_9
        
        do
            result_10 = &result_10[-0x18]
            
            if ((zx.d(*result_10) & 1) != 0)
                operator delete(*(result_9 - 8))
            
            result_9 = result_10
        while (result_1 != result_10)
        
        result_5 = result_1
    
    char* result_4 = result_1
    result = operator delete(result_5)

void* var_68

if ((zx.d(var_78) & 1) != 0)
    result = operator delete(var_68)

if ((zx.d(var_90) & 1) == 0)
    return result

void* var_80
return operator delete(var_80)
