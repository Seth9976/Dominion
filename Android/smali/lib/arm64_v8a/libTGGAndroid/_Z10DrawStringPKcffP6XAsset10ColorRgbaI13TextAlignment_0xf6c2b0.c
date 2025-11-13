// 函数: _Z10DrawStringPKcffP6XAsset10ColorRgbaI13TextAlignment
// 地址: 0xf6c2b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
int128_t v4
v4.q = *M3I
uint128_t v6
v6.q = *(M3I + 0xc)
int128_t v7
v7.q = *(M3I + 0x18)
uint128_t v17
v17.d = arg3 f* v4:4.d
int128_t v3
v3.q = 0
int128_t var_30 = data_71a7f0
int128_t v5
v5.d = arg2 f* v6.d
float v16 = arg2 f* v4.d f+ v17.d
v17.d = arg3 f* v6:4.d
arg2 = arg2 f* v7.d + arg3 f* v7:4.d
int128_t v1_2 = vadd_f32(v4, vrev64_s32(vmul_f32(v4, v3, 0)))
int128_t v4_1 = vmul_f32(v6, v3, 0)
int128_t v3_1 = vmul_f32(v7, v3, 0)
int128_t v4_2 = vrev64_s32(v4_1)
int128_t v3_2 = vrev64_s32(v3_1)
v5.d = v5.d f+ v17.d
v17.d = *(M3I + 8)
int128_t v4_3 = vadd_f32(v6, v4_2)
v6.d = *(M3I + 0x14)
int128_t v3_3 = vadd_f32(v7, v3_2)
v7.d = *(M3I + 0x20)
uint128_t v2
v2.d = 0f
uint64_t x4 = zx.q(*gRgbaIWhite)
v16 = v17.d f+ v16
uint64_t x5 = zx.q(*gRgbaINone)
v17.d = v17.d f* v2.d
v5.d = v6.d f+ v5.d
v6.d = v6.d f* v2.d
v2.d = v7.d f* v2.d
int128_t v17_1 = vdup_laneq_s32(v17, 0)
int128_t v6_1 = vdup_laneq_s32(v6, 0)
int128_t v2_1 = vdup_laneq_s32(v2, 0)
int128_t v1_3 = vadd_f32(v1_2, v17_1)
double v4_4 = vadd_f32(v4_3, v6_1)
double v2_2 = vadd_f32(v3_3, v2_1)
int64_t var_50 = v1_3.q
float var_14 = v7.d f+ arg2
v1_3.d = 0f
float var_44 = v16
int32_t var_34 = v5.d
double var_40 = v4_4
double var_20 = v2_2
int64_t var_60 = 0
return DrawStringMatrix(arg1, &var_50, arg4, zx.q(arg5), x4, x5, zx.q(arg6), nullptr, 0f, v1_3)
