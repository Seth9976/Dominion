// 函数: _ZN5Botan9mgf1_maskERNS_12HashFunctionEPKhmPhm
// 地址: 0xd5e83c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = arg5
uint8_t* x20 = arg4
uint64_t result = (**arg1)()
void* var_68_1
__builtin_memset(&var_68_1, 0, 0x18)
void* var_58_1
void* x24
void* var_60_1

if (result == 0)
    x24 = nullptr
    
    if (x19 != 0)
    label_d5e8c4:
        int32_t x25_2 = 0
        void* x8_10
        uint64_t temp0_1
        
        do
            (*(*arg1 + 0x18))(arg1, arg2, arg3)
            int32_t var_44 = _byteswap(x25_2)
            (*(*arg1 + 0x18))(arg1, &var_44, 4)
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                (*(*arg1 + 0x20))(arg1, var_68_1)
            x24 = var_68_1
            void* x10_1 = var_60_1 - x24
            
            x8_10 = x19 u< x10_1 ? x19 : x10_1
            
            void* x9_1 = x8_10 & 0xffffffffffffffe0
            
            if (x9_1 != 0)
                int64_t x11_1 = 0
                
                if (x9_1 == 0x20 || &x20[0x18] + x9_1 - 0x20 u< &x20[0x18]
                        || &x20[0x10] + x9_1 - 0x20 u< &x20[0x10]
                        || &x20[8] + x9_1 - 0x20 u< &x20[8] || x20 + x9_1 - 0x20 u< x20)
                    goto label_d5e9f8
                
                if (x20 u>= x24 + x9_1 || x24 u>= x20 + x9_1)
                    int64_t i_8 = (((x9_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x11_1 = i_8 << 5
                    int64_t i_7 = i_8
                    void* x15_2 = x24
                    uint8_t* x16_2 = x20
                    int64_t i
                    
                    do
                        v0_1.q = *x16_2
                        v1_1.q = *(x16_2 + 8)
                        v2_1.q = *(x16_2 + 0x10)
                        v3_1.q = *(x16_2 + 0x18)
                        v0_1:8.q = *(x16_2 + 0x20)
                        v1_1:8.q = *(x16_2 + 0x28)
                        v2_1:8.q = *(x16_2 + 0x30)
                        v3_1:8.q = *(x16_2 + 0x38)
                        v4_1.q = *x15_2
                        v5_1.q = *(x15_2 + 8)
                        v6_1.q = *(x15_2 + 0x10)
                        v7_1.q = *(x15_2 + 0x18)
                        v4_1:8.q = *(x15_2 + 0x20)
                        v5_1:8.q = *(x15_2 + 0x28)
                        v6_1:8.q = *(x15_2 + 0x30)
                        v7_1:8.q = *(x15_2 + 0x38)
                        x15_2 += 0x40
                        i = i_7
                        i_7 -= 2
                        int128_t v16_1 = v4_1 ^ v0_1
                        int128_t v17_1 = v5_1 ^ v1_1
                        int128_t v18_1 = v6_1 ^ v2_1
                        int128_t v19_1 = v7_1 ^ v3_1
                        *x16_2 = v16_1.q
                        *(x16_2 + 8) = v17_1.q
                        *(x16_2 + 0x10) = v18_1.q
                        *(x16_2 + 0x18) = v19_1.q
                        *(x16_2 + 0x20) = v16_1:8.q
                        *(x16_2 + 0x28) = v17_1:8.q
                        *(x16_2 + 0x30) = v18_1:8.q
                        *(x16_2 + 0x38) = v19_1:8.q
                        x16_2 = &x16_2[0x40]
                    while (i != 2)
                    
                    if (((x9_1 - 0x20) u>> 5) + 1 != i_8)
                        goto label_d5e9f8
                else
                    x11_1 = 0
                label_d5e9f8:
                    void* i_5 = x11_1 - x9_1
                    void* x11_5 = x24 + x11_1 + 0x10
                    void* x13_4 = &x20[x11_1 + 0x10]
                    void* i_1
                    
                    do
                        v2_1 = *(x11_5 - 0x10)
                        v3_1 = *x11_5
                        i_1 = i_5
                        i_5 += 0x20
                        x11_5 += 0x20
                        v1_1 = v3_1 ^ *x13_4
                        *(x13_4 - 0x10) ^= v2_1
                        *x13_4 = v1_1
                        x13_4 += 0x20
                    while (i_1 != -0x20)
            
            if (x8_10 != x9_1)
                if ((x8_10 & 0x18) == 0)
                label_d5ea8c:
                    void* i_4 = x8_10 - x9_1
                    char* x11_7 = x20 + x9_1
                    void* x9_2 = x24 + x9_1
                    void* i_2
                    
                    do
                        char x12_5 = *x9_2
                        x9_2 += 1
                        i_2 = i_4
                        i_4 -= 1
                        *x11_7 ^= x12_5
                        x11_7 = &x11_7[1]
                    while (i_2 != 1)
                else
                    int64_t* x11_6 = x20 + x9_1
                    void* x12_4 = x24 + x9_1
                    
                    if (x11_6 u< x24 + x8_10 && x12_4 u< x20 + x8_10)
                        goto label_d5ea8c
                    
                    uint64_t x10_2
                    
                    x10_2 = x19 u< x10_1 ? x19 : x10_1
                    
                    int64_t x10_3 = x10_2 & 7
                    int64_t i_6 = (x10_2 & 0x1f) - x10_3
                    x9_1 += i_6
                    int64_t i_3
                    
                    do
                        v0_1.q = *x12_4
                        x12_4 += 8
                        v1_1.q = *x11_6
                        i_3 = i_6
                        i_6 -= 8
                        *x11_6 = (v1_1 ^ v0_1).q
                        x11_6 = &x11_6[1]
                    while (i_3 != 8)
                    
                    if (x10_3 != 0)
                        goto label_d5ea8c
            
            x20 += x8_10
            temp0_1 = x19
            x19 -= x8_10
            x25_2 += 1
        while (temp0_1 != x8_10)
else
    if ((result & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x0_1 = Botan::allocate_memory(result, 1)
    void* x26_1 = x0_1 + result
    x24 = x0_1
    var_68_1 = x0_1
    var_58_1 = x26_1
    result = memset(x0_1, 0, result)
    var_60_1 = x26_1
    
    if (x19 != 0)
        goto label_d5e8c4

if (x24 == 0)
    return result

void* var_60_2 = x24
return Botan::deallocate_memory(x24, var_58_1 - x24, 1)
