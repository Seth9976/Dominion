// 函数: _Z10Draw3DLine4Vec3S_10ColorRgbaI
// 地址: 0xc9c850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_70 = v15
int64_t v14
int64_t var_68 = v14
int128_t entry_v13
int64_t var_60 = entry_v13.q
int128_t entry_v12
int64_t var_58 = entry_v12.q
int128_t entry_v11
int64_t var_50 = entry_v11.q
int64_t v10
int64_t var_48 = v10
int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8
float entry_v0
float entry_v3
float v6 = entry_v0 - entry_v3
float entry_v1
float entry_v4
float v16 = entry_v1 - entry_v4
v6 = v6 * v6 + v16 * v16
float entry_v2
float entry_v5
v16 = entry_v2 - entry_v5
v6 = sqrt(v16 * v16 + v6)
int32_t var_c4 = arg1.d

if (not(v6 < float.s(0x3727c5ac)))
    entry_v3 = entry_v3 - entry_v0
    entry_v4 = entry_v4 - entry_v1
    entry_v5 = entry_v5 - entry_v2
    float v7 = sqrt(entry_v5 * entry_v5 + entry_v3 * entry_v3 + entry_v4 * entry_v4)
    float var_cc_1
    float var_c8_1
    float v18
    
    if (v7 >= float.s(0x3727c5ac))
        v16 = fconvert.s(1f)
        v7 = v16 / (v7 + float.s(0x3727c5ac))
        float v17 = entry_v3 * v7
        v18 = entry_v4 * v7
        v7 = entry_v5 * v7
        v16 = v16 / sqrt(v7 * v7 + v17 * v17 + v18 * v18)
        v7 = v7 * v16
        var_cc_1 = v18 * v16
        var_c8_1 = v17 * v16
    else
        var_c8_1 = *V0
        var_cc_1 = *(V0 + 4)
        v7 = *(V0 + 8)
    
    float var_d0_1 = v7
    v7 = fconvert.s(0.5f)
    v18 = *(gDraw3DData + 0x24)
    float v19 = *(gDraw3DData + 0x28)
    float v20 = *(gDraw3DData + 0x2c)
    entry_v11.d = entry_v0 + entry_v3 * v7
    entry_v12.d = entry_v1 + entry_v4 * v7
    entry_v13.d = entry_v2 + entry_v5 * v7
    entry_v0 = v18 f- entry_v11.d
    entry_v1 = v19 f- entry_v12.d
    entry_v2 = v20 f- entry_v13.d
    v15.d = *RECT1
    v14.d = *(RECT1 + 4)
    v8.d = *(RECT1 + 8)
    v9.d = *(RECT1 + 0xc)
    v10.d = *(VZ + 8)
    int64_t x21_1 = *VZ
    entry_v0 = sqrt(entry_v0 * entry_v0 + entry_v1 * entry_v1 + entry_v2 * entry_v2)
        / fconvert.s(10f) * float.s(0x3cf5c28f)
    entry_v1 = float.s(0x42c80000)
    int64_t x0_1
    int64_t x4_1
    int64_t x5_1
    int64_t x6_1
    int64_t x7_1
    int128_t v3
    int128_t v4
    int128_t v5
    x0_1, x4_1, x5_1, x6_1, x7_1, v3, v4, v5 = SpriteColorNormal(&var_c4)
    v3.d = v18
    XAsset* x19_1 = data_23e4f78
    XAsset* x20_1 = data_23e4f80
    float var_10c_1 = var_cc_1
    float var_108_1 = var_d0_1
    v4.d = v19
    int64_t var_28 = x0_1
    float var_110_1 = var_c8_1
    v5.d = v20
    float var_100_1 = v6 * entry_v1
    float var_fc_1 = entry_v0 * entry_v1
    int32_t var_f0_1 = v8.d
    int32_t var_ec_1 = v9.d
    int32_t var_f8_1 = v15.d
    int32_t var_f4_1 = v14.d
    int32_t var_118_1 = v10.d
    int64_t var_120_1 = x21_1
    void var_a0
    Calc3DBillboard(2, 5, x19_1, &var_a0, x4_1, x5_1, x6_1, x7_1)
    int32_t var_c0 = v15.d
    int32_t var_bc_1 = v9.d
    int32_t var_b8_1 = v8.d
    int32_t var_b4_1 = v9.d
    int32_t var_b0_1 = v15.d
    int32_t var_ac_1 = v14.d
    int32_t var_a8_1 = v8.d
    int32_t var_a4_1 = v14.d
    Draw3DQuadParams(&var_a0, &var_c0, &var_28, x19_1, x20_1)

entry_v11.q = var_50
entry_v13.q = var_60
entry_v12.q = var_58
