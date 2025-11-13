// 函数: _ZNK5Botan25Block_Cipher_Fixed_ParamsILm16ELm16ELm32ELm8ENS_11BlockCipherEE13decrypt_n_xexEPhPKhm
// 地址: 0xee3730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x3
int64_t x23 = entry_x3 << 4
int64_t x22 = x23 & 0xffffffffffffffe0
int128_t entry_v0
int128_t entry_v1
int128_t entry_v2
int128_t entry_v3
int128_t entry_v4
int128_t entry_v5
int128_t entry_v6
int128_t entry_v7

if (x22 != 0)
    int64_t x8_1 = 0
    
    if (x22 == 0x20 || &arg2[x22 - 8] u< &arg2[0x18] || &arg2[x22 - 0x10] u< &arg2[0x10]
            || &arg2[x22 - 0x18] u< &arg2[8] || &arg2[x22 - 0x20] u< arg2)
        goto label_ee3808
    
    if (arg3 + x22 u<= arg2 || &arg2[x22] u<= arg3)
        int64_t i_16 = (((x22 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x8_1 = i_16 << 5
        int64_t i_14 = i_16
        uint64_t x12_2 = arg3
        uint8_t const* x13_2 = arg2
        int64_t i
        
        do
            entry_v0.q = *x13_2
            entry_v1.q = *(x13_2 + 8)
            entry_v2.q = *(x13_2 + 0x10)
            entry_v3.q = *(x13_2 + 0x18)
            entry_v0:8.q = *(x13_2 + 0x20)
            entry_v1:8.q = *(x13_2 + 0x28)
            entry_v2:8.q = *(x13_2 + 0x30)
            entry_v3:8.q = *(x13_2 + 0x38)
            entry_v4.q = *x12_2
            entry_v5.q = *(x12_2 + 8)
            entry_v6.q = *(x12_2 + 0x10)
            entry_v7.q = *(x12_2 + 0x18)
            entry_v4:8.q = *(x12_2 + 0x20)
            entry_v5:8.q = *(x12_2 + 0x28)
            entry_v6:8.q = *(x12_2 + 0x30)
            entry_v7:8.q = *(x12_2 + 0x38)
            x12_2 += 0x40
            i = i_14
            i_14 -= 2
            int128_t v16_1 = entry_v4 ^ entry_v0
            int128_t v17_1 = entry_v5 ^ entry_v1
            int128_t v18_1 = entry_v6 ^ entry_v2
            int128_t v19_1 = entry_v7 ^ entry_v3
            *x13_2 = v16_1.q
            *(x13_2 + 8) = v17_1.q
            *(x13_2 + 0x10) = v18_1.q
            *(x13_2 + 0x18) = v19_1.q
            *(x13_2 + 0x20) = v16_1:8.q
            *(x13_2 + 0x28) = v17_1:8.q
            *(x13_2 + 0x30) = v18_1:8.q
            *(x13_2 + 0x38) = v19_1:8.q
            x13_2 = &x13_2[0x40]
        while (i != 2)
        
        if (((x22 - 0x20) u>> 5) + 1 != i_16)
            goto label_ee3808
    else
        x8_1 = 0
    label_ee3808:
        int64_t i_12 = x8_1 - x22
        void* x8_5 = arg3 + x8_1 + 0x10
        void* x10_4 = &arg2[x8_1 + 0x10]
        int64_t i_1
        
        do
            entry_v2 = *(x8_5 - 0x10)
            entry_v3 = *x8_5
            i_1 = i_12
            i_12 += 0x20
            x8_5 += 0x20
            entry_v0 = entry_v2 ^ *(x10_4 - 0x10)
            entry_v1 = entry_v3 ^ *x10_4
            *(x10_4 - 0x10) = entry_v0
            *x10_4 = entry_v1
            x10_4 += 0x20
        while (i_1 != -0x20)

int64_t i_8 = x23 - x22

if (x23 != x22)
    void* x9_3
    int64_t* x10_6
    
    if ((entry_x3.d & 1) != 0)
        x9_3 = &arg2[x22]
        x10_6 = arg3 + x22
    
    if ((entry_x3.d & 1) != 0 && (x9_3 u>= arg3 + x23 || x10_6 u>= &arg2[x23]))
        int64_t i_9 = x23 & 0x10
        int64_t i_2
        
        do
            entry_v0.q = *x10_6
            x10_6 = &x10_6[1]
            entry_v1.q = *x9_3
            i_2 = i_9
            i_9 -= 8
            entry_v0 ^= entry_v1
            *x9_3 = entry_v0.q
            x9_3 += 8
        while (i_2 != 8)
    else
        void* x9_4 = &arg2[x22]
        char* x10_7 = arg3 + x22
        int64_t i_3
        
        do
            char x11_4 = *x10_7
            x10_7 = &x10_7[1]
            i_3 = i_8
            i_8 -= 1
            *x9_4 ^= x11_4
            x9_4 += 1
        while (i_3 != 1)

int64_t result
int64_t lr
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
result, v0, v1, v2, v3, v4, v5, v6, v7 = (*(*arg1 + 0x50))(arg1, arg2, arg2, entry_x3, entry_v0, 
    entry_v1, entry_v2, entry_v3, entry_v4, entry_v5, entry_v6, entry_v7, lr)

if (x22 != 0)
    int64_t x8_8 = 0
    
    if (x22 == 0x20 || &arg2[x22 - 8] u< &arg2[0x18] || &arg2[x22 - 0x10] u< &arg2[0x10]
            || &arg2[x22 - 0x18] u< &arg2[8] || &arg2[x22 - 0x20] u< arg2)
        goto label_ee3974
    
    if (arg3 + x22 u<= arg2 || &arg2[x22] u<= arg3)
        int64_t i_17 = (((x22 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x8_8 = i_17 << 5
        int64_t i_15 = i_17
        uint64_t x12_5 = arg3
        uint8_t const* x13_4 = arg2
        int64_t i_4
        
        do
            v0.q = *x13_4
            v1.q = *(x13_4 + 8)
            v2.q = *(x13_4 + 0x10)
            v3.q = *(x13_4 + 0x18)
            v0:8.q = *(x13_4 + 0x20)
            v1:8.q = *(x13_4 + 0x28)
            v2:8.q = *(x13_4 + 0x30)
            v3:8.q = *(x13_4 + 0x38)
            v4.q = *x12_5
            v5.q = *(x12_5 + 8)
            v6.q = *(x12_5 + 0x10)
            v7.q = *(x12_5 + 0x18)
            v4:8.q = *(x12_5 + 0x20)
            v5:8.q = *(x12_5 + 0x28)
            v6:8.q = *(x12_5 + 0x30)
            v7:8.q = *(x12_5 + 0x38)
            x12_5 += 0x40
            i_4 = i_15
            i_15 -= 2
            int128_t v16_2 = v4 ^ v0
            int128_t v17_2 = v5 ^ v1
            int128_t v18_2 = v6 ^ v2
            int128_t v19_2 = v7 ^ v3
            *x13_4 = v16_2.q
            *(x13_4 + 8) = v17_2.q
            *(x13_4 + 0x10) = v18_2.q
            *(x13_4 + 0x18) = v19_2.q
            *(x13_4 + 0x20) = v16_2:8.q
            *(x13_4 + 0x28) = v17_2:8.q
            *(x13_4 + 0x30) = v18_2:8.q
            *(x13_4 + 0x38) = v19_2:8.q
            x13_4 = &x13_4[0x40]
        while (i_4 != 2)
        
        if (((x22 - 0x20) u>> 5) + 1 != i_17)
            goto label_ee3974
    else
        x8_8 = 0
    label_ee3974:
        int64_t i_13 = x8_8 - x22
        void* x8_12 = arg3 + x8_8 + 0x10
        void* x10_11 = &arg2[x8_8 + 0x10]
        int64_t i_5
        
        do
            v2 = *(x8_12 - 0x10)
            v3 = *x8_12
            i_5 = i_13
            i_13 += 0x20
            x8_12 += 0x20
            v1 = v3 ^ *x10_11
            *(x10_11 - 0x10) ^= v2
            *x10_11 = v1
            x10_11 += 0x20
        while (i_5 != -0x20)

int64_t i_10 = x23 - x22

if (x23 != x22)
    void* x9_7
    int64_t* x10_13
    
    if ((entry_x3.d & 1) != 0)
        x9_7 = &arg2[x22]
        x10_13 = arg3 + x22
    
    if ((entry_x3.d & 1) != 0 && (x9_7 u>= arg3 + x23 || x10_13 u>= &arg2[x23]))
        int64_t i_11 = x23 & 0x10
        int64_t i_6
        
        do
            v0.q = *x10_13
            x10_13 = &x10_13[1]
            v1.q = *x9_7
            i_6 = i_11
            i_11 -= 8
            *x9_7 = (v1 ^ v0).q
            x9_7 += 8
        while (i_6 != 8)
    else
        void* x9_8 = &arg2[x22]
        char* x10_14 = arg3 + x22
        int64_t i_7
        
        do
            char x11_9 = *x10_14
            x10_14 = &x10_14[1]
            i_7 = i_10
            i_10 -= 1
            *x9_8 ^= x11_9
            x9_8 += 1
        while (i_7 != 1)

return result
