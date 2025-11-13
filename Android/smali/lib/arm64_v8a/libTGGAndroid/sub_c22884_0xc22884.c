// 函数: sub_c22884
// 地址: 0xc22884
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    return 

int64_t* x19_1 = arg5
int32_t* x20_1 = arg1

if (arg4 == 2)
    int32_t x9_2 = x20_1[1]
    
    if (arg2[-2] != 0xa)
        if (x9_2 != 0xa)
        label_c22c78:
            int64_t x9_7 = *arg3 + 0x10
            float v2 = 0f
            
            if (*(x9_7 + sx.q(*(arg2 - 0xc)) * 0xc + 4) + v2
                    <= *(x9_7 + sx.q(*x20_1) * 0xc + 4) + v2)
                goto label_c22cc8
            
            goto label_c22ca4
        
    label_c22ca4:
        x19_1[1].d = *(arg2 - 4)
        *x19_1 = *(arg2 - 0xc)
        int64_t x9_10 = *x20_1
        *(x19_1 + 0x14) = x20_1[2]
        *(x19_1 + 0xc) = x9_10
    else
        if (x9_2 == 0xa)
            int32_t x9_3 = x20_1[2]
            
            if (arg2[-1] s< 6)
                if (x9_3 s>= 6)
                    goto label_c22cc8
                
                goto label_c22c78
            
            if (x9_3 s> 5)
                goto label_c22c78
            
            goto label_c22ca4
        
    label_c22cc8:
        x19_1[1].d = x20_1[2]
        *x19_1 = *x20_1
        int64_t x8_9 = *(arg2 - 0xc)
        *(x19_1 + 0x14) = *(arg2 - 4)
        *(x19_1 + 0xc) = x8_9
else if (arg4 == 1)
    x19_1[1].d = x20_1[2]
    *x19_1 = *x20_1
else if (arg4 s> 8)
    uint64_t x23_1 = arg4 u>> 1
    int64_t x24_1 = &x20_1[x23_1 * 3]
    sub_c223a0(x20_1, x24_1, arg3, x23_1, x19_1, x23_1)
    int64_t x3_1 = arg4 - x23_1
    sub_c223a0(x24_1, arg2, arg3, x3_1, x19_1 + x23_1 * 0xc, x3_1)
    float v0_1 = 0f
    int32_t* x8_6 = x20_1
    int64_t x9_5 = x24_1
    
    while (true)
        if (x9_5 == arg2)
            if (x8_6 != x24_1)
                int64_t i = 0
                
                do
                    void* x12_9 = x8_6 + i
                    int64_t x12_10 = *x12_9
                    void* x11_9 = x19_1 + i
                    i += 0xc
                    *(x11_9 + 8) = *(x12_9 + 8)
                    *x11_9 = x12_10
                while (x20_1 + x23_1 * 0xc - x8_6 != i)
            
            break
        
        int32_t x11_3 = x8_6[1]
        
        if (*(x9_5 + 4) != 0xa)
            if (x11_3 != 0xa)
            label_c22b9c:
                int64_t x11_6 = *arg3 + 0x10
                
                if (*(x11_6 + sx.q(*x9_5) * 0xc + 4) + v0_1
                        <= *(x11_6 + sx.q(*x8_6) * 0xc + 4) + v0_1)
                    goto label_c22b34
                
                goto label_c22bc0
            
        label_c22bc0:
            int32_t x11_8 = *(x9_5 + 8)
            int64_t x12_8 = *x9_5
            x9_5 += 0xc
            x19_1[1].d = x11_8
            *x19_1 = x12_8
            x19_1 += 0xc
            
            if (x8_6 != x24_1)
                continue
        else
            if (x11_3 == 0xa)
                int32_t x11_4 = x8_6[2]
                
                if (*(x9_5 + 8) s< 6)
                    if (x11_4 s< 6)
                        goto label_c22b9c
                    
                    goto label_c22b34
                
                if (x11_4 s> 5)
                    goto label_c22b9c
                
                goto label_c22bc0
            
        label_c22b34:
            int32_t x11_2 = x8_6[2]
            int64_t x12_3 = *x8_6
            x8_6 = &x8_6[3]
            x19_1[1].d = x11_2
            *x19_1 = x12_3
            x19_1 += 0xc
            
            if (x8_6 != x24_1)
                continue
        
        if (x9_5 == arg2)
            break
        
        int64_t i_1 = 0
        
        do
            int64_t* x12_11 = x9_5 + i_1
            int64_t x12_12 = *x12_11
            void* x11_10 = x19_1 + i_1
            i_1 += 0xc
            *(x11_10 + 8) = x12_11[1].d
            *x11_10 = x12_12
        while (arg2 - x9_5 != i_1)
        
        break
else if (x20_1 != arg2)
    void* x13_1 = &x20_1[3]
    x19_1[1].d = x20_1[2]
    *x19_1 = *x20_1
    
    if (x13_1 != arg2)
        int64_t i_4 = 0
        float v0 = 0f
        void* x10_2 = x19_1
        
        do
            int32_t x15_1 = x20_1[4]
            int32_t x14_2 = *(x10_2 + 4)
            int32_t* x12_2 = x20_1
            void* x11_1 = x10_2
            x20_1 = x13_1
            x10_2 += 0xc
            
            if (x15_1 != 0xa)
                if (x14_2 != 0xa)
                label_c229d4:
                    int64_t x13_4 = *arg3 + 0x10
                    
                    if (not(*(x13_4 + sx.q(*x20_1) * 0xc + 4) + v0
                            <= *(x13_4 + sx.q(*x11_1) * 0xc + 4) + v0))
                        goto label_c229fc
                    
                    x11_1 = x10_2
                else
                label_c229fc:
                    int64_t x14_6 = *x11_1
                    *(x10_2 + 8) = *(x11_1 + 8)
                    *x10_2 = x14_6
                    
                    if (x11_1 != x19_1)
                        int64_t i_3 = i_4
                        int64_t i_2
                        
                        do
                            int32_t x14_10 = *(x19_1 + i_3 - 8)
                            
                            if (x12_2[4] == 0xa)
                                if (x14_10 != 0xa)
                                    goto label_c22954
                                
                                int32_t x14_12 = *(x19_1 + i_3 - 4)
                                
                                if (x12_2[5] s< 6)
                                    if (x14_12 s>= 6)
                                        goto label_c22954
                                    
                                    goto label_c22a24
                                
                                if (x14_12 s> 5)
                                    goto label_c22a24
                            else if (x14_10 != 0xa)
                            label_c22a24:
                                void* x14_7 = x19_1 + i_3
                                int64_t x15_4 = *arg3 + 0x10
                                
                                if (*(x15_4 + sx.q(*x20_1) * 0xc + 4) + v0
                                        <= *(x15_4 + sx.q(*(x14_7 - 0xc)) * 0xc + 4) + v0)
                                    x11_1 = x14_7
                                    goto label_c22954
                            
                            void* x14_8 = x19_1 + i_3
                            int32_t x16_3 = *(x14_8 - 4)
                            x11_1 -= 0xc
                            i_2 = i_3
                            i_3 -= 0xc
                            *x14_8 = *(x14_8 - 0xc)
                            *(x14_8 + 8) = x16_3
                        while (i_2 != 0xc)
                    
                    x11_1 = x19_1
            else if (x14_2 != 0xa)
                x11_1 = x10_2
            else
                int32_t x13_2 = *(x11_1 + 8)
                
                if (x12_2[5] s>= 6)
                    if (x13_2 s> 5)
                        goto label_c229d4
                    
                    goto label_c229fc
                
                if (x13_2 s< 6)
                    goto label_c229d4
                
                x11_1 = x10_2
            
        label_c22954:
            int64_t x14_1 = *x20_1
            x13_1 = &x20_1[3]
            i_4 += 0xc
            *(x11_1 + 8) = x20_1[2]
            *x11_1 = x14_1
        while (x13_1 != arg2)
