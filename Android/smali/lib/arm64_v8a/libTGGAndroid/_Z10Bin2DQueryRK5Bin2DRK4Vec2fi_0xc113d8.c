// 函数: _Z10Bin2DQueryRK5Bin2DRK4Vec2fi
// 地址: 0xc113d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *arg2
float v2 = *(arg1 + 0x28)
float v4 = v1 - arg3
float v3 = v2 + float.s(0x3727c5ac)
uint32_t x8
uint32_t x9
float v5

if (v3 >= v4)
    x8 = 0
    v4 = v1 + arg3
    
    if (v3 >= v4)
        x9 = 0
    else
    label_c11474:
        
        if (*(arg1 + 0x30) + float.s(0xb727c5ac) <= v4)
            x9 = *(arg1 + 0x40) - 1
        else
            float temp0_3 = vrndm_f32((v4 - v2) / *(arg1 + 0x38))
            
            if (temp0_3 < 0f)
                v3 = fconvert.s(-0.5f)
            else
                v3 = fconvert.s(0.5f)
            
            x9 = vcvts_s32_f32(temp0_3 + v3)
else if (*(arg1 + 0x30) + float.s(0xb727c5ac) <= v4)
    x8 = *(arg1 + 0x40) - 1
    v4 = v1 + arg3
    
    if (v3 < v4)
        goto label_c11474
    
    x9 = 0
else
    float temp0_1 = vrndm_f32((v4 - v2) / *(arg1 + 0x38))
    
    if (temp0_1 < 0f)
        v5 = fconvert.s(-0.5f)
    else
        v5 = fconvert.s(0.5f)
    
    x8 = vcvts_s32_f32(temp0_1 + v5)
    v4 = v1 + arg3
    
    if (v3 < v4)
        goto label_c11474
    
    x9 = 0

v2 = *(arg2 + 4)
v3 = *(arg1 + 0x2c)
v5 = v2 - arg3
v4 = v3 + float.s(0x3727c5ac)
uint32_t x16

if (not(v4 >= v5))
    if (*(arg1 + 0x34) + float.s(0xb727c5ac) <= v5)
        x16 = *(arg1 + 0x44) - 1
        v5 = v2 + arg3
        
        if (v4 < v5)
            goto label_c11568
        
        goto label_c115b8
    
    float temp0_5 = vrndm_f32((v5 - v3) / *(arg1 + 0x3c))
    float v6
    
    if (temp0_5 < 0f)
        v6 = fconvert.s(-0.5f)
    else
        v6 = fconvert.s(0.5f)
    
    x16 = vcvts_s32_f32(temp0_5 + v6)
    v5 = v2 + arg3
    
    if (v4 < v5)
        goto label_c11568
    
    goto label_c115b8

x16 = 0
v5 = v2 + arg3
int32_t x10_2
uint32_t x17

if (v4 >= v5)
label_c115b8:
    x17 = 0
    
    if (x16 s<= 0)
    label_c115e8:
        int64_t x12_1 = *(arg1 + 0x18)
        x10_2 = 0
        int64_t x14_1 = sx.q(x9)
        int64_t x0_1 = sx.q(x16)
        
        do
            if (x8 s<= x9)
                int64_t x1 = x0_1 * sx.q(*(arg1 + 0x40))
                int32_t x3_1 = 0
                int64_t x4_1 = sx.q(x8)
                
                if (arg4 != 0)
                    while (true)
                        void** x5_2 = *(x12_1 + ((x1 + x4_1) << 3))
                        
                        if (x5_2 != 0)
                            while (true)
                                if (*(x5_2 + 0x14) == arg4)
                                    v3 = x5_2[1].d f- v1
                                    v4 = *(x5_2 + 0xc) - v2
                                    v5 = x5_2[2].d f+ arg3
                                    
                                    if (not(v3 * v3 + v4 * v4 > v5 * v5))
                                        break
                                
                                x5_2 = *x5_2
                                
                                if (x5_2 == 0)
                                    goto label_c11640
                            
                            break
                        
                    label_c11640:
                        bool cond:5_1 = x4_1 s>= x14_1
                        x4_1 += 1
                        x3_1 = cond:5_1 ? 1 : 0
                        
                        if (x9 + 1 == x4_1.d)
                            goto label_c11610
                else
                    while (true)
                        void** x5_4 = *(x12_1 + ((x1 + x4_1) << 3))
                        
                        if (x5_4 != 0)
                            while (true)
                                v3 = x5_4[1].d f- v1
                                v4 = *(x5_4 + 0xc) - v2
                                v5 = x5_4[2].d f+ arg3
                                
                                if (v3 * v3 + v4 * v4 <= v5 * v5)
                                    break
                                
                                x5_4 = *x5_4
                                
                                if (x5_4 == 0)
                                    goto label_c116a8
                            
                            break
                        
                    label_c116a8:
                        bool cond:6_1 = x4_1 s>= x14_1
                        x4_1 += 1
                        x3_1 = cond:6_1 ? 1 : 0
                        
                        if (x9 + 1 == x4_1.d)
                            goto label_c11610
                
                if ((x3_1 & 1) == 0)
                    break
            
        label_c11610:
            bool cond:4_1 = x0_1 s>= sx.q(x17)
            x0_1 += 1
            x10_2 = cond:4_1 ? 1 : 0
        while (x17 + 1 != x0_1.d)
    else
        x10_2 = 1
else
label_c11568:
    
    if (*(arg1 + 0x34) + float.s(0xb727c5ac) <= v5)
        x17 = *(arg1 + 0x44) - 1
        
        if (x16 s<= x17)
            goto label_c115e8
        
        x10_2 = 1
    else
        float temp0_7 = vrndm_f32((v5 - v3) / *(arg1 + 0x3c))
        
        if (temp0_7 < 0f)
            v4 = fconvert.s(-0.5f)
        else
            v4 = fconvert.s(0.5f)
        
        x17 = vcvts_s32_f32(temp0_7 + v4)
        
        if (x16 s<= x17)
            goto label_c115e8
        
        x10_2 = 1
return zx.q(not.d(x10_2)) & 1
