// 函数: _Z18UI2OffsetActiveSetRK4Vec2
// 地址: 0x102e748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v13
int64_t var_80 = v13
int64_t v12
int64_t var_78 = v12
int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int64_t v9
int64_t var_60 = v9
*(gUI2Editor + 0x88069) = 1
float v0 = GameGetTimeSimulation()
float var_10a0
float var_a0

if (zx.d(*(gUI2Editor + 0x7056)) != 0)
    AttribMap* x19_3
    
    if ((AppIsKeyDown(0) & 1) != 0)
        UI2* x0_2 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        float v0_2 = UI2PropDynamic<float>::Eval(v0)
        float v0_4 = UI2PropDynamic<float>::Eval(v0)
        float v0_6 = UI2PropDynamic<float>::Eval(v0)
        float v0_8 = UI2PropDynamic<float>::Eval(v0)
        float v2_1 = *arg1
        float v3_1 = *(arg1 + 4)
        float v4_1 = fconvert.s(0.5f)
        float v6_1 = v0_2 + v2_1
        float v5_1 = fconvert.s(-0.5f)
        float v7_1 = v0_4 + v3_1
        float v1_1 = v0_2 + v0_6 + v2_1 - v6_1
        
        v2_1 = v6_1 < 0f ? v5_1 : v4_1
        
        v0_8 = v0_4 + v0_8 + v3_1 - v7_1
        
        v3_1 = v7_1 < 0f ? v5_1 : v4_1
        
        uint32_t temp0_1 = vcvts_s32_f32(v6_1 + v2_1)
        v2_1 = v7_1 + v3_1
        
        v3_1 = v1_1 < 0f ? v5_1 : v4_1
        
        uint32_t temp0_2 = vcvts_s32_f32(v2_1)
        
        v2_1 = v0_8 < 0f ? v5_1 : v4_1
        
        v12.d = float.s(temp0_1)
        uint32_t temp0_3 = vcvts_s32_f32(v1_1 + v3_1)
        uint32_t temp0_4 = vcvts_s32_f32(v0_8 + v2_1)
        v13.d = float.s(temp0_3)
        int64_t v0_10 = UI2PropDynamic<float>::Eval(v0)
        int64_t v0_12 = UI2PropDynamic<float>::Eval(v0)
        int64_t v0_14 = UI2PropDynamic<float>::Eval(v0)
        float v0_16 = UI2PropDynamic<float>::Eval(v0)
        v14.d = v0_10.d f+ v0_14.d
        float v1_2 = v0 - *(x0_2 + 0x674)
        v11.d = v0_12.d f+ v0_16
        float v2_2
        float v3_2
        
        if (v1_2 < *(x0_2 + 0x664) + *(x0_2 + 0x660) || *(x0_2 + 0x654) s> 1)
            v0_16, v1_2, v2_2, v3_2 = PropEval<RectF>(x0_2 + 0x558, x0_2 + 0x5dc, x0_2 + 0x660, 
                v0 - *(x0_2 + 0x670), v1_2, v1_2)
        else
            v0_16 = *(x0_2 + 0x5dc)
            v1_2 = *(x0_2 + 0x5e0)
            v2_2 = *(x0_2 + 0x5e4)
            v3_2 = *(x0_2 + 0x5e8)
        
        float v7_2 = v14.d f- v0_10.d
        float v16_1 = v11.d f- v0_12.d
        v11.d = v0_10.d f+ v7_2 * v0_16
        float v4_2 = float.s(temp0_2)
        float v5_2 = v12.d f+ v13.d
        float v8 = v0_10.d f+ v7_2 * v2_2
        v10.d = v0_12.d f+ v16_1 * v1_2
        
        if (not(v11.d f>= v12.d))
            v5_2 = v11.d f+ v5_2 f- v12.d
            v12 = v11
        else if (not(v5_2 >= v8))
            v12.d = v8 - (v5_2 f- v12.d)
            v5_2 = v8
        
        v1_2 = v4_2 + float.s(temp0_4)
        v9.d = v0_12.d f+ v16_1 * v3_2
        
        if (not(v10.d f>= v4_2))
            v1_2 = v10.d f+ v1_2 - v4_2
            v4_2 = v10.d
        else if (not(v1_2 f>= v9.d))
            v4_2 = v9.d f- (v1_2 - v4_2)
            v1_2 = v9.d
        
        var_10a0 = v12.d
        *(x0_2 + 0x1370) = 0
        *(x0_2 + 0x1694) = 0
        AttribMap* x0_32 = GetEdittedMap(x0_2, 0x76)
        AttribMapSetDef(*gUI2AttribTable, x0_32, 0x76, &var_10a0)
        AttribMapGetDef(*gUI2AttribTable, x0_32, *macro_ptr_RectF, 0x76)
        float v0_33 = var_10a0
        float v1_5 = v5_2 - v0_33
        float v3_5 = v1_2 - v4_2
        var_a0 = (v11.d f- v0_33) / v1_5
        float var_9c_2 = (v10.d f- v4_2) / v3_5
        float var_98_2 = (v8 - v0_33) / v1_5
        float var_94_2 = (v9.d f- v4_2) / v3_5
        *(x0_2 + 0x1370) = 0
        *(x0_2 + 0x1694) = 0
        x19_3 = GetEdittedMap(x0_2, 0x80)
        AttribMapSetDef(*gUI2AttribTable, x19_3, 0x80, &var_a0)
        return AttribMapGetDef(*gUI2AttribTable, x19_3, *macro_ptr_RectF, 0x80)
    
    if (zx.d(*(gUI2Editor + 0x7056)) != 0 && (AppIsKeyDown(0) & 1) == 0)
        UI2* x0_25 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        float v0_26 = UI2PropDynamic<float>::Eval(v0)
        float v0_28 = UI2PropDynamic<float>::Eval(v0)
        float v0_30 = UI2PropDynamic<float>::Eval(v0)
        float v0_32 = UI2PropDynamic<float>::Eval(v0)
        v12.d = v0_26 + v0_30
        float v1_4 = v0 - *(x0_25 + 0x674)
        float v11_2 = v0_28 + v0_32
        float v2_5
        float v3_4
        
        if (v1_4 < *(x0_25 + 0x664) + *(x0_25 + 0x660) || *(x0_25 + 0x654) s> 1)
            v0_32, v1_4, v2_5, v3_4 = PropEval<RectF>(x0_25 + 0x558, x0_25 + 0x5dc, x0_25 + 0x660, 
                v0 - *(x0_25 + 0x670), v1_4, v1_4)
        else
            v0_32 = *(x0_25 + 0x5dc)
            v1_4 = *(x0_25 + 0x5e0)
            v2_5 = *(x0_25 + 0x5e4)
            v3_4 = *(x0_25 + 0x5e8)
        
        float v4_4 = v12.d f- v0_26
        float v5_4 = v11_2 - v0_28
        v0_32 = v4_4 * v0_32
        v2_5 = v4_4 * v2_5
        v1_4 = v5_4 * v1_4
        v3_4 = v5_4 * v3_4
        v4_4 = *arg1
        v5_4 = *(arg1 + 4)
        v0_32 = v0_26 + v0_32 + v4_4
        float v6_3 = fconvert.s(0.5f)
        float v7_3 = fconvert.s(-0.5f)
        v1_4 = v0_28 + v1_4 + v5_4
        v2_5 = v4_4 + v0_26 + v2_5 - v0_32
        
        v4_4 = v0_32 < 0f ? v7_3 : v6_3
        
        v3_4 = v5_4 + v0_28 + v3_4 - v1_4
        v0_32 = v0_32 + v4_4
        
        v4_4 = v1_4 < 0f ? v7_3 : v6_3
        
        uint32_t temp0_9 = vcvts_s32_f32(v0_32)
        v0_32 = v1_4 + v4_4
        
        v1_4 = v2_5 < 0f ? v7_3 : v6_3
        
        v12.d = float.s(temp0_9)
        uint32_t temp0_10 = vcvts_s32_f32(v0_32)
        v0_32 = v2_5 + v1_4
        
        v1_4 = v3_4 < 0f ? v7_3 : v6_3
        
        v13.d = float.s(temp0_10)
        uint32_t temp0_11 = vcvts_s32_f32(v0_32)
        v15.d = v13.d f+ float.s(sx.d(vcvts_s32_f32(v3_4 + v1_4)))
        v14.d = v12.d f+ float.s(temp0_11)
        int64_t v0_35 = UI2PropDynamic<float>::Eval(v0)
        int64_t v0_37 = UI2PropDynamic<float>::Eval(v0)
        int64_t v0_39 = UI2PropDynamic<float>::Eval(v0)
        float v2_8 = v0_37.d f+ UI2PropDynamic<float>::Eval(v0)
        float v0_41 = *RECT1
        float v1_6 = v0_35.d f+ v0_39.d f- v0_35.d
        float v6_4 = (v12.d f- v0_35.d) / v1_6
        float v5_6 = (v14.d f- v0_35.d) / v1_6
        float v3_6 = v2_8 f- v0_37.d
        v2_8 = (v13.d f- v0_37.d) / v3_6
        float v4_6 = v15.d f- v0_37.d
        
        if (v6_4 >= v0_41)
            v1_6 = *(RECT1 + 8)
            
            if (v5_6 <= v1_6)
                v0_41 = v6_4
                v1_6 = v5_6
                v5_6 = *(RECT1 + 4)
                v4_6 = v4_6 / v3_6
                
                if (v2_8 >= v5_6)
                    goto label_102ee7c
                
                v3_6 = v4_6 - v2_8 + v5_6
            else
                v0_41 = v1_6 - (v5_6 - v6_4)
                v5_6 = *(RECT1 + 4)
                v4_6 = v4_6 / v3_6
                
                if (not(v2_8 < v5_6))
                    goto label_102ee7c
                
                v3_6 = v4_6 - v2_8 + v5_6
        else
            v1_6 = v0_41 + v5_6 - v6_4
            v5_6 = *(RECT1 + 4)
            v4_6 = v4_6 / v3_6
            
            if (v2_8 >= v5_6)
            label_102ee7c:
                v3_6 = *(RECT1 + 0xc)
                
                if (v4_6 <= v3_6)
                    v5_6 = v2_8
                    v3_6 = v4_6
                else
                    v5_6 = v3_6 - (v4_6 - v2_8)
            else
                v3_6 = v4_6 - v2_8 + v5_6
        
        var_10a0 = v0_41
        float var_109c_2 = v5_6
        float var_1098_2 = v1_6
        float var_1094_2 = v3_6
        *(x0_25 + 0x1370) = 0
        *(x0_25 + 0x1694) = 0
        x19_3 = GetEdittedMap(x0_25, 0x80)
        AttribMapSetDef(*gUI2AttribTable, x19_3, 0x80, &var_10a0)
        return AttribMapGetDef(*gUI2AttribTable, x19_3, *macro_ptr_RectF, 0x80)

uint64_t i_5 = zx.q(*(gUI2Editor + 0x704c))
uint64_t x22_1 = zx.q(*(gUI2Editor + 0x6010))

if (i_5.d s>= 1)
    int64_t (* x20_2)() = gUI2Editor + 0x604c
    float* x21_2 = &var_10a0
    uint64_t i_3 = i_5
    uint64_t i
    
    do
        uint64_t x0_13 = zx.q(*x20_2)
        x20_2 += 4
        i = i_3
        i_3 -= 1
        *x21_2 = *(UI2GetIndex(x0_13) + 0x19a0)
        x21_2 = &x21_2[1]
    while (i != 1)

int64_t x8_6 = *gUI2
int32_t i_4 = i_5.d
int64_t result = FilterParentsOnlyRec(x8_6 + x22_1 * 0x19a8, &var_10a0, &i_4, false)
uint64_t i_2 = zx.q(i_4)

if (i_2.d s>= 1)
    float* x23_1 = &var_10a0
    v12.d = fconvert.s(0.5f)
    v13.d = fconvert.s(-0.5f)
    uint64_t i_1
    
    do
        uint64_t x8_7 = zx.q(*x23_1)
        x23_1 = &x23_1[1]
        UI2* x20_3 = *gUI2 + x8_7 * 0x19a8
        int64_t v0_18 = UI2PropDynamic<float>::Eval(v0)
        int64_t v0_20 = UI2PropDynamic<float>::Eval(v0)
        int64_t v0_22 = UI2PropDynamic<float>::Eval(v0)
        float v0_24 = UI2PropDynamic<float>::Eval(v0)
        float v1_3 = *arg1
        float v2_4 = *(arg1 + 4)
        float v4_3 = v0_18.d f+ v1_3
        float v5_3 = v0_20.d f+ v2_4
        v0_24 = v0_20.d f+ v0_24 + v2_4
        v1_3 = v0_18.d f+ v0_22.d + v1_3 - v4_3
        
        if (v4_3 < 0f)
            v2_4 = v13.d
        else
            v2_4 = v12.d
        
        v0_24 = v0_24 - v5_3
        float v3_3
        
        if (v5_3 < 0f)
            v3_3 = v13.d
        else
            v3_3 = v12.d
        
        uint32_t temp0_5 = vcvts_s32_f32(v4_3 + v2_4)
        v2_4 = v5_3 + v3_3
        
        if (v1_3 < 0f)
            v3_3 = v13.d
        else
            v3_3 = v12.d
        
        v4_3 = float.s(temp0_5)
        uint32_t temp0_6 = vcvts_s32_f32(v2_4)
        v1_3 = v1_3 + v3_3
        
        if (v0_24 < 0f)
            v2_4 = v13.d
        else
            v2_4 = v12.d
        
        v3_3 = float.s(temp0_6)
        v1_3 = float.s(sx.d(vcvts_s32_f32(v1_3)))
        v0_24 = v3_3 + float.s(sx.d(vcvts_s32_f32(v0_24 + v2_4)))
        var_a0 = v4_3
        float var_9c_1 = v3_3
        float var_98_1 = v4_3 + v1_3
        float var_94_1 = v0_24
        *(x20_3 + 0x1370) = 0
        *(x20_3 + 0x1694) = 0
        AttribMap* x0_21 = GetEdittedMap(x20_3, 0x76)
        AttribMapSetDef(*gUI2AttribTable, x0_21, 0x76, &var_a0)
        result = AttribMapGetDef(*gUI2AttribTable, x0_21, *macro_ptr_RectF, 0x76)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
