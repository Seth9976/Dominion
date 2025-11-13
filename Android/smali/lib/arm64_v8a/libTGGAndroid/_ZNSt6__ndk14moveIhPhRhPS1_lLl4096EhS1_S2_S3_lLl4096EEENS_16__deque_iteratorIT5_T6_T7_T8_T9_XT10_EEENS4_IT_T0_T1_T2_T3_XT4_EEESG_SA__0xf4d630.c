// 函数: _ZNSt6__ndk14moveIhPhRhPS1_lLl4096EhS1_S2_S3_lLl4096EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS4_IT_T0_T1_T2_T3_XT4_EEESG_SA_
// 地址: 0xf4d630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = arg6
int64_t* result = arg5

if (arg4 != arg2)
    int64_t i = arg4 + ((arg3 - arg1) << 9) - (arg2 + *arg3) + *arg1
    int64_t x22_1 = arg2
    int64_t* x20_1 = arg1
    
    if (i s>= 1)
        do
            int64_t x8_10 = *x20_1 + 0x1000
            int64_t i_2 = x8_10 - x22_1
            int64_t x27_1
            
            if (i_2 s> i)
                x27_1 = x22_1 + i
            else
                x27_1 = x8_10
            
            int64_t i_1
            
            i_1 = i_2 s> i ? i : i_2
            
            if (x22_1 != x27_1)
                int64_t x1 = x22_1
                int64_t x28_1
                
                do
                    int64_t x9_6 = x27_1 - x1
                    int64_t x8_18 = *result - x21 + 0x1000
                    
                    if (x9_6 s> x8_18)
                        x28_1 = x1 + x8_18
                    else
                        x28_1 = x27_1
                    
                    int64_t fp_1
                    
                    fp_1 = x9_6 s> x8_18 ? x8_18 : x9_6
                    
                    if (x28_1 != x1)
                        memmove(x21, x1, x28_1 - x1)
                    
                    if (fp_1 != 0)
                        int64_t x8_21 = x21 - *result + fp_1
                        
                        if (x8_21 s< 1)
                            int64_t x8_12
                            
                            if (0xfff - x8_21 s< 0)
                                x8_12 = 0x1ffe - x8_21
                            else
                                x8_12 = 0xfff - x8_21
                            
                            result -= x8_12 s>> 0xc << 3
                            x21 = *result + (x8_12 & 0xfffffffffffff000) - (0xfff - x8_21) + 0xfff
                        else
                            result += x8_21 u>> 9 & 0x7ffffffffffff8
                            x21 = *result + (x8_21 & 0xfff)
                    
                    x1 = x28_1
                while (x28_1 != x27_1)
            
            i -= i_1
            
            if (i_1 != 0)
                int64_t x8_25 = x22_1 - *x20_1 + i_1
                
                if (x8_25 s< 1)
                    int64_t x8_5
                    
                    if (0xfff - x8_25 s< 0)
                        x8_5 = 0x1ffe - x8_25
                    else
                        x8_5 = 0xfff - x8_25
                    
                    x20_1 -= x8_5 s>> 0xc << 3
                    x22_1 = *x20_1 + (x8_5 & 0xfffffffffffff000) - (0xfff - x8_25) + 0xfff
                else
                    x20_1 += x8_25 u>> 9 & 0x7ffffffffffff8
                    x22_1 = *x20_1 + (x8_25 & 0xfff)
        while (i s> 0)

return result
