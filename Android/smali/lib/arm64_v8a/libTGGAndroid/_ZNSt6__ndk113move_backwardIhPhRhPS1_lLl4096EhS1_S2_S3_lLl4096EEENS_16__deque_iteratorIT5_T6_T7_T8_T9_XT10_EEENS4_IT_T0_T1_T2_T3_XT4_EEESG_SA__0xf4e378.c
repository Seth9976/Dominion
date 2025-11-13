// 函数: _ZNSt6__ndk113move_backwardIhPhRhPS1_lLl4096EhS1_S2_S3_lLl4096EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_
// 地址: 0xf4e378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = arg6
int64_t* result = arg5

if (arg4 != arg2)
    int64_t i = arg4 + ((arg3 - arg1) << 9) - (arg2 + *arg3) + *arg1
    int64_t x22_1 = arg4
    int64_t* x20_1 = arg3
    
    if (i s>= 1)
        do
            int64_t x8_9 = *x20_1
            
            if (x22_1 == x8_9)
                x20_1 = &x20_1[-1]
                x8_9 = *x20_1
                x22_1 = x8_9 + 0x1000
            
            int64_t i_2 = x22_1 - x8_9
            int64_t x28_1
            
            if (i_2 s> i)
                x28_1 = x22_1 - i
            else
                x28_1 = x8_9
            
            int64_t i_1
            
            i_1 = i_2 s> i ? i : i_2
            
            int64_t x26_1 = x22_1 - 1
            
            if (x22_1 != x28_1)
                do
                    int64_t x10_7 = not.q(*result) + x21
                    int64_t x8_22 = x22_1
                    int64_t x9_10
                    int64_t x10_9
                    
                    if (x10_7 s< 1)
                        int64_t x10_10
                        
                        if (0xfff - x10_7 s< 0)
                            x10_10 = 0x1ffe - x10_7
                        else
                            x10_10 = 0xfff - x10_7
                        
                        x9_10 = *(result - (x10_10 s>> 0xc << 3))
                        x10_9 = x9_10 + (x10_10 & 0xfffffffffffff000) - (0xfff - x10_7) + 0xfff
                    else
                        x9_10 = *(result + (x10_7 u>> 9 & 0x7ffffffffffff8))
                        x10_9 = x9_10 + (x10_7 & 0xfff)
                    
                    int64_t x11_2 = x8_22 - x28_1
                    int64_t x9_14 = x10_9 + 1 - x9_10
                    
                    if (x11_2 s> x9_14)
                        x22_1 = x8_22 - x9_14
                    else
                        x22_1 = x28_1
                    
                    int64_t fp_1
                    
                    fp_1 = x11_2 s> x9_14 ? x9_14 : x11_2
                    
                    size_t x2 = x8_22 - x22_1
                    
                    if (x8_22 != x22_1)
                        memmove(x10_9 + 1 - x2, x22_1, x2)
                    
                    if (fp_1 != 0)
                        int64_t x8_25 = x21 - *result - fp_1
                        
                        if (x8_25 s< 1)
                            int64_t x8_16
                            
                            if (0xfff - x8_25 s< 0)
                                x8_16 = 0x1ffe - x8_25
                            else
                                x8_16 = 0xfff - x8_25
                            
                            result -= x8_16 s>> 0xc << 3
                            x21 = *result + (x8_16 & 0xfffffffffffff000) - (0xfff - x8_25) + 0xfff
                        else
                            result += x8_25 u>> 9 & 0x7ffffffffffff8
                            x21 = *result + (x8_25 & 0xfff)
                while (x22_1 != x28_1)
            
            i -= i_1
            
            if (i_1 != 1)
                int64_t x8_13 = x26_1 - (*x20_1 + i_1) + 1
                
                if (x8_13 s< 1)
                    int64_t x8_5
                    
                    if (0xfff - x8_13 s< 0)
                        x8_5 = 0x1ffe - x8_13
                    else
                        x8_5 = 0xfff - x8_13
                    
                    x20_1 -= x8_5 s>> 0xc << 3
                    x26_1 = *x20_1 + (x8_5 & 0xfffffffffffff000) - (0xfff - x8_13) + 0xfff
                else
                    x20_1 += x8_13 u>> 9 & 0x7ffffffffffff8
                    x26_1 = *x20_1 + (x8_13 & 0xfff)
            
            x22_1 = x26_1
        while (i s> 0)

return result
