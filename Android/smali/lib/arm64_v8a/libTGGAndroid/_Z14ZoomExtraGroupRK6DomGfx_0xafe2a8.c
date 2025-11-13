// 函数: _Z14ZoomExtraGroupRK6DomGfx
// 地址: 0xafe2a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) == 1)
    int64_t x10_1 = sx.q(*(gDomClient + 0x1f0a0))
    
    if (x10_1.d != 0)
        int64_t (* i)() = gDomClient + 0x1d020
        void* x9 = i + x10_1
        
        do
            int64_t x12_2 = sx.q(*i)
            
            if (x12_2.d s>= 1)
                int64_t x13_1 = 0
                int64_t x15_1 = 0xc
                
                do
                    if (*(i + x15_1) == *(arg1 + 0x21d0))
                        return i
                    
                    x13_1 += 1
                    x15_1 += 0xc
                while (x13_1 s< x12_2)
            
            void* i_1 = i + sx.q(8 + x12_2.d * 0xc)
            
            i = i_1 == x9 ? nullptr : i_1
        while (i != 0)

return 0
