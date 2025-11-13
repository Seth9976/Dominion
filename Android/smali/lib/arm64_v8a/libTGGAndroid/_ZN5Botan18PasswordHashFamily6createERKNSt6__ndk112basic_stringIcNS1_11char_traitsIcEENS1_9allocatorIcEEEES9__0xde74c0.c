// 函数: _ZN5Botan18PasswordHashFamily6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xde74c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_a8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a8)
char var_90
void** result = Botan::SCAN_Name::SCAN_Name(&var_90)
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
    goto label_de7558

result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_78, 0, -ffffffffffffffff, "PBKDF2")
void* var_60
char* var_58
int64_t var_f8
int16_t var_e0
void* var_d0
char var_c0
void* var_b0
int64_t* entry_x8
struct vtable_for_Botan::RFC4880_S2K_Family* const x8_25
int64_t x20_1

if (result.d == 0)
    uint64_t x8_7 = zx.q(*arg2)
    uint64_t x8_8
    
    if ((x8_7.d & 1) == 0)
        x8_8 = x8_7 u>> 1
    else
        x8_8 = *(arg2 + 8)
    
    if (x8_8 == 0)
    label_de7760:
        Botan::SCAN_Name::arg(&var_90)
        var_e0 = 0
        Botan::MessageAuthenticationCode::create(&var_c0, &var_e0)
        
        if ((zx.d(var_e0.b) & 1) == 0)
            if ((zx.d(var_c0) & 1) != 0)
                goto label_de7834
            
            goto label_de7788
        
        operator delete(var_d0)
        
        if ((zx.d(var_c0) & 1) != 0)
        label_de7834:
            operator delete(var_b0)
            x20_1 = var_f8
            
            if (x20_1 != 0)
                goto label_de7794
            
            goto label_de784c
        
    label_de7788:
        x20_1 = var_f8
        
        if (x20_1 == 0)
        label_de784c:
            Botan::SCAN_Name::arg(&var_90)
            int128_t* x0_19
            int128_t v0_1
            x0_19, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                &var_f8, nullptr)
            void* x8_14 = x0_19[1].q
            var_e0.o = *x0_19
            __builtin_memset(x0_19, 0, 0x18)
            int128_t* x0_21
            int128_t v0_2
            x0_21, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_e0)
            void* x8_15 = x0_21[1].q
            var_c0.o = *x0_21
            __builtin_memset(x0_21, 0, 0x18)
            int16_t var_110 = 0
            result = Botan::MessageAuthenticationCode::create(&var_c0, &var_110)
            
            if ((zx.d(var_110.b) & 1) == 0)
                if ((zx.d(var_c0) & 1) != 0)
                    goto label_de78f8
                
                goto label_de78cc
            
            void* var_100
            result = operator delete(var_100)
            
            if ((zx.d(var_c0) & 1) != 0)
            label_de78f8:
                result = operator delete(x8_15)
                
                if ((zx.d(var_e0.b) & 1) == 0)
                    goto label_de78d4
                
                goto label_de7908
            
        label_de78cc:
            
            if ((zx.d(var_e0.b) & 1) == 0)
            label_de78d4:
                
                if ((zx.d(var_f8.b) & 1) != 0)
                    goto label_de7918
                
                goto label_de78d8
            
        label_de7908:
            result = operator delete(x8_14)
            int64_t var_28
            
            if ((zx.d(var_f8.b) & 1) == 0)
            label_de78d8:
                x20_1 = var_28
                
                if (x20_1 != 0)
                    result = operator new(0x10)
                    goto label_de7930
                
                *entry_x8 = 0
            else
            label_de7918:
                void* var_e8
                result = operator delete(var_e8)
                x20_1 = var_28
                
                if (x20_1 != 0)
                    result = operator new(0x10)
                    goto label_de7930
                
                *entry_x8 = 0
        else
        label_de7794:
            result = operator new(0x10)
        label_de7930:
            x8_25 = _vtable_for_Botan::PBKDF2_Family
        label_de7938:
            *result = x8_25 + 0x10
            result[1] = x20_1
            *entry_x8 = result
    else if (x8_8 != 4)
        *entry_x8 = 0
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg2, 0, -ffffffffffffffff, "base")
        
        if (result.d == 0)
            goto label_de7760
        
        *entry_x8 = 0
else
    uint64_t x10_2 = zx.q(var_78)
    x8_1 = var_70
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_de7558:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_1
    
    if (x11_1 != 6)
        goto label_de7598
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_78, 0, -ffffffffffffffff, "Scrypt")
    struct vtable_for_Botan::Bcrypt_PBKDF_Family* const x8_11
    
    if (result.d == 0)
        result = operator new(8)
        x8_11 = _vtable_for_Botan::Scrypt_Family
    label_de7810:
        *result = x8_11 + 0x10
        *entry_x8 = result
    else
        uint64_t x10_3 = zx.q(var_78)
        x8_1 = var_70
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_de7598:
        uint64_t x11_2
        
        if ((x9 & 0xff) == 0)
            x11_2 = x10_1
        else
            x11_2 = x8_1
        
        if (x11_2 == 7)
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "Argon2d")
            
            if (result.d == 0)
                result = operator new(0x10)
                x8_11 = _vtable_for_Botan::Argon2_Family
                result[1].b = 0
                goto label_de7810
            
            uint64_t x10_4 = zx.q(var_78)
            x8_1 = var_70
            x9 = x10_4.d & 1
            x10_1 = x10_4 u>> 1
        
        uint64_t x11_3
        
        if ((x9 & 0xff) == 0)
            x11_3 = x10_1
        else
            x11_3 = x8_1
        
        if (x11_3 != 7)
            goto label_de7618
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_78, 0, -ffffffffffffffff, "Argon2i")
        char x9_3
        
        if (result.d == 0)
            result = operator new(0x10)
            x9_3 = 1
        label_de77f4:
            result[1].b = x9_3
            *result = _vtable_for_Botan::Argon2_Family + 0x10
            *entry_x8 = result
        else
            uint64_t x10_5 = zx.q(var_78)
            x8_1 = var_70
            x9 = x10_5.d & 1
            x10_1 = x10_5 u>> 1
        label_de7618:
            uint64_t x11_4
            
            if ((x9 & 0xff) == 0)
                x11_4 = x10_1
            else
                x11_4 = x8_1
            
            if (x11_4 != 8)
                goto label_de7658
            
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "Argon2id")
            
            if (result.d == 0)
                result = operator new(0x10)
                x9_3 = 2
                goto label_de77f4
            
            uint64_t x10_6 = zx.q(var_78)
            x8_1 = var_70
            x9 = x10_6.d & 1
            x10_1 = x10_6 u>> 1
        label_de7658:
            uint64_t x11_5
            
            if ((x9 & 0xff) == 0)
                x11_5 = x10_1
            else
                x11_5 = x8_1
            
            if (x11_5 == 0xc)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "Bcrypt-PBKDF")
                
                if (result.d == 0)
                    result = operator new(8)
                    x8_11 = _vtable_for_Botan::Bcrypt_PBKDF_Family
                    goto label_de7810
                
                uint64_t x10_7 = zx.q(var_78)
                x8_1 = var_70
                x9 = x10_7.d & 1
                x10_1 = x10_7 u>> 1
            
            uint64_t x8_2
            
            if ((x9 & 0xff) == 0)
                x8_2 = x10_1
            else
                x8_2 = x8_1
            
            if (x8_2 != 0xb)
                *entry_x8 = 0
            else
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "OpenPGP-S2K")
                
                if (result.d != 0 || var_58 - var_60 != 0x18)
                    *entry_x8 = 0
                else
                    Botan::SCAN_Name::arg(&var_90)
                    var_e0 = 0
                    result = Botan::HashFunction::create(&var_c0, &var_e0)
                    
                    if ((zx.d(var_e0.b) & 1) == 0)
                        if ((zx.d(var_c0) & 1) != 0)
                            goto label_de7958
                        
                        goto label_de7708
                    
                    result = operator delete(var_d0)
                    
                    if ((zx.d(var_c0) & 1) == 0)
                    label_de7708:
                        x20_1 = var_f8
                        
                        if (x20_1 != 0)
                        label_de7968:
                            result = operator new(0x10)
                            x8_25 = _vtable_for_Botan::RFC4880_S2K_Family
                            goto label_de7938
                        
                        *entry_x8 = 0
                    else
                    label_de7958:
                        result = operator delete(var_b0)
                        x20_1 = var_f8
                        
                        if (x20_1 != 0)
                            goto label_de7968
                        
                        *entry_x8 = 0
void* var_48

if (var_48 != 0)
    char* var_40
    char* x8_26 = var_40
    void* x0_30
    
    if (x8_26 == var_48)
        x0_30 = var_48
    else
        char* x20_2 = x8_26
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x8_26 - 8))
            
            x8_26 = x20_2
        while (var_48 != x20_2)
        
        x0_30 = var_48
    
    void* var_40_1 = var_48
    result = operator delete(x0_30)

if (var_60 != 0)
    char* x8_27 = var_58
    void* x0_32
    
    if (x8_27 == var_60)
        x0_32 = var_60
    else
        char* x20_3 = x8_27
        
        do
            x20_3 = &x20_3[-0x18]
            
            if ((zx.d(*x20_3) & 1) != 0)
                operator delete(*(x8_27 - 8))
            
            x8_27 = x20_3
        while (var_60 != x20_3)
        
        x0_32 = var_60
    
    void* var_58_1 = var_60
    result = operator delete(x0_32)

void* var_68

if ((zx.d(var_78) & 1) != 0)
    result = operator delete(var_68)

if ((zx.d(var_90) & 1) == 0)
    return result

void* var_80
return operator delete(var_80)
