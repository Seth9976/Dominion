// 函数: sub_9fef20
// 地址: 0x9fef20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0xe4)) != 0)
    return 0

uint64_t x8_1 = zx.q(*(arg1 + 0xd8))
int32_t x20

if (x8_1.d s< 1)
    x20 = 0
else
    void* x9_1 = *(arg1 + 0xd0)
    int64_t i_4
    
    if (x8_1.d != 1)
        i_4 = x8_1 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        int32_t* x13_1 = x9_1 + 0xd4
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x15_1 = x13_1[-0x1c]
            int32_t x16_1 = *x13_1
            x13_1 = &x13_1[0x38]
            
            if (x15_1 s> 0)
                x11_1 += 1
            
            if (x16_1 s> 0)
                x12_1 += 1
            
            i = i_3
            i_3 -= 2
        while (i != 2)
        x20 = x12_1 + x11_1
        
        if (i_4 != x8_1)
            goto label_9fefb8
    else
        i_4 = 0
        x20 = 0
    label_9fefb8:
        int32_t* x9_3 = x9_1 + i_4 * 0x70 + 0x64
        int64_t i_2 = x8_1 - i_4
        int64_t i_1
        
        do
            int32_t x10_1 = *x9_3
            x9_3 = &x9_3[0x1c]
            
            if (x10_1 s> 0)
                x20 += 1
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

void var_14
int64_t entry_x3
int32_t entry_x4
int32_t x17
int32_t x0_2 = sub_9ff34c(arg1, *(arg1 + 0xb4), &var_14, entry_x3, entry_x4, x17)
int64_t* x8_2 = *(arg1 + 0xd0)
uint64_t x9_5 = zx.q(*(x8_2 + muls.dp.d(x0_2, 0x70) + 0xc))

if (x9_5.d s>= 1)
    int64_t x10_2 = sx.q(x0_2)
    int64_t* x13_2 = x8_2 + x10_2 * 0x70
    int64_t x12_2 = 0
    int32_t x11_2 = -1
    int32_t x15_2 = -1
    
    do
        if (zx.d(*(*(*x13_2 + (x12_2 << 3)) + 0xe5)) == 0)
            int32_t x16_5 = *(x13_2[9] + (x12_2 << 2))
            bool cond:1_1 = x16_5 s> x15_2
            
            if (x16_5 s> x15_2)
                x15_2 = x16_5
            
            if (cond:1_1)
                x11_2 = x12_2.d
        
        x12_2 += 1
    while (x9_5 != x12_2)
    
    if ((x11_2 & 0x80000000) == 0)
        *(arg1 + 0xe5) = 1
        int32_t x0_4 = sub_9fef20(*(x8_2[x10_2 * 0xe] + (zx.q(x11_2) << 3)))
        
        if (x20 == 1)
            return zx.q(x0_4 + 1)
        
        return zx.q(x0_4)

return zx.q(x20 == 1 ? 1 : 0)
