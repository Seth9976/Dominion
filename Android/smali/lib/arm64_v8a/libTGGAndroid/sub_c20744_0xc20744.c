// 函数: sub_c20744
// 地址: 0xc20744
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 3
int32_t x8_2

if (x8_1 u> 5)
    void* x21_1 = &arg1[4]
    int32_t x9_2 = sub_c20410(arg1, &arg1[2], x21_1)
    void* x11_1 = &arg1[6]
    int32_t x8_7
    
    if (x11_1 == arg2)
    label_c2094c:
        x8_7 = 1
    else
        int64_t x8_4 = 0
        x9_2 = 0
        
        while (true)
            void* x10_2 = x21_1
            float v0_1 = *x11_1
            float v1_1 = *x10_2
            x21_1 = x11_1
            v0_1 - v1_1
            
            if (not(v0_1 >= v1_1))
                v1_1 = *(x21_1 + 4)
            label_c20820:
                *x21_1 = *x10_2
                void* x11_2 = arg1
                
                if (x10_2 != arg1)
                    int64_t x11_4 = x8_4
                    
                    while (true)
                        void* x12_1 = arg1 + x11_4
                        float v2_1 = *(x12_1 + 8)
                        v2_1 - v0_1
                        
                        if (not(v2_1 > v0_1))
                            if (v2_1 < v0_1)
                                x11_2 = arg1 + x11_4 + 0x10
                                break
                            
                            if (not(*(arg1 + x11_4 + 0xc) > v1_1))
                                x11_2 = x10_2
                                break
                        
                        x11_4 -= 8
                        x10_2 -= 8
                        *(x12_1 + 0x10) = *(x12_1 + 8)
                        
                        if (x11_4 == -0x10)
                            x11_2 = arg1
                            break
                
                x9_2 += 1
                *x11_2 = v0_1
                *(x11_2 + 4) = v1_1
                
                if (x9_2 == 8)
                    x8_7 = 0
                    x9_2 = x21_1 + 8 == arg2 ? 1 : 0
                    break
            else if (not(v0_1 > v1_1))
                v1_1 = *(x21_1 + 4)
                
                if (not(v1_1 >= *(x10_2 + 4)))
                    goto label_c20820
            
            x11_1 = x21_1 + 8
            x8_4 += 8
            
            if (x11_1 == arg2)
                goto label_c2094c
    
    x8_2 = x8_7 | x9_2
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            float v0 = *(arg2 - 8)
            float v1 = *arg1
            v0 - v1
            
            if (v0 >= v1 && (v0 > v1 || not(*(arg2 - 4) < arg1[1])))
                x8_2 = 1
            else
                int64_t x9_1 = *arg1
                *arg1 = *(arg2 - 8)
                *(arg2 - 8) = x9_1
                x8_2 = 1
        case 3
            sub_c20410(arg1, &arg1[2], arg2 - 8)
            x8_2 = 1
        case 4
            sub_c20410(arg1, &arg1[2], &arg1[4])
            uint128_t v0_2
            v0_2.d = *(arg2 - 8)
            float v1_2 = arg1[4]
            v0_2.d f- v1_2
            
            if (not(v0_2.d f>= v1_2))
            label_c208e0:
                int64_t x9_3 = *(arg1 + 0x10)
                *(arg1 + 0x10) = *(arg2 - 8)
                *(arg2 - 8) = x9_3
                v0_2.d = arg1[4]
                v1_2 = arg1[2]
                v0_2.d f- v1_2
                
                if (not(v0_2.d f>= v1_2))
                label_c208fc:
                    v0_2 = *(arg1 + 8)
                    v1_2 = *arg1
                    uint64_t x8_6 = v0_2:8.q
                    float v2_2 = float.s(x8_6.d)
                    v1_2 - v2_2
                    *(arg1 + 8) = vextq_s8(v0_2, v0_2, 8)
                    
                    if (not(v1_2 <= v2_2))
                    label_c2091c:
                        int64_t x9_4 = *arg1
                        *arg1 = x8_6
                        *(arg1 + 8) = x9_4
                        x8_2 = 1
                    else if (v1_2 < v2_2)
                        x8_2 = 1
                    else
                        uint128_t v0_3
                        v0_3.d = arg1[1]
                        
                        if (v0_3.d f> float.s((x8_6 u>> 0x20).d))
                            goto label_c2091c
                        
                        x8_2 = 1
                else if (v0_2.d f> v1_2)
                    x8_2 = 1
                else
                    v0_2.d = arg1[5]
                    
                    if (v0_2.d f< arg1[3])
                        goto label_c208fc
                    
                    x8_2 = 1
            else if (v0_2.d f> v1_2)
                x8_2 = 1
            else
                v0_2.d = *(arg2 - 4)
                
                if (v0_2.d f< arg1[5])
                    goto label_c208e0
                
                x8_2 = 1
        case 5
            sub_c20554(arg1, &arg1[2], &arg1[4], &arg1[6], arg2 - 8)
            x8_2 = 1

return zx.q(x8_2) & 1
