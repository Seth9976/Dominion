// 函数: drft_forward
// 地址: 0x1090fb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(*arg1)

if (x22.d == 1)
    return 

void* x23_1 = *(arg1 + 0x10)
uint64_t x24_1 = zx.q(*(x23_1 + 4))

if (x24_1.d s< 1)
    return 

void* x20_1 = *(arg1 + 8)
int32_t x21_1 = x22.d
int32_t x8_3 = 1
int32_t x27_1 = x22.d
int128_t v0_1
int128_t v1_1

while (true)
    int32_t x1 = *(x23_1 + (sx.q(x24_1.d + 1) << 2))
    arg1 = zx.q(x22.d s/ x21_1)
    x21_1 s/= x1
    x27_1 -= arg1.d * (x1 - 1)
    
    if (x1 == 2)
        void* x4_2 = x20_1 + (sx.q(x22.d) << 2) - 4 + (sx.q(x27_1) << 2)
        
        if (1 - x8_3 == 0)
            v0_1, v1_1 = sub_1091ba4(arg1.d, x21_1, arg2, x20_1, x4_2)
        else
            v0_1, v1_1 = sub_1091ba4(arg1.d, x21_1, x20_1, arg2, x4_2)
            x8_3 = 1 - x8_3
            uint64_t temp0_1 = x24_1
            x24_1 -= 1
            
            if (temp0_1 == 1)
                break
            
            continue
    else if (x1 != 4)
        int32_t x3_3 = arg1.d * x21_1
        int32_t x9_4
        
        if (arg1.d == 1)
            x9_4 = x8_3
        else
            x9_4 = 1 - x8_3
        
        int32_t* x8_5 = x20_1 + (sx.q(x22.d) << 2) - 4 + (sx.q(x27_1) << 2)
        
        if (x9_4 == 0)
            v0_1, arg1, v1_1 =
                sub_1091d5c(arg1.d, x1, x21_1, x3_3, arg2, arg2, arg2, x20_1, x20_1, x8_5)
            x8_3 = 1
            uint64_t temp3_1 = x24_1
            x24_1 -= 1
            
            if (temp3_1 == 1)
                break
            
            continue
        else
            v0_1, arg1, v1_1 =
                sub_1091d5c(arg1.d, x1, x21_1, x3_3, x20_1, x20_1, x20_1, arg2, arg2, x8_5)
    else
        int32_t x8_4 = x27_1 + arg1.d
        void* x4_1 = x20_1 + (sx.q(x22.d) << 2) - 4 + (sx.q(x27_1) << 2)
        void* x5_1 = x20_1 + (sx.q(x22.d) << 2) - 4 + (sx.q(x8_4) << 2)
        void* x6_1 = x20_1 + (sx.q(x22.d) << 2) - 4 + (sx.q(x8_4 + arg1.d) << 2)
        
        if (1 - x8_3 == 0)
            v0_1, v1_1 = sub_1091888(arg1.d, x21_1, arg2, x20_1, x4_1, x5_1, x6_1)
        else
            v0_1, v1_1 = sub_1091888(arg1.d, x21_1, x20_1, arg2, x4_1, x5_1, x6_1)
            x8_3 = 1 - x8_3
            uint64_t temp2_1 = x24_1
            x24_1 -= 1
            
            if (temp2_1 == 1)
                break
            
            continue
    
    x8_3 = 0
    uint64_t temp1_1 = x24_1
    x24_1 -= 1
    
    if (temp1_1 == 1)
        break

if (x22.d s< 1 || x8_3 == 1)
    return 

int64_t i_4 = 0

if (x22.d u< 8)
label_1091194:
    int64_t x10_2 = i_4 << 2
    int64_t i_2 = x22 - i_4
    void* x8_8 = arg2 + x10_2
    void* x10_3 = x20_1 + x10_2
    int64_t i
    
    do
        int32_t x11_1 = *x10_3
        x10_3 += 4
        i = i_2
        i_2 -= 1
        *x8_8 = x11_1
        x8_8 += 4
    while (i != 1)
    return 

uint64_t x8_6 = x22 << 2

if (x20_1 + x8_6 u> arg2)
    i_4 = 0

if (x20_1 + x8_6 u> arg2 && x20_1 u< arg2 + x8_6)
    goto label_1091194

i_4 = x22 & 0xfffffff8
void* x9_6 = x20_1 + 0x10
void* x10_1 = arg2 + 0x10
int64_t i_3 = i_4
int64_t i_1

do
    v0_1 = *(x9_6 - 0x10)
    v1_1 = *x9_6
    x9_6 += 0x20
    i_1 = i_3
    i_3 -= 8
    *(x10_1 - 0x10) = v0_1
    *x10_1 = v1_1
    x10_1 += 0x20
while (i_1 != 8)

if (i_4 != x22)
    goto label_1091194
