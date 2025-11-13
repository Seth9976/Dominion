// 函数: sub_c21804
// 地址: 0xc21804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
uint64_t x19 = arg1

while (true)
    void* x22_1 = x19
    
    while (true)
        int64_t x9_1 = x20 - x22_1
        int64_t x8_1 = x9_1 s>> 3
        x19 = x22_1
        float v0
        float v1
        float v2
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    v0 = *(x20 - 4)
                    v1 = *(x19 + 4)
                    v0 - v1
                    
                    if (not(v0 >= v1))
                    label_c21bac:
                        int64_t x9_18 = *x19
                        *x19 = *(x20 - 8)
                        *(x20 - 8) = x9_18
                    else if (not(v0 > v1) && *(x20 - 8) s< *x19)
                        goto label_c21bac
                case 3
                    return sub_c21dd4(x19, x19 + 8, x20 - 8) __tailcall
                case 4
                    uint128_t v0_2
                    arg1, v0_2 = sub_c21dd4(x19, x19 + 8, x19 + 0x10)
                    v0_2.d = *(x20 - 4)
                    float v1_2 = *(x19 + 0x14)
                    v0_2.d f- v1_2
                    
                    if (not(v0_2.d f>= v1_2))
                    label_c21c0c:
                        int64_t x9_20 = *(x19 + 0x10)
                        *(x19 + 0x10) = *(x20 - 8)
                        *(x20 - 8) = x9_20
                        v0_2.d = *(x19 + 0x14)
                        v1_2 = *(x19 + 0xc)
                        v0_2.d f- v1_2
                        
                        if (not(v0_2.d f>= v1_2))
                        label_c21c28:
                            v0_2 = *(x19 + 8)
                            v1_2 = *(x19 + 4)
                            uint64_t x8_19 = v0_2:8.q
                            v2 = float.s((x8_19 u>> 0x20).d)
                            v1_2 - v2
                            *(x19 + 8) = vextq_s8(v0_2, v0_2, 8)
                            
                            if (v1_2 > v2)
                            label_c21c5c:
                                int64_t x9_23 = *x19
                                *x19 = x8_19
                                *(x19 + 8) = x9_23
                            else if (not(v1_2 < v2) && *x19 s> x8_19.d)
                                goto label_c21c5c
                        else if (not(v0_2.d f> v1_2) && *(x19 + 0x10) s< *(x19 + 8))
                            goto label_c21c28
                    else if (not(v0_2.d f> v1_2) && *(x20 - 8) s< *(x19 + 0x10))
                        goto label_c21c0c
                case 5
                    return sub_c21f14(x19, x19 + 8, x19 + 0x10, x19 + 0x18, x20 - 8) __tailcall
        else if (x9_1 s<= 0xf7)
            int32_t* x21_3 = x19 + 0x10
            sub_c21dd4(x19, x19 + 8, x21_3)
            void* x10_12 = x19 + 0x18
            
            if (x10_12 != x20)
                int64_t x8_21 = 0
                
                do
                    int32_t* x9_25 = x21_3
                    float v0_5 = *(x10_12 + 4)
                    float v1_4 = x9_25[1]
                    x21_3 = x10_12
                    v0_5 - v1_4
                    int32_t x10_13
                    
                    if (not(v0_5 >= v1_4))
                        x10_13 = *x21_3
                    label_c21d14:
                        *x21_3 = *x9_25
                        int32_t* x11_3 = x19
                        
                        if (x9_25 != x19)
                            int64_t x11_6 = x8_21
                            
                            while (true)
                                void* x12_1 = x19 + x11_6
                                v1_4 = *(x12_1 + 0xc)
                                v1_4 - v0_5
                                
                                if (not(v1_4 > v0_5))
                                    if (v1_4 < v0_5)
                                        x11_3 = x19 + x11_6 + 0x10
                                        break
                                    
                                    if (x10_13 s>= *(x19 + x11_6 + 8))
                                        x11_3 = x9_25
                                        break
                                
                                x11_6 -= 8
                                x9_25 -= 8
                                *(x12_1 + 0x10) = *(x12_1 + 8)
                                
                                if (x11_6 == -0x10)
                                    x11_3 = x19
                                    break
                        
                        *x11_3 = x10_13
                        x11_3[1] = v0_5
                    else if (not(v0_5 > v1_4))
                        x10_13 = *x21_3
                        
                        if (x10_13 s< *x9_25)
                            goto label_c21d14
                    x10_12 = &x21_3[2]
                    x8_21 += 8
                while (x10_12 != x20)
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            int64_t x23_1 = x10_1 s>> 1
            int64_t* x22_2 = x19 + (x23_1 << 3)
            
            if (x9_1 s< 0x1f39)
                arg1 = sub_c21dd4(x19, x22_2, x20 - 8)
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 1 & 0xfffffffffffffff8
                arg1 = sub_c21f14(x19, x19 + x8_4, x22_2, x22_2 + x8_4, x20 - 8)
            
            v0 = *(x19 + 4)
            v1 = *(x19 + (x23_1 << 3) + 4)
            v0 - v1
            void* x8_7
            void* x23_2
            
            if (v0 >= v1 && (v0 > v1 || *x19 s>= *x22_2))
                x8_7 = x20 - 0x10
                
                if (x19 != x20 - 0x10)
                    while (true)
                        v2 = *(x8_7 + 4)
                        v2 - v1
                        
                        if (v2 < v1)
                            break
                        
                        if (not(v2 > v1) && *x8_7 s< *x22_2)
                            break
                        
                        x8_7 -= 8
                        
                        if (x19 == x8_7)
                            goto label_c218ec
                    
                    int64_t x10_3 = *x19
                    arg1 = zx.q(arg1.d + 1)
                    *x19 = *x8_7
                    *x8_7 = x10_3
                    x23_2 = x19 + 8
                    
                    if (x23_2 u>= x8_7)
                        goto label_c21a0c
                    
                    goto label_c21998
                
            label_c218ec:
                v1 = *(x20 - 4)
                x22_1 = x19 + 8
                v0 - v1
                
                if (v0 < v1 || (not(v0 > v1) && *x19 s< *(x20 - 8)))
                label_c21a74:
                    
                    if (x22_1 != x20 - 8)
                        void* x8_13 = x20 - 8
                        
                        while (true)
                            v0 = *(x19 + 4)
                            v1 = *(x22_1 + 4)
                            
                            while (not(v0 < v1))
                                if (not(v0 > v1) && *x19 s< *x22_1)
                                    break
                                
                                v1 = *(x22_1 + 0xc)
                                x22_1 += 8
                            
                            while (true)
                                x8_13 -= 8
                                v1 = *(x8_13 + 4)
                                v0 - v1
                                
                                if (not(v0 < v1))
                                    if (v0 > v1)
                                        break
                                    
                                    if (*x19 s>= *x8_13)
                                        break
                            
                            if (x22_1 u>= x8_13)
                                break
                            
                            int64_t x10_9 = *x22_1
                            *x22_1 = *x8_13
                            x22_1 += 8
                            *x8_13 = x10_9
                        
                        continue
                else if (x22_1 != x20 - 8)
                    x22_1 = x19 + 0x10
                    
                    while (true)
                        v1 = *(x22_1 - 4)
                        v0 - v1
                        
                        if (v0 < v1)
                            break
                        
                        if (not(v0 > v1) && *x19 s< *(x22_1 - 8))
                            break
                        
                        x22_1 += 8
                        
                        if (x20 == x22_1)
                            return 
                    
                    int64_t x9_12 = *(x22_1 - 8)
                    *(x22_1 - 8) = *(x20 - 8)
                    *(x20 - 8) = x9_12
                    goto label_c21a74
            else
                x8_7 = x20 - 8
                x23_2 = x19 + 8
                
                if (x23_2 u< x8_7)
                label_c21998:
                    
                    while (true)
                        v0 = *(x22_2 + 4)
                        
                        while (true)
                            v1 = *(x23_2 + 4)
                            v1 - v0
                            
                            if (not(v1 < v0))
                                if (v1 > v0)
                                    break
                                
                                if (*x23_2 s>= *x22_2)
                                    break
                            
                            x23_2 += 8
                        
                        v1 = *(x8_7 - 4)
                        
                        if (v1 < v0)
                            x8_7 -= 8
                            
                            if (x23_2 u> x8_7)
                                break
                        else
                            void* x8_9 = x8_7 - 0xc
                            
                            while (v1 > v0 || *(x8_9 + 4) s>= *x22_2)
                                v1 = *x8_9
                                x8_9 -= 8
                                
                                if (v1 < v0)
                                    break
                            
                            x8_7 = x8_9 + 4
                            
                            if (x23_2 u> x8_7)
                                break
                        
                        int64_t x10_4 = *x23_2
                        bool cond:18_1 = x22_2 == x23_2
                        arg1 = zx.q(arg1.d + 1)
                        *x23_2 = *x8_7
                        x23_2 += 8
                        *x8_7 = x10_4
                        
                        if (cond:18_1)
                            x22_2 = x8_7
                    
                    goto label_c21a0c
                
            label_c21a0c:
                
                if (x23_2 != x22_2)
                    v0 = *(x22_2 + 4)
                    v1 = *(x23_2 + 4)
                    v0 - v1
                    
                    if (not(v0 >= v1))
                    label_c21a24:
                        int64_t x9_10 = *x23_2
                        arg1 = zx.q(arg1.d + 1)
                        *x23_2 = *x22_2
                        *x22_2 = x9_10
                    else if (not(v0 > v1) && *x22_2 s< *x23_2)
                        goto label_c21a24
                
                if (arg1.d != 0)
                label_c21b44:
                    
                    if (x23_2 - x19 s>= x20 - x23_2)
                        sub_c21804(x23_2 + 8, x20)
                        x20 = x23_2
                        break
                    
                    sub_c21804(x19, x23_2)
                    x22_1 = x23_2 + 8
                    continue
                else
                    int32_t x0_3 = sub_c22104(x19, x23_2)
                    x22_1 = x23_2 + 8
                    
                    if ((sub_c22104(x22_1, x20).d & 1) != 0)
                        x20 = x23_2
                        
                        if ((x0_3 & 1) == 0)
                            break
                    else
                        if ((x0_3 & 1) == 0)
                            goto label_c21b44
                        
                        continue
        return 
