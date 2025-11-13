// 函数: sub_ef7df4
// 地址: 0xef7df4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2[4].d != 0)
    int64_t i_2 = arg2[3]
    
    if (i_2 == -1)
        int64_t x9_1 = *arg2
        int64_t x11_1 = arg2[1]
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_2 = 0
            arg2[3] = 0
        label_ef7e8c:
            
            if (i_2 != 0)
                int32_t* x9_3 = *arg2
                int32_t x10_4 = 0
                int64_t i
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 = &x9_3[1]
                    i = i_2
                    i_2 -= 1
                    int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6)
                        | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
                while (i != 1)
                return zx.q(x10_4 == 0 ? 1 : 0)
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_2 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_3 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i_1
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_3 << 2))
                i_1 = i_3
                i_3 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_2 -= x11_3
            while (i_1 != 1)
            arg2[3] = i_2
            
            if (i_2 u<= 1)
                goto label_ef7e8c
    else if (i_2 u<= 1)
        goto label_ef7e8c

return 0
