// 函数: _Z24UIProjectInto3DTransformRK9Transform
// 地址: 0xfce3fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg1 + 8)
float v2 = *(arg1 + 0xc)
float y = *arg1
float v3 = *(arg1 + 4)
float v4 = *(arg1 + 0x10)
float v18 = v1 + v1
float v20 = v3 + v3
v4 = v4 + v4
int64_t v8
v8.d = fconvert.s(1f)
float v21 = v1 * v18
float v19 = v2 * (v2 + v2)
float v22 = v1 * v20
float v23 = v2 * v4
v18 = v18 * v2
v2 = v2 * v20
v1 = v1 * v4
v20 = v3 * v20
v3 = v3 * v4
int128_t var_30 = data_71cfa0
int128_t v16
v16.d = v22 - v23
v22 = v22 + v23
v23 = v2 + v1
v1 = v2 - v1
v20 = v8.d f- v20
v16.d = y f* v16.d
v23 = y * v23
v22 = y * v22
v2 = y * (v18 - v3)
v1 = y * v1
v3 = y * (v18 + v3)
v18 = y * (v8.d f- v21 - v19)
v19 = y * (v20 - v19)
float var_38 = y * (v20 - v21)
int32_t var_34 = *(arg1 + 0x1c)
y = *CIRCLE_QUARTER * fconvert.s(-0.5f)
float var_58 = v23
int32_t var_54 = *(arg1 + 0x14)
float var_48 = v2
int32_t var_44 = *(arg1 + 0x18)
float var_40 = v1
float var_3c = v3
float var_60 = v18
int32_t var_5c = v16.d
float var_50 = v22
float var_4c = v19
float cosp
float sinp
sincosf(&sinp, &cosp, y)
float cosp_1 = cosp
float sinp_1 = sinp
cosp_1 = cosp_1 + cosp_1
int32_t var_64 = 0x3f800000
float v2_1 = *VX * sinp_1
float v3_1 = sinp_1 * *(VX + 4)
sinp_1 = sinp_1 * *(VX + 8)
float v4_1 = v3_1 + v3_1
float v6_1 = v2_1 + v2_1
float v7_1 = cosp_1 * sinp_1
float v16_1 = v3_1 * cosp_1
cosp_1 = v2_1 * cosp_1
float v17_1 = v3_1 * v4_1
float v5_1 = sinp_1 * (sinp_1 + sinp_1)
v3_1 = v3_1 * v6_1
float v18_1 = sinp_1 * v6_1
sinp_1 = v4_1 * sinp_1
v2_1 = v8.d f- v2_1 * v6_1
int32_t var_94 = 0
int32_t var_84 = 0
int64_t var_6c = 0
int64_t var_74 = 0
float var_9c = v3_1 - v7_1
float var_98 = v16_1 + v18_1
float var_8c = v2_1 - v5_1
float var_88 = sinp_1 - cosp_1
float var_80 = v18_1 - v16_1
float var_7c = cosp_1 + sinp_1
float var_a0 = v8.d f- v17_1 - v5_1
float var_90 = v3_1 + v7_1
float var_78 = v2_1 - v17_1
int128_t v0
int128_t v1_1
int128_t v2_2
int128_t v3_2
v0, v1_1, v2_2, v3_2 = Mat4Multiply(&var_60, &var_a0)
uint64_t x8 = *gpRenderAppData
int128_t var_c0
*(x8 + 0x144) = var_c0
int128_t var_b0
*(x8 + 0x154) = var_b0
int128_t var_e0
*(x8 + 0x124) = var_e0
int128_t var_d0
*(x8 + 0x134) = var_d0
*(x8 + 0x164) = 1
return Draw3DQuadGroupStart(arg1 + 0x14)
