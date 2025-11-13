// 函数: _ZNK5Botan11BlockCipher13encrypt_n_xexEPhPKhm
// 地址: 0xee8dd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
x0, v0, v1, v2, v3, v4, v5, v6, v7 = (*(*arg1 + 0x30))()
int64_t entry_x3
int64_t x24 = x0 * entry_x3
int64_t x23 = x24 & 0xffffffffffffffe0

if (x23 != 0)
    int64_t x8_2 = 0
    
    if (x23 == 0x20 || &arg2[x23 - 8] u< &arg2[0x18] || &arg2[x23 - 0x10] u< &arg2[0x10]
            || &arg2[x23 - 0x18] u< &arg2[8] || &arg2[x23 - 0x20] u< arg2)
        goto label_ee8ebc
    
    if (arg3 + x23 u<= arg2 || &arg2[x23] u<= arg3)
        int64_t i_16 = (((x23 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x8_2 = i_16 << 5
        int64_t i_12 = i_16
        uint64_t x12_2 = arg3
        uint8_t const* x13_2 = arg2
        int64_t i
        
        do
            v0.q = *x13_2
            v1.q = *(x13_2 + 8)
            v2.q = *(x13_2 + 0x10)
            v3.q = *(x13_2 + 0x18)
            v0:8.q = *(x13_2 + 0x20)
            v1:8.q = *(x13_2 + 0x28)
            v2:8.q = *(x13_2 + 0x30)
            v3:8.q = *(x13_2 + 0x38)
            v4.q = *x12_2
            v5.q = *(x12_2 + 8)
            v6.q = *(x12_2 + 0x10)
            v7.q = *(x12_2 + 0x18)
            v4:8.q = *(x12_2 + 0x20)
            v5:8.q = *(x12_2 + 0x28)
            v6:8.q = *(x12_2 + 0x30)
            v7:8.q = *(x12_2 + 0x38)
            x12_2 += 0x40
            i = i_12
            i_12 -= 2
            int128_t v16_1 = v4 ^ v0
            int128_t v17_1 = v5 ^ v1
            int128_t v18_1 = v6 ^ v2
            int128_t v19_1 = v7 ^ v3
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
        
        if (((x23 - 0x20) u>> 5) + 1 != i_16)
            goto label_ee8ebc
    else
        x8_2 = 0
    label_ee8ebc:
        int64_t i_10 = x8_2 - x23
        void* x8_6 = arg3 + x8_2 + 0x10
        void* x10_4 = &arg2[x8_2 + 0x10]
        int64_t i_1
        
        do
            v2 = *(x8_6 - 0x10)
            v3 = *x8_6
            i_1 = i_10
            i_10 += 0x20
            x8_6 += 0x20
            v1 = v3 ^ *x10_4
            *(x10_4 - 0x10) ^= v2
            *x10_4 = v1
            x10_4 += 0x20
        while (i_1 != -0x20)

if (x24 != x23)
    int64_t x9_3 = x23
    
    if ((x24 & 0x18) == 0)
    label_ee8f50:
        int64_t i_8 = x24 - x9_3
        void* x10_6 = &arg2[x9_3]
        char* x9_7 = arg3 + x9_3
        int64_t i_2
        
        do
            char x11_4 = *x9_7
            x9_7 = &x9_7[1]
            i_2 = i_8
            i_8 -= 1
            *x10_6 ^= x11_4
            x10_6 += 1
        while (i_2 != 1)
    else
        void* x8_7 = &arg2[x23]
        int64_t* x10_5 = arg3 + x23
        
        if (x8_7 u< arg3 + x24)
            x9_3 = x23
        
        if (x8_7 u< arg3 + x24 && x10_5 u< &arg2[x24])
            goto label_ee8f50
        
        int64_t x11_3 = x24 & 7
        int64_t i_15 = (x24 & 0x1f) - x11_3
        x9_3 = x23 + i_15
        int64_t i_3
        
        do
            v0.q = *x10_5
            x10_5 = &x10_5[1]
            v1.q = *x8_7
            i_3 = i_15
            i_15 -= 8
            *x8_7 = (v1 ^ v0).q
            x8_7 += 8
        while (i_3 != 8)
        
        if (x11_3 != 0)
            goto label_ee8f50

int64_t result
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
int128_t v5_1
int128_t v6_1
int128_t v7_1
result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
    (*(*arg1 + 0x48))(arg1, arg2, arg2, entry_x3)

if (x23 != 0)
    int64_t x8_10 = 0
    
    if (x23 == 0x20 || &arg2[x23 - 8] u< &arg2[0x18] || &arg2[x23 - 0x10] u< &arg2[0x10]
            || &arg2[x23 - 0x18] u< &arg2[8] || &arg2[x23 - 0x20] u< arg2)
        goto label_ee9048
    
    if (arg3 + x23 u<= arg2 || &arg2[x23] u<= arg3)
        int64_t i_17 = (((x23 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x8_10 = i_17 << 5
        int64_t i_13 = i_17
        uint64_t x12_5 = arg3
        uint8_t const* x13_4 = arg2
        int64_t i_4
        
        do
            v0_1.q = *x13_4
            v1_1.q = *(x13_4 + 8)
            v2_1.q = *(x13_4 + 0x10)
            v3_1.q = *(x13_4 + 0x18)
            v0_1:8.q = *(x13_4 + 0x20)
            v1_1:8.q = *(x13_4 + 0x28)
            v2_1:8.q = *(x13_4 + 0x30)
            v3_1:8.q = *(x13_4 + 0x38)
            v4_1.q = *x12_5
            v5_1.q = *(x12_5 + 8)
            v6_1.q = *(x12_5 + 0x10)
            v7_1.q = *(x12_5 + 0x18)
            v4_1:8.q = *(x12_5 + 0x20)
            v5_1:8.q = *(x12_5 + 0x28)
            v6_1:8.q = *(x12_5 + 0x30)
            v7_1:8.q = *(x12_5 + 0x38)
            x12_5 += 0x40
            i_4 = i_13
            i_13 -= 2
            int128_t v16_2 = v4_1 ^ v0_1
            int128_t v17_2 = v5_1 ^ v1_1
            int128_t v18_2 = v6_1 ^ v2_1
            int128_t v19_2 = v7_1 ^ v3_1
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
        
        if (((x23 - 0x20) u>> 5) + 1 != i_17)
            goto label_ee9048
    else
        x8_10 = 0
    label_ee9048:
        int64_t i_11 = x8_10 - x23
        void* x8_14 = arg3 + x8_10 + 0x10
        void* x10_10 = &arg2[x8_10 + 0x10]
        int64_t i_5
        
        do
            v2_1 = *(x8_14 - 0x10)
            v3_1 = *x8_14
            i_5 = i_11
            i_11 += 0x20
            x8_14 += 0x20
            v1_1 = v3_1 ^ *x10_10
            *(x10_10 - 0x10) ^= v2_1
            *x10_10 = v1_1
            x10_10 += 0x20
        while (i_5 != -0x20)

if (x24 != x23)
    if ((x24 & 0x18) == 0)
    label_ee90d4:
        int64_t i_9 = x24 - x23
        void* x9_12 = &arg2[x23]
        char* x10_13 = arg3 + x23
        int64_t i_6
        
        do
            char x11_9 = *x10_13
            x10_13 = &x10_13[1]
            i_6 = i_9
            i_9 -= 1
            *x9_12 ^= x11_9
            x9_12 += 1
        while (i_6 != 1)
    else
        void* x8_15 = &arg2[x23]
        int64_t* x9_11 = arg3 + x23
        
        if (x8_15 u< arg3 + x24 && x9_11 u< &arg2[x24])
            goto label_ee90d4
        
        int64_t x10_12 = x24 & 7
        int64_t i_14 = (x24 & 0x1f) - x10_12
        x23 += i_14
        int64_t i_7
        
        do
            v0_1.q = *x9_11
            x9_11 = &x9_11[1]
            v1_1.q = *x8_15
            i_7 = i_14
            i_14 -= 8
            *x8_15 = (v1_1 ^ v0_1).q
            x8_15 += 8
        while (i_7 != 8)
        
        if (x10_12 != 0)
            goto label_ee90d4

return result
