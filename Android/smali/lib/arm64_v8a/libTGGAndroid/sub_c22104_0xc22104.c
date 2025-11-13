// 函数: sub_c22104
// 地址: 0xc22104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 3
int32_t x8_2

if (x8_1 u> 5)
    void* x21_1 = &arg1[2]
    int32_t x9_2 = sub_c21dd4(arg1, &arg1[1], x21_1)
    void* x11_1 = &arg1[3]
    int32_t x8_10
    
    if (x11_1 == arg2)
    label_c22310:
        x8_10 = 1
    else
        int64_t x8_4 = 0
        x9_2 = 0
        
        while (true)
            void* x10_2 = x21_1
            float v0_1 = *(x11_1 + 4)
            float v1_1 = *(x10_2 + 4)
            x21_1 = x11_1
            v0_1 - v1_1
            int32_t x11_2
            
            if (not(v0_1 >= v1_1))
                x11_2 = *x21_1
            label_c221e4:
                *x21_1 = *x10_2
                void* x12_1 = arg1
                
                if (x10_2 != arg1)
                    int64_t x12_3 = x8_4
                    
                    while (true)
                        void* x13_1 = arg1 + x12_3
                        v1_1 = *(x13_1 + 0xc)
                        v1_1 - v0_1
                        
                        if (not(v1_1 > v0_1))
                            if (v1_1 < v0_1)
                                x12_1 = x10_2
                                break
                            
                            void* x14_2 = arg1 + x12_3
                            
                            if (x11_2 s>= *(x14_2 + 8))
                                x12_1 = x14_2 + 0x10
                                break
                        
                        x12_3 -= 8
                        x10_2 -= 8
                        *(x13_1 + 0x10) = *(x13_1 + 8)
                        
                        if (x12_3 == -0x10)
                            x12_1 = arg1
                            break
                
                x9_2 += 1
                *x12_1 = x11_2
                *(x12_1 + 4) = v0_1
                
                if (x9_2 == 8)
                    x8_10 = 0
                    x9_2 = x21_1 + 8 == arg2 ? 1 : 0
                    break
            else if (not(v0_1 > v1_1))
                x11_2 = *x21_1
                
                if (x11_2 s< *x10_2)
                    goto label_c221e4
            x11_1 = x21_1 + 8
            x8_4 += 8
            
            if (x11_1 == arg2)
                goto label_c22310
    
    x8_2 = x8_10 | x9_2
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            float v0 = *(arg2 - 4)
            float v1 = *(arg1 + 4)
            v0 - v1
            
            if (v0 >= v1 && (v0 > v1 || *(arg2 - 8) s>= *arg1))
                x8_2 = 1
            else
                uint64_t x9_1 = *arg1
                *arg1 = *(arg2 - 8)
                *(arg2 - 8) = x9_1
                x8_2 = 1
        case 3
            sub_c21dd4(arg1, &arg1[1], arg2 - 8)
            x8_2 = 1
        case 4
            sub_c21dd4(arg1, &arg1[1], &arg1[2])
            uint128_t v0_2
            v0_2.d = *(arg2 - 4)
            float v1_2 = *(arg1 + 0x14)
            v0_2.d f- v1_2
            
            if (v0_2.d f>= v1_2 && (v0_2.d f> v1_2 || *(arg2 - 8) s>= arg1[2].d))
                x8_2 = 1
            else
                int64_t x9_3 = arg1[2]
                arg1[2] = *(arg2 - 8)
                *(arg2 - 8) = x9_3
                v0_2.d = *(arg1 + 0x14)
                v1_2 = *(arg1 + 0xc)
                v0_2.d f- v1_2
                
                if (v0_2.d f>= v1_2 && (v0_2.d f> v1_2 || arg1[2].d s>= arg1[1].d))
                    x8_2 = 1
                else
                    v0_2 = *(arg1 + 8)
                    v1_2 = *(arg1 + 4)
                    uint64_t x8_6 = v0_2:8.q
                    float v2 = float.s((x8_6 u>> 0x20).d)
                    v1_2 - v2
                    *(arg1 + 8) = vextq_s8(v0_2, v0_2, 8)
                    
                    if (v1_2 <= v2 && (v1_2 < v2 || *arg1 s<= x8_6.d))
                        x8_2 = 1
                    else
                        uint64_t x9_5 = *arg1
                        *arg1 = x8_6
                        arg1[1] = x9_5
                        x8_2 = 1
        case 5
            sub_c21f14(arg1, &arg1[1], &arg1[2], &arg1[3], arg2 - 8)
            x8_2 = 1

return zx.q(x8_2) & 1
