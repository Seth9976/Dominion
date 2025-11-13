// 函数: ov_time_total
// 地址: 0x107b668
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t result
result.q = -0x3f9fa00000000000

if (*(arg1 + 0x80) s>= 2 && *(arg1 + 8) != 0)
    int32_t x21_1 = *(arg1 + 0x40)
    
    if (x21_1 s> arg2)
        if ((arg2 & 0x80000000) == 0)
            result.q = float.d(*(*(arg1 + 0x60) + (sx.q(1 | (0x7fffffff & arg2) << 1) << 3)))
                / float.d(*(*(arg1 + 0x68) + muls.dp.d(arg2, 0x38) + 8))
        else if (x21_1 s< 1)
            result.q = 0.0
        else
            int32_t x20_1 = 0
            result.q = 0.0
            
            do
                int64_t v0_1 = ov_time_total(arg1, zx.q(x20_1))
                x20_1 += 1
                result.q = v0_1 f+ result.q
            while (x21_1 != x20_1)

return result
