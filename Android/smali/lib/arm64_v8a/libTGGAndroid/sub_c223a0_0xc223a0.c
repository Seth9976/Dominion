// 函数: sub_c223a0
// 地址: 0xc223a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 u< 2)
    return 

int64_t* x19_1 = arg1

if (arg4 == 2)
    int32_t x9_1 = *(x19_1 + 4)
    
    if (arg2[-2] != 0xa)
        if (x9_1 == 0xa)
        label_c22630:
            int32_t x9_6 = x19_1[1].d
            int64_t x10_5 = *x19_1
            x19_1[1].d = *(arg2 - 4)
            *x19_1 = *(arg2 - 0xc)
            *(arg2 - 4) = x9_6
            *(arg2 - 0xc) = x10_5
        else
        label_c22608:
            int64_t x9_4 = *arg3 + 0x10
            float v2 = 0f
            
            if (not(*(x9_4 + sx.q(*(arg2 - 0xc)) * 0xc + 4) + v2
                    <= *(x9_4 + sx.q(*x19_1) * 0xc + 4) + v2))
                goto label_c22630
    else if (x9_1 == 0xa)
        int32_t x9_2 = x19_1[1].d
        
        if (arg2[-1] s>= 6)
            if (x9_2 s> 5)
                goto label_c22608
            
            goto label_c22630
        
        if (x9_2 s< 6)
            goto label_c22608
else if (arg4 s> 0x80)
    uint64_t x24_1 = arg4 u>> 1
    int32_t* x26_1 = x19_1 + x24_1 * 0xc
    int32_t* x0 = x19_1
    
    if (arg4 s> arg6)
        sub_c223a0(x0, x26_1, arg3, x24_1, arg5, arg6)
        int64_t x23_2 = arg4 - x24_1
        sub_c223a0(x26_1, arg2, arg3, x23_2, arg5, arg6)
        return sub_c22cfc(x19_1, x26_1, arg2, arg3, x24_1, x23_2, arg5, arg6) __tailcall
    
    sub_c22884(x0, x26_1, arg3, x24_1, arg5)
    int64_t* x25_2 = arg5 + x24_1 * 0xc
    sub_c22884(x26_1, arg2, arg3, arg4 - x24_1, x25_2)
    int64_t x10_9 = arg5 + arg4 * 0xc
    float v0_2 = 0f
    void* x8_4 = arg5
    int64_t* x9_10 = x25_2
    
    while (true)
        if (x9_10 == x10_9)
            if (x8_4 != x25_2)
                int64_t i = 0
                
                do
                    void* x12_9 = x8_4 + i
                    int64_t x12_10 = *x12_9
                    void* x11_11 = x19_1 + i
                    i += 0xc
                    *(x11_11 + 8) = *(x12_9 + 8)
                    *x11_11 = x12_10
                while (arg5 + x24_1 * 0xc - x8_4 != i)
            
            break
        
        int32_t x11_5 = *(x8_4 + 4)
        
        if (*(x9_10 + 4) != 0xa)
            if (x11_5 != 0xa)
            label_c227ac:
                int64_t x11_8 = *arg3 + 0x10
                
                if (*(x11_8 + sx.q(*x9_10) * 0xc + 4) + v0_2
                        <= *(x11_8 + sx.q(*x8_4) * 0xc + 4) + v0_2)
                    goto label_c22744
                
                goto label_c227d0
            
        label_c227d0:
            int32_t x11_10 = x9_10[1].d
            int64_t x12_8 = *x9_10
            x9_10 += 0xc
            x19_1[1].d = x11_10
            *x19_1 = x12_8
            x19_1 += 0xc
            
            if (x8_4 != x25_2)
                continue
        else
            if (x11_5 == 0xa)
                int32_t x11_6 = *(x8_4 + 8)
                
                if (x9_10[1].d s< 6)
                    if (x11_6 s< 6)
                        goto label_c227ac
                    
                    goto label_c22744
                
                if (x11_6 s> 5)
                    goto label_c227ac
                
                goto label_c227d0
            
        label_c22744:
            int32_t x11_4 = *(x8_4 + 8)
            int64_t x12_3 = *x8_4
            x8_4 += 0xc
            x19_1[1].d = x11_4
            *x19_1 = x12_3
            x19_1 += 0xc
            
            if (x8_4 != x25_2)
                continue
        
        if (x9_10 == x10_9)
            break
        
        int64_t i_1 = 0
        
        do
            void* x12_11 = x9_10 + i_1
            int64_t x12_12 = *x12_11
            void* x11_12 = x19_1 + i_1
            i_1 += 0xc
            *(x11_12 + 8) = *(x12_11 + 8)
            *x11_12 = x12_12
        while (arg5 + arg4 * 0xc - x9_10 != i_1)
        
        break
else if (x19_1 != arg2)
    void* x14_1 = x19_1 + 0xc
    
    if (x14_1 != arg2)
        int64_t i_4 = 0
        float v0 = 0f
        void* x10_2 = x19_1
        
        do
            int32_t x11_1 = *(x10_2 + 0xc)
            int32_t x12_1 = *(x10_2 + 0x10)
            int32_t x13_1 = *(x10_2 + 0x14)
            x10_2 = x14_1
            void* x15_1 = x19_1
            
            if (x14_1 != x19_1)
                int64_t x14_2 = sx.q(x11_1)
                int64_t i_5 = i_4
                void* x14_3
                
                if (x12_1 != 0xa)
                    while (true)
                        void* x16_1 = x19_1 + i_5
                        
                        if (*(x16_1 + 4) != 0xa)
                            int64_t x17_4 = *arg3 + 0x10
                            
                            if (not(*(x17_4 + x14_2 * 0xc + 4) + v0
                                    > *(x17_4 + sx.q(*(x19_1 + i_5)) * 0xc + 4) + v0))
                                x14_3 = x19_1 + i_5
                            label_c225e8:
                                x15_1 = x14_3 + 0xc
                                break
                        
                        arg1 = zx.q(*(x16_1 + 8))
                        i_5 -= 0xc
                        *(x16_1 + 0xc) = *x16_1
                        *(x16_1 + 0x14) = arg1.d
                        
                        if (i_5 == -0xc)
                            goto label_c2243c
                else
                    int64_t i_2 = i_4
                    x15_1 = x10_2
                    
                    if (x13_1 s<= 5)
                        do
                            void* x17_12 = x19_1 + i_2
                            
                            if (*(x17_12 + 4) != 0xa)
                                goto label_c22440
                            
                            if (*(x17_12 + 8) s> 5)
                                x14_3 = x19_1 + i_2
                                goto label_c225e8
                            
                            int64_t x17_15 = *arg3 + 0x10
                            
                            if (*(x17_15 + x14_2 * 0xc + 4) + v0
                                    <= *(x17_15 + sx.q(*(x19_1 + i_2)) * 0xc + 4) + v0)
                                goto label_c22440
                            
                            void* x17_17 = x19_1 + i_2
                            int32_t x1_4 = *(x17_17 + 8)
                            i_2 -= 0xc
                            x15_1 -= 0xc
                            *(x17_17 + 0xc) = *x17_17
                            *(x17_17 + 0x14) = x1_4
                        while (i_2 != -0xc)
                    else
                        int64_t i_3 = i_4
                        x15_1 = x10_2
                        
                        do
                            void* x17_7 = x19_1 + i_3
                            
                            if (*(x17_7 + 4) != 0xa)
                                x15_1 = x17_7 + 0xc
                                goto label_c22440
                            
                            if (*(x17_7 + 8) s>= 6)
                                int64_t x17_10 = *arg3 + 0x10
                                
                                if (not(*(x17_10 + x14_2 * 0xc + 4) + v0
                                        > *(x17_10 + sx.q(*(x19_1 + i_3)) * 0xc + 4) + v0))
                                    goto label_c22440
                            
                            int64_t* x17_6 = x19_1 + i_3
                            int32_t x1_1 = x17_6[1].d
                            i_3 -= 0xc
                            x15_1 -= 0xc
                            *(x17_6 + 0xc) = *x17_6
                            *(x17_6 + 0x14) = x1_1
                        while (i_3 != -0xc)
                    
                label_c2243c:
                    x15_1 = x19_1
            
        label_c22440:
            x14_1 = x10_2 + 0xc
            i_4 += 0xc
            *x15_1 = x11_1
            *(x15_1 + 4) = x12_1
            *(x15_1 + 8) = x13_1
        while (x14_1 != arg2)
