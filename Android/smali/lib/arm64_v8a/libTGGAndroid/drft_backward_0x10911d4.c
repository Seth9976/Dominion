// 函数: drft_backward
// 地址: 0x10911d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*arg1)

if (x10.d == 1)
    return 

void* x8_1 = *(arg1 + 0x10)
uint64_t i_5 = zx.q(*(x8_1 + 4))

if (i_5.d s< 1)
    return 

int64_t x9_1 = x10 & 0xffffffff
int32_t* x20_1 = *(arg1 + 8)
void* x27_1 = x8_1 + 8
int32_t x26_1 = 0
int32_t x2_1 = 1
int32_t x28_1 = 1
int128_t v0_1
int128_t v1_1
uint64_t i

do
    int32_t x21_1 = *x27_1
    int32_t x23_1 = x21_1 * x2_1
    int32_t x22_1 = x9_1.d s/ x23_1
    
    if (x21_1 == 2)
        int32_t* x2_4
        float* x3_3
        
        if (x26_1 == 0)
            x2_4 = arg2
            x3_3 = x20_1
        else
            x2_4 = x20_1
            x3_3 = arg2
        
        v0_1, v1_1 = sub_1093280(x22_1, x2_1, x2_4, x3_3, &x20_1[x10] - 4 + (sx.q(x28_1) << 2))
        x26_1 = 1 - x26_1
    else if (x21_1 == 3)
        void* x4_2 = &x20_1[x10] - 4 + (sx.q(x28_1) << 2)
        void* x5_2 = &x20_1[x10] - 4 + (sx.q(x22_1 + x28_1) << 2)
        arg1 = zx.q(x22_1)
        
        if (x26_1 == 0)
            v0_1, v1_1 = sub_1093460(arg1.d, x2_1, arg2, x20_1, x4_2, x5_2)
        else
            v0_1, v1_1 = sub_1093460(arg1.d, x2_1, x20_1, arg2, x4_2, x5_2)
        
        x26_1 = 1 - x26_1
    else if (x21_1 != 4)
        void* x8_6 = &x20_1[x10] - 4 + (sx.q(x28_1) << 2)
        int128_t* var_80_1
        int32_t* var_78_1
        int32_t x0
        int32_t x1_3
        int32_t* x4_4
        int32_t* x5_3
        int32_t* x6_2
        int32_t* x7_1
        
        if (x26_1 == 0)
            x0 = x22_1
            x1_3 = x21_1
            x4_4 = arg2
            x5_3 = arg2
            x6_2 = arg2
            x7_1 = x20_1
            var_80_1 = x20_1
            var_78_1 = x8_6
        else
            var_80_1 = arg2
            var_78_1 = x8_6
            x0 = x22_1
            x1_3 = x21_1
            x4_4 = x20_1
            x5_3 = x20_1
            x6_2 = x20_1
            x7_1 = arg2
        
        v0_1, arg1, v1_1 =
            sub_109365c(x0, x1_3, x2_1, x22_1 * x2_1, x4_4, x5_3, x6_2, x7_1, var_80_1, var_78_1)
        
        if (x22_1 == 1)
            x26_1 = 1 - x26_1
    else
        int32_t x8_4 = x22_1 + x28_1
        int32_t* x2_2
        int32_t* x3_1
        
        if (x26_1 == 0)
            x2_2 = arg2
            x3_1 = x20_1
        else
            x2_2 = x20_1
            x3_1 = arg2
        
        v0_1, v1_1 = sub_1092f38(x22_1, x2_1, x2_2, x3_1, &x20_1[x10] - 4 + (sx.q(x28_1) << 2), 
            &x20_1[x10] - 4 + (sx.q(x8_4) << 2), &x20_1[x10] - 4 + (sx.q(x8_4 + x22_1) << 2))
        x26_1 = 1 - x26_1
    
    i = i_5
    i_5 -= 1
    x28_1 += (x21_1 - 1) * x22_1
    x27_1 += 4
    x2_1 = x23_1
while (i != 1)

if (x9_1.d s< 1 || x26_1 == 0)
    return 

int64_t i_6 = 0

if (x10.d u< 8)
label_10913fc:
    int64_t i_3 = x9_1 - i_6
    void* x8_15 = &arg2[i_6]
    void* x10_3 = &x20_1[i_6]
    int64_t i_1
    
    do
        int32_t x11_1 = *x10_3
        x10_3 += 4
        i_1 = i_3
        i_3 -= 1
        *x8_15 = x11_1
        x8_15 += 4
    while (i_1 != 1)
    return 

if (&x20_1[x9_1] u> arg2)
    i_6 = 0

if (&x20_1[x9_1] u> arg2 && x20_1 u< &arg2[x9_1])
    goto label_10913fc

void* x9_4 = &x20_1[4]
void* x10_1 = &arg2[4]
i_6 = x9_1 & 0xfffffff8
int64_t i_4 = i_6
int64_t i_2

do
    v0_1 = *(x9_4 - 0x10)
    v1_1 = *x9_4
    x9_4 += 0x20
    i_2 = i_4
    i_4 -= 8
    *(x10_1 - 0x10) = v0_1
    *x10_1 = v1_1
    x10_1 += 0x20
while (i_2 != 8)

if (i_6 != x9_1)
    goto label_10913fc
