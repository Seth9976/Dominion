// 函数: _Z13Draw3DCornersP4Vec3S0_RK9ColorRgba
// 地址: 0xc937f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Vec3* x20 = arg2
int32_t x1 = (data_23e4f78).d
int128_t v2
v2.q = *arg1
int128_t v3
v3.q = *(arg1 + 0x54)
int32_t v4 = *(arg1 + 8)
float v0 = *(arg1 + 0x5c)
int64_t* x8

if (*(arg3 + 0xc) < fconvert.s(1f))
    x8 = &data_23e4f98
else
    x8 = &data_23e4f88

XAsset* x2 = *x8
int128_t v8
v8.d = 0x3f000000
v8:4.d = 0x3f000000
int128_t v1_1 = vadd_f32(v2, v3)
v2.d = v4 f+ v0
int64_t v9
v9.d = fconvert.s(0.5f)
v2.d = v2.d f* v9.d
v1_1.d = vmul_f32(v1_1, v8, 0):4.d
XAsset* entry_x3
void* result = Draw3DQuadGroup(6, x1, x2, entry_x3)
int64_t i = 0
void* const x9 = &data_8284c0

do
    int32_t x14_8 = *(x20 + 8)
    int64_t x15_3 = *x20
    int64_t* x14_9 = arg1 + sx.q(*(x9 - 4)) * 0xc
    int64_t* x16_3 = result + i
    x16_3[1].d = x14_9[1].d
    *x16_3 = *x14_9
    *(x16_3 + 0x14) = x14_8
    *(x16_3 + 0xc) = x15_3
    float v0_2 = *arg3
    uint32_t x14_12
    
    if (not(v0_2 <= float.s(0x3f7fbe77)))
        x14_12 = 0xff
    else if (v0_2 >= float.s(0x3a83126f))
        x14_12 = vcvts_s32_f32(v0_2 * float.s(0x437f0000) f+ v9.d)
    else
        x14_12 = 0
    
    float v2_1 = *(arg3 + 4)
    float v1_2 = *(arg3 + 8)
    v0_2 = *(arg3 + 0xc)
    uint32_t x15_6
    
    if (v2_1 <= float.s(0x3f7fbe77))
        if (v2_1 >= float.s(0x3a83126f))
            x15_6 = (zx.q(vcvts_s32_f32(v2_1 * float.s(0x437f0000) f+ v9.d)) << 8).d
            
            if (v1_2 <= float.s(0x3f7fbe77))
                goto label_c9399c
            
            goto label_c939dc
        
        x15_6 = 0
        
        if (v1_2 > float.s(0x3f7fbe77))
            goto label_c939dc
        
        goto label_c9399c
    
    x15_6 = 0xff00
    uint32_t x16_4
    uint32_t x17_3
    
    if (v1_2 <= float.s(0x3f7fbe77))
    label_c9399c:
        
        if (v1_2 >= float.s(0x3a83126f))
            x16_4 = (zx.q(vcvts_s32_f32(v1_2 * float.s(0x437f0000) f+ v9.d)) << 0x10).d
            
            if (not(v0_2 > float.s(0x3f7fbe77)))
                goto label_c93a1c
            
            x17_3 = -0x1000000
        else
            x16_4 = 0
            
            if (not(v0_2 > float.s(0x3f7fbe77)))
                goto label_c93a1c
            
            x17_3 = -0x1000000
    else
    label_c939dc:
        x16_4 = 0xff0000
        
        if (v0_2 <= float.s(0x3f7fbe77))
        label_c93a1c:
            
            if (v0_2 >= float.s(0x3a83126f))
                x17_3 = (zx.q(vcvts_s32_f32(v0_2 * float.s(0x437f0000) f+ v9.d)) << 0x18).d
            else
                x17_3 = 0
        else
            x17_3 = -0x1000000
    
    uint32_t x14_16 = x17_3 | x15_6 | x14_12 | x16_4
    void* x15_9 = result + i
    *(x15_9 + 0x20) = 0x3f0000003f000000
    *(x15_9 + 0x18) = (x14_16 & 0xff00ff00) | x16_4 u>> 0x10 | (x14_16 & 0xff) << 0x10
    *(x15_9 + 0x1c) = 0
    int64_t* x14_21 = arg1 + sx.q(*(x9 - 2)) * 0xc
    int64_t x14_22 = *x14_21
    *(x15_9 + 0x38) = x14_21[1].d
    *(x15_9 + 0x30) = x14_22
    *(x15_9 + 0x44) = x14_8
    *(x15_9 + 0x3c) = x15_3
    float v3_1 = *arg3
    v2_1 = *(arg3 + 4)
    v1_2 = *(arg3 + 8)
    v0_2 = *(arg3 + 0xc)
    uint32_t x14_24
    
    if (v3_1 <= float.s(0x3f7fbe77))
        if (v3_1 >= float.s(0x3a83126f))
            x14_24 = vcvts_s32_f32(v3_1 * float.s(0x437f0000) f+ v9.d)
            
            if (v2_1 <= float.s(0x3f7fbe77))
                goto label_c93adc
            
            goto label_c93b18
        
        x14_24 = 0
        
        if (v2_1 > float.s(0x3f7fbe77))
            goto label_c93b18
        
        goto label_c93adc
    
    x14_24 = 0xff
    uint32_t x15_10
    
    if (v2_1 <= float.s(0x3f7fbe77))
    label_c93adc:
        
        if (v2_1 >= float.s(0x3a83126f))
            x15_10 = (zx.q(vcvts_s32_f32(v2_1 * float.s(0x437f0000) f+ v9.d)) << 8).d
            
            if (v1_2 > float.s(0x3f7fbe77))
                goto label_c93b28
            
            goto label_c93b64
        
        x15_10 = 0
        
        if (v1_2 > float.s(0x3f7fbe77))
            goto label_c93b28
        
        goto label_c93b64
    
label_c93b18:
    x15_10 = 0xff00
    uint32_t x16_9
    uint32_t x17_7
    
    if (v1_2 <= float.s(0x3f7fbe77))
    label_c93b64:
        
        if (v1_2 >= float.s(0x3a83126f))
            x16_9 = (zx.q(vcvts_s32_f32(v1_2 * float.s(0x437f0000) f+ v9.d)) << 0x10).d
            
            if (v0_2 <= float.s(0x3f7fbe77))
                goto label_c93b80
            
            x17_7 = -0x1000000
        else
            x16_9 = 0
            
            if (not(v0_2 > float.s(0x3f7fbe77)))
                goto label_c93b80
            
            x17_7 = -0x1000000
    else
    label_c93b28:
        x16_9 = 0xff0000
        
        if (v0_2 <= float.s(0x3f7fbe77))
        label_c93b80:
            
            if (v0_2 >= float.s(0x3a83126f))
                x17_7 = (zx.q(vcvts_s32_f32(v0_2 * float.s(0x437f0000) f+ v9.d)) << 0x18).d
            else
                x17_7 = 0
        else
            x17_7 = -0x1000000
    
    uint32_t x14_28 = x17_7 | x15_10 | x14_24 | x16_9
    void* x15_13 = result + i
    *(x15_13 + 0x50) = 0x3f0000003f000000
    *(x15_13 + 0x48) = (x14_28 & 0xff00ff00) | x16_9 u>> 0x10 | (x14_28 & 0xff) << 0x10
    *(x15_13 + 0x4c) = 0
    int64_t* x14_33 = arg1 + sx.q(*x9) * 0xc
    int64_t x14_34 = *x14_33
    *(x15_13 + 0x68) = x14_33[1].d
    *(x15_13 + 0x60) = x14_34
    *(x15_13 + 0x74) = x14_8
    *(x15_13 + 0x6c) = x15_3
    v3_1 = *arg3
    v2_1 = *(arg3 + 4)
    v1_2 = *(arg3 + 8)
    v0_2 = *(arg3 + 0xc)
    uint32_t x14_36
    
    if (v3_1 <= float.s(0x3f7fbe77))
        if (v3_1 >= float.s(0x3a83126f))
            x14_36 = vcvts_s32_f32(v3_1 * float.s(0x437f0000) f+ v9.d)
            
            if (v2_1 <= float.s(0x3f7fbe77))
                goto label_c93c6c
            
            goto label_c93ca8
        
        x14_36 = 0
        
        if (v2_1 > float.s(0x3f7fbe77))
            goto label_c93ca8
        
        goto label_c93c6c
    
    x14_36 = 0xff
    uint32_t x15_14
    
    if (v2_1 <= float.s(0x3f7fbe77))
    label_c93c6c:
        
        if (v2_1 >= float.s(0x3a83126f))
            x15_14 = (zx.q(vcvts_s32_f32(v2_1 * float.s(0x437f0000) f+ v9.d)) << 8).d
            
            if (v1_2 > float.s(0x3f7fbe77))
                goto label_c93cb8
            
            goto label_c93cf4
        
        x15_14 = 0
        
        if (v1_2 > float.s(0x3f7fbe77))
            goto label_c93cb8
        
        goto label_c93cf4
    
label_c93ca8:
    x15_14 = 0xff00
    uint32_t x16_14
    uint32_t x17_11
    
    if (v1_2 <= float.s(0x3f7fbe77))
    label_c93cf4:
        
        if (v1_2 >= float.s(0x3a83126f))
            x16_14 = (zx.q(vcvts_s32_f32(v1_2 * float.s(0x437f0000) f+ v9.d)) << 0x10).d
            
            if (v0_2 <= float.s(0x3f7fbe77))
                goto label_c93d10
            
            x17_11 = -0x1000000
        else
            x16_14 = 0
            
            if (not(v0_2 > float.s(0x3f7fbe77)))
                goto label_c93d10
            
            x17_11 = -0x1000000
    else
    label_c93cb8:
        x16_14 = 0xff0000
        
        if (v0_2 <= float.s(0x3f7fbe77))
        label_c93d10:
            
            if (v0_2 >= float.s(0x3a83126f))
                x17_11 = (zx.q(vcvts_s32_f32(v0_2 * float.s(0x437f0000) f+ v9.d)) << 0x18).d
            else
                x17_11 = 0
        else
            x17_11 = -0x1000000
    
    uint32_t x14_40 = x17_11 | x15_14 | x14_36 | x16_14
    void* x15_17 = result + i
    *(x15_17 + 0x80) = 0x3f0000003f000000
    *(x15_17 + 0x78) = (x14_40 & 0xff00ff00) | x16_14 u>> 0x10 | (x14_40 & 0xff) << 0x10
    *(x15_17 + 0x7c) = 0
    int64_t* x14_45 = arg1 + sx.q(*(x9 + 2)) * 0xc
    int64_t x14_46 = *x14_45
    *(x15_17 + 0x98) = x14_45[1].d
    *(x15_17 + 0x90) = x14_46
    *(x15_17 + 0xa4) = x14_8
    *(x15_17 + 0x9c) = x15_3
    v3_1 = *arg3
    v2_1 = *(arg3 + 4)
    v1_2 = *(arg3 + 8)
    v0_2 = *(arg3 + 0xc)
    uint32_t x14_1
    
    if (v3_1 <= float.s(0x3f7fbe77))
        if (v3_1 >= float.s(0x3a83126f))
            x14_1 = vcvts_s32_f32(v3_1 * float.s(0x437f0000) f+ v9.d)
            
            if (v2_1 <= float.s(0x3f7fbe77))
                goto label_c93dfc
            
            goto label_c93e38
        
        x14_1 = 0
        
        if (v2_1 > float.s(0x3f7fbe77))
            goto label_c93e38
        
        goto label_c93dfc
    
    x14_1 = 0xff
    uint32_t x15_1
    
    if (v2_1 <= float.s(0x3f7fbe77))
    label_c93dfc:
        
        if (v2_1 >= float.s(0x3a83126f))
            x15_1 = (zx.q(vcvts_s32_f32(v2_1 * float.s(0x437f0000) f+ v9.d)) << 8).d
            
            if (v1_2 > float.s(0x3f7fbe77))
                goto label_c93e48
            
            goto label_c93e84
        
        x15_1 = 0
        
        if (v1_2 > float.s(0x3f7fbe77))
            goto label_c93e48
        
        goto label_c93e84
    
label_c93e38:
    x15_1 = 0xff00
    uint32_t x16_1
    uint32_t x17_1
    
    if (v1_2 <= float.s(0x3f7fbe77))
    label_c93e84:
        
        if (v1_2 >= float.s(0x3a83126f))
            x16_1 = (zx.q(vcvts_s32_f32(v1_2 * float.s(0x437f0000) f+ v9.d)) << 0x10).d
            
            if (not(v0_2 > float.s(0x3f7fbe77)))
                goto label_c93ec8
            
            x17_1 = -0x1000000
        else
            x16_1 = 0
            
            if (not(v0_2 > float.s(0x3f7fbe77)))
                goto label_c93ec8
            
            x17_1 = -0x1000000
    else
    label_c93e48:
        x16_1 = 0xff0000
        
        if (v0_2 > float.s(0x3f7fbe77))
            x17_1 = -0x1000000
        else
        label_c93ec8:
            
            if (v0_2 >= float.s(0x3a83126f))
                x17_1 = (zx.q(vcvts_s32_f32(v0_2 * float.s(0x437f0000) f+ v9.d)) << 0x18).d
            else
                x17_1 = 0
    
    uint32_t x14_4 = x17_1 | x15_1 | x14_1 | x16_1
    void* x15_2 = result + i
    i += 0xc0
    x20 += 0xc
    x9 += 8
    *(x15_2 + 0xb0) = 0x3f0000003f000000
    *(x15_2 + 0xa8) = (x14_4 & 0xff00ff00) | x16_1 u>> 0x10 | (x14_4 & 0xff) << 0x10
    *(x15_2 + 0xac) = 0
while (i != 0x480)

return result
