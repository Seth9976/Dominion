// 函数: _Z14UI2AlignOffsetRK4Vec2
// 地址: 0x103cd10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

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
int64_t v8
int64_t var_58 = v8
int64_t result
int64_t v0
result, v0 = GameGetTimeSimulation()

if (*(gUI2Editor + 0x704c) s>= 1)
    int64_t i = 0
    v12.d = fconvert.s(0.5f)
    v13.d = fconvert.s(-0.5f)
    
    do
        UI2* x0_1 = UI2GetIndex(zx.q(*(gUI2Editor + (i << 2) + 0x604c)))
        int64_t v0_2 = UI2PropDynamic<float>::Eval(v0.d)
        int64_t v0_4 = UI2PropDynamic<float>::Eval(v0.d)
        int64_t v0_6 = UI2PropDynamic<float>::Eval(v0.d)
        float v0_8 = UI2PropDynamic<float>::Eval(v0.d)
        float v1_1 = *arg1
        float v2_1 = *(arg1 + 4)
        float v4_1 = v0_2.d f+ v1_1
        float v5_1 = v0_4.d f+ v2_1
        v0_8 = v0_4.d f+ v0_8 + v2_1
        v1_1 = v0_2.d f+ v0_6.d + v1_1 - v4_1
        
        if (v4_1 < 0f)
            v2_1 = v13.d
        else
            v2_1 = v12.d
        
        v0_8 = v0_8 - v5_1
        float v3_1
        
        if (v5_1 < 0f)
            v3_1 = v13.d
        else
            v3_1 = v12.d
        
        uint32_t temp0_1 = vcvts_s32_f32(v4_1 + v2_1)
        v2_1 = v5_1 + v3_1
        
        if (v1_1 < 0f)
            v3_1 = v13.d
        else
            v3_1 = v12.d
        
        v4_1 = float.s(temp0_1)
        uint32_t temp0_2 = vcvts_s32_f32(v2_1)
        v1_1 = v1_1 + v3_1
        
        if (v0_8 < 0f)
            v2_1 = v13.d
        else
            v2_1 = v12.d
        
        v3_1 = float.s(temp0_2)
        v1_1 = float.s(sx.d(vcvts_s32_f32(v1_1)))
        v0_8 = v3_1 + float.s(sx.d(vcvts_s32_f32(v0_8 + v2_1)))
        float var_90 = v4_1
        float var_8c_1 = v3_1
        float var_88_1 = v4_1 + v1_1
        float var_84_1 = v0_8
        *(x0_1 + 0x1370) = 0
        *(x0_1 + 0x1694) = 0
        AttribMap* x0_7 = GetEdittedMap(x0_1, 0x76)
        AttribMapSetDef(*gUI2AttribTable, x0_7, 0x76, &var_90)
        result = AttribMapGetDef(*gUI2AttribTable, x0_7, *macro_ptr_RectF, 0x76)
        i += 1
    while (i s< sx.q(*(gUI2Editor + 0x704c)))

return result
