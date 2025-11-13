// 函数: sub_c209e4
// 地址: 0xc209e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg2
int32_t* x19 = arg1

while (true)
    void* x23_1 = x19
    
    while (true)
    label_c20a14:
        int64_t x9_1 = x21 - x23_1
        int64_t x8_1 = x9_1 s>> 2
        x19 = x23_1
        float j
        int32_t i
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    int64_t x8_18 = sx.q(*(x21 - 4))
                    int64_t x10_24 = *arg3
                    int64_t x9_17 = sx.q(*x19)
                    
                    if (not(*(x10_24 + x8_18 * 0xc + 8) f<= *(x10_24 + x9_17 * 0xc + 8)))
                        *x19 = x8_18.d
                        *(x21 - 4) = x9_17.d
                case 3
                    int64_t x11_18 = *arg3
                    int32_t x8_19 = *x19
                    int64_t x10_26 = sx.q(*(x21 - 4))
                    int64_t x9_19 = sx.q(x19[1])
                    j = *(x11_18 + x9_19 * 0xc + 8)
                    i = *(x11_18 + x10_26 * 0xc + 8)
                    
                    if (j <= *(x11_18 + muls.dp.d(x8_19, 0xc) + 8))
                        if (not(i f<= j))
                            x19[1] = x10_26.d
                            *(x21 - 4) = x9_19.d
                            int64_t x10_33 = *arg3
                            int64_t x8_25 = *x19
                            int64_t x9_25 = x19[1]
                            
                            if (not(*(x10_33 + x9_25 * 0xc + 8) f<= *(x10_33 + x8_25 * 0xc + 8)))
                                *x19 = x9_25.d
                                x19[1] = x8_25.d
                    else if (i f<= j)
                        *x19 = x9_19.d
                        x19[1] = x8_19
                        int64_t x9_26 = sx.q(*(x21 - 4))
                        int64_t x10_35 = *arg3
                        
                        if (not(*(x10_35 + x9_26 * 0xc + 8) f<= *(x10_35 + sx.q(x8_19) * 0xc + 8)))
                            x19[1] = x9_26.d
                            *(x21 - 4) = x8_19
                    else
                        *x19 = x10_26.d
                        *(x21 - 4) = x8_19
                case 4
                    return sub_c21234(x19, &x19[1], &x19[2], x21 - 4, arg3) __tailcall
                case 5
                    sub_c21234(x19, &x19[1], &x19[2], &x19[3], arg3)
                    int64_t x8_21 = sx.q(*(x21 - 4))
                    int64_t x11_21 = *arg3
                    int64_t x10_28 = sx.q(x19[3])
                    
                    if (not(*(x11_21 + x8_21 * 0xc + 8) f<= *(x11_21 + x10_28 * 0xc + 8)))
                        x19[3] = x8_21.d
                        *(x21 - 4) = x10_28.d
                        int32_t x8_22 = x19[3]
                        int64_t x11_23 = *arg3
                        int64_t x10_29 = sx.q(x19[2])
                        
                        if (not(*(x11_23 + muls.dp.d(x8_22, 0xc) + 8) f<=
                                *(x11_23 + x10_29 * 0xc + 8)))
                            x19[2] = x8_22
                            x19[3] = x10_29.d
                            int64_t x11_24 = *arg3
                            int64_t x10_30 = sx.q(x19[1])
                            int64_t x9_22 = sx.q(x8_22)
                            
                            if (not(*(x11_24 + x9_22 * 0xc + 8) f<= *(x11_24 + x10_30 * 0xc + 8)))
                                x19[1] = x8_22
                                x19[2] = x10_30.d
                                int64_t x11_26 = *arg3
                                int64_t x10_31 = sx.q(*x19)
                                
                                if (not(*(x11_26 + x9_22 * 0xc + 8) f<=
                                        *(x11_26 + x10_31 * 0xc + 8)))
                                    *x19 = x8_22
                                    x19[1] = x10_31.d
        else if (x9_1 s<= 0x7b)
            int64_t x11_28 = *arg3
            int32_t x9_24 = *x19
            int32_t x10_32 = x19[2]
            uint64_t x8_24 = sx.q(x19[1])
            j = *(x11_28 + x8_24 * 0xc + 8)
            i = *(x11_28 + muls.dp.d(x10_32, 0xc) + 8)
            int64_t x11_30 = sx.q(x9_24)
            int64_t x12_13 = sx.q(x10_32)
            
            if (j <= *(x11_28 + muls.dp.d(x9_24, 0xc) + 8))
                if (i f<= j)
                    x8_24 = zx.q(x10_32)
                else
                    x19[1] = x10_32
                    x19[2] = x8_24.d
                    int64_t x13_8 = *arg3
                    
                    if (not(*(x13_8 + x12_13 * 0xc + 8) f<= *(x13_8 + x11_30 * 0xc + 8)))
                        *x19 = x10_32
                        x19[1] = x9_24
            else if (i f<= j)
                *x19 = x8_24.d
                x19[1] = x9_24
                int64_t x8_26 = *arg3
                
                if (*(x8_26 + x12_13 * 0xc + 8) f<= *(x8_26 + x11_30 * 0xc + 8))
                    x8_24 = zx.q(x10_32)
                else
                    x19[1] = x10_32
                    x8_24 = zx.q(x9_24)
                    x19[2] = x9_24
            else
                *x19 = x10_32
                x8_24 = zx.q(x9_24)
                x19[2] = x9_24
            
            void* x10_37 = &x19[3]
            
            if (x10_37 != x21)
                int64_t x11_33 = 0xc
                
                while (true)
                    int32_t x12_17 = *x10_37
                    int64_t x13_10 = *arg3
                    
                    if (not(*(x13_10 + muls.dp.d(x12_17, 0xc) + 8) f<=
                            *(x13_10 + muls.dp.d(x8_24.d, 0xc) + 8)))
                        int64_t x15_1 = x11_33
                        void* x8_29
                        
                        while (true)
                            int64_t x14_5 = x15_1 - 4
                            *(x19 + x15_1) = x8_24.d
                            
                            if (x15_1 == 4)
                                x8_29 = x19
                                break
                            
                            int64_t x16_1 = *arg3
                            x8_24 = sx.q(*(x19 + x15_1 - 8))
                            x15_1 = x14_5
                            
                            if (not(*(x16_1 + sx.q(x12_17) * 0xc + 8) f>
                                    *(x16_1 + x8_24 * 0xc + 8)))
                                x8_29 = x19 + x14_5
                                break
                        
                        *x8_29 = x12_17
                    
                    if (x10_37 + 4 == x21)
                        break
                    
                    x8_24 = zx.q(*x10_37)
                    x11_33 += 4
                    x10_37 += 4
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            int32_t* x23_2 = x19 + (x10_1 << 1 & 0xfffffffffffffffc)
            
            if (x9_1 s< 0xf9d)
                int64_t x9_7 = sx.q(*x23_2)
                int64_t x11_5 = *arg3
                int32_t x8_8 = *x19
                int64_t x10_12 = sx.q(*(x21 - 4))
                j = *(x11_5 + x9_7 * 0xc + 8)
                i = *(x11_5 + x10_12 * 0xc + 8)
                
                if (j <= *(x11_5 + muls.dp.d(x8_8, 0xc) + 8))
                    if (i f<= j)
                        arg1 = 0
                    else
                        *x23_2 = x10_12.d
                        *(x21 - 4) = x9_7.d
                        int64_t x8_9 = sx.q(*x23_2)
                        int64_t x10_13 = *arg3
                        int64_t x9_8 = sx.q(*x19)
                        
                        if (*(x10_13 + x8_9 * 0xc + 8) f<= *(x10_13 + x9_8 * 0xc + 8))
                            arg1 = 1
                        else
                            *x19 = x8_9.d
                            *x23_2 = x9_8.d
                            arg1 = 2
                else if (i f<= j)
                    *x19 = x9_7.d
                    *x23_2 = x8_8
                    int64_t x9_9 = sx.q(*(x21 - 4))
                    int64_t x10_15 = *arg3
                    
                    if (*(x10_15 + x9_9 * 0xc + 8) f<= *(x10_15 + sx.q(x8_8) * 0xc + 8))
                        arg1 = 1
                    else
                        *x23_2 = x9_9.d
                        *(x21 - 4) = x8_8
                        arg1 = 2
                else
                    *x19 = x10_12.d
                    *(x21 - 4) = x8_8
                    arg1 = 1
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_3 = x8_2 & 0xfffffffffffffffc
                int32_t* x24_1 = x19 + x8_3
                int32_t* x25_1 = x23_2 + x8_3
                arg1 = sub_c21234(x19, x24_1, x23_2, x25_1, arg3)
                int64_t x8_4 = sx.q(*(x21 - 4))
                int64_t x10_4 = *arg3
                int64_t x9_3 = sx.q(*x25_1)
                
                if (not(*(x10_4 + x8_4 * 0xc + 8) f<= *(x10_4 + x9_3 * 0xc + 8)))
                    *x25_1 = x8_4.d
                    *(x21 - 4) = x9_3.d
                    int64_t x8_5 = sx.q(*x25_1)
                    int64_t x10_6 = *arg3
                    int64_t x9_4 = sx.q(*x23_2)
                    
                    if (*(x10_6 + x8_5 * 0xc + 8) f<= *(x10_6 + x9_4 * 0xc + 8))
                        arg1 = zx.q(arg1.d + 1)
                    else
                        *x23_2 = x8_5.d
                        *x25_1 = x9_4.d
                        int64_t x8_6 = sx.q(*x23_2)
                        int64_t x10_8 = *arg3
                        int64_t x9_5 = sx.q(*x24_1)
                        
                        if (*(x10_8 + x8_6 * 0xc + 8) f<= *(x10_8 + x9_5 * 0xc + 8))
                            arg1 = zx.q(arg1.d + 2)
                        else
                            *x24_1 = x8_6.d
                            *x23_2 = x9_5.d
                            int64_t x8_7 = sx.q(*x24_1)
                            int64_t x10_10 = *arg3
                            int64_t x9_6 = sx.q(*x19)
                            
                            if (*(x10_10 + x8_7 * 0xc + 8) f<= *(x10_10 + x9_6 * 0xc + 8))
                                arg1 = zx.q(arg1.d + 3)
                            else
                                *x19 = x8_7.d
                                *x24_1 = x9_6.d
                                arg1 = zx.q(arg1.d + 4)
            
            int64_t x10_17 = sx.q(*x19)
            int64_t x9_10 = *arg3
            j = *(x9_10 + x10_17 * 0xc + 8)
            i = *(x9_10 + sx.q(*x23_2) * 0xc + 8)
            int32_t* x8_12
            void* x24_2
            
            if (j f<= i)
                void* x8_13 = x21 - 8
                int64_t x11_10
                
                do
                    if (x19 == x8_13)
                        int64_t x10_21 = sx.q(*(x21 - 4))
                        void* x8_17 = &x19[1]
                        
                        if (not(j f> *(x9_10 + x10_21 * 0xc + 8)))
                            if (x8_17 == x21 - 4)
                                goto label_c21230
                            
                            x8_17 = &x19[2]
                            int64_t x11_13
                            
                            while (true)
                                x11_13 = sx.q(*(x8_17 - 4))
                                
                                if (j f> *(x9_10 + x11_13 * 0xc + 8))
                                    break
                                
                                x8_17 += 4
                                
                                if (x21 == x8_17)
                                    return 
                            
                            *(x8_17 - 4) = x10_21.d
                            *(x21 - 4) = x11_13.d
                        
                        if (x8_17 == x21 - 4)
                            goto label_c21230
                        
                        int32_t* x9_16 = x21 - 4
                        
                        while (true)
                            int64_t x10_22 = *arg3
                            j = *(x10_22 + sx.q(*x19) * 0xc + 8)
                            int64_t x11_16
                            
                            do
                                x11_16 = sx.q(*x8_17)
                                x8_17 += 4
                            while (j f<= *(x10_22 + x11_16 * 0xc + 8))
                            
                            x23_1 = x8_17 - 4
                            int64_t x12_8
                            
                            do
                                x9_16 = &x9_16[-1]
                                x12_8 = sx.q(*x9_16)
                            while (j f> *(x10_22 + x12_8 * 0xc + 8))
                            
                            if (x23_1 u>= x9_16)
                                break
                            
                            *x23_1 = x12_8.d
                            *x9_16 = x11_16.d
                        
                        goto label_c20a14
                    
                    x11_10 = sx.q(*x8_13)
                    x8_13 -= 4
                while (*(x9_10 + x11_10 * 0xc + 8) f<= i)
                
                *x19 = x11_10.d
                x8_12 = x8_13 + 4
                *x8_12 = x10_17.d
                arg1 = zx.q(arg1.d + 1)
                x24_2 = &x19[1]
                
                if (x24_2 u< x8_12)
                    goto label_c20cd4
                
                goto label_c20cb0
            
            x8_12 = x21 - 4
            x24_2 = &x19[1]
            
            if (x24_2 u< x8_12)
            label_c20cd4:
                void* x9_13
                
                while (true)
                    int64_t x10_18 = *arg3
                    j = *(x10_18 + sx.q(*x23_2) * 0xc + 8)
                    x9_13 = x24_2 - 4
                    int64_t x11_11
                    
                    do
                        x9_13 += 4
                        x11_11 = sx.q(*x9_13)
                    while (*(x10_18 + x11_11 * 0xc + 8) f> j)
                    
                    x24_2 = x9_13 + 4
                    int64_t x12_5
                    
                    do
                        x8_12 = &x8_12[-1]
                        x12_5 = sx.q(*x8_12)
                    while (*(x10_18 + x12_5 * 0xc + 8) f<= j)
                    
                    if (x9_13 u> x8_12)
                        break
                    
                    *x9_13 = x12_5.d
                    *x8_12 = x11_11.d
                    arg1 = zx.q(arg1.d + 1)
                    
                    if (x23_2 == x9_13)
                        x23_2 = x8_12
                
                x24_2 = x9_13
                
                if (x24_2 != x23_2)
                    goto label_c20d30
            else
            label_c20cb0:
                
                if (x24_2 != x23_2)
                label_c20d30:
                    int64_t x8_14 = sx.q(*x23_2)
                    int64_t x10_19 = *arg3
                    int64_t x9_14 = sx.q(*x24_2)
                    
                    if (not(*(x10_19 + x8_14 * 0xc + 8) f<= *(x10_19 + x9_14 * 0xc + 8)))
                        arg1 = zx.q(arg1.d + 1)
                        *x24_2 = x8_14.d
                        *x23_2 = x9_14.d
            
            if (arg1.d != 0)
            label_c20da0:
                
                if (x24_2 - x19 s>= x21 - x24_2)
                    sub_c209e4(x24_2 + 4, x21, arg3)
                    x21 = x24_2
                    break
                
                sub_c209e4(x19, x24_2, arg3)
                x23_1 = x24_2 + 4
                continue
            else
                int32_t x0_2 = sub_c213ec(x19, x24_2, arg3)
                x23_1 = x24_2 + 4
                
                if ((sub_c213ec(x23_1, x21, arg3).d & 1) != 0)
                    x21 = x24_2
                    
                    if ((x0_2 & 1) == 0)
                        break
                else
                    if ((x0_2 & 1) == 0)
                        goto label_c20da0
                    
                    continue
    label_c21230:
        return 
