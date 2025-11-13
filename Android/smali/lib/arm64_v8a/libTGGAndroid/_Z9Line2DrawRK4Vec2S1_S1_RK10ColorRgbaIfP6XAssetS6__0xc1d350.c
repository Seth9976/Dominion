// 函数: _Z9Line2DrawRK4Vec2S1_S1_RK10ColorRgbaIfP6XAssetS6_
// 地址: 0xc1d350
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v4
v4.d = *arg1
int128_t v5
v5.d = *(arg1 + 4)
int128_t v1
v1.d = fconvert.s(0.5f)
float v2 = *arg2 f- v4.d
float v3 = *(arg2 + 4) f- v5.d
int128_t v16 = *(M3I + 0x10)
XAsset* x8 = *TEXTURE_SYS_WHITE_PIXEL
float x9 = *(M3I + 0x20)
int128_t var_70 = *M3I
int128_t v7
v7.d = v2 f* v1.d
v1.d = v3 f* v1.d
int64_t v8
v8.d = v4.d f+ v7.d
v4.d = v2 * v2
int64_t v9
v9.d = v5.d f+ v1.d
v1.d = v3 * v3
v1.d = v4.d f+ v1.d
v1.d = sqrt(v1.d)
v5.d = fconvert.s(1f) f/ v1.d
v4.q = var_70.q
v1:4.d = arg5
arg5 = (var_70:0xc.q).d
v2 = v2 f* v5.d
v3 = v3 f* v5.d
v5.q = v16:8.q
float var_38 = v2
float var_34 = v3
double v3_1 = vmul_f32(v1, v4, 0)
int128_t v2_1 = vmul_f32(v1, arg5, 0)
int128_t v0 = vmul_f32(v1, v5, 0)
XAsset* x21

x21 = arg7 == 0 ? x8 : arg7

int128_t var_60
var_60:8.q = v0.q
var_70.q = v3_1
var_70:0xc.q = v2_1.q
int64_t v10
v10.d = v0:4.d
float v0_1
float v1_1
int128_t v2_2
int128_t v3_2
int128_t v4_1
int128_t v22
int128_t v23
v0_1, v1_1, v2_2, v3_2, v4_1, v22, v23 = Rot2FromDir(&var_38)
float v5_1 = var_70:8.d
float v6_1 = var_60:4.d
v2_2.d = v3_1.d f* v1_1
v2_2:4.d = v3_1:4.d f* v1_1
v3_2.d = v2_1.d f* v0_1
v3_2:4.d = v2_1:4.d f* v0_1
v4_1.q = 0
float v16_1 = 0f
double v20
v20.d = v1_1 f* v2_1:4.d
int128_t v2_3 = vsub_f32(v2_2, v3_2)
int128_t v3_3 = vmul_f32(v0, v4_1, 0)
v4_1.d = v0_1 f* v3_1.d + v1_1 f* v2_1.d
float v17 = v0_1 f* v3_1:4.d f+ v20.d
v20.d = v16_1 f* v3_1:4.d
double v21
v21.d = v16_1 f* v2_1:4.d
double v2_4 = vadd_f32(v2_3, v3_3)
v4_1.d = v4_1.d f+ v3_3.d
v3_3.d = v3_3:4.d
v3_3.d = v17 f+ v3_3.d
float v18 = v10.d f+ v20.d f+ v21.d
var_70.q = v2_4
v2_4.d = v1_1 * v5_1
v20.d = x9 * v16_1
v2_4.d = v2_4.d f- v0_1 * v6_1
v2_4.d = v2_4.d f+ v20.d
float var_50_1 = x9 + v5_1 * v16_1 + v6_1 * v16_1
var_60:8.d = v0.d f+ v16_1 f* v3_1.d + v16_1 f* v2_1.d
var_60:0xc.d = v18
int128_t var_80 = data_71ae80
var_70:8.d = v8.d f+ v2_4.d
var_70:0xc.d = v4_1.d
var_60.d = v3_3.d
var_60:4.d = v9.d f+ v0_1 * v5_1 + v1_1 * v6_1 f+ v20.d
int32_t var_88 = *arg4
int32_t var_84 = 0
return DrawImageMatrixParams(x21, &var_70, &var_80, &var_88, arg6)
