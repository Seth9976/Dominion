// 函数: _Z14UI2AlignCenterv
// 地址: 0x103dba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8

if (*(gUI2Editor + 0x704c) == 0)
    return 

int64_t v0_1 = GameGetTimeSimulation()
float v0_2
float v1_1
float v2_1
float v3_1
v0_2, v1_1, v2_1, v3_1 = AlignBounds()

if (*(gUI2Editor + 0x704c) s>= 1)
    v0_2 = v0_2 + v2_1
    v2_1 = fconvert.s(0.5f)
    v1_1 = v1_1 + v3_1
    int64_t i = 0
    
    do
        UI2* x0_2 = UI2GetIndex(zx.q(*(gUI2Editor + (i << 2) + 0x604c)))
        int64_t v0_4 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_6 = UI2PropDynamic<float>::Eval(v0_1.d)
        int32_t v0_8 = UI2PropDynamic<float>::Eval(v0_1.d)
        v15.d = v0_6.d f+ UI2PropDynamic<float>::Eval(v0_1.d)
        v14.d = v0_4.d f+ v0_8
        int64_t v0_12 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_14 = UI2PropDynamic<float>::Eval(v0_1.d)
        float v6_1 = fconvert.s(-0.5f)
        float v1_2 =
            v0_2 * v2_1 + (v0_12.d f+ v0_12.d f+ UI2PropDynamic<float>::Eval(v0_1.d).d) * v6_1
        float v0_18 =
            v1_1 * v2_1 + (v0_14.d f+ v0_14.d f+ UI2PropDynamic<float>::Eval(v0_1.d)) * v6_1
        float v2_2 = v0_4.d f+ v1_2
        float v3_2 = v0_6.d f+ v0_18
        float v5_1 = fconvert.s(0.5f)
        v1_2 = v14.d f+ v1_2 - v2_2
        float v4_1
        
        v4_1 = v2_2 < 0f ? v6_1 : v5_1
        
        v0_18 = v15.d f+ v0_18 - v3_2
        v2_2 = v2_2 + v4_1
        
        v4_1 = v3_2 < 0f ? v6_1 : v5_1
        
        uint32_t temp0_1 = vcvts_s32_f32(v2_2)
        v2_2 = v3_2 + v4_1
        
        v3_2 = v1_2 < 0f ? v6_1 : v5_1
        
        v4_1 = float.s(temp0_1)
        uint32_t temp0_2 = vcvts_s32_f32(v2_2)
        v1_2 = v1_2 + v3_2
        
        v2_2 = v0_18 < 0f ? v6_1 : v5_1
        
        v3_2 = float.s(temp0_2)
        v1_2 = float.s(sx.d(vcvts_s32_f32(v1_2)))
        v0_18 = v3_2 + float.s(sx.d(vcvts_s32_f32(v0_18 + v2_2)))
        float var_b0 = v4_1
        float var_ac_1 = v3_2
        float var_a8_1 = v4_1 + v1_2
        float var_a4_1 = v0_18
        *(x0_2 + 0x1370) = 0
        *(x0_2 + 0x1694) = 0
        AttribMap* x0_12 = GetEdittedMap(x0_2, 0x76)
        AttribMapSetDef(*gUI2AttribTable, x0_12, 0x76, &var_b0)
        AttribMapGetDef(*gUI2AttribTable, x0_12, *macro_ptr_RectF, 0x76)
        i += 1
    while (i s< sx.q(*(gUI2Editor + 0x704c)))

UI2CreateUndoCheckpoint(true)
