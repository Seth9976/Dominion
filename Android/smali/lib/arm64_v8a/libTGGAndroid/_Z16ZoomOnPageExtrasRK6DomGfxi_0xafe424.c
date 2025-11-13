// 函数: _Z16ZoomOnPageExtrasRK6DomGfxi
// 地址: 0xafe424
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) == 1)
    int64_t x11_1 = sx.q(*(gDomClient + 0x1f0a0))
    
    if (x11_1.d != 0)
        int64_t (* i)() = gDomClient + 0x1d020
        int32_t x8 = 0
        void* x10_1 = i + x11_1
        
        do
            uint64_t j_2 = zx.q(*i)
            
            if (j_2.d s>= 1)
                int64_t (* x15_1)() = i + 0xc
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    if (*x15_1 == *(arg1 + 0x21d0))
                        int32_t x9_1 = arg2 * 0xc
                        return zx.q(x8 s>= x9_1 ? 1 : 0) & zx.q(x8 s< x9_1 + 0xc ? 1 : 0)
                    
                    j = j_1
                    j_1 -= 1
                    x15_1 += 0xc
                while (j != 1)
            
            void* i_1 = i + sx.q(8 + j_2.d * 0xc)
            
            i = i_1 == x10_1 ? nullptr : i_1
            
            x8 += 1
        while (i != 0)

return 0
