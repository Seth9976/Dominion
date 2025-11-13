// 函数: _Z16AnimPathGetDeltaP12ParticleSpotP6XAsset
// 地址: 0xf94dac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_60 = v15
int64_t v14
int64_t var_58 = v14
int64_t v13
int64_t var_50 = v13
int64_t v12
int64_t var_48 = v12
int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8
float* entry_x8
int128_t v0

if (arg2 == 0)
    v0 = *(TI + 0x10)
    *entry_x8 = *TI
    *(entry_x8 + 0x10) = v0
    return 

v0.d = *(*(arg1 + 0x30) + 0x310)
AnimPathGetPosAtTime(arg2, 0, v0.d)
AnimPathGetPosAtTime(arg2, 0, *(*(arg1 + 0x30) + 0x308))
float var_70
float v22_1 = var_70 * var_70
float var_7c
float v23_1 = var_7c * var_7c
float var_90
float v28_1 = var_90 * var_90
float var_9c
float v29_1 = var_9c * var_9c
float var_98
float v30_1 = var_9c * var_98
float var_94
float v31_1 = var_90 * var_94
v8.d = var_90 * var_98
v9.d = var_9c * var_94
v10.d = var_98 * var_94
v11.d = var_90 * var_9c
v12.d = var_70 * var_90
v13.d = var_7c * var_9c
v14.d = var_70 * var_9c
v15.d = v23_1 + v22_1
v22_1 = v22_1 - v23_1
v23_1 = v30_1 - v31_1
v30_1 = v30_1 + v31_1
v31_1 = v28_1 + v29_1
v28_1 = v28_1 - v29_1
v29_1 = v8.d f+ v9.d
v8.d = v9.d f- v8.d
v9.d = v10.d f- v11.d
v10.d = v11.d f+ v10.d
v11.d = var_7c * var_90
float var_80
float v18_1 = fconvert.s(1f) / var_80
v12.d = v12.d f+ v13.d
v13.d = var_70 * var_98
v11.d = v14.d f- v11.d
float var_78
v14.d = var_78 * var_90
float v24_1 = var_78 * var_78
float v25_1 = var_7c * var_78
float var_74
float v26_1 = var_7c * var_74
float v27_1 = var_78 * var_74
v13.d = v13.d f- v14.d
v14.d = var_98 * var_98
float v21_1 = var_70 * fneg(var_74)
float v20_1 = var_70 * fneg(var_78)
float v6_1 = var_70 * fneg(var_7c)
float v19_1 = v15.d f- v24_1
v15.d = v25_1 - v21_1
v21_1 = v25_1 + v21_1
v25_1 = v26_1 + v20_1
v20_1 = v26_1 - v20_1
v26_1 = v27_1 - v6_1
v6_1 = v27_1 + v6_1
v27_1 = v24_1 + v22_1
v22_1 = v22_1 - v24_1
v24_1 = v31_1 f- v14.d
v31_1 = v28_1 f+ v14.d
v28_1 = v28_1 f- v14.d
v14.d = var_78 * var_98
v12.d = v12.d f+ v14.d
v14.d = var_74 * var_98
v11.d = v11.d f- v14.d
int32_t var_64
v14.d = var_64
float v3_1 = v13.d f- var_7c * var_94
v13.d = var_78 * var_9c
float v4_1 = var_70 * var_94 - var_74 * var_90 f- v13.d
v13.d = v14.d f+ v14.d
v25_1 = v25_1 f* v13.d
v26_1 = v26_1 f* v13.d
int32_t var_68
v13.d = var_68
float var_6c
float v0_2 = var_6c + var_6c
v21_1 = v0_2 * v21_1
v0_2 = v0_2 * v20_1
v20_1 = v13.d f+ v13.d
v15.d = v15.d f* v20_1
v6_1 = v6_1 * v20_1
v20_1 = var_74 * var_74
v19_1 = v19_1 - v20_1
v27_1 = v27_1 - v20_1
v20_1 = v20_1 + v22_1
float v16_1 = var_94 * var_94
v22_1 = v24_1 - v16_1
v24_1 = v31_1 - v16_1
entry_x8[2] = var_74 * var_9c + v3_1
entry_x8[3] = var_7c * var_98 + v4_1
v3_1 = fneg(v18_1)
v0_2 = (v14.d f* v20_1 + v0_2 + v6_1) * v3_1
float v5_1 = (v25_1 + v15.d f+ var_6c * v19_1) * v3_1
v3_1 = (v26_1 + v21_1 + v13.d f* v27_1) * v3_1
v6_1 = v0_2 + v0_2
v0_2 = v0_2 * (v28_1 + v16_1)
float v7_1 = v5_1 * v22_1
v16_1 = v3_1 + v3_1
v5_1 = v5_1 + v5_1
float var_a0
float var_88
entry_x8[6] = var_88 + var_a0 * (v6_1 f* v9.d + v5_1 * v30_1 + v3_1 * v24_1)
float var_84
entry_x8[7] = var_84 + var_a0 * (v0_2 + v5_1 f* v8.d + v16_1 f* v10.d)
entry_x8[4] = v12.d f+ var_74 * var_94
float var_8c
entry_x8[5] = var_8c + var_a0 * (v6_1 * v29_1 + v7_1 + v16_1 * v23_1)
*entry_x8 = v18_1 * var_a0
entry_x8[1] = v11.d f+ var_78 * var_94
