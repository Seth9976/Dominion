// 函数: _ZN5Botan5PBKDF6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xde6720
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
    goto label_de67b8

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
struct vtable_for_Botan::OpenPGP_S2K* const x8_27
int64_t x20_1

if (result.d == 0)
    uint64_t x8_8 = zx.q(*arg2)
    uint64_t x8_9
    
    if ((x8_8.d & 1) == 0)
        x8_9 = x8_8 u>> 1
    else
        x8_9 = *(arg2 + 8)
    
    if (x8_9 == 0)
    label_de689c:
        Botan::SCAN_Name::arg(&var_90)
        var_e0 = 0
        Botan::MessageAuthenticationCode::create(&var_c0, &var_e0)
        
        if ((zx.d(var_e0.b) & 1) == 0)
            if ((zx.d(var_c0) & 1) != 0)
                goto label_de68ec
            
            goto label_de68c4
        
        operator delete(var_d0)
        
        if ((zx.d(var_c0) & 1) != 0)
        label_de68ec:
            operator delete(var_b0)
            x20_1 = var_f8
            
            if (x20_1 != 0)
                goto label_de68d0
            
            goto label_de6904
        
    label_de68c4:
        x20_1 = var_f8
        
        if (x20_1 == 0)
        label_de6904:
            Botan::SCAN_Name::arg(&var_90)
            int128_t* x0_14
            int128_t v0_1
            x0_14, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                &var_f8, nullptr)
            void* x8_13 = x0_14[1].q
            var_e0.o = *x0_14
            __builtin_memset(x0_14, 0, 0x18)
            int128_t* x0_16
            int128_t v0_2
            x0_16, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_e0)
            void* x8_14 = x0_16[1].q
            var_c0.o = *x0_16
            __builtin_memset(x0_16, 0, 0x18)
            int16_t var_110 = 0
            result = Botan::MessageAuthenticationCode::create(&var_c0, &var_110)
            
            if ((zx.d(var_110.b) & 1) == 0)
                if ((zx.d(var_c0) & 1) != 0)
                    goto label_de6a90
                
                goto label_de6984
            
            void* var_100
            result = operator delete(var_100)
            
            if ((zx.d(var_c0) & 1) != 0)
            label_de6a90:
                result = operator delete(x8_14)
                
                if ((zx.d(var_e0.b) & 1) == 0)
                    goto label_de698c
                
                goto label_de6aa0
            
        label_de6984:
            
            if ((zx.d(var_e0.b) & 1) == 0)
            label_de698c:
                
                if ((zx.d(var_f8.b) & 1) != 0)
                    goto label_de6ab0
                
                goto label_de6990
            
        label_de6aa0:
            result = operator delete(x8_13)
            int64_t var_28
            
            if ((zx.d(var_f8.b) & 1) == 0)
            label_de6990:
                x20_1 = var_28
                
                if (x20_1 != 0)
                    result = operator new(0x10)
                    goto label_de6ac8
                
                *entry_x8 = 0
            else
            label_de6ab0:
                void* var_e8
                result = operator delete(var_e8)
                x20_1 = var_28
                
                if (x20_1 != 0)
                    result = operator new(0x10)
                    goto label_de6ac8
                
                *entry_x8 = 0
        else
        label_de68d0:
            result = operator new(0x10)
        label_de6ac8:
            x8_27 = _vtable_for_Botan::PKCS5_PBKDF2
        label_de6ad0:
            *result = x8_27 + 0x10
            result[1] = x20_1
            *entry_x8 = result
    else if (x8_9 != 4)
        *entry_x8 = 0
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg2, 0, -ffffffffffffffff, "base")
        
        if (result.d == 0)
            goto label_de689c
        
        *entry_x8 = 0
else
    uint64_t x10_2 = zx.q(var_78)
    x8_1 = var_70
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_de67b8:
    uint64_t x8_2
    
    if ((x9 & 0xff) == 0)
        x8_2 = x10_1
    else
        x8_2 = x8_1
    
    if (x8_2 != 6)
    label_de69bc:
        uint64_t x8_20 = zx.q(var_78)
        uint64_t x8_21
        
        if ((x8_20.d & 1) == 0)
            x8_21 = x8_20 u>> 1
        else
            x8_21 = var_70
        
        if (x8_21 != 0xb)
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
                        goto label_de6a5c
                    
                    goto label_de6a3c
                
                result = operator delete(var_d0)
                
                if ((zx.d(var_c0) & 1) == 0)
                label_de6a3c:
                    x20_1 = var_f8
                    
                    if (x20_1 != 0)
                    label_de6a6c:
                        result = operator new(0x10)
                        x8_27 = _vtable_for_Botan::OpenPGP_S2K
                        goto label_de6ad0
                    
                    *entry_x8 = 0
                else
                label_de6a5c:
                    result = operator delete(var_b0)
                    x20_1 = var_f8
                    
                    if (x20_1 != 0)
                        goto label_de6a6c
                    
                    *entry_x8 = 0
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_78, 0, -ffffffffffffffff, "PBKDF1")
        
        if (result.d != 0 || var_58 - var_60 != 0x18)
            goto label_de69bc
        
        Botan::SCAN_Name::arg(&var_90)
        var_e0 = 0
        result = Botan::HashFunction::create(&var_c0, &var_e0)
        
        if ((zx.d(var_e0.b) & 1) == 0)
            if ((zx.d(var_c0) & 1) != 0)
                goto label_de69b0
            
            goto label_de6828
        
        result = operator delete(var_d0)
        int64_t x21_1
        
        if ((zx.d(var_c0) & 1) != 0)
        label_de69b0:
            result = operator delete(var_b0)
            x21_1 = var_f8
            
            if (x21_1 != 0)
                goto label_de6834
            
            goto label_de69bc
        
    label_de6828:
        x21_1 = var_f8
        
        if (x21_1 == 0)
            goto label_de69bc
        
    label_de6834:
        result = operator new(0x10)
        *entry_x8 = result
        *result = _vtable_for_Botan::PKCS5_PBKDF1 + 0x10
        result[1] = x21_1
void* var_48

if (var_48 != 0)
    char* var_40
    char* x8_32 = var_40
    void* x0_30
    
    if (x8_32 == var_48)
        x0_30 = var_48
    else
        char* x20_2 = x8_32
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x8_32 - 8))
            
            x8_32 = x20_2
        while (var_48 != x20_2)
        
        x0_30 = var_48
    
    void* var_40_1 = var_48
    result = operator delete(x0_30)

if (var_60 != 0)
    char* x8_33 = var_58
    void* x0_32
    
    if (x8_33 == var_60)
        x0_32 = var_60
    else
        char* x20_3 = x8_33
        
        do
            x20_3 = &x20_3[-0x18]
            
            if ((zx.d(*x20_3) & 1) != 0)
                operator delete(*(x8_33 - 8))
            
            x8_33 = x20_3
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
