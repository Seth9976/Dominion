// 函数: _Z8Bin2DAddR5Bin2DRK4Vec2fi
// 地址: 0xc110b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg3
float v1 = *arg2
arg3 = *(arg1 + 0x28)
float v3 = v1 - v8
float v2 = arg3 + float.s(0x3727c5ac)
Bin2D& x20 = arg1
uint32_t var_64
uint32_t x23
float v4

if (v2 >= v3)
    var_64 = 0
    v1 = v1 + v8
    
    if (v2 < v1)
    label_c11194:
        
        if (*(x20 + 0x30) + float.s(0xb727c5ac) <= v1)
            x23 = *(x20 + 0x40) - 1
        else
            float temp0_3 = vrndm_f32((v1 - arg3) / *(x20 + 0x38))
            
            if (temp0_3 < 0f)
                v1 = fconvert.s(-0.5f)
            else
                v1 = fconvert.s(0.5f)
            
            x23 = vcvts_s32_f32(temp0_3 + v1)
    else
        x23 = 0
else
    uint32_t x8_1
    
    if (*(x20 + 0x30) + float.s(0xb727c5ac) <= v3)
        x8_1 = *(x20 + 0x40) - 1
    else
        float temp0_1 = vrndm_f32((v3 - arg3) / *(x20 + 0x38))
        
        if (temp0_1 < 0f)
            v4 = fconvert.s(-0.5f)
        else
            v4 = fconvert.s(0.5f)
        
        x8_1 = vcvts_s32_f32(temp0_1 + v4)
    
    var_64 = x8_1
    v1 = v1 + v8
    
    if (not(v2 >= v1))
        goto label_c11194
    
    x23 = 0

v1 = *(arg2 + 4)
arg3 = *(x20 + 0x2c)
v3 = v1 - v8
v2 = arg3 + float.s(0x3727c5ac)
uint32_t x24

if (not(v2 >= v3))
    if (*(x20 + 0x34) + float.s(0xb727c5ac) <= v3)
        x24 = *(x20 + 0x44) - 1
        v1 = v1 + v8
        
        if (v2 < v1)
            goto label_c1126c
        
        goto label_c112bc
    
    float temp0_5 = vrndm_f32((v3 - arg3) / *(x20 + 0x3c))
    
    if (temp0_5 < 0f)
        v4 = fconvert.s(-0.5f)
    else
        v4 = fconvert.s(0.5f)
    
    x24 = vcvts_s32_f32(temp0_5 + v4)
    v1 = v1 + v8
    
    if (v2 < v1)
        goto label_c1126c
    
    goto label_c112bc

x24 = 0
v1 = v1 + v8
uint32_t x25

if (not(v2 >= v1))
label_c1126c:
    
    if (*(x20 + 0x34) + float.s(0xb727c5ac) <= v1)
        x25 = *(x20 + 0x44) - 1
        
        if (x24 s<= x25)
            goto label_c112e0
    else
        float temp0_7 = vrndm_f32((v1 - arg3) / *(x20 + 0x3c))
        
        if (temp0_7 < 0f)
            v1 = fconvert.s(-0.5f)
        else
            v1 = fconvert.s(0.5f)
        
        x25 = vcvts_s32_f32(temp0_7 + v1)
        
        if (x24 s<= x25)
            goto label_c112e0
    
    return 

label_c112bc:
x25 = 0

if (x24 s> 0)
    return 

label_c112e0:

if (var_64 s> x23)
    return 

bool cond:6_1

do
    uint32_t x28_1 = var_64
    bool cond:5_1
    
    do
        int32_t x22_1 = *(x20 + 0x40)
        void* x8_7 = *x20
        void** fp_1 = *(x20 + 0x18)
        *(x20 + 0x14) += 1
        
        if (x8_7 == 0)
            arg1 = XMalloc(8 + *(x20 + 0x10) * 0x18)
            *arg1 = *(x20 + 8)
            int32_t x9_6 = *(x20 + 0x10)
            x8_7 = *x20
            *(x20 + 8) = arg1
            
            if (x9_6 s>= 1)
                int64_t i = 0
                void** x9_7 = arg1 + 8
                
                do
                    void** x11_1 = x9_7
                    *x9_7 = x8_7
                    x9_7 = &x9_7[3]
                    i += 1
                    x8_7 = x11_1
                while (i s< sx.q(*(x20 + 0x10)))
                
                x8_7 = x9_7 - 0x18
            
            *x20 = x8_7
        
        *x20 = *x8_7
        cond:5_1 = x28_1 == x23
        x28_1 += 1
        *(x8_7 + 8) = *arg2
        int64_t x9_3 = fp_1[sx.q(x28_1 + x22_1 * x24)]
        *(x8_7 + 0x14) = arg4
        *(x8_7 + 0x10) = v8
        *x8_7 = x9_3
        fp_1[sx.q(x28_1 + x22_1 * x24)] = x8_7
    while (not(cond:5_1))
    cond:6_1 = x24 == x25
    x24 += 1
while (not(cond:6_1))
