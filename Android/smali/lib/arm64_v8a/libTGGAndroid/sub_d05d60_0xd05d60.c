// 函数: sub_d05d60
// 地址: 0xd05d60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48 = arg3
(*(*arg4 + 0x18))(arg4, &var_48, 1)
var_48 = arg3
(*(*arg5 + 0x18))(arg5, &var_48, 1)
int64_t x1_2 = *arg2
(*(*arg4 + 0x18))(arg4, x1_2, arg2[1] - x1_2)
int64_t x1_3 = *arg2
(*(*arg5 + 0x18))(arg5, x1_3, arg2[1] - x1_3)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
v0, v1, v2, v3, v4, v5, v6, v7 = Botan::Buffered_Computation::final()
void* x8_8 = *arg1
void* x9_2 = var_48.q
void* x10_1 = arg1[1] - x8_8
void* var_40
void* x11_1 = var_40 - x9_2
void* x11_2

x11_2 = x11_1 u< x10_1 ? x11_1 : x10_1

void* x10_2 = x11_2 & 0xffffffffffffffe0

if (x10_2 != 0)
    int64_t x12_1 = 0
    
    if (x10_2 == 0x20 || x8_8 + 0x18 + x10_2 - 0x20 u< x8_8 + 0x18
            || x8_8 + 0x10 + x10_2 - 0x20 u< x8_8 + 0x10 || x8_8 + 8 + x10_2 - 0x20 u< x8_8 + 8
            || x8_8 + x10_2 - 0x20 u< x8_8)
        goto label_d05ecc
    
    if (x8_8 u>= x9_2 + x10_2 || x9_2 u>= x8_8 + x10_2)
        int64_t i_16 = (((x10_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x12_1 = i_16 << 5
        int64_t i_12 = i_16
        void* x16_2 = x9_2
        void* x17_2 = x8_8
        int64_t i
        
        do
            v0.q = *x17_2
            v1.q = *(x17_2 + 8)
            v2.q = *(x17_2 + 0x10)
            v3.q = *(x17_2 + 0x18)
            v0:8.q = *(x17_2 + 0x20)
            v1:8.q = *(x17_2 + 0x28)
            v2:8.q = *(x17_2 + 0x30)
            v3:8.q = *(x17_2 + 0x38)
            v4.q = *x16_2
            v5.q = *(x16_2 + 8)
            v6.q = *(x16_2 + 0x10)
            v7.q = *(x16_2 + 0x18)
            v4:8.q = *(x16_2 + 0x20)
            v5:8.q = *(x16_2 + 0x28)
            v6:8.q = *(x16_2 + 0x30)
            v7:8.q = *(x16_2 + 0x38)
            x16_2 += 0x40
            i = i_12
            i_12 -= 2
            int128_t v16_1 = v4 ^ v0
            int128_t v17_1 = v5 ^ v1
            int128_t v18_1 = v6 ^ v2
            int128_t v19_1 = v7 ^ v3
            *x17_2 = v16_1.q
            *(x17_2 + 8) = v17_1.q
            *(x17_2 + 0x10) = v18_1.q
            *(x17_2 + 0x18) = v19_1.q
            *(x17_2 + 0x20) = v16_1:8.q
            *(x17_2 + 0x28) = v17_1:8.q
            *(x17_2 + 0x30) = v18_1:8.q
            *(x17_2 + 0x38) = v19_1:8.q
            x17_2 += 0x40
        while (i != 2)
        
        if (((x10_2 - 0x20) u>> 5) + 1 != i_16)
            goto label_d05ecc
    else
        x12_1 = 0
    label_d05ecc:
        void* i_10 = x12_1 - x10_2
        void* x12_5 = x9_2 + x12_1 + 0x10
        void* x14_4 = x8_8 + x12_1 + 0x10
        void* i_1
        
        do
            v2 = *(x12_5 - 0x10)
            v3 = *x12_5
            i_1 = i_10
            i_10 += 0x20
            x12_5 += 0x20
            v1 = v3 ^ *x14_4
            *(x14_4 - 0x10) ^= v2
            *x14_4 = v1
            x14_4 += 0x20
        while (i_1 != -0x20)

if (x11_2 != x10_2)
    if ((x11_2 & 0x18) == 0)
    label_d05f58:
        void* i_8 = x11_2 - x10_2
        void* x8_9 = x8_8 + x10_2
        void* x9_3 = x9_2 + x10_2
        void* i_2
        
        do
            char x10_3 = *x9_3
            x9_3 += 1
            i_2 = i_8
            i_8 -= 1
            *x8_9 ^= x10_3
            x8_9 += 1
        while (i_2 != 1)
    else
        int64_t* x12_6 = x8_8 + x10_2
        void* x13_4 = x9_2 + x10_2
        
        if (x12_6 u< x9_2 + x11_2 && x13_4 u< x8_8 + x11_2)
            goto label_d05f58
        
        void* x14_6 = x11_2 & 7
        void* i_13 = (x11_2 & 0x1f) - x14_6
        x10_2 += i_13
        void* i_3
        
        do
            v0.q = *x13_4
            x13_4 += 8
            v1.q = *x12_6
            i_3 = i_13
            i_13 -= 8
            *x12_6 = (v1 ^ v0).q
            x12_6 = &x12_6[1]
        while (i_3 != 8)
        
        if (x14_6 != 0)
            goto label_d05f58

int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
int128_t v5_1
int128_t v6_1
int128_t v7_1
v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = Botan::Buffered_Computation::final()
void* x0_7 = var_48.q
int64_t var_38

if (x0_7 != 0)
    var_40 = x0_7
    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
        Botan::deallocate_memory(x0_7, var_38 - x0_7, 1)

void* var_60
var_48.q = var_60
int128_t var_58
var_40.o = var_58
void* x9_4 = *arg1
void* x11_4 = var_58.q - var_60
void* x10_6 = arg1[1] - x9_4
void* x11_5

x11_5 = x11_4 u< x10_6 ? x11_4 : x10_6

void* x10_7 = x11_5 & 0xffffffffffffffe0

if (x10_7 != 0)
    int64_t x12_8 = 0
    
    if (x10_7 == 0x20 || x9_4 + 0x18 + x10_7 - 0x20 u< x9_4 + 0x18
            || x9_4 + 0x10 + x10_7 - 0x20 u< x9_4 + 0x10 || x9_4 + 8 + x10_7 - 0x20 u< x9_4 + 8
            || x9_4 + x10_7 - 0x20 u< x9_4)
        goto label_d06088
    
    if (x9_4 u>= var_60 + x10_7 || var_60 u>= x9_4 + x10_7)
        int64_t i_17 = (((x10_7 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x12_8 = i_17 << 5
        int64_t i_14 = i_17
        void* x16_4 = var_60
        void* x17_4 = x9_4
        int64_t i_4
        
        do
            v0_1.q = *x17_4
            v1_1.q = *(x17_4 + 8)
            v2_1.q = *(x17_4 + 0x10)
            v3_1.q = *(x17_4 + 0x18)
            v0_1:8.q = *(x17_4 + 0x20)
            v1_1:8.q = *(x17_4 + 0x28)
            v2_1:8.q = *(x17_4 + 0x30)
            v3_1:8.q = *(x17_4 + 0x38)
            v4_1.q = *x16_4
            v5_1.q = *(x16_4 + 8)
            v6_1.q = *(x16_4 + 0x10)
            v7_1.q = *(x16_4 + 0x18)
            v4_1:8.q = *(x16_4 + 0x20)
            v5_1:8.q = *(x16_4 + 0x28)
            v6_1:8.q = *(x16_4 + 0x30)
            v7_1:8.q = *(x16_4 + 0x38)
            x16_4 += 0x40
            i_4 = i_14
            i_14 -= 2
            int128_t v16_2 = v4_1 ^ v0_1
            int128_t v17_2 = v5_1 ^ v1_1
            int128_t v18_2 = v6_1 ^ v2_1
            int128_t v19_2 = v7_1 ^ v3_1
            *x17_4 = v16_2.q
            *(x17_4 + 8) = v17_2.q
            *(x17_4 + 0x10) = v18_2.q
            *(x17_4 + 0x18) = v19_2.q
            *(x17_4 + 0x20) = v16_2:8.q
            *(x17_4 + 0x28) = v17_2:8.q
            *(x17_4 + 0x30) = v18_2:8.q
            *(x17_4 + 0x38) = v19_2:8.q
            x17_4 += 0x40
        while (i_4 != 2)
        
        if (((x10_7 - 0x20) u>> 5) + 1 != i_17)
            goto label_d06088
    else
        x12_8 = 0
    label_d06088:
        void* i_11 = x12_8 - x10_7
        void* x12_12 = var_60 + x12_8 + 0x10
        void* x14_10 = x9_4 + x12_8 + 0x10
        void* i_5
        
        do
            v2_1 = *(x12_12 - 0x10)
            v3_1 = *x12_12
            i_5 = i_11
            i_11 += 0x20
            x12_12 += 0x20
            v1_1 = v3_1 ^ *x14_10
            *(x14_10 - 0x10) ^= v2_1
            *x14_10 = v1_1
            x14_10 += 0x20
        while (i_5 != -0x20)

if (x11_5 != x10_7)
    if ((x11_5 & 0x18) == 0)
    label_d06114:
        int64_t i_9 = x11_5 - x10_7
        void* x9_5 = x9_4 + x10_7
        void* x8_12 = var_60 + x10_7
        int64_t i_6
        
        do
            char x10_8 = *x8_12
            x8_12 += 1
            i_6 = i_9
            i_9 -= 1
            *x9_5 ^= x10_8
            x9_5 += 1
        while (i_6 != 1)
    else
        int64_t* x12_13 = x9_4 + x10_7
        void* x13_8 = var_60 + x10_7
        
        if (x12_13 u< var_60 + x11_5 && x13_8 u< x9_4 + x11_5)
            goto label_d06114
        
        void* x14_12 = x11_5 & 7
        void* i_15 = (x11_5 & 0x1f) - x14_12
        x10_7 += i_15
        void* i_7
        
        do
            v0_1.q = *x13_8
            x13_8 += 8
            v1_1.q = *x12_13
            i_7 = i_15
            i_15 -= 8
            *x12_13 = (v1_1 ^ v0_1).q
            x12_13 = &x12_13[1]
        while (i_7 != 8)
        
        if (x14_12 != 0)
            goto label_d06114

void* result = var_48.q

if (result == 0)
    return result

void* result_1 = result
return Botan::deallocate_memory(result, var_38 - result, 1)
