// 函数: _Z13DrawTriMaskedP4Vec2P6XAssetS2_
// 地址: 0xc1c828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2
v2.q = *arg1
int128_t v1
v1.q = *(arg1 + 8)
int128_t v0
v0.q = *(arg1 + 0x10)
int128_t v4
v4.q = data_18c7560
uint64_t x8 = *gpRenderAppData
double v5 = vmul_f32(v2, v4, 0)
double v6 = vmul_f32(v4, v1, 0)
int128_t v4_1
v4_1:8.q = vmul_f32(v4, v0, 0).q
double var_30 = v5
double var_28 = v6
int128_t var_20 = v4_1
v4_1.d = *(x8 + 0x124)
v5.d = *(x8 + 0x128)
v6.d = *(x8 + 0x12c)
float v16 = *(x8 + 0x134)
float v17 = *(x8 + 0x138)
float v20 = *(x8 + 0x144)
int32_t v21 = *(x8 + 0x148)
float v3 = 0f
float v7 = *(x8 + 0x130)
float v19 = *(x8 + 0x140)
int32_t v23 = *(x8 + 0x150)
float v24 = v4_1.d f* v2.d
float v25 = v5.d f* v2:4.d
v6.d = v6.d f* v3
float v26 = v16 f* v2.d
float v27 = v17 f* v2:4.d
float v18 = *(x8 + 0x13c) * v3
v3 = *(x8 + 0x14c) * v3
float v22 = v20 f* v2.d
v2.d = v21 f* v2:4.d
v2.d = v22 f+ v2.d
v2.d = v2.d f+ v3
v2.d = v23 f+ v2.d
float var_60 = v7 + v24 + v25 f+ v6.d
float var_5c = v19 + v26 + v27 + v18
int32_t var_58 = v2.d
int64_t x8_1 = var_60.q
int64_t var_80 = *VZ
int64_t var_70 = x8_1
int32_t var_68 = var_58
v22 = v16 f* v1.d
v25 = v4_1.d f* v1.d + v5.d f* v1:4.d
v27 = v17 f* v1:4.d
v24 = v20 f* v1.d
v1.d = v21 f* v1:4.d
v4_1.d = v4_1.d f* v0.d
v5.d = v5.d f* v0:4.d
v16 = v16 f* v0.d
v17 = v17 f* v0:4.d
v20 = v20 f* v0.d
v0.d = v21 f* v0:4.d
v2.d = v22 + v27
v1.d = v24 f+ v1.d
v4_1.d = v4_1.d f+ v5.d
v5.d = v16 + v17
v0.d = v20 f+ v0.d
v2.d = v2.d f+ v18
v1.d = v1.d f+ v3
v4_1.d = v4_1.d f+ v6.d
v5.d = v5.d f+ v18
v0.d = v0.d f+ v3
v2.d = v19 f+ v2.d
v1.d = v23 f+ v1.d
v3 = v7 f+ v4_1.d
v4_1.d = v19 f+ v5.d
v0.d = v23 f+ v0.d
float var_54 = v7 + v25 f+ v6.d
int32_t var_50 = v2.d
int32_t var_4c = v1.d
float var_48 = v3
int32_t var_44 = v4_1.d
int32_t var_40 = v0.d
float var_3c = v3
int32_t var_38 = v4_1.d
int32_t var_34 = v0.d
int32_t var_78 = *(VZ + 8)
uint64_t var_90 = *MATERIAL_EFFECTS_CHART_MASKEDMULTIPLY
int64_t var_88 = 0
return Draw3DQuadFullComplete(&var_60, &var_30, gSpriteWhite, 0, &var_70, &var_80, arg2, arg3)
