// 函数: _Z24UI2GetScrollExtentsTableR3UI2PK5Vec2IR5RectF
// 地址: 0x1040ff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v13
int64_t var_50 = entry_v13.q
int64_t v11
int64_t var_40 = v11
int128_t entry_v10
int64_t var_38 = entry_v10.q
int128_t entry_v9
int64_t var_30 = entry_v9.q
int128_t entry_v8
int64_t var_28 = entry_v8.q
void* __offset(UI2, 0x14fc) x8_1

if (arg2 == 0)
    x8_1 = arg1 + 0x14fc
else
    x8_1 = arg2

int128_t v0
v0.d = *x8_1
void* __offset(Vec2I, 0x4) x8_3

if (arg2 == 0)
    x8_3 = arg1 + 0x1500
else
    x8_3 = arg2 + 4

v0:4.d = *x8_3
int128_t v2
v2.d = fconvert.s(1f)
v2:4.d = fconvert.s(1f)
int128_t v1 = vcvt_f32_s32(v0)
int128_t v1_1 = vbsl_s8(vceqz_u32(v0, 0), v2, v1)
int64_t v12
v12.d = v1_1:4.d
int128_t v0_1
v0_1.d = v12.d f* v1_1.d
uint64_t result

if (v0_1.d f!= 0f && *(arg1 + 0x1970) != 0)
    int128_t var_d0_1 = v1_1
    float v4 = *(arg1 + 0x16c0)
    float v5 = *(arg1 + 0x16b4)
    float v6 = *(arg1 + 0x16b8)
    float v7 = *(arg1 + 0x16bc)
    v0_1.d = *(arg1 + 0x175c)
    v1_1.d = *(arg1 + 0x1760)
    v2.d = *(arg1 + 0x16b0)
    float v20 = v4 * v4
    float v21 = v5 * v5
    float v22 = v6 * v6
    float v23 = v7 * v7
    float v24 = v5 * v6
    float v25 = v4 * v7
    float v26 = v4 * v6
    float v27 = v5 * v7
    v6 = v6 * v7
    float v3 = v2.d f* 0f
    v4 = v4 * v5
    v0_1.d = v0_1.d f* v2.d
    v1_1.d = v1_1.d f* v2.d
    v5 = *V20 f* v2.d
    v2.d = *(V20 + 4) f* v2.d
    int32_t v16 = *(arg1 + 0x16c4)
    int32_t v17 = *(arg1 + 0x16c8)
    float v18 = v24 - v25
    v3 = v3 + v3
    v24 = v24 + v25
    v7 = v20 + v21 - v22 - v23
    v20 = v20 - v21 + v22 - v23
    float v19 = v3 * (v26 + v27)
    v3 = v3 * (v6 - v4)
    v4 = (v1_1.d f+ v1_1.d) * v18
    v6 = (v0_1.d f+ v0_1.d) * v24
    v18 = (v2.d f+ v2.d) * v18
    v2.d = v2.d f* v20
    v0_1.d = v0_1.d f* v7
    v1_1.d = v1_1.d f* v20
    v2.d = (v5 + v5) * v24 f+ v2.d
    v0_1.d = v0_1.d f+ v4
    v1_1.d = v6 f+ v1_1.d
    v2.d = v3 f+ v2.d
    v0_1.d = v19 f+ v0_1.d
    v1_1.d = v3 f+ v1_1.d
    v11.d = v16 f+ v19 + v5 * v7 + v18
    entry_v10.d = v17 f+ v2.d
    entry_v9.d = v16 f+ v0_1.d
    entry_v8.d = v17 f+ v1_1.d
    v0_1.d = entry_v9.d f- v11.d
    v1_1.d = entry_v8.d f- entry_v10.d
    int32_t var_58 = v0_1.d
    int32_t var_54_1 = v1_1.d
    RectF var_78
    RectF var_68
    UI2TableTransform(arg1, 0, &var_68, &var_78, false)
    int64_t x1
    int64_t x2_2
    int64_t x3_3
    int64_t x4_1
    int64_t x5_1
    int128_t v0_2
    int128_t v1_2
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    x1, x2_2, x3_3, x4_1, x5_1, v0_2, v1_2, v5_1, v6_1, v7_1 =
        UI2TableTransform(arg1, 1, &var_68, &var_78, false)
    int64_t var_98
    int64_t var_90
    int64_t var_88
    int64_t var_80
    int64_t x8_8 =
        (var_98 ^ *TI) | (var_90 ^ *(TI + 8)) | (var_88 ^ *(TI + 0x10)) | (var_80 ^ *(TI + 0x18))
    
    if (x8_8 != 0)
        int64_t var_a4
        v0_2.q = var_a4
        v1_2.q = var_88
        int32_t v2_1 = *(arg1 + 0x1514)
        int32_t v3_1 = *(arg1 + 0x1518)
        v6_1.d = *(arg1 + 0x150c)
        int128_t v4_1 = vabd_f32(v0_2, v1_2)
        v7_1.d = *(arg1 + 0x1510)
        uint64_t x0_2 = zx.q(*(arg1 + 0x143c))
        v5_1.d = v4_1:4.d
        entry_v13 = vmul_f32(var_d0_1, v4_1, 0)
        int32_t var_e8_1 = var_d0_1.d
        int32_t var_e4_1 = v12.d
        int32_t var_f0_1 = v2_1
        int32_t var_ec_1 = v3_1
        int128_t v0_4
        int32_t v1_4
        int128_t v2_3
        int128_t v3_3
        v0_4, v1_4, v2_3, v3_3 = UI2CalcSpacing(x0_2, x1, x2_2, x3_3, x4_1, x5_1, v11.d)
        v0_4:4.d = v1_4
        v2_3.q = *V21
        double var_c0 = vadd_f32(entry_v13, vmul_f32(v0_4, vsub_f32(var_d0_1, v2_3), 0))
        UI2GetScrollExtents(arg1, &var_58, &var_c0, arg3)
    
    result = zx.q(x8_8 != 0 ? 1 : 0)
else
    result = 0

entry_v9.q = var_30
entry_v8.q = var_28
entry_v10.q = var_38
entry_v13.q = var_50
return result
