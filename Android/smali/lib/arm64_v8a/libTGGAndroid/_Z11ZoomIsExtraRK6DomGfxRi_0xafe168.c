// 函数: _Z11ZoomIsExtraRK6DomGfxRi
// 地址: 0xafe168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) != 1)
    return 0

int32_t x8 = *(gDomClient + 0x1f0a0)
*arg2 = 0

if (x8 != 0)
    int32_t x10_1 = 0
    int64_t (* i)() = gDomClient + 0x1d020
    
    do
        int64_t x16_4 = sx.q(*i)
        
        if (x16_4.d s>= 1)
            int64_t x8_1 = 0
            int64_t (* x2_1)() = i + 0xc
            
            do
                if (*x2_1 == *(arg1 + 0x21d0))
                    return 1
                
                x8_1 += 1
                x2_1 += 0xc
            while (x8_1 s< x16_4)
        
        void* i_1 = i + sx.q(8 + x16_4.d * 0xc)
        x8 = 0
        
        if (i_1 == gDomClient + sx.q(*(gDomClient + 0x1f0a0)) + 0x1d020)
            i = nullptr
        else
            i = i_1
        
        x10_1 += 1
        *arg2 = x10_1
    while (i != 0)

return zx.q(x8)
