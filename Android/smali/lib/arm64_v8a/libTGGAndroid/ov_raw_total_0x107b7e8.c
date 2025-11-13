// 函数: ov_raw_total
// 地址: 0x107b7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x80) s>= 2 && *(arg1 + 8) != 0)
    int32_t x22_1 = *(arg1 + 0x40)
    
    if (x22_1 s> arg2)
        if ((arg2 & 0x80000000) == 0)
            int64_t* x8_3 = *(arg1 + 0x48) + (sx.q(arg2) << 3)
            return x8_3[1] - *x8_3
        
        if (x22_1 s< 1)
            return 0
        
        int32_t x21_1 = 0
        int64_t result = 0
        
        do
            int64_t x0_2 = ov_raw_total(arg1, zx.q(x21_1))
            x21_1 += 1
            result += x0_2
        while (x22_1 != x21_1)
        
        return result

return -0x83
