// 函数: _ZN5Botan3KDF6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xd91cc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_110
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_110)
char var_f8
void** result = Botan::SCAN_Name::SCAN_Name(&var_f8)
void* var_100

if ((zx.d(var_110) & 1) != 0)
    result = operator delete(var_100)
char var_e0
uint64_t x8_1 = zx.q(var_e0)
uint64_t var_d8
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = var_d8

void* var_c8
char* var_c0
char var_128
void* var_118
int16_t var_98
void* var_88
int64_t* var_80
void* var_70
int64_t* var_68
int16_t var_60
void* var_50
void*** entry_x8
struct vtable_for_Botan::SP800_108_Pipeline* const x8_151
int64_t* x20_1

if (x8_2 != 4)
label_d91d98:
    uint64_t x8_7 = zx.q(var_e0)
    uint64_t x8_8
    
    if ((x8_7.d & 1) == 0)
        x8_8 = x8_7 u>> 1
    else
        x8_8 = var_d8
    
    if (x8_8 == 0xc)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_e0, 0, -ffffffffffffffff, "HKDF-Extract")
        
        if (result.d == 0 && var_c0 - var_c8 == 0x18)
            uint64_t x8_11 = zx.q(*arg2)
            uint64_t x8_12
            
            if ((x8_11.d & 1) == 0)
                x8_12 = x8_11 u>> 1
            else
                x8_12 = *(arg2 + 8)
            
            if (x8_12 == 0)
            label_d91fe0:
                Botan::SCAN_Name::arg(&var_f8)
                var_60 = 0
                Botan::MessageAuthenticationCode::create(&var_128, &var_60)
                
                if ((zx.d(var_60.b) & 1) != 0)
                    operator delete(var_50)
                
                x20_1 = var_80
                
                if (x20_1 != 0)
                    result = operator new(0x10)
                    x8_151 = _vtable_for_Botan::HKDF_Extract
                    goto label_d9308c
                
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "HMAC(", &var_128)
                int128_t* x0_79
                int128_t v0_2
                x0_79, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_80)
                void* x8_111 = x0_79[1].q
                var_60.o = *x0_79
                __builtin_memset(x0_79, 0, 0x18)
                var_98 = 0
                result = Botan::MessageAuthenticationCode::create(&var_60, &var_98)
                
                if ((zx.d(var_98.b) & 1) != 0)
                    result = operator delete(var_88)
                    
                    if ((zx.d(var_60.b) & 1) != 0)
                    label_d92e0c:
                        result = operator delete(x8_111)
                        
                        if ((zx.d(var_80.b) & 1) == 0)
                            goto label_d929d8
                        
                        goto label_d92e1c
                else if ((zx.d(var_60.b) & 1) != 0)
                    goto label_d92e0c
                
                if ((zx.d(var_80.b) & 1) != 0)
                label_d92e1c:
                    result = operator delete(var_70)
                    x20_1 = var_68
                    
                    if (x20_1 == 0)
                        goto label_d930a8
                else
                label_d929d8:
                    x20_1 = var_68
                    
                    if (x20_1 == 0)
                        goto label_d930a8
                
                result = operator new(0x10)
                x8_151 = _vtable_for_Botan::HKDF_Extract
                goto label_d9308c
            
            if (x8_12 == 4)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg2, 0, -ffffffffffffffff, "base")
                
                if (result.d == 0)
                    goto label_d91fe0
    
    uint64_t x8_13 = zx.q(var_e0)
    uint64_t x8_14
    
    if ((x8_13.d & 1) == 0)
        x8_14 = x8_13 u>> 1
    else
        x8_14 = var_d8
    
    if (x8_14 == 0xb)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_e0, 0, -ffffffffffffffff, "HKDF-Expand")
        
        if (result.d == 0 && var_c0 - var_c8 == 0x18)
            uint64_t x8_17 = zx.q(*arg2)
            uint64_t x8_18
            
            if ((x8_17.d & 1) == 0)
                x8_18 = x8_17 u>> 1
            else
                x8_18 = *(arg2 + 8)
            
            if (x8_18 == 0)
            label_d92028:
                Botan::SCAN_Name::arg(&var_f8)
                var_60 = 0
                Botan::MessageAuthenticationCode::create(&var_128, &var_60)
                
                if ((zx.d(var_60.b) & 1) != 0)
                    operator delete(var_50)
                
                x20_1 = var_80
                
                if (x20_1 != 0)
                    result = operator new(0x10)
                    x8_151 = _vtable_for_Botan::HKDF_Expand
                    goto label_d9308c
                
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "HMAC(", &var_128)
                int128_t* x0_82
                int128_t v0_3
                x0_82, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_80)
                void* x8_115 = x0_82[1].q
                var_60.o = *x0_82
                __builtin_memset(x0_82, 0, 0x18)
                var_98 = 0
                result = Botan::MessageAuthenticationCode::create(&var_60, &var_98)
                
                if ((zx.d(var_98.b) & 1) != 0)
                    result = operator delete(var_88)
                    
                    if ((zx.d(var_60.b) & 1) != 0)
                    label_d92e50:
                        result = operator delete(x8_115)
                        
                        if ((zx.d(var_80.b) & 1) == 0)
                            goto label_d92a4c
                        
                        goto label_d92e60
                else if ((zx.d(var_60.b) & 1) != 0)
                    goto label_d92e50
                
                if ((zx.d(var_80.b) & 1) != 0)
                label_d92e60:
                    result = operator delete(var_70)
                    x20_1 = var_68
                    
                    if (x20_1 == 0)
                        goto label_d930a8
                else
                label_d92a4c:
                    x20_1 = var_68
                    
                    if (x20_1 == 0)
                        goto label_d930a8
                
                result = operator new(0x10)
                x8_151 = _vtable_for_Botan::HKDF_Expand
                goto label_d9308c
            
            if (x8_18 == 4)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg2, 0, -ffffffffffffffff, "base")
                
                if (result.d == 0)
                    goto label_d92028
    
    uint64_t x8_19 = zx.q(var_e0)
    uint64_t x8_20
    
    if ((x8_19.d & 1) == 0)
        x8_20 = x8_19 u>> 1
    else
        x8_20 = var_d8
    
    struct vtable_for_Botan::KDF2* const x8_27
    int64_t* x22_1
    
    if (x8_20 != 4)
    label_d92084:
        uint64_t x8_32 = zx.q(var_e0)
        uint64_t x8_33
        
        if ((x8_32.d & 1) == 0)
            x8_33 = x8_32 u>> 1
        else
            x8_33 = var_d8
        
        if (x8_33 == 0xa)
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_e0, 0, -ffffffffffffffff, "KDF1-18033")
            
            if (result.d == 0 && var_c0 - var_c8 == 0x18)
                uint64_t x8_36 = zx.q(*arg2)
                uint64_t x8_37
                
                if ((x8_36.d & 1) == 0)
                    x8_37 = x8_36 u>> 1
                else
                    x8_37 = *(arg2 + 8)
                
                if (x8_37 == 0)
                label_d9211c:
                    Botan::SCAN_Name::arg(&var_f8)
                    var_80.w = 0
                    result = Botan::HashFunction::create(&var_60, &var_80)
                    
                    if ((zx.d(var_80.b) & 1) == 0)
                        if ((zx.d(var_60.b) & 1) != 0)
                            goto label_d92174
                        
                        goto label_d92144
                    
                    result = operator delete(var_70)
                    
                    if ((zx.d(var_60.b) & 1) == 0)
                    label_d92144:
                        x22_1 = var_98.q
                        
                        if (x22_1 != 0)
                        label_d92150:
                            result = operator new(0x10)
                            x8_27 = _vtable_for_Botan::KDF1_18033
                            goto label_d92728
                    else
                    label_d92174:
                        result = operator delete(var_50)
                        x22_1 = var_98.q
                        
                        if (x22_1 != 0)
                            goto label_d92150
                else if (x8_37 == 4)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg2, 0, -ffffffffffffffff, "base")
                    
                    if (result.d == 0)
                        goto label_d9211c
        
        uint64_t x8_41 = zx.q(var_e0)
        uint64_t x8_42
        
        if ((x8_41.d & 1) == 0)
            x8_42 = x8_41 u>> 1
        else
            x8_42 = var_d8
        
        if (x8_42 == 4)
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_e0, 0, -ffffffffffffffff, "KDF1")
            
            if (result.d == 0 && var_c0 - var_c8 == 0x18)
                uint64_t x8_45 = zx.q(*arg2)
                uint64_t x8_46
                
                if ((x8_45.d & 1) == 0)
                    x8_46 = x8_45 u>> 1
                else
                    x8_46 = *(arg2 + 8)
                
                if (x8_46 == 0)
                label_d92218:
                    Botan::SCAN_Name::arg(&var_f8)
                    var_80.w = 0
                    result = Botan::HashFunction::create(&var_60, &var_80)
                    
                    if ((zx.d(var_80.b) & 1) == 0)
                        if ((zx.d(var_60.b) & 1) != 0)
                            goto label_d92270
                        
                        goto label_d92240
                    
                    result = operator delete(var_70)
                    
                    if ((zx.d(var_60.b) & 1) == 0)
                    label_d92240:
                        x22_1 = var_98.q
                        
                        if (x22_1 != 0)
                        label_d9224c:
                            result = operator new(0x10)
                            x8_27 = _vtable_for_Botan::KDF1
                            goto label_d92728
                    else
                    label_d92270:
                        result = operator delete(var_50)
                        x22_1 = var_98.q
                        
                        if (x22_1 != 0)
                            goto label_d9224c
                else if (x8_46 == 4)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg2, 0, -ffffffffffffffff, "base")
                    
                    if (result.d == 0)
                        goto label_d92218
        
        uint64_t x8_50 = zx.q(var_e0)
        uint64_t x8_51
        
        if ((x8_50.d & 1) == 0)
            x8_51 = x8_50 u>> 1
        else
            x8_51 = var_d8
        
        if (x8_51 == 7)
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_e0, 0, -ffffffffffffffff, "TLS-PRF")
            
            if (result.d == 0 && var_c0 == var_c8)
                uint64_t x8_90 = zx.q(*arg2)
                uint64_t x8_91
                
                if ((x8_90.d & 1) == 0)
                    x8_91 = x8_90 u>> 1
                else
                    x8_91 = *(arg2 + 8)
                
                if (x8_91 == 0)
                label_d92674:
                    var_60.b = 0x12
                    __builtin_strcpy(&var_60:1, "HMAC(MD5)")
                    var_80.w = 0
                    Botan::MessageAuthenticationCode::create(&var_60, &var_80)
                    
                    if ((zx.d(var_80.b) & 1) != 0)
                        operator delete(var_70)
                    
                    if ((zx.d(var_60.b) & 1) != 0)
                        operator delete(var_50)
                    
                    var_60.b = 0x16
                    __builtin_strncpy(&var_60:1, "HMAC(SHA-1)", 0xc)
                    var_80.w = 0
                    result = Botan::MessageAuthenticationCode::create(&var_60, &var_80)
                    
                    if ((zx.d(var_80.b) & 1) == 0)
                        if ((zx.d(var_60.b) & 1) != 0)
                            goto label_d92a6c
                        
                        goto label_d92700
                    
                    result = operator delete(var_70)
                    int64_t* x23_1
                    
                    if ((zx.d(var_60.b) & 1) != 0)
                    label_d92a6c:
                        result = operator delete(var_50)
                        x22_1 = var_98.q
                        x23_1 = var_128.q
                        
                        if (x22_1 != 0)
                            goto label_d9270c
                        
                        goto label_d92a7c
                    
                label_d92700:
                    x22_1 = var_98.q
                    x23_1 = var_128.q
                    
                    if (x22_1 == 0)
                    label_d92a7c:
                        
                        if (x23_1 != 0)
                            result = (*(*x23_1 + 0x10))(x23_1)
                    else
                    label_d9270c:
                        
                        if (x23_1 != 0)
                            result = operator new(0x18)
                            x8_27 = _vtable_for_Botan::TLS_PRF
                            result[2] = x23_1
                            goto label_d92728
                        
                        result = (*(*x22_1 + 0x10))(x22_1)
                else if (x8_91 == 4)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg2, 0, -ffffffffffffffff, "base")
                    
                    if (result.d == 0)
                        goto label_d92674
        
        uint64_t x8_53 = zx.q(var_e0)
        uint64_t x8_54
        
        if ((x8_53.d & 1) == 0)
            x8_54 = x8_53 u>> 1
        else
            x8_54 = var_d8
        
        if (x8_54 == 0xa)
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_e0, 0, -ffffffffffffffff, "TLS-12-PRF")
            
            if (result.d == 0 && var_c0 - var_c8 == 0x18)
                uint64_t x8_57 = zx.q(*arg2)
                uint64_t x8_58
                
                if ((x8_57.d & 1) == 0)
                    x8_58 = x8_57 u>> 1
                else
                    x8_58 = *(arg2 + 8)
                
                if (x8_58 == 0)
                label_d92740:
                    Botan::SCAN_Name::arg(&var_f8)
                    var_60 = 0
                    Botan::MessageAuthenticationCode::create(&var_128, &var_60)
                    
                    if ((zx.d(var_60.b) & 1) != 0)
                        operator delete(var_50)
                    
                    x20_1 = var_80
                    
                    if (x20_1 != 0)
                        result = operator new(0x10)
                        x8_151 = _vtable_for_Botan::TLS_12_PRF
                        goto label_d9308c
                    
                    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                        "HMAC(", &var_128)
                    int128_t* x0_88
                    int128_t v0_4
                    x0_88, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &var_80)
                    void* x8_121 = x0_88[1].q
                    var_60.o = *x0_88
                    __builtin_memset(x0_88, 0, 0x18)
                    var_98 = 0
                    result = Botan::MessageAuthenticationCode::create(&var_60, &var_98)
                    
                    if ((zx.d(var_98.b) & 1) != 0)
                        result = operator delete(var_88)
                        
                        if ((zx.d(var_60.b) & 1) != 0)
                        label_d92fc0:
                            result = operator delete(x8_121)
                            
                            if ((zx.d(var_80.b) & 1) == 0)
                                goto label_d92af4
                            
                            goto label_d92fd0
                    else if ((zx.d(var_60.b) & 1) != 0)
                        goto label_d92fc0
                    
                    if ((zx.d(var_80.b) & 1) != 0)
                    label_d92fd0:
                        result = operator delete(var_70)
                        x20_1 = var_68
                        
                        if (x20_1 == 0)
                            goto label_d930a8
                    else
                    label_d92af4:
                        x20_1 = var_68
                        
                        if (x20_1 == 0)
                            goto label_d930a8
                    
                    result = operator new(0x10)
                    x8_151 = _vtable_for_Botan::TLS_12_PRF
                    goto label_d9308c
                
                if (x8_58 == 4)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg2, 0, -ffffffffffffffff, "base")
                    
                    if (result.d == 0)
                        goto label_d92740
        
        uint64_t x8_59 = zx.q(var_e0)
        uint64_t x8_60
        
        if ((x8_59.d & 1) == 0)
            x8_60 = x8_59 u>> 1
        else
            x8_60 = var_d8
        
        if (x8_60 != 9)
        label_d923dc:
            uint64_t x8_65 = zx.q(var_e0)
            uint64_t x8_66
            
            if ((x8_65.d & 1) == 0)
                x8_66 = x8_65 u>> 1
            else
                x8_66 = var_d8
            
            if (x8_66 == 0x11)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_e0, 0, -ffffffffffffffff, "SP800-108-Counter")
                
                if (result.d == 0 && var_c0 - var_c8 == 0x18)
                    uint64_t x8_69 = zx.q(*arg2)
                    uint64_t x8_70
                    
                    if ((x8_69.d & 1) == 0)
                        x8_70 = x8_69 u>> 1
                    else
                        x8_70 = *(arg2 + 8)
                    
                    if (x8_70 == 0)
                    label_d927d0:
                        Botan::SCAN_Name::arg(&var_f8)
                        var_60 = 0
                        Botan::MessageAuthenticationCode::create(&var_128, &var_60)
                        
                        if ((zx.d(var_60.b) & 1) != 0)
                            operator delete(var_50)
                        
                        x20_1 = var_80
                        
                        if (x20_1 != 0)
                            result = operator new(0x10)
                            x8_151 = _vtable_for_Botan::SP800_108_Counter
                            goto label_d9308c
                        
                        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                            "HMAC(", &var_128)
                        int128_t* x0_91
                        int128_t v0_5
                        x0_91, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                            &var_80)
                        void* x8_125 = x0_91[1].q
                        var_60.o = *x0_91
                        __builtin_memset(x0_91, 0, 0x18)
                        var_98 = 0
                        result = Botan::MessageAuthenticationCode::create(&var_60, &var_98)
                        
                        if ((zx.d(var_98.b) & 1) != 0)
                            result = operator delete(var_88)
                            
                            if ((zx.d(var_60.b) & 1) != 0)
                            label_d93018:
                                result = operator delete(x8_125)
                                
                                if ((zx.d(var_80.b) & 1) == 0)
                                    goto label_d92b68
                                
                                goto label_d93028
                        else if ((zx.d(var_60.b) & 1) != 0)
                            goto label_d93018
                        
                        if ((zx.d(var_80.b) & 1) != 0)
                        label_d93028:
                            result = operator delete(var_70)
                            x20_1 = var_68
                            
                            if (x20_1 == 0)
                                goto label_d930a8
                        else
                        label_d92b68:
                            x20_1 = var_68
                            
                            if (x20_1 == 0)
                                goto label_d930a8
                        
                        result = operator new(0x10)
                        x8_151 = _vtable_for_Botan::SP800_108_Counter
                        goto label_d9308c
                    
                    if (x8_70 == 4)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg2, 0, -ffffffffffffffff, "base")
                        
                        if (result.d == 0)
                            goto label_d927d0
            
            uint64_t x8_71 = zx.q(var_e0)
            uint64_t x8_72
            
            if ((x8_71.d & 1) == 0)
                x8_72 = x8_71 u>> 1
            else
                x8_72 = var_d8
            
            if (x8_72 != 0x12)
            label_d924f4:
                uint64_t x8_77 = zx.q(var_e0)
                uint64_t x8_78
                
                if ((x8_77.d & 1) == 0)
                    x8_78 = x8_77 u>> 1
                else
                    x8_78 = var_d8
                
                if (x8_78 == 0x12)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_e0, 0, -ffffffffffffffff, "SP800-108-Pipeline")
                    
                    if (result.d == 0 && var_c0 - var_c8 == 0x18)
                        uint64_t x8_81 = zx.q(*arg2)
                        uint64_t x8_82
                        
                        if ((x8_81.d & 1) == 0)
                            x8_82 = x8_81 u>> 1
                        else
                            x8_82 = *(arg2 + 8)
                        
                        if (x8_82 == 0)
                        label_d928c0:
                            Botan::SCAN_Name::arg(&var_f8)
                            var_60 = 0
                            Botan::MessageAuthenticationCode::create(&var_128, &var_60)
                            
                            if ((zx.d(var_60.b) & 1) != 0)
                                operator delete(var_50)
                            
                            x20_1 = var_80
                            
                            if (x20_1 != 0)
                                result = operator new(0x10)
                                x8_151 = _vtable_for_Botan::SP800_108_Pipeline
                                goto label_d9308c
                            
                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                "HMAC(", &var_128)
                            int128_t* x0_110
                            int128_t v0_8
                            x0_110, v0_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                &var_80)
                            void* x8_145 = x0_110[1].q
                            var_60.o = *x0_110
                            __builtin_memset(x0_110, 0, 0x18)
                            var_98 = 0
                            result = Botan::MessageAuthenticationCode::create(&var_60, &var_98)
                            
                            if ((zx.d(var_98.b) & 1) != 0)
                                result = operator delete(var_88)
                                
                                if ((zx.d(var_60.b) & 1) != 0)
                                label_d9305c:
                                    result = operator delete(x8_145)
                                    
                                    if ((zx.d(var_80.b) & 1) == 0)
                                        goto label_d92da8
                                    
                                    goto label_d9306c
                            else if ((zx.d(var_60.b) & 1) != 0)
                                goto label_d9305c
                            
                            if ((zx.d(var_80.b) & 1) != 0)
                            label_d9306c:
                                result = operator delete(var_70)
                                x20_1 = var_68
                                
                                if (x20_1 == 0)
                                    goto label_d930a8
                            else
                            label_d92da8:
                                x20_1 = var_68
                                
                                if (x20_1 == 0)
                                    goto label_d930a8
                            
                            result = operator new(0x10)
                            x8_151 = _vtable_for_Botan::SP800_108_Pipeline
                            goto label_d9308c
                        
                        if (x8_82 == 4)
                            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg2, 0, -ffffffffffffffff, "base")
                            
                            if (result.d == 0)
                                goto label_d928c0
                
                uint64_t x8_83 = zx.q(var_e0)
                uint64_t x8_84
                
                if ((x8_83.d & 1) == 0)
                    x8_84 = x8_83 u>> 1
                else
                    x8_84 = var_d8
                
                struct vtable_for_Botan::SP800_56C* const x8_89
                int64_t x21_1
                
                if (x8_84 != 9)
                label_d92b94:
                    uint64_t x8_130 = zx.q(var_e0)
                    uint64_t x8_131
                    
                    if ((x8_130.d & 1) == 0)
                        x8_131 = x8_130 u>> 1
                    else
                        x8_131 = var_d8
                    
                    if (x8_131 != 9)
                        *entry_x8 = nullptr
                    else
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_e0, 0, -ffffffffffffffff, "SP800-56C")
                        
                        if (result.d != 0 || var_c0 - var_c8 != 0x18)
                            *entry_x8 = nullptr
                        else
                            Botan::SCAN_Name::arg(&var_f8)
                            result = sub_d935a4(&var_68, &var_60)
                            
                            if ((zx.d(var_60.b) & 1) != 0)
                                result = operator delete(var_50)
                            
                            int64_t* x20_4 = var_68
                            
                            if (x20_4 == 0)
                                *entry_x8 = nullptr
                            else
                                Botan::SCAN_Name::arg(&var_f8)
                                var_80.w = 0
                                Botan::MessageAuthenticationCode::create(&var_60, &var_80)
                                
                                if ((zx.d(var_80.b) & 1) == 0)
                                    if ((zx.d(var_60.b) & 1) != 0)
                                        goto label_d92c70
                                    
                                    goto label_d92c48
                                
                                operator delete(var_70)
                                
                                if ((zx.d(var_60.b) & 1) != 0)
                                label_d92c70:
                                    operator delete(var_50)
                                    x21_1 = var_98.q
                                    
                                    if (x21_1 != 0)
                                        goto label_d92c54
                                    
                                    goto label_d92c88
                                
                            label_d92c48:
                                x21_1 = var_98.q
                                
                                if (x21_1 != 0)
                                label_d92c54:
                                    result = operator new(0x18)
                                label_d92d28:
                                    x8_89 = _vtable_for_Botan::SP800_56C
                                    result[2] = x20_4
                                    goto label_d92d34
                                
                            label_d92c88:
                                Botan::SCAN_Name::arg(&var_f8)
                                int128_t* x0_105
                                int128_t v0_6
                                x0_105, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                                    &var_98, nullptr)
                                void* x8_138 = x0_105[1].q
                                var_80.o = *x0_105
                                __builtin_memset(x0_105, 0, 0x18)
                                int128_t* x0_107
                                int128_t v0_7
                                x0_107, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                    &var_80)
                                void* x8_139 = x0_107[1].q
                                var_60.o = *x0_107
                                __builtin_memset(x0_107, 0, 0x18)
                                var_128.w = 0
                                Botan::MessageAuthenticationCode::create(&var_60, &var_128)
                                
                                if ((zx.d(var_128) & 1) == 0)
                                    if ((zx.d(var_60.b) & 1) != 0)
                                        goto label_d92e94
                                    
                                    goto label_d92d08
                                
                                operator delete(var_118)
                                
                                if ((zx.d(var_60.b) & 1) != 0)
                                label_d92e94:
                                    operator delete(x8_139)
                                    
                                    if ((zx.d(var_80.b) & 1) == 0)
                                        goto label_d92d10
                                    
                                    goto label_d92ea4
                                
                            label_d92d08:
                                
                                if ((zx.d(var_80.b) & 1) == 0)
                                label_d92d10:
                                    
                                    if ((zx.d(var_98.b) & 1) != 0)
                                        goto label_d92eb4
                                    
                                    goto label_d92d14
                                
                            label_d92ea4:
                                operator delete(x8_138)
                                int64_t var_130
                                
                                if ((zx.d(var_98.b) & 1) == 0)
                                label_d92d14:
                                    x21_1 = var_130
                                    
                                    if (x21_1 != 0)
                                    label_d92d20:
                                        result = operator new(0x18)
                                        goto label_d92d28
                                    
                                    result = (*(*x20_4 + 8))(x20_4)
                                    *entry_x8 = nullptr
                                else
                                label_d92eb4:
                                    operator delete(var_88)
                                    x21_1 = var_130
                                    
                                    if (x21_1 != 0)
                                        goto label_d92d20
                                    
                                    result = (*(*x20_4 + 8))(x20_4)
                                    *entry_x8 = nullptr
                else
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_e0, 0, -ffffffffffffffff, "SP800-56A")
                    
                    if (result.d != 0 || var_c0 - var_c8 != 0x18)
                        goto label_d92b94
                    
                    Botan::SCAN_Name::arg(&var_f8)
                    var_80.w = 0
                    Botan::HashFunction::create(&var_60, &var_80)
                    
                    if ((zx.d(var_80.b) & 1) == 0)
                        if ((zx.d(var_60.b) & 1) != 0)
                            goto label_d92850
                        
                        goto label_d92600
                    
                    operator delete(var_70)
                    
                    if ((zx.d(var_60.b) & 1) != 0)
                    label_d92850:
                        operator delete(var_50)
                        x21_1 = var_98.q
                        
                        if (x21_1 != 0)
                            goto label_d9260c
                        
                        goto label_d92868
                    
                label_d92600:
                    x21_1 = var_98.q
                    
                    if (x21_1 == 0)
                    label_d92868:
                        Botan::SCAN_Name::arg(&var_f8)
                        var_80.w = 0
                        result = Botan::MessageAuthenticationCode::create(&var_60, &var_80)
                        
                        if ((zx.d(var_80.b) & 1) == 0)
                            if ((zx.d(var_60.b) & 1) != 0)
                                goto label_d92b88
                            
                            goto label_d92894
                        
                        result = operator delete(var_70)
                        
                        if ((zx.d(var_60.b) & 1) != 0)
                        label_d92b88:
                            result = operator delete(var_50)
                            
                            if (var_98.q != 0)
                                goto label_d9289c
                            
                            goto label_d92b94
                        
                    label_d92894:
                        
                        if (var_98.q == 0)
                            goto label_d92b94
                        
                    label_d9289c:
                        void** x0_71 = operator new(0x10)
                        result = Botan::SP800_56A_HMAC::SP800_56A_HMAC(x0_71)
                        *entry_x8 = x0_71
                    else
                    label_d9260c:
                        result = operator new(0x10)
                        x8_89 = _vtable_for_Botan::SP800_56A_Hash
                    label_d92d34:
                        *result = x8_89 + 0x10
                        result[1] = x21_1
                        *entry_x8 = result
            else
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_e0, 0, -ffffffffffffffff, "SP800-108-Feedback")
                
                if (result.d != 0 || var_c0 - var_c8 != 0x18)
                    goto label_d924f4
                
                uint64_t x8_75 = zx.q(*arg2)
                uint64_t x8_76
                
                if ((x8_75.d & 1) == 0)
                    x8_76 = x8_75 u>> 1
                else
                    x8_76 = *(arg2 + 8)
                
                if (x8_76 != 0)
                    if (x8_76 != 4)
                        goto label_d924f4
                    
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg2, 0, -ffffffffffffffff, "base")
                    
                    if (result.d == 0)
                        goto label_d92818
                    
                    goto label_d924f4
                
            label_d92818:
                Botan::SCAN_Name::arg(&var_f8)
                result = sub_d935a4(entry_x8, &var_60)
                
                if ((zx.d(var_60.b) & 1) != 0)
                    result = operator delete(var_50)
        else
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_e0, 0, -ffffffffffffffff, "X9.42-PRF")
            
            if (result.d != 0 || var_c0 - var_c8 != 0x18)
                goto label_d923dc
            
            uint64_t x8_63 = zx.q(*arg2)
            uint64_t x8_64
            
            if ((x8_63.d & 1) == 0)
                x8_64 = x8_63 u>> 1
            else
                x8_64 = *(arg2 + 8)
            
            if (x8_64 != 0)
                if (x8_64 != 4)
                    goto label_d923dc
                
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg2, 0, -ffffffffffffffff, "base")
                
                if (result.d == 0)
                    goto label_d92780
                
                goto label_d923dc
            
        label_d92780:
            void** x0_58 = operator new(0x28)
            Botan::SCAN_Name::arg(&var_f8)
            *x0_58 = _vtable_for_Botan::X942_PRF + 0x10
            result = Botan::OID::from_string(&var_60)
            uint32_t x8_100 = zx.d(var_60.b)
            *entry_x8 = x0_58
            
            if ((x8_100 & 1) != 0)
                result = operator delete(var_50)
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_e0, 0, -ffffffffffffffff, "KDF2")
        
        if (result.d != 0 || var_c0 - var_c8 != 0x18)
            goto label_d92084
        
        uint64_t x8_23 = zx.q(*arg2)
        uint64_t x8_24
        
        if ((x8_23.d & 1) == 0)
            x8_24 = x8_23 u>> 1
        else
            x8_24 = *(arg2 + 8)
        
        if (x8_24 != 0)
            if (x8_24 != 4)
                goto label_d92084
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg2, 0, -ffffffffffffffff, "base")
            
            if (result.d != 0)
                goto label_d92084
            
            goto label_d91f48
        
    label_d91f48:
        Botan::SCAN_Name::arg(&var_f8)
        var_80.w = 0
        result = Botan::HashFunction::create(&var_60, &var_80)
        
        if ((zx.d(var_80.b) & 1) == 0)
            if ((zx.d(var_60.b) & 1) != 0)
                goto label_d92078
            
            goto label_d91f70
        
        result = operator delete(var_70)
        
        if ((zx.d(var_60.b) & 1) != 0)
        label_d92078:
            result = operator delete(var_50)
            x22_1 = var_98.q
            
            if (x22_1 != 0)
                goto label_d91f7c
            
            goto label_d92084
        
    label_d91f70:
        x22_1 = var_98.q
        
        if (x22_1 == 0)
            goto label_d92084
        
    label_d91f7c:
        result = operator new(0x10)
        x8_27 = _vtable_for_Botan::KDF2
    label_d92728:
        *result = x8_27 + 0x10
        result[1] = x22_1
        *entry_x8 = result
else
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_e0, 0, -ffffffffffffffff, "HKDF")
    
    if (result.d != 0 || var_c0 - var_c8 != 0x18)
        goto label_d91d98
    
    uint64_t x8_5 = zx.q(*arg2)
    uint64_t x8_6
    
    if ((x8_5.d & 1) == 0)
        x8_6 = x8_5 u>> 1
    else
        x8_6 = *(arg2 + 8)
    
    if (x8_6 != 0)
        if (x8_6 != 4)
            goto label_d91d98
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg2, 0, -ffffffffffffffff, "base")
        
        if (result.d == 0)
            goto label_d91f98
        
        goto label_d91d98
    
label_d91f98:
    Botan::SCAN_Name::arg(&var_f8)
    var_60 = 0
    Botan::MessageAuthenticationCode::create(&var_128, &var_60)
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
    
    x20_1 = var_80
    
    if (x20_1 == 0)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "HMAC(", &var_128)
        int128_t* x0_76
        int128_t v0_1
        x0_76, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_80)
        void* x8_107 = x0_76[1].q
        var_60.o = *x0_76
        __builtin_memset(x0_76, 0, 0x18)
        var_98 = 0
        result = Botan::MessageAuthenticationCode::create(&var_60, &var_98)
        
        if ((zx.d(var_98.b) & 1) != 0)
            result = operator delete(var_88)
            
            if ((zx.d(var_60.b) & 1) != 0)
            label_d92dc8:
                result = operator delete(x8_107)
                
                if ((zx.d(var_80.b) & 1) == 0)
                    goto label_d92964
                
                goto label_d92dd8
        else if ((zx.d(var_60.b) & 1) != 0)
            goto label_d92dc8
        
        if ((zx.d(var_80.b) & 1) == 0)
        label_d92964:
            x20_1 = var_68
            
            if (x20_1 == 0)
                goto label_d930a8
            
            result = operator new(0x10)
            goto label_d92df0
        
    label_d92dd8:
        result = operator delete(var_70)
        x20_1 = var_68
        
        if (x20_1 != 0)
            result = operator new(0x10)
            goto label_d92df0
        
    label_d930a8:
        *entry_x8 = nullptr
        
        if ((zx.d(var_128) & 1) != 0)
            result = operator delete(var_118)
    else
        result = operator new(0x10)
    label_d92df0:
        x8_151 = _vtable_for_Botan::HKDF
    label_d9308c:
        *result = x8_151 + 0x10
        result[1] = x20_1
        *entry_x8 = result
        
        if ((zx.d(var_128) & 1) != 0)
            result = operator delete(var_118)
void* var_b0

if (var_b0 != 0)
    char* var_a8
    char* x8_161 = var_a8
    void* x0_127
    
    if (x8_161 == var_b0)
        x0_127 = var_b0
    else
        char* x20_5 = x8_161
        
        do
            x20_5 = &x20_5[-0x18]
            
            if ((zx.d(*x20_5) & 1) != 0)
                operator delete(*(x8_161 - 8))
            
            x8_161 = x20_5
        while (var_b0 != x20_5)
        
        x0_127 = var_b0
    
    void* var_a8_1 = var_b0
    result = operator delete(x0_127)

if (var_c8 != 0)
    char* x8_162 = var_c0
    void* x0_129
    
    if (x8_162 == var_c8)
        x0_129 = var_c8
    else
        char* x20_6 = x8_162
        
        do
            x20_6 = &x20_6[-0x18]
            
            if ((zx.d(*x20_6) & 1) != 0)
                operator delete(*(x8_162 - 8))
            
            x8_162 = x20_6
        while (var_c8 != x20_6)
        
        x0_129 = var_c8
    
    void* var_c0_1 = var_c8
    result = operator delete(x0_129)

void* var_d0

if ((zx.d(var_e0) & 1) != 0)
    result = operator delete(var_d0)

if ((zx.d(var_f8) & 1) == 0)
    return result

void* var_e8
return operator delete(var_e8)
