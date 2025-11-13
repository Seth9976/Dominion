// 函数: _ZNK5Botan22Path_Validation_Result15warnings_stringEv
// 地址: 0xec880c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x10 = 4
char var_75 = 0
char* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char var_78 = 4
int16_t var_77 = 0x202c
void* entry_x0
int64_t x9 = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)
int128_t var_90
uint64_t var_80
uint64_t var_68
uint32_t x8_19
uint64_t x9_3
uint64_t entry_x11

if (x8 == x9)
    x9_3 = 0
    x8_19 = 0
else
    uint64_t i = 0
    
    do
        int64_t* x25_1 = x9 + i * 0x18
        int64_t* j = *x25_1
        
        if (j != &x25_1[1])
            do
                int32_t x24_1 = *(j + 0x1c)
                std::__ndk1::to_string(i)
                char var_108
                int128_t* x0_2
                int128_t v0_1
                x0_2, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                    &var_108, nullptr)
                void* x8_1 = x0_2[1].q
                int128_t var_f0 = *x0_2
                __builtin_memset(x0_2, 0, 0x18)
                int128_t* x0_4
                int128_t v0_2
                x0_4, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_f0)
                void* x8_2 = x0_4[1].q
                int128_t var_d0 = *x0_4
                __builtin_memset(x0_4, 0, 0x18)
                Botan::to_string(zx.q(x24_1))
                int128_t* x0_8
                int128_t v0_3
                x0_8, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_d0)
                void* x8_3 = x0_8[1].q
                int128_t var_b0 = *x0_8
                __builtin_memset(x0_8, 0, 0x18)
                uint64_t x1_3
                
                if ((zx.d(var_78) & 1) == 0)
                    x1_3 = &var_78 | 1
                else
                    x1_3 = var_68
                
                int128_t* x0_10
                int128_t v0_4
                x0_10, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_b0, x1_3)
                var_80 = x0_10[1].q
                var_90 = *x0_10
                __builtin_memset(x0_10, 0, 0x18)
                uint64_t x1_4
                
                if ((zx.d(var_90.b) & 1) == 0)
                    x1_4 = &var_90 | 1
                else
                    x1_4 = var_80
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    entry_x8, x1_4)
                
                if ((zx.d(var_90.b) & 1) == 0)
                    if ((zx.d(var_b0.b) & 1) != 0)
                        goto label_ec89fc
                    
                    goto label_ec89c8
                
                operator delete(var_80)
                
                if ((zx.d(var_b0.b) & 1) != 0)
                label_ec89fc:
                    operator delete(x8_3)
                    
                    if ((zx.d(var_d0.b) & 1) == 0)
                        goto label_ec89d0
                    
                    goto label_ec8a0c
                
            label_ec89c8:
                
                if ((zx.d(var_d0.b) & 1) != 0)
                label_ec8a0c:
                    operator delete(x8_2)
                    
                    if ((zx.d(var_f0.b) & 1) != 0)
                    label_ec8a1c:
                        operator delete(x8_1)
                        
                        if ((zx.d(var_108) & 1) == 0)
                            goto label_ec89dc
                        
                        goto label_ec8a2c
                else
                label_ec89d0:
                    
                    if ((zx.d(var_f0.b) & 1) != 0)
                        goto label_ec8a1c
                
                int64_t* k_1
                
                if ((zx.d(var_108) & 1) == 0)
                label_ec89dc:
                    k_1 = j[1]
                    
                    if (k_1 != 0)
                        goto label_ec8a40
                    
                    goto label_ec8a4c
                
            label_ec8a2c:
                void* var_f8
                operator delete(var_f8)
                k_1 = j[1]
                
                if (k_1 == 0)
                label_ec8a4c:
                    void* x8_17 = &j[2]
                    int64_t* j_1 = *x8_17
                    
                    if (*j_1 == j)
                        j = j_1
                    else
                        void* k
                        
                        do
                            k = *x8_17
                            x8_17 = k + 0x10
                            j = *x8_17
                        while (*j != k)
                else
                label_ec8a40:
                    
                    do
                        j = k_1
                        k_1 = *k_1
                    while (k_1 != 0)
            while (j != &x25_1[1])
            
            x9 = *(entry_x0 + 0x18)
            x8 = *(entry_x0 + 0x20)
        
        i += 1
    while (i u< ((x8 - x9) s>> 3) * -0x5555555555555555)
    
    x8_19 = zx.d(*entry_x8)
    x9_3 = *(entry_x8 + 8)
    x10 = zx.d(var_78)
    uint64_t var_70
    entry_x11 = var_70

uint64_t x9_4

if ((x8_19 & 1) == 0)
    x9_4 = zx.q(x8_19 u>> 1)
else
    x9_4 = x9_3

int32_t x8_20 = x10 & 1
uint64_t x10_9

if (x8_20 == 0)
    x10_9 = zx.q(x10 u>> 1)
else
    x10_9 = entry_x11

if (x9_4 u>= x10_9)
    int128_t v0_5
    entry_x0, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_90, entry_x8, 0, x9_4 - x10_9)
    
    if ((zx.d(*entry_x8) & 1) != 0)
        entry_x0, v0_5 = operator delete(*(entry_x8 + 0x10))
    
    uint32_t x9_5 = zx.d(var_78)
    v0_5 = var_90
    *(entry_x8 + 0x10) = var_80
    x8_20 = x9_5 & 1
    *entry_x8 = v0_5

if ((x8_20 & 0xff) != 0)
    operator delete(var_68)
