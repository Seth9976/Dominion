// 函数: _book_unquantize
// 地址: 0x1083f88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
int32_t x24 = arg1[3].d
int64_t result = 0

if (x24 - 1 u<= 1)
    int64_t x8_1 = arg1[4]
    double value = float.d(x8_1 & 0x1fffff)
    
    if (x8_1.d s< 0)
        value = fneg(value)
    
    double value_1 = ldexp((x8_1.d u>> 0x15 & 0x3ff) - 0x314, value)
    int64_t x8_3 = arg1[5]
    v8.d = fconvert.s(value_1)
    value_1 = float.d(x8_3 & 0x1fffff)
    
    if (x8_3.d s< 0)
        value_1 = fneg(value_1)
    
    double v0 = ldexp((x8_3.d u>> 0x15 & 0x3ff) - 0x314, value_1)
    int64_t i_4 = *arg1
    v9.d = fconvert.s(v0)
    int64_t result_1
    double v0_1
    double v1_2
    double v4_1
    result_1, v0_1, v1_2, v4_1 = calloc(i_4 * sx.q(arg2), 4)
    result = result_1
    
    if (x24 == 1)
        int64_t x22_1 = arg1[1]
        
        if (x22_1 s>= 1)
            v1_2.d = float.s(sx.d(i_4))
            v0_1.d = float.s(sx.d(x22_1))
            v1_2.d = fconvert.s(1f) f/ v1_2.d
            double v0_2
            double v4_2
            v0_2, v4_2 = pow(fconvert.d(v0_1.d), fconvert.d(v1_2.d))
            uint64_t x8_7 = vcvtmd_s64_f64(v0_2)
            uint64_t x8_8
            
            x8_8 = x8_7 s> 1 ? x8_7 : 1
            
            if (i_4 s>= 1)
                goto label_1084168
            
        label_108413c:
            int64_t x11_2 = 1
            int64_t x12_4 = 1
            
            if (1 s> x22_1)
                goto label_10841a8
            
            while (x12_4 s<= x22_1)
            label_10841a8:
                
                do
                    int64_t x11_3
                    
                    x11_3 = x11_2 s<= x22_1 ? 1 : -1
                    
                label_108415c:
                    x8_8 += x11_3
                    
                    if (i_4 s< 1)
                        goto label_108413c
                    
                label_1084168:
                    int64_t x13_2 = 0
                    x12_4 = 1
                    x11_2 = 1
                label_108417c:
                    
                    if (x22_1 s/ x8_8 s< x11_2)
                        x11_3 = -1
                        goto label_108415c
                    
                    x13_2 += 1
                    
                    if (0x7fffffffffffffff s/ (x8_8 + 1) s< x12_4)
                        x12_4 = 0x7fffffffffffffff
                    else
                        x12_4 *= x8_8 + 1
                    
                    x11_2 *= x8_8
                    
                    if (i_4 s> x13_2)
                        goto label_108417c
                while (x11_2 s> x22_1)
            
            if (x22_1 s>= 1)
                int64_t x9_4 = 0
                int64_t x10_2 = 0
                int64_t x11_4 = sx.q(x8_8.d)
                
                do
                    if (arg3 == 0 || zx.d(*(arg1[2] + x9_4)) != 0)
                        if (i_4 s>= 1)
                            int64_t* x13_3 = arg1[7]
                            int32_t x14_3 = *(arg1 + 0x34)
                            int64_t x12_7 = 0
                            int64_t x15_4 = i_4 * x10_2
                            float v2_2 = 0f
                            int32_t x16_2 = 1
                            int64_t i_3 = i_4
                            int64_t i
                            
                            do
                                int64_t x18_2 = x9_4 s/ sx.q(x16_2)
                                v4_2.d = float.s(sx.d(*(x13_3 + (
                                    zx.q(x18_2.d - (x18_2 s/ x11_4).d * x11_4.d) << 0x20
                                    s>> 0x1d))))
                                v4_2.d = fabs(v4_2.d)
                                double v3_2
                                v3_2.d = fconvert.s(vfma_f64(fconvert.d(v2_2) + fconvert.d(v8.d), 
                                    fconvert.d(v4_2.d), fconvert.d(v9.d)))
                                
                                if (x14_3 != 0)
                                    v2_2 = v3_2.d
                                
                                int64_t x18_6 = x15_4
                                
                                if (arg3 != 0)
                                    x18_6 = x12_7 + i_4 * sx.q(*(arg3 + (x10_2 << 2)))
                                
                                x16_2 *= x8_8.d
                                x12_7 += 1
                                i = i_3
                                i_3 -= 1
                                x15_4 += 1
                                *(result + (x18_6 << 2)) = v3_2.d
                            while (i != 1)
                        
                        x10_2 += 1
                    
                    x9_4 += 1
                while (x9_4 != x22_1)
    else if (x24 == 2)
        int64_t x8_6 = arg1[1]
        
        if (x8_6 s>= 1)
            int64_t x9_3 = 0
            int64_t x10_1 = 0
            int64_t x11_1 = 0
            
            do
                if (arg3 == 0 || zx.d(*(arg1[2] + x10_1)) != 0)
                    if (i_4 s>= 1)
                        int32_t x13_1 = *(arg1 + 0x34)
                        int64_t x12_3 = 0
                        int64_t x14_1 = i_4 * x11_1
                        int64_t* x15_2 = arg1[7] + (x9_3 << 3)
                        float v2_1 = 0f
                        int64_t i_2 = i_4
                        int64_t i_1
                        
                        do
                            v4_1.d = float.s(sx.d(*x15_2))
                            v4_1.d = fabs(v4_1.d)
                            double v3_1
                            v3_1.d = fconvert.s(vfma_f64(fconvert.d(v2_1) + fconvert.d(v8.d), 
                                fconvert.d(v4_1.d), fconvert.d(v9.d)))
                            
                            if (x13_1 != 0)
                                v2_1 = v3_1.d
                            
                            int64_t x17_2 = x14_1
                            
                            if (arg3 != 0)
                                x17_2 = x12_3 + i_4 * sx.q(*(arg3 + (x11_1 << 2)))
                            
                            x12_3 += 1
                            i_1 = i_2
                            i_2 -= 1
                            x15_2 = &x15_2[1]
                            x14_1 += 1
                            *(result + (x17_2 << 2)) = v3_1.d
                        while (i_1 != 1)
                    
                    x11_1 += 1
                
                x10_1 += 1
                x9_3 += i_4
            while (x10_1 s< x8_6)

return result
