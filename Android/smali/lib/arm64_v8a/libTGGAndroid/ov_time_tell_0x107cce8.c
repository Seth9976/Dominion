// 函数: ov_time_tell
// 地址: 0x107cce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8
double var_50 = v8

if (*(arg1 + 0x80) s< 2)
    return -131.0

int64_t x8_5
int64_t i

if (*(arg1 + 8) == 0)
    x8_5 = 0
    i = 0
    v8 = 0.0
else
    i = ov_pcm_total(arg1, 0xffffffff)
    double v0 = ov_time_total(arg1, 0xffffffff)
    int64_t x22_1 = sx.q(*(arg1 + 0x40))
    v8 = v0
    int64_t x8_2 = -0x100000000 + (x22_1 << 0x20)
    int32_t x21_1 = x22_1.d - 1
    int32_t x24_1 = (x22_1.d << 1) - 1
    int64_t x25_1
    
    do
        int64_t temp0_1 = x22_1
        x22_1 -= 1
        x25_1 = x8_2
        
        if (temp0_1 s< 1)
            break
        
        i -= *(*(arg1 + 0x60) + (sx.q(x24_1) << 3))
        v8 = v8 - ov_time_total(arg1, zx.q(x21_1))
        x8_2 = x25_1 + -0x100000000
        x21_1 -= 1
        x24_1 -= 2
    while (*(arg1 + 0x78) s< i)
    
    x8_5 = x25_1 s>> 0x20

return float.d(*(arg1 + 0x78) - i) / float.d(*(*(arg1 + 0x68) + x8_5 * 0x38 + 8)) + v8
