// 函数: sub_c213ec
// 地址: 0xc213ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 2
int32_t x8_2
float v0
int32_t v1

if (x8_1 u> 5)
    int64_t x11_3 = *arg3
    int32_t x9_4 = *arg1
    int32_t x10_4 = arg1[2]
    int64_t x8_6 = sx.q(arg1[1])
    v0 = *(x11_3 + x8_6 * 0xc + 8)
    v1 = *(x11_3 + muls.dp.d(x10_4, 0xc) + 8)
    int64_t x11_5 = sx.q(x9_4)
    int64_t x12_2 = sx.q(x10_4)
    int32_t x8_14
    void* x10_11
    
    if (v0 <= *(x11_3 + muls.dp.d(x9_4, 0xc) + 8))
        if (v1 f<= v0)
            x8_6 = zx.q(x10_4)
        label_c21708:
            x10_11 = &arg1[3]
            
            if (x10_11 == arg2)
            labelid_1d:
                x8_14 = 1
            else
            label_c21714:
                x9_4 = 0
                int64_t x12_8 = 0xc
                
                while (true)
                    int32_t x13_6 = *x10_11
                    int64_t x14_3 = *arg3
                    
                    if (not(*(x14_3 + muls.dp.d(x13_6, 0xc) + 8) f<=
                            *(x14_3 + muls.dp.d(x8_6.d, 0xc) + 8)))
                        int64_t x16_1 = x12_8
                        void* x8_13
                        
                        while (true)
                            int64_t x15_2 = x16_1 - 4
                            *(arg1 + x16_1) = x8_6.d
                            
                            if (x16_1 == 4)
                                x8_13 = arg1
                                break
                            
                            int64_t x17_1 = *arg3
                            x8_6 = sx.q(*(arg1 + x16_1 - 8))
                            x16_1 = x15_2
                            
                            if (not(*(x17_1 + sx.q(x13_6) * 0xc + 8) f> *(x17_1 + x8_6 * 0xc + 8)))
                                x8_13 = arg1 + x15_2
                                break
                        
                        x9_4 += 1
                        *x8_13 = x13_6
                        
                        if (x9_4 == 8)
                            x8_14 = 0
                            x9_4 = x10_11 + 4 == arg2 ? 1 : 0
                            break
                    
                    if (x10_11 + 4 == arg2)
                        goto label_c217e4_2
                    
                    x8_6 = zx.q(*x10_11)
                    x12_8 += 4
                    x10_11 += 4
        else
            arg1[1] = x10_4
            arg1[2] = x8_6.d
            int64_t x13_4 = *arg3
            
            if (*(x13_4 + x12_2 * 0xc + 8) f<= *(x13_4 + x11_5 * 0xc + 8))
                goto label_c21708
            
            *arg1 = x10_4
            arg1[1] = x9_4
            x10_11 = &arg1[3]
            
            if (x10_11 != arg2)
                goto label_c21714
            
        label_c217e4:
            x8_14 = 1
    else if (v1 f<= v0)
        *arg1 = x8_6.d
        arg1[1] = x9_4
        int64_t x8_10 = *arg3
        
        if (not(*(x8_10 + x12_2 * 0xc + 8) f<= *(x8_10 + x11_5 * 0xc + 8)))
            arg1[1] = x10_4
            goto label_c216ec
        
        x8_6 = zx.q(x10_4)
        x10_11 = &arg1[3]
        
        if (x10_11 != arg2)
            goto label_c21714
        
    label_c217e4_1:
        x8_14 = 1
    else
        *arg1 = x10_4
    label_c216ec:
        x8_6 = zx.q(x9_4)
        arg1[2] = x9_4
        x10_11 = &arg1[3]
        
        if (x10_11 != arg2)
            goto label_c21714
        
    label_c217e4_2:
        x8_14 = 1
    x8_2 = x8_14 | x9_4
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            int64_t x8_3 = sx.q(*(arg2 - 4))
            int64_t x10_1 = *arg3
            int64_t x9_1 = sx.q(*arg1)
            
            if (*(x10_1 + x8_3 * 0xc + 8) f<= *(x10_1 + x9_1 * 0xc + 8))
                x8_2 = 1
            else
                *arg1 = x8_3.d
                *(arg2 - 4) = x9_1.d
                x8_2 = 1
        case 3
            int64_t x11_1 = *arg3
            int32_t x8_4 = *arg1
            int64_t x10_3 = sx.q(*(arg2 - 4))
            int64_t x9_3 = sx.q(arg1[1])
            v0 = *(x11_1 + x9_3 * 0xc + 8)
            v1 = *(x11_1 + x10_3 * 0xc + 8)
            
            if (v0 <= *(x11_1 + muls.dp.d(x8_4, 0xc) + 8))
                if (v1 f<= v0)
                    x8_2 = 1
                else
                    arg1[1] = x10_3.d
                    *(arg2 - 4) = x9_3.d
                    int64_t x10_9 = *arg3
                    int64_t x8_9 = *arg1
                    int64_t x9_8 = arg1[1]
                    
                    if (*(x10_9 + x9_8 * 0xc + 8) f<= *(x10_9 + x8_9 * 0xc + 8))
                        x8_2 = 1
                    else
                        *arg1 = x9_8.d
                        arg1[1] = x8_9.d
                        x8_2 = 1
            else if (v1 f<= v0)
                *arg1 = x9_3.d
                arg1[1] = x8_4
                int64_t x9_9 = sx.q(*(arg2 - 4))
                int64_t x10_12 = *arg3
                
                if (*(x10_12 + x9_9 * 0xc + 8) f<= *(x10_12 + sx.q(x8_4) * 0xc + 8))
                    x8_2 = 1
                else
                    arg1[1] = x9_9.d
                    *(arg2 - 4) = x8_4
                    x8_2 = 1
            else
                *arg1 = x10_3.d
                *(arg2 - 4) = x8_4
                x8_2 = 1
        case 4
            sub_c21234(arg1, &arg1[1], &arg1[2], arg2 - 4, arg3)
            x8_2 = 1
        case 5
            sub_c21234(arg1, &arg1[1], &arg1[2], &arg1[3], arg3)
            int64_t x8_7 = sx.q(*(arg2 - 4))
            int64_t x11_6 = *arg3
            int64_t x10_5 = sx.q(arg1[3])
            
            if (not(*(x11_6 + x8_7 * 0xc + 8) f<= *(x11_6 + x10_5 * 0xc + 8)))
                arg1[3] = x8_7.d
                *(arg2 - 4) = x10_5.d
                int32_t x8_8 = arg1[3]
                int64_t x11_8 = *arg3
                int64_t x10_6 = sx.q(arg1[2])
                
                if (not(*(x11_8 + muls.dp.d(x8_8, 0xc) + 8) f<= *(x11_8 + x10_6 * 0xc + 8)))
                    arg1[2] = x8_8
                    arg1[3] = x10_6.d
                    int64_t x11_9 = *arg3
                    int64_t x10_7 = sx.q(arg1[1])
                    int64_t x9_6 = sx.q(x8_8)
                    
                    if (not(*(x11_9 + x9_6 * 0xc + 8) f<= *(x11_9 + x10_7 * 0xc + 8)))
                        arg1[1] = x8_8
                        arg1[2] = x10_7.d
                        int64_t x11_11 = *arg3
                        int64_t x10_8 = sx.q(*arg1)
                        
                        if (not(*(x11_11 + x9_6 * 0xc + 8) f<= *(x11_11 + x10_8 * 0xc + 8)))
                            *arg1 = x8_8
                            arg1[1] = x10_8.d
            
            x8_2 = 1
return zx.q(x8_2) & 1
