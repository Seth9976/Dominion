// 函数: _spDrawOrderTimeline_apply
// 地址: 0xfb138c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 != 0 || arg6 != 1)
    int32_t* x8_3 = *(arg1 + 0x18)
    
    if (*x8_3 <= arg8)
        int32_t x10_2 = *(arg1 + 0x10)
        int32_t x9_2 = x10_2 - 1
        
        if (not(x8_3[sx.q(x9_2)] f<= arg8))
            x9_2 = 0
            int32_t x11_2 = x10_2 - 2
            
            if (x10_2 != 2)
                int32_t x10_3 = x11_2
                
                do
                    int32_t x11_3 = x11_2 s>> 1
                    arg7 = x8_3[sx.q(x11_3 + 1)]
                    arg7 - arg8
                    
                    if (not(arg7 > arg8))
                        x9_2 = x11_3 + 1
                    
                    if (arg7 > arg8)
                        x10_3 = x11_3
                    
                    x11_2 = x9_2 + x10_3
                while (x9_2 != x10_3)
        
        int64_t x8_5 = *(*(arg1 + 0x20) + (sx.q(x9_2) << 3))
        
        if (x8_5 != 0)
            if (*(arg1 + 0x28) s>= 1)
                int64_t i = 0
                
                do
                    *(*(arg2 + 0x30) + (i << 3)) =
                        *(*(arg2 + 0x28) + (sx.q(*(x8_5 + (i << 2))) << 3))
                    i += 1
                while (i s< sx.q(*(arg1 + 0x28)))
            
            return 
    else if (arg5 u> 1)
        return 

return memcpy(*(arg2 + 0x30), *(arg2 + 0x28), sx.q(*(arg1 + 0x28)) << 3) __tailcall
