// 函数: _Z9DrawBoxes5RectFRK13HistogramDatafRK14HistogramStyle
// 地址: 0xc39c44
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
int32_t x8 = *(arg1 + 0x400)
float entry_v4
float var_34 = entry_v4

if (x8 s< 1)
    return 

int64_t entry_v3
v9 = entry_v3
float entry_v1 = entry_v3.d f- entry_v1
entry_v3.d = *(arg1 + 0x404)
v10 = arg3.q
float entry_v2
v11.d = (entry_v2 - arg3) / float.s(x8)
void* x19_1 = arg1
int64_t x21_1 = 0
v13.d = fconvert.s(1f)
v14.d = fconvert.s(0.5f)
v12.d = entry_v1 / float.s(entry_v3.d) * float.s(0x3f733333)
v15.d = fconvert.s(-0.5f)
float var_a0

while (true)
    int32_t x9_9 = *(x19_1 + (x21_1 << 3) + 4)
    
    if (x9_9 s> 0)
        arg3 = float.s(x9_9)
        int32_t x8_1 = *(arg2 + 0x14)
        int32_t x9_1 = *(arg2 + 0x18)
        __builtin_memset(&var_a0 | 4, 0, 0x1c)
        entry_v2 = *RECT1
        entry_v3.d = *(RECT1 + 4)
        entry_v4 = *(RECT1 + 8)
        int32_t v5 = *(RECT1 + 0xc)
        float v16 = *(x19_1 + 0x404)
        entry_v1 = float.s(x21_1.d)
        x21_1 += 1
        float var_e0 = entry_v2
        int32_t var_dc_1 = entry_v3.d
        float var_d8_1 = entry_v4
        int32_t var_d4_1 = entry_v3.d
        entry_v3.d = float.s(v16)
        entry_v1 = v10.d f+ v11.d f* entry_v1
        float v6 = v9.d f- v12.d f* arg3
        float v7 = v10.d f+ v11.d f* float.s(x21_1.d)
        uint8_t x10_1 = (x8_1 u>> 8).b
        int32_t x15_1 = x9_1 u>> 8 & 0xff
        float var_c0 = entry_v1
        float var_bc_1 = v6
        uint8_t x11_1 = (x8_1 u>> 0x10).b
        uint32_t x12_1 = x8_1 u>> 0x18
        int32_t x16_1 = x9_1 u>> 0x10 & 0xff
        float var_b8_1 = v7
        float var_b4_1 = v6
        arg3 = v13.d f- arg3 f/ entry_v3.d
        v6 = arg3 * float.s((x9_1 & 0xff) - zx.d(x8_1.b))
        entry_v3.d = float.s(x16_1 - zx.d(x11_1))
        v16 = arg3 * float.s(x15_1 - zx.d(x10_1))
        entry_v3.d = arg3 f* entry_v3.d
        arg3 = arg3 * float.s((x9_1 u>> 0x18) - x12_1)
        float v17
        
        if (v6 < 0f)
            v17 = v15.d
        else
            v17 = v14.d
        
        float var_b0_1 = entry_v1
        int32_t var_ac_1 = v9.d
        int32_t x9_4 =
            (0xffff00ff & ((x9_1 & 0xff0000ff) | (0xff & x16_1) << 0x10)) | (0xff & x15_1) << 8
        
        if (v16 < 0f)
            entry_v1 = v15.d
        else
            entry_v1 = v14.d
        
        float var_d0_1 = entry_v2
        int32_t var_cc_1 = v5
        int32_t var_90_1 = x9_4
        int32_t var_88_1 = x9_4
        char temp0_1 = vcvts_s32_f32(v6 + v17)
        
        if (entry_v3.d f< 0f)
            entry_v2 = v15.d
        else
            entry_v2 = v14.d
        
        char temp0_2 = vcvts_s32_f32(v16 + entry_v1)
        entry_v1 = entry_v3.d f+ entry_v2
        
        if (arg3 < 0f)
            entry_v2 = v15.d
        else
            entry_v2 = v14.d
        
        char x10_3 = x11_1 + vcvts_s32_f32(entry_v1)
        char temp0_4 = vcvts_s32_f32(arg3 + entry_v2)
        XAsset* x0 = *TEXTURE_SYS_WHITE_PIXEL
        float x8_6 = (0xff00ffff & ((0xffff00ff
            & ((0xffffff & zx.d(x8_1.b + temp0_1)) | zx.d(x12_1.b + temp0_4) << 0x18))
            | zx.d(x10_1 + temp0_2) << 8)) | zx.d(x10_3) << 0x10
        float var_a8_1 = v7
        int32_t var_a4_1 = v9.d
        var_a0 = x8_6
        float var_98_1 = x8_6
        float var_c8_1 = entry_v4
        int32_t var_c4_1 = v5
        arg1, entry_v3 = DrawQuadParams(x0, &var_c0, &var_e0, &var_a0, true, nullptr)
        x8 = *(x19_1 + 0x400)
        
        if (x21_1 s>= sx.q(x8))
            break
    else
        x21_1 += 1
        
        if (x21_1 s>= sx.q(x8))
            break

if (x8 s< 1)
    return 

int64_t x21_2 = 0
v13.d = var_34 * fconvert.s(0.5f)

while (true)
    int32_t x9_11 = *(x19_1 + (x21_2 << 3) + 4)
    
    if (x9_11 s<= 0)
        x21_2 += 1
        
        if (x21_2 s>= sx.q(x8))
            break
    else
        float v0_1 = v9.d
        
        if (x21_2 != 0)
            v0_1 = v9.d f- v12.d f* float.s(*(x19_1 + (x21_2 << 3) - 4)) + var_34
            
            if (v9.d f< v0_1)
                v0_1 = v9.d
        
        v14.d = v9.d f- v12.d f* float.s(x9_11)
        v15.d = v10.d f+ v11.d f* float.s(x21_2.d)
        
        if (not(v0_1 f<= v14.d))
            var_a0 = v15.d f- v13.d
            int32_t var_9c_2 = v14.d
            float var_98_3 = v13.d f+ v15.d
            float var_94_2 = v0_1
            DrawRectSolid(&var_a0, arg2 + 0x10)
            x8 = *(x19_1 + 0x400)
        
        bool cond:5_1 = x21_2 == zx.q(x8 - 1)
        x21_2 += 1
        float v0 = v9.d
        
        if (not(cond:5_1))
            v0 = v9.d f- v12.d f* float.s(*(x19_1 + (x21_2 << 3) + 4)) + var_34
            
            if (v9.d f< v0)
                v0 = v9.d
        
        v8.d = v10.d f+ v11.d f* float.s(x21_2.d)
        
        if (not(v0 f<= v14.d))
            var_a0 = v8.d f- v13.d
            int32_t var_9c_3 = v14.d
            float var_98_4 = v13.d f+ v8.d
            float var_94_3 = v0
            DrawRectSolid(&var_a0, arg2 + 0x10)
        
        var_a0 = v15.d
        int32_t var_9c_1 = v14.d
        int32_t var_98_2 = v8.d
        float var_94_1 = v14.d f+ var_34
        DrawRectSolid(&var_a0, arg2 + 0x10)
        x8 = *(x19_1 + 0x400)
        
        if (x21_2 s>= sx.q(x8))
            break
