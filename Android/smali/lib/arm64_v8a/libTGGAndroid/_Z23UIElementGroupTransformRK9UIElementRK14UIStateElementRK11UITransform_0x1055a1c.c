// 函数: _Z23UIElementGroupTransformRK9UIElementRK14UIStateElementRK11UITransform
// 地址: 0x1055a1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_70 = v12
double v11
double var_60 = v11
int128_t entry_v10
int64_t var_58 = entry_v10.q
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
int128_t v3
v3.d = *(arg2 + 0x18)
int128_t v0
v0.d = fconvert.s(1f)
int128_t* entry_x8
int128_t v2

if (v3.d f!= v0.d)
    v8.d = 0f
    v0.d = 0f
    int128_t v1
    int128_t v4
    int128_t v5
    int128_t v6
    int128_t v16
    int128_t v17
    
    if (not(v3.d f<= 0f))
        uint64_t x0 = zx.q(*(arg1 + 0x84))
        v0.d = fconvert.s(1f)
        
        if (not(v3.d f>= v0.d))
            v1.d = 0f
            v2.d = fconvert.s(1f)
            v0, v1, v2, v3, v4, v5, v6, v16, v17 = XCurveEvalNormal(x0, v3.d, v1.d, v2.d)
        else if (x0.d - 0xa u< 0xa)
            v0.d = *(&data_8695c4 + (sx.q(x0.d - 0xa) << 2))
    
    v6 = *(arg3 + 0x20)
    v1.q = *(arg1 + 0x7c)
    v2.q = *arg3
    v3.d = *(arg3 + 8)
    v17.d = *(arg3 + 0xc)
    v9 = *(arg3 + 0x10)
    v4.q = *(arg3 + 0x18)
    int128_t var_e4_1 = *(arg3 + 0x2c)
    v16.q = *V20
    float v7 = fconvert.s(1f)
    int128_t var_100_1 = *(arg3 + 0x3c)
    v5 = *(arg3 + 0x4c)
    int128_t v6_1
    v6_1.d = vsub_f32(v16, v1).d f* v0.d
    v6_1:4.d = v6_1:4.d f* v0.d
    int128_t v1_1
    v1_1.d = vadd_f32(v1, v6_1).d f* v17.d
    v1_1:4.d = v1_1:4.d f* v17.d
    int128_t var_110_1 = v5
    entry_v10 = vadd_f32(v2, v1_1)
    v11 = vadd_f32(v1_1, v4)
    v1_1.d = *(arg1 + 0x74)
    v5.d = *(arg1 + 0x78)
    v4 = *(arg1 + 0x30)
    int32_t x24_1 = *(arg3 + 0x5c)
    v6_1.d = v7 f- v1_1.d
    int128_t var_90 = *(arg1 + 0x20)
    int128_t var_80_1 = v4
    v2.d = v7 f- v5.d
    v4.d = v0.d f* v6_1.d
    v0.d = v0.d f* v2.d
    v1_1.d = v1_1.d f+ v4.d
    v0.d = v5.d f+ v0.d
    int32_t var_170_1 = v0.d
    v0.d = vmin_f32(v1_1.d, v7)
    
    if (v1_1.d f< 0f)
        v0.d = v8.d
    else
        v0.d = v0.d
    
    v12.d = v3.d f* v0.d
    int128_t v0_2
    int128_t v1_2
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_2
    int128_t v7_1
    int128_t v16_1
    int128_t v17_1
    arg1, v0_2, v1_2, v2_1, v3_1, v4_1, v5_1, v6_2, v7_1, v16_1, v17_1 =
        UIRectAligned(arg1 + 0x10, &var_90, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
    v6_2.q = *(arg3 + 0x10)
    v7_1.q = *(arg3 + 0x18)
    v4_1.d = *(arg3 + 0xc)
    v0_2:4.d = v1_2.d
    v1_2.d = fconvert.s(1f)
    v1_2:4.d = fconvert.s(1f)
    v16_1.d = v17.d f* var_170_1
    v5_1.q = *arg3
    *(entry_x8 + 8) = v12.d
    *(entry_x8 + 0xc) = v16_1.d
    int128_t v1_3 = vadd_f32(v6_2, v1_2)
    v4_1.d = vmax_f32(v4_1.d, v8.d)
    v2_1:4.d = v3_1.d
    var_90 = v6
    var_90 = var_e4_1
    v0_2.d = v0_2.d f* v4_1.d
    v0_2:4.d = v0_2:4.d f* v4_1.d
    v2_1.d = v2_1.d f* v4_1.d
    v2_1:4.d = v2_1:4.d f* v4_1.d
    v4_1 = var_90
    int128_t v0_3 = vadd_f32(v5_1, v0_2)
    int128_t v2_2 = vadd_f32(v5_1, v2_1)
    int128_t v0_4 = vsub_f32(v0_3, v7_1)
    int128_t v2_3 = vsub_f32(v2_2, v7_1)
    int128_t v0_5 = vmul_f32(v1_3, v0_4, 0)
    int128_t v1_4 = vmul_f32(v1_3, v2_3, 0)
    int128_t var_c4_1 = v4_1
    int128_t v0_7 = vadd_f32(vadd_f32(v7_1, v0_5), vadd_f32(v7_1, v1_4))
    v3_1.d = 0x3f000000
    v3_1:4.d = 0x3f000000
    v17_1.q = *V20
    int128_t v0_8 = vmul_f32(v0_7, v3_1, 0)
    int128_t v3_2
    v3_2.d = vsub_f32(entry_v10, v0_8).d f* var_170_1
    v3_2:4.d = v3_2:4.d f* var_170_1
    *entry_x8 = vadd_f32(v0_8, vadd_f32(v3_2, v17_1)).q
    entry_x8[1].q = v9
    *(entry_x8 + 0x18) = v11
    *(entry_x8 + 0x3c) = var_100_1
    *(entry_x8 + 0x4c) = var_110_1
    *(entry_x8 + 0x2c) = v4_1
    int128_t var_d0
    entry_x8[2] = var_d0
    *(entry_x8 + 0x5c) = x24_1
else
    v0 = *(arg3 + 0x10)
    *entry_x8 = *arg3
    entry_x8[1] = v0
    v0 = *(arg3 + 0x50)
    v3 = *(arg3 + 0x20)
    v2 = *(arg3 + 0x30)
    entry_x8[4] = *(arg3 + 0x40)
    entry_x8[5] = v0
    entry_x8[2] = v3
    entry_x8[3] = v2
entry_v10.q = var_58
