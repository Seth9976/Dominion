// 函数: sub_10832c8
// 地址: 0x10832c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
result, v0, v1, v2, v3, v4 = calloc(1, 0x530)
*(result + 0x510) = arg2
*(result + 0x508) = arg2[0xd2]
int64_t x8_2 = sx.q(*arg2)
int32_t x24
int64_t b[0x2]
int32_t n_1

if (x8_2.d s<= 0)
    x24 = 0
    n_1 = 2
    *(result + 0x504) = 2
label_10833b4:
    int64_t n = sx.q(n_1)
    int64_t n_2
    
    n_2 = n s> 1 ? n : 1
    
    int64_t i_9 = 0
    void var_250
    
    if (n_2 u>= 4)
        v1 = data_71a9c0
        i_9 = n_2 & 0x7ffffffffffffffc
        v2.q = 8
        v2:8.q = 8
        v0.q = &arg2[0xd1]
        v0:8.q = &arg2[0xd1]
        void* x10_1 = &var_250
        v3.q = 4
        v3:8.q = 4
        int64_t i_6 = i_9
        int64_t i
        
        do
            v4.q = v1.q << 2
            v4:8.q = v1:8.q << 2
            v4 += v0
            v1 += v3
            i = i_6
            i_6 -= 4
            *(x10_1 - 0x10) = v4
            *x10_1 = v4 + v2
            x10_1 += 0x20
        while (i != 4)
    
    if (n_2 u< 4 || n_2 != i_9)
        void* x9_3 = &arg2[i_9 + 0xd1]
        
        do
            b[i_9] = x9_3
            i_9 += 1
            x9_3 += 4
        while (i_9 s< n)
    
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    v0_1, v1_1, v2_1 = qsort(&b, n, 8, sub_1083b74)
    int64_t n_3
    
    n_3 = n s> 1 ? n : 1
    
    int64_t i_10 = 0
    
    if (n_3 u> 3)
        i_10 = n_3 & 0x7ffffffffffffffc
        v0_1.q = &arg2[0xd1]
        v0_1:8.q = &arg2[0xd1]
        void* x10_2 = &var_250
        void* x11_5 = result + 0x10c
        int64_t i_7 = i_10
        int64_t i_1
        
        do
            v1_1 = *(x10_2 - 0x10)
            v2_1 = *x10_2
            x10_2 += 0x20
            i_1 = i_7
            i_7 -= 4
            v1_1 = vshrn_n_u64(v1_1 - v0_1, 2)
            v2_1 = vshrn_n_u64(v2_1 - v0_1, 2)
            *(x11_5 - 8) = v1_1.q
            *x11_5 = v2_1.q
            x11_5 += 0x10
        while (i_1 != 4)
    
    if (n_3 u<= 3 || n_3 != i_10)
        do
            int64_t x9_4 = b[i_10]
            void* x10_3 = result + (i_10 << 2)
            i_10 += 1
            *(x10_3 + 0x104) = ((x9_4 - &arg2[0xd1]) u>> 2).d
        while (i_10 s< n)
    
    int64_t x8_3 = 0
    
    do
        *(result + 0x208 + (sx.q(*(result + 0x104 + (x8_3 << 2))) << 2)) = x8_3.d
        x8_3 += 1
    while (x8_3 s< n)
    
    int64_t n_4
    
    n_4 = n s> 1 ? n : 1
    
    int64_t i_11 = 0
    
    if (n_4 u> 1)
        i_11 = n_4 & 0x7ffffffffffffffe
        int64_t i_5 = i_11
        void* result_1 = result
        int64_t i_2
        
        do
            i_2 = i_5
            i_5 -= 2
            int32_t x13_3 = arg2[0xd1 + sx.q(*(result_1 + 0x108))]
            *result_1 = arg2[0xd1 + sx.q(*(result_1 + 0x104))]
            *(result_1 + 4) = x13_3
            result_1 += 8
        while (i_2 != 2)
    
    if (n_4 u<= 1 || n_4 != i_11)
        do
            void* x9_8 = result + (i_11 << 2)
            i_11 += 1
            *x9_8 = arg2[0xd1 + sx.q(*(x9_8 + 0x104))]
        while (i_11 s< n)
else
    int64_t i_12
    
    if (x8_2.d != 1)
        i_12 = x8_2 & 0xfffffffffffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* x13_1 = &arg2[2]
        int64_t i_8 = i_12
        int64_t i_3
        
        do
            int64_t x15_1 = *(x13_1 - 4)
            int64_t x16_1 = *x13_1
            i_3 = i_8
            i_8 -= 2
            x13_1 += 8
            x11_1 += arg2[0x20 + x15_1]
            x12_1 += arg2[0x20 + x16_1]
        while (i_3 != 2)
        x24 = x12_1 + x11_1
        
        if (i_12 != x8_2)
            goto label_10833a0
    else
        i_12 = 0
        x24 = 0
    label_10833a0:
        
        do
            int64_t x11_3 = sx.q(arg2[i_12 + 1])
            i_12 += 1
            x24 += arg2[0x20 + x11_3]
        while (i_12 s< x8_2)
    n_1 = x24 + 2
    *(result + 0x504) = n_1
    
    if (x24 s> 0xfffffffe)
        goto label_10833b4
    
    qsort(&b, sx.q(n_1), 8, sub_1083b74)
int32_t x8_5 = arg2[0xd0] - 1

if (x8_5 u<= 3)
    *(result + 0x50c) = *(&data_71ce90 + (sx.q(x8_5) << 2))

if (x24 s>= 1)
    int64_t i_4 = 0
    int64_t x12_4 = 2
    
    do
        int32_t x17_1 = *(result + 0x508)
        int32_t x18_1 = arg2[i_4 + 0xd3]
        int64_t x14_1 = 0
        int32_t x15_3 = 0
        int32_t x13_4 = 0
        int32_t x16_4 = 1
        
        do
            int32_t x0_2 = arg2[0xd1 + x14_1]
            int32_t temp2_1 = (x0_2 s> x15_3 ? 1 : 0) & (x0_2 s< x18_1 ? 1 : 0)
            
            if (temp2_1 != 0)
                x13_4 = x14_1.d
            
            if (temp2_1 != 0)
                x15_3 = x0_2
            
            int32_t temp4_1 = (x0_2 s< x17_1 ? 1 : 0) & (x0_2 s> x18_1 ? 1 : 0)
            
            if (temp4_1 != 0)
                x16_4 = x14_1.d
            
            x14_1 += 1
            
            if (temp4_1 != 0)
                x17_1 = x0_2
        while (x12_4 != x14_1)
        
        int64_t x14_2 = i_4 << 2
        i_4 += 1
        x12_4 += 1
        *(result + 0x408 + x14_2) = x13_4
        *(result + 0x30c + x14_2) = x16_4
    while (i_4 != zx.q(x24))

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
