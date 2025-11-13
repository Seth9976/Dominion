// 函数: sub_c1fe5c
// 地址: 0xc1fe5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
int32_t* x19 = arg1

while (true)
    float* x22_1 = x19
    
    while (true)
        int64_t x9_1 = x20 - x22_1
        int64_t x8_1 = x9_1 s>> 3
        x19 = x22_1
        float v0
        float v1
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    v0 = *(x20 - 8)
                    v1 = *x19
                    v0 - v1
                    
                    if (not(v0 >= v1))
                    label_c201ec:
                        int64_t x9_10 = *x19
                        *x19 = *(x20 - 8)
                        *(x20 - 8) = x9_10
                    else if (not(v0 > v1) && *(x20 - 4) f< x19[1])
                        goto label_c201ec
                case 3
                    return sub_c20410(x19, &x19[2], x20 - 8) __tailcall
                case 4
                    uint128_t v0_2
                    arg1, v0_2 = sub_c20410(x19, &x19[2], &x19[4])
                    v0_2.d = *(x20 - 8)
                    float v1_2 = x19[4]
                    v0_2.d f- v1_2
                    
                    if (not(v0_2.d f>= v1_2))
                    label_c2024c:
                        int64_t x9_12 = *(x19 + 0x10)
                        *(x19 + 0x10) = *(x20 - 8)
                        *(x20 - 8) = x9_12
                        v0_2.d = x19[4]
                        v1_2 = x19[2]
                        v0_2.d f- v1_2
                        
                        if (not(v0_2.d f>= v1_2))
                        label_c20268:
                            v0_2 = *(x19 + 8)
                            v1_2 = *x19
                            uint64_t x8_15 = v0_2:8.q
                            float v2_3 = float.s(x8_15.d)
                            v1_2 - v2_3
                            *(x19 + 8) = vextq_s8(v0_2, v0_2, 8)
                            
                            if (v1_2 > v2_3)
                            label_c202a0:
                                int64_t x9_14 = *x19
                                *x19 = x8_15
                                *(x19 + 8) = x9_14
                            else if (not(v1_2 < v2_3))
                                uint128_t v0_3
                                v0_3.d = x19[1]
                                
                                if (not(v0_3.d f<= float.s((x8_15 u>> 0x20).d)))
                                    goto label_c202a0
                        else if (not(v0_2.d f> v1_2))
                            v0_2.d = x19[5]
                            
                            if (v0_2.d f< x19[3])
                                goto label_c20268
                    else if (not(v0_2.d f> v1_2))
                        v0_2.d = *(x20 - 4)
                        
                        if (v0_2.d f< x19[5])
                            goto label_c2024c
                case 5
                    return sub_c20554(x19, &x19[2], &x19[4], &x19[6], x20 - 8) __tailcall
        else if (x9_1 s<= 0xf7)
            void* x21_3 = &x19[4]
            sub_c20410(x19, &x19[2], x21_3)
            void* x10_7 = &x19[6]
            
            if (x10_7 != x20)
                int64_t x8_17 = 0
                
                do
                    void* x9_16 = x21_3
                    float v0_5 = *x10_7
                    float v1_4 = *x9_16
                    x21_3 = x10_7
                    v0_5 - v1_4
                    
                    if (not(v0_5 >= v1_4))
                        v1_4 = *(x21_3 + 4)
                    label_c20354:
                        *x21_3 = *x9_16
                        void* x10_8 = x19
                        
                        if (x9_16 != x19)
                            int64_t x10_10 = x8_17
                            
                            while (true)
                                void* x11_2 = x19 + x10_10
                                float v2_5 = *(x11_2 + 8)
                                v2_5 - v0_5
                                
                                if (not(v2_5 > v0_5))
                                    if (v2_5 < v0_5)
                                        x10_8 = x9_16
                                        break
                                    
                                    void* x12_2 = x19 + x10_10
                                    
                                    if (not(*(x12_2 + 0xc) > v1_4))
                                        x10_8 = x12_2 + 0x10
                                        break
                                
                                x10_10 -= 8
                                x9_16 -= 8
                                *(x11_2 + 0x10) = *(x11_2 + 8)
                                
                                if (x10_10 == -0x10)
                                    x10_8 = x19
                                    break
                        
                        *x10_8 = v0_5
                        *(x10_8 + 4) = v1_4
                    else if (not(v0_5 > v1_4))
                        v1_4 = *(x21_3 + 4)
                        
                        if (not(v1_4 >= *(x9_16 + 4)))
                            goto label_c20354
                    
                    x10_7 = x21_3 + 8
                    x8_17 += 8
                while (x10_7 != x20)
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            int64_t x23_1 = x10_1 s>> 1
            int32_t* x22_2 = &x19[x23_1 * 2]
            
            if (x9_1 s>= 0x1f39)
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 1 & 0xfffffffffffffff8
                arg1 = sub_c20554(x19, x19 + x8_4, x22_2, x22_2 + x8_4, x20 - 8)
                v0 = *x19
                v1 = *x22_2
                v0 - v1
                
                if (v0 < v1 || (not(v0 > v1) && not(x19[1] f>= x19[x23_1 * 2 + 1])))
                    goto label_c1ff34
                
                goto label_c1ff48
            
            arg1 = sub_c20410(x19, x22_2, x20 - 8)
            v0 = *x19
            v1 = *x22_2
            v0 - v1
            void* x8_7
            void* x23_2
            
            if (v0 < v1 || (not(v0 > v1) && not(x19[1] f>= x19[x23_1 * 2 + 1])))
            label_c1ff34:
                x8_7 = x20 - 8
                x23_2 = &x19[2]
                
                if (x23_2 u< x8_7)
                label_c1ffcc:
                    
                    while (true)
                        v0 = *x22_2
                        
                        while (true)
                            v1 = *x23_2
                            v1 - v0
                            
                            if (not(v1 < v0))
                                if (v1 > v0)
                                    break
                                
                                if (not(*(x23_2 + 4) f< x22_2[1]))
                                    break
                            
                            x23_2 += 8
                        
                        while (true)
                            x8_7 -= 8
                            v1 = *x8_7
                            
                            if (v1 < v0)
                                break
                            
                            if (not(v1 > v0))
                                if (not(*(x8_7 + 4) f>= x22_2[1]))
                                    break
                        
                        if (x23_2 u> x8_7)
                            break
                        
                        int64_t x10_3 = *x23_2
                        bool cond:16_1 = x22_2 == x23_2
                        arg1 = zx.q(arg1.d + 1)
                        *x23_2 = *x8_7
                        x23_2 += 8
                        *x8_7 = x10_3
                        
                        if (cond:16_1)
                            x22_2 = x8_7
                    
                    goto label_c20028
                
            label_c20028:
                
                if (x23_2 != x22_2)
                    v0 = *x22_2
                    v1 = *x23_2
                    v0 - v1
                    
                    if (not(v0 >= v1))
                    label_c20040:
                        int64_t x9_6 = *x23_2
                        arg1 = zx.q(arg1.d + 1)
                        *x23_2 = *x22_2
                        *x22_2 = x9_6
                    else if (not(v0 > v1) && x22_2[1] f< *(x23_2 + 4))
                        goto label_c20040
                
                if (arg1.d != 0)
                label_c2009c:
                    
                    if (x23_2 - x19 s>= x20 - x23_2)
                        sub_c1fe5c(x23_2 + 8, x20)
                        x20 = x23_2
                        break
                    
                    sub_c1fe5c(x19, x23_2)
                    x22_1 = x23_2 + 8
                    continue
                else
                    int32_t x0_3 = sub_c20744(x19, x23_2)
                    x22_1 = x23_2 + 8
                    
                    if ((sub_c20744(x22_1, x20).d & 1) != 0)
                        x20 = x23_2
                        
                        if ((x0_3 & 1) == 0)
                            break
                    else
                        if ((x0_3 & 1) == 0)
                            goto label_c2009c
                        
                        continue
            else
            label_c1ff48:
                
                if (x19 != x20 - 0x10)
                    x8_7 = x20 - 0x10
                    
                    while (true)
                        float v2_1 = *x8_7
                        v2_1 - v1
                        
                        if (v2_1 < v1)
                            break
                        
                        if (not(v2_1 > v1) && not(*(x8_7 + 4) f>= x19[x23_1 * 2 + 1]))
                            break
                        
                        x8_7 -= 8
                        
                        if (x19 == x8_7)
                            goto label_c200b8
                    
                    int64_t x10_2 = *x19
                    arg1 = zx.q(arg1.d + 1)
                    *x19 = *x8_7
                    *x8_7 = x10_2
                    x23_2 = &x19[2]
                    
                    if (x23_2 u>= x8_7)
                        goto label_c20028
                    
                    goto label_c1ffcc
                
            label_c200b8:
                v1 = *(x20 - 8)
                x22_1 = &x19[2]
                v0 - v1
                
                if (v0 < v1 || (not(v0 > v1) && x19[1] f< *(x20 - 4)))
                label_c20128:
                    
                    if (x22_1 != x20 - 8)
                        void* x8_11 = x20 - 8
                        
                        while (true)
                            v0 = *x19
                            v1 = *x22_1
                            
                            while (not(v0 < v1))
                                if (not(v0 > v1) && not(x19[1] f>= x22_1[1]))
                                    break
                                
                                x22_1 = &x22_1[2]
                                v1 = *x22_1
                            
                            while (true)
                                x8_11 -= 8
                                v1 = *x8_11
                                v0 - v1
                                
                                if (not(v0 < v1))
                                    if (v0 > v1)
                                        break
                                    
                                    if (not(x19[1] f< *(x8_11 + 4)))
                                        break
                            
                            if (x22_1 u>= x8_11)
                                break
                            
                            int64_t x10_4 = *x22_1
                            *x22_1 = *x8_11
                            x22_1 = &x22_1[2]
                            *x8_11 = x10_4
                        
                        continue
                else if (x22_1 != x20 - 8)
                    x22_1 = &x19[4]
                    
                    while (true)
                        v1 = x22_1[-2]
                        v0 - v1
                        
                        if (v0 < v1)
                            break
                        
                        if (not(v0 > v1) && not(x19[1] f>= x22_1[-1]))
                            break
                        
                        x22_1 = &x22_1[2]
                        
                        if (x20 == x22_1)
                            return 
                    
                    int64_t x9_8 = *(x22_1 - 8)
                    *(x22_1 - 8) = *(x20 - 8)
                    *(x20 - 8) = x9_8
                    goto label_c20128
        return 
