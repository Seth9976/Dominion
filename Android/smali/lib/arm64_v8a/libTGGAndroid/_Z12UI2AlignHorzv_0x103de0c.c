// 函数: _Z12UI2AlignHorzv
// 地址: 0x103de0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_80 = v15
int64_t v14
int64_t var_78 = v14
int64_t v13
int64_t var_70 = v13
int64_t v12
int64_t var_68 = v12
int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8

if (*(gUI2Editor + 0x704c) == 0)
    return 

int64_t v0_1 = GameGetTimeSimulation()
float v1_1
float v3_1
v1_1, v3_1 = AlignBounds()

if (*(gUI2Editor + 0x704c) s>= 1)
    v12.d = fconvert.s(0.5f)
    int64_t i = 0
    v13.d = fconvert.s(-0.5f)
    v14.d = 0f
    v15.d = (v1_1 + v3_1) f* v12.d
    
    do
        UI2* x0_2 = UI2GetIndex(zx.q(*(gUI2Editor + (i << 2) + 0x604c)))
        int64_t v0_4 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_6 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_8 = UI2PropDynamic<float>::Eval(v0_1.d)
        float v0_10 = v0_6.d f+ UI2PropDynamic<float>::Eval(v0_1.d)
        float v2_1 = v0_4.d f+ v14.d
        float v4_1
        
        if (v2_1 < 0f)
            v4_1 = v13.d
        else
            v4_1 = v12.d
        
        float v3_2 = v15.d f+ (v0_6.d f+ v0_10) f* v13.d
        float v1_2 = v0_4.d f+ v0_8.d f+ v14.d - v2_1
        v2_1 = v2_1 + v4_1
        v4_1 = v0_6.d f+ v3_2
        v0_10 = v0_10 + v3_2 - v4_1
        
        if (v4_1 < 0f)
            v3_2 = v13.d
        else
            v3_2 = v12.d
        
        uint32_t temp0_1 = vcvts_s32_f32(v2_1)
        v3_2 = v4_1 + v3_2
        
        if (v1_2 < 0f)
            v4_1 = v13.d
        else
            v4_1 = v12.d
        
        v2_1 = float.s(temp0_1)
        uint32_t temp0_2 = vcvts_s32_f32(v3_2)
        v1_2 = v1_2 + v4_1
        
        if (v0_10 < 0f)
            v3_2 = v13.d
        else
            v3_2 = v12.d
        
        v4_1 = float.s(temp0_2)
        v1_2 = float.s(sx.d(vcvts_s32_f32(v1_2)))
        v0_10 = v4_1 + float.s(sx.d(vcvts_s32_f32(v0_10 + v3_2)))
        float var_90 = v2_1
        float var_8c_1 = v4_1
        float var_88_1 = v2_1 + v1_2
        float var_84_1 = v0_10
        *(x0_2 + 0x1370) = 0
        *(x0_2 + 0x1694) = 0
        AttribMap* x0_8 = GetEdittedMap(x0_2, 0x76)
        AttribMapSetDef(*gUI2AttribTable, x0_8, 0x76, &var_90)
        AttribMapGetDef(*gUI2AttribTable, x0_8, *macro_ptr_RectF, 0x76)
        i += 1
    while (i s< sx.q(*(gUI2Editor + 0x704c)))

UI2CreateUndoCheckpoint(true)
