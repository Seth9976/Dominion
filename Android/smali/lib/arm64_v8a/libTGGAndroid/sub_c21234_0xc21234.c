// 函数: sub_c21234
// 地址: 0xc21234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x11_5 = *arg2
int64_t x8 = *arg5
int32_t x12 = *arg1
int32_t x9 = *arg3
float v0 = *(x8 + muls.dp.d(x11_5, 0xc) + 8)
float v1 = *(x8 + muls.dp.d(x9, 0xc) + 8)
int32_t x8_2
int64_t x10

if (not(v0 f<= *(x8 + muls.dp.d(x12, 0xc) + 8)))
    x10 = sx.q(x12)
    
    if (v1 <= v0)
        *arg1 = x11_5
        *arg2 = x12
        x9 = *arg3
        int64_t x8_4 = *arg5
        
        if (*(x8_4 + muls.dp.d(x9, 0xc) + 8) <= *(x8_4 + x10 * 0xc + 8))
            x10 = sx.q(x9)
            x8_2 = 1
        else
            x8_2 = 2
            *arg2 = x9
            *arg3 = x12
            x9 = x12
    else
        *arg1 = x9
        *arg3 = x12
        x8_2 = 1
        x9 = x12
else if (v1 <= v0)
    x8_2 = 0
    x10 = sx.q(x9)
else
    *arg2 = x9
    *arg3 = x11_5
    int64_t x8_3 = sx.q(*arg2)
    int64_t x10_1 = *arg5
    int64_t x9_1 = sx.q(*arg1)
    
    if (*(x10_1 + x8_3 * 0xc + 8) <= *(x10_1 + x9_1 * 0xc + 8))
        x10 = sx.q(x11_5)
        x8_2 = 1
        x9 = x11_5
    else
        *arg1 = x8_3.d
        *arg2 = x9_1.d
        x9 = *arg3
        x8_2 = 2
        x10 = sx.q(x9)

int64_t x11 = sx.q(*arg4)
int64_t x12_1 = *arg5

if (not(*(x12_1 + x11 * 0xc + 8) <= *(x12_1 + x10 * 0xc + 8)))
    *arg3 = x11.d
    *arg4 = x9
    int64_t x9_2 = sx.q(*arg3)
    int64_t x11_1 = *arg5
    int64_t x10_4 = sx.q(*arg2)
    
    if (*(x11_1 + x9_2 * 0xc + 8) <= *(x11_1 + x10_4 * 0xc + 8))
        return zx.q(x8_2 + 1)
    
    *arg2 = x9_2.d
    *arg3 = x10_4.d
    int64_t x9_3 = sx.q(*arg2)
    int64_t x11_3 = *arg5
    int64_t x10_5 = sx.q(*arg1)
    
    if (*(x11_3 + x9_3 * 0xc + 8) <= *(x11_3 + x10_5 * 0xc + 8))
        return zx.q(x8_2 + 2)
    
    x8_2 += 3
    *arg1 = x9_3.d
    *arg2 = x10_5.d

return zx.q(x8_2)
