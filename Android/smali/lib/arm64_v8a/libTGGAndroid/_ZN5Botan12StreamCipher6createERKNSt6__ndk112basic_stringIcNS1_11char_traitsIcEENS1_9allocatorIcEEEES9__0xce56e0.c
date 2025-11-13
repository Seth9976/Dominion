// 函数: _ZN5Botan12StreamCipher6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xce56e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_a8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a8)
char var_90
int64_t* result = Botan::SCAN_Name::SCAN_Name(&var_90)
void* var_98

if ((zx.d(var_a8) & 1) != 0)
    result = operator delete(var_98)
char var_78
uint64_t x10 = zx.q(var_78)
uint64_t var_70
uint64_t x8_1 = var_70
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x12

x12 = x9 == 0 ? x10_1 : x8_1

if (x12 != 6)
    goto label_ce5778

result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_78, 0, -ffffffffffffffff, "CTR-BE")
int64_t* result_1
char* var_58

if (result.d != 0)
    uint64_t x10_2 = zx.q(var_78)
    x8_1 = var_70
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_ce5778:
    uint64_t x8_2
    
    if ((x9 & 0xff) == 0)
        x8_2 = x10_1
    else
        x8_2 = x8_1
    
    if (x8_2 != 3)
        goto label_ce58d0
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_78, 0, -ffffffffffffffff, 0x74a072)
    
    if (result.d != 0 || var_58 == result_1
            || ((var_58 - result_1) s>> 3) * -0x5555555555555555 u> 2)
        goto label_ce58d0
    
    goto label_ce57c8

int16_t var_d8
void* var_c8
char var_c0
void* var_b0
void* var_48
uint64_t result_2
int64_t** entry_x8
void* x19_1

if (var_58 == result_1 || ((var_58 - result_1) s>> 3) * -0x5555555555555555 u> 2)
label_ce58d0:
    uint64_t x8_15 = zx.q(var_78)
    uint64_t x8_16
    
    if ((x8_15.d & 1) == 0)
        x8_16 = x8_15 u>> 1
    else
        x8_16 = var_70
    
    if (x8_16 != 6)
    label_ce590c:
        uint64_t x8_17 = zx.q(var_78)
        uint64_t x8_18
        
        if ((x8_17.d & 1) == 0)
            x8_18 = x8_17 u>> 1
        else
            x8_18 = var_70
        
        if (x8_18 != 8)
        label_ce5948:
            uint64_t x8_19 = zx.q(var_78)
            uint64_t x8_20
            
            if ((x8_19.d & 1) == 0)
                x8_20 = x8_19 u>> 1
            else
                x8_20 = var_70
            
            void* __offset(vtable_for_Botan::SHAKE_128_Cipher, 0x10) x8_43
            
            if (x8_20 != 7)
            label_ce5984:
                uint64_t x10_7 = zx.q(var_78)
                uint64_t x8_21 = var_70
                int32_t x9_10 = x10_7.d & 1
                uint64_t x10_8 = x10_7 u>> 1
                uint64_t x11_1
                
                x11_1 = x9_10 == 0 ? x10_8 : x8_21
                
                if (x11_1 != 9)
                    goto label_ce59d4
                
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "SHAKE-128")
                
                if (result.d == 0)
                label_ce5a00:
                    uint64_t x8_23 = zx.q(*arg2)
                    uint64_t x8_24
                    
                    if ((x8_23.d & 1) == 0)
                        x8_24 = x8_23 u>> 1
                    else
                        x8_24 = *(arg2 + 8)
                    
                    if (x8_24 == 0)
                    label_ce5c9c:
                        result = operator new(0x40)
                        __builtin_memset(&result[1], 0, 0x38)
                        x8_43 = _vtable_for_Botan::SHAKE_128_Cipher + 0x10
                        goto label_ce5cc0
                    
                    if (x8_24 == 4)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg2, 0, -ffffffffffffffff, "base")
                        
                        if (result.d == 0)
                            goto label_ce5c9c
                else
                    uint64_t x10_9 = zx.q(var_78)
                    x8_21 = var_70
                    x9_10 = x10_9.d & 1
                    x10_8 = x10_9 u>> 1
                label_ce59d4:
                    uint64_t x8_22
                    
                    if ((x9_10 & 0xff) == 0)
                        x8_22 = x10_8
                    else
                        x8_22 = x8_21
                    
                    if (x8_22 == 0xd)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_78, 0, -ffffffffffffffff, "SHAKE-128-XOF")
                        
                        if (result.d == 0)
                            goto label_ce5a00
                
                uint64_t x8_25 = zx.q(var_78)
                uint64_t x8_26
                
                if ((x8_25.d & 1) == 0)
                    x8_26 = x8_25 u>> 1
                else
                    x8_26 = var_70
                
                if (x8_26 == 3)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_78, 0, -ffffffffffffffff, 0x750f2c)
                    
                    if (result.d == 0 && var_58 - result_1 == 0x18)
                        uint64_t x8_29 = zx.q(*arg2)
                        uint64_t x8_30
                        
                        if ((x8_29.d & 1) == 0)
                            x8_30 = x8_29 u>> 1
                        else
                            x8_30 = *(arg2 + 8)
                        
                        if (x8_30 == 0)
                        label_ce5ad8:
                            Botan::SCAN_Name::arg(&var_90)
                            var_d8 = 0
                            result = Botan::BlockCipher::create(&var_c0, &var_d8)
                            
                            if ((zx.d(var_d8.b) & 1) == 0)
                                if ((zx.d(var_c0) & 1) != 0)
                                    goto label_ce5d04
                                
                                goto label_ce5b04
                            
                            result = operator delete(var_c8)
                            
                            if ((zx.d(var_c0) & 1) == 0)
                            label_ce5b04:
                                
                                if (result_2 != 0)
                                label_ce5b0c:
                                    int64_t* x0_24 = operator new(0x30)
                                    int64_t* result_4 = nullptr
                                    Botan::OFB::OFB(x0_24)
                                    result = result_4
                                    *entry_x8 = x0_24
                                    int64_t var_28_1 = 0
                                    
                                    if (result == 0)
                                        goto label_ce5e70
                                    
                                    goto label_ce5b38
                            else
                            label_ce5d04:
                                result = operator delete(var_b0)
                                
                                if (result_2 != 0)
                                    goto label_ce5b0c
                        else if (x8_30 == 4)
                            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg2, 0, -ffffffffffffffff, "base")
                            
                            if (result.d == 0)
                                goto label_ce5ad8
                
                uint64_t x10_16 = zx.q(var_78)
                uint64_t x8_45 = var_70
                int32_t x9_18 = x10_16.d & 1
                uint64_t x10_17 = x10_16 u>> 1
                uint64_t x11_2
                
                x11_2 = x9_18 == 0 ? x10_17 : x8_45
                
                if (x11_2 != 3)
                    goto label_ce5d60
                
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, 0x77cc1c)
                
                if (result.d == 0)
                label_ce5dcc:
                    uint64_t x8_47 = zx.q(var_78)
                    uint64_t x8_48
                    
                    if ((x8_47.d & 1) == 0)
                        x8_48 = x8_47 u>> 1
                    else
                        x8_48 = var_70
                    
                    if (x8_48 == 6)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_78, 0, -ffffffffffffffff, "MARK-4")
                    
                    uint64_t x21_2
                    
                    if (x8_48 == 6 && result.d == 0)
                        x21_2 = 0x100
                    else
                        result = result_1
                        
                        if (var_58 == result)
                            x21_2 = 0
                        else
                            result = Botan::to_u32bit(result)
                            x21_2 = zx.q(result.d)
                    
                    uint64_t x8_50 = zx.q(*arg2)
                    uint64_t x8_51
                    
                    if ((x8_50.d & 1) == 0)
                        x8_51 = x8_50 u>> 1
                    else
                        x8_51 = *(arg2 + 8)
                    
                    if (x8_51 != 0)
                        if (x8_51 != 4)
                            goto label_ce5e6c
                        
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg2, 0, -ffffffffffffffff, "base")
                        
                        if (result.d != 0)
                            goto label_ce5e6c
                    
                    result = operator new(0x50)
                    result[2].w = 0
                    __builtin_memset(&result[3], 0, 0x38)
                    *result = _vtable_for_Botan::RC4 + 0x10
                    result[1] = x21_2
                    *entry_x8 = result
                    x19_1 = var_48
                    
                    if (x19_1 != 0)
                        goto label_ce5e78
                else
                    uint64_t x10_18 = zx.q(var_78)
                    x8_45 = var_70
                    x9_18 = x10_18.d & 1
                    x10_17 = x10_18 u>> 1
                label_ce5d60:
                    uint64_t x11_3
                    
                    if ((x9_18 & 0xff) == 0)
                        x11_3 = x10_17
                    else
                        x11_3 = x8_45
                    
                    if (x11_3 == 4)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_78, 0, -ffffffffffffffff, "ARC4")
                        
                        if (result.d == 0)
                            goto label_ce5dcc
                        
                        uint64_t x10_19 = zx.q(var_78)
                        x8_45 = var_70
                        x9_18 = x10_19.d & 1
                        x10_17 = x10_19 u>> 1
                    
                    uint64_t x8_46
                    
                    if ((x9_18 & 0xff) == 0)
                        x8_46 = x10_17
                    else
                        x8_46 = x8_45
                    
                    if (x8_46 == 6)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_78, 0, -ffffffffffffffff, "MARK-4")
                        
                        if (result.d != 0)
                            goto label_ce5e6c
                        
                        goto label_ce5dcc
                    
                label_ce5e6c:
                    *entry_x8 = nullptr
                label_ce5e70:
                    x19_1 = var_48
                    
                    if (x19_1 != 0)
                        goto label_ce5e78
            else
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "Salsa20")
                
                if (result.d != 0)
                    goto label_ce5984
                
                uint64_t x8_41 = zx.q(*arg2)
                uint64_t x8_42
                
                if ((x8_41.d & 1) == 0)
                    x8_42 = x8_41 u>> 1
                else
                    x8_42 = *(arg2 + 8)
                
                if (x8_42 != 0)
                    if (x8_42 != 4)
                        goto label_ce5984
                    
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg2, 0, -ffffffffffffffff, "base")
                    
                    if (result.d != 0)
                        goto label_ce5984
                    
                    goto label_ce5c6c
                
            label_ce5c6c:
                result = operator new(0x58)
                __builtin_memset(&result[1], 0, 0x50)
                x8_43 = _vtable_for_Botan::Salsa20 + 0x10
            label_ce5cc0:
                *result = x8_43
                *entry_x8 = result
                x19_1 = var_48
                
                if (x19_1 != 0)
                    goto label_ce5e78
        else
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "ChaCha20")
            
            if (result.d != 0)
                goto label_ce5948
            
            uint64_t x8_38 = zx.q(*arg2)
            uint64_t x8_39
            
            if ((x8_38.d & 1) == 0)
                x8_39 = x8_38 u>> 1
            else
                x8_39 = *(arg2 + 8)
            
            if (x8_39 != 0)
                if (x8_39 != 4)
                    goto label_ce5948
                
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg2, 0, -ffffffffffffffff, "base")
                
                if (result.d != 0)
                    goto label_ce5948
                
                goto label_ce5bf0
            
        label_ce5bf0:
            result = operator new(0x60)
            __builtin_memset(&result[2], 0, 0x50)
            *result = _vtable_for_Botan::ChaCha + 0x10
            result[1] = 0x14
            *entry_x8 = result
            x19_1 = var_48
            
            if (x19_1 != 0)
                goto label_ce5e78
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_78, 0, -ffffffffffffffff, "ChaCha")
        
        if (result.d != 0)
            goto label_ce590c
        
        uint64_t x8_35 = zx.q(*arg2)
        uint64_t x8_36
        
        if ((x8_35.d & 1) == 0)
            x8_36 = x8_35 u>> 1
        else
            x8_36 = *(arg2 + 8)
        
        if (x8_36 != 0)
            if (x8_36 != 4)
                goto label_ce590c
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg2, 0, -ffffffffffffffff, "base")
            
            if (result.d != 0)
                goto label_ce590c
            
            goto label_ce5b8c
        
    label_ce5b8c:
        int64_t* x0_26 = operator new(0x60)
        
        if (var_58 != result_1)
            Botan::to_u32bit(result_1)
        
        result = Botan::ChaCha::ChaCha(x0_26)
        *entry_x8 = x0_26
        x19_1 = var_48
        
        if (x19_1 != 0)
        label_ce5e78:
            char* var_40
            char* x8_52 = var_40
            void* x0_40
            
            if (x8_52 == x19_1)
                x0_40 = x19_1
            else
                char* x20_4 = x8_52
                
                do
                    x20_4 = &x20_4[-0x18]
                    
                    if ((zx.d(*x20_4) & 1) != 0)
                        operator delete(*(x8_52 - 8))
                    
                    x8_52 = x20_4
                while (x19_1 != x20_4)
                
                x0_40 = var_48
            
            void* var_40_1 = x19_1
            result = operator delete(x0_40)
else
label_ce57c8:
    uint64_t x8_7 = zx.q(*arg2)
    uint64_t x8_8
    
    if ((x8_7.d & 1) == 0)
        x8_8 = x8_7 u>> 1
    else
        x8_8 = *(arg2 + 8)
    
    if (x8_8 != 0)
        if (x8_8 != 4)
            goto label_ce58d0
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg2, 0, -ffffffffffffffff, "base")
        
        if (result.d != 0)
            goto label_ce58d0
        
        goto label_ce5814
    
label_ce5814:
    Botan::SCAN_Name::arg(&var_90)
    var_d8 = 0
    Botan::BlockCipher::create(&var_c0, &var_d8)
    
    if ((zx.d(var_d8.b) & 1) == 0)
        if ((zx.d(var_c0) & 1) != 0)
            goto label_ce58c4
        
        goto label_ce583c
    
    operator delete(var_c8)
    
    if ((zx.d(var_c0) & 1) != 0)
    label_ce58c4:
        operator delete(var_b0)
        result = result_2
        
        if (result != 0)
            goto label_ce584c
        
        goto label_ce58d0
    
label_ce583c:
    result = result_2
    
    if (result == 0)
        goto label_ce58d0
    
label_ce584c:
    (*(*result + 0x30))()
    
    if (((var_58 - result_1) s>> 3) * -0x5555555555555555 u>= 2)
        Botan::to_u32bit(&result_1[3])
    
    Botan::BlockCipher* x0_11 = operator new(0x78)
    int64_t* result_3 = nullptr
    Botan::CTR_BE::CTR_BE(x0_11, result_2)
    result = result_3
    *entry_x8 = x0_11
    int64_t var_28 = 0
    
    if (result == 0)
        goto label_ce5e70
    
label_ce5b38:
    result = (*(*result + 8))()
    x19_1 = var_48
    
    if (x19_1 != 0)
        goto label_ce5e78

if (result_1 != 0)
    char* x8_53 = var_58
    int64_t* result_6
    
    if (x8_53 == result_1)
        result_6 = result_1
    else
        char* x20_5 = x8_53
        
        do
            x20_5 = &x20_5[-0x18]
            
            if ((zx.d(*x20_5) & 1) != 0)
                operator delete(*(x8_53 - 8))
            
            x8_53 = x20_5
        while (result_1 != x20_5)
        
        result_6 = result_1
    
    int64_t* result_5 = result_1
    result = operator delete(result_6)

void* var_68

if ((zx.d(var_78) & 1) != 0)
    result = operator delete(var_68)

if ((zx.d(var_90) & 1) == 0)
    return result

void* var_80
return operator delete(var_80)
