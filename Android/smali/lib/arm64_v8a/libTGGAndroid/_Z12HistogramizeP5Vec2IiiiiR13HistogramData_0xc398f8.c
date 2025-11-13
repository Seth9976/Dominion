// 函数: _Z12HistogramizeP5Vec2IiiiiR13HistogramData
// 地址: 0xc398f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = memset(arg6, 0, 0x400)
*(arg6 + 0x400) = arg5
*(arg6 + 0x404) = 0

if (arg5 s>= 1)
    int64_t i = 0
    int32_t x9_1 = 0
    
    do
        int32_t j = arg3 + i.d * arg4
        *(arg6 + (i << 3)) = j
        
        if (x9_1 s< arg2)
            void* x14_2 = arg1 + 4 + (sx.q(x9_1) << 3)
            int64_t x16_1 = sx.q(arg2) - sx.q(x9_1)
            
            while (*(x14_2 - 4) s<= j)
                int32_t x17_2 = *x14_2
                x14_2 += 8
                x9_1 += 1
                int32_t x17_3 = *(arg6 + (i << 3) + 4) + x17_2
                *(arg6 + (i << 3) + 4) = x17_3
                result = zx.q(*(arg6 + 0x404))
                int32_t x17_4
                
                if (result.d s> x17_3)
                    x17_4 = result.d
                else
                    x17_4 = x17_3
                
                int64_t temp0_1 = x16_1
                x16_1 -= 1
                *(arg6 + 0x404) = x17_4
                
                if (temp0_1 == 1)
                    x9_1 = arg2
                    break
        
        i += 1
    while (i != zx.q(arg5))

return result
