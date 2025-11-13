// 函数: _Z20ZoomOnMainPageExtrasRK6DomGfx
// 地址: 0xafe378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) == 1)
    int64_t x11_1 = sx.q(*(gDomClient + 0x1f0a0))
    
    if (x11_1.d != 0)
        int64_t (* i)() = gDomClient + 0x1d020
        int32_t x9 = 0
        void* x11_2 = i + x11_1
        int32_t x8
        
        do
            uint64_t x14_2 = zx.q(*i)
            
            if (x14_2.d s>= 1)
                int64_t (* x15_1)() = i + 0xc
                uint64_t x16_1 = x14_2
                
                while (*x15_1 != *(arg1 + 0x21d0))
                    uint64_t temp0_1 = x16_1
                    x16_1 -= 1
                    x15_1 += 0xc
                    
                    if (temp0_1 == 1)
                        goto label_afe3c8
                
                x8 = x9 u< 3 ? 1 : 0
                break
            
        label_afe3c8:
            void* i_1 = i + sx.q(8 + x14_2.d * 0xc)
            x8 = 0
            
            i = i_1 == x11_2 ? nullptr : i_1
            
            x9 += 1
        while (i != 0)
        
        return zx.q(x8)

return 0
