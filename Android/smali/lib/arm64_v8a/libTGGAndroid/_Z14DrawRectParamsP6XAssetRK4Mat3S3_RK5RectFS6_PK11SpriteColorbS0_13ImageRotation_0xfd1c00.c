// 函数: _Z14DrawRectParamsP6XAssetRK4Mat3S3_RK5RectFS6_PK11SpriteColorbS0_13ImageRotation
// 地址: 0xfd1c00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *arg4
int128_t v1
v1.q = 0
v1:8.q = 0
uint64_t x8 = *gpSpriteAppData
int32_t x8_1 = *(x8 + 0x38)
float v3 = *(M3I + 0x10)
float v4 = *(M3I + 0x14)
float128 v5
v5:8.q = v0.q
float128 var_30 = *(x8 + 0x28)
float128 v2 = var_30
v4 = v0:4.d + v4
int32_t var_20 = x8_1
var_30 = vsubq_f32(vaddq_f32(v2, vrev64q_s32(vmulq_f32(v2, zx.o(0), 0))), v5)
float128 v2_2
v2_2.d = *arg2
v5.d = *(arg2 + 4)
float128 v6_2
v6_2.q = *arg3
int128_t v7
v7.q = *(arg3 + 0xc)
int128_t v16
v16.q = *(arg3 + 0x18)
float v17 = *(arg3 + 8)
float v18 = *(arg3 + 0x14)
int128_t v19
v19.d = *(arg3 + 0x20)
int128_t v20
v20.d = *(arg2 + 8)
float v21 = *(arg2 + 0xc)
float v22 = *(arg2 + 0x10)
float v23 = *(arg2 + 0x14)
int128_t v24
v24.d = *(arg2 + 0x18)
float v25 = *(arg2 + 0x1c)
int32_t v26 = *(arg2 + 0x20)
int128_t v27
v27.q = *(arg4 + 8)
int128_t var_68
__builtin_memset(&var_68, 0, 0x30)
v1.d = v6_2.d f* v2_2.d
v1:4.d = v6_2:4.d f* v2_2.d
int128_t v28
v28.d = v7.d f* v5.d
v28:4.d = v7:4.d f* v5.d
int128_t v29
v29.d = v16.d f* v20.d
v29:4.d = v16:4.d f* v20.d
v2_2.d = v2_2.d f* v17
v5.d = v5.d f* v18
v20.d = v20.d f* v19.d
int128_t v30
v30.d = v6_2.d f* v21
v30:4.d = v6_2:4.d f* v21
int128_t v31
v31.d = v7.d f* v22
v31:4.d = v7:4.d f* v22
v21 = v17 * v21
v6_2.d = v6_2.d f* v24.d
v6_2:4.d = v6_2:4.d f* v24.d
v17 = v17 f* v24.d
v24.d = v16.d f* v23
v24:4.d = v16:4.d f* v23
v22 = v18 * v22
v23 = v19.d f* v23
v7.d = v7.d f* v25
v7:4.d = v7:4.d f* v25
v18 = v18 * v25
v16.d = v16.d f* v26
v16:4.d = v16:4.d f* v26
v19.d = v19.d f* v26
v25 = *(M3I + 8)
v26 = *(M3I + 0xc)
int128_t v1_1 = vadd_f32(v1, v28)
v2_2.d = v2_2.d f+ v5.d
int128_t v5_1 = vadd_f32(v30, v31)
v25 = v0.d f+ v25
double v0_1 = vsub_f32(v27, v0)
int128_t v6_3 = vadd_f32(v6_2, v7)
v7.d = v17 + v18
double var_8 = v0_1
int128_t v0_2 = vadd_f32(v1_1, v29)
v1_1.d = v2_2.d f+ v20.d
int128_t v2_3 = vadd_f32(v5_1, v24)
v5_1.d = *M3I
v17 = *(M3I + 4)
v18 = v21 + v22 + v23
int128_t v6_4 = vadd_f32(v6_3, v16)
v7.d = v7.d f+ v19.d
v16.d = v0_2.d f* v5_1.d
v16:4.d = v0_2:4.d f* v5_1.d
v19.d = v2_3.d f* v17
v19:4.d = v2_3:4.d f* v17
v5_1.d = v1_1.d f* v5_1.d
v0_2.d = v0_2.d f* v26
v0_2:4.d = v0_2:4.d f* v26
v2_3.d = v2_3.d f* v3
v2_3:4.d = v2_3:4.d f* v3
v1_1.d = v1_1.d f* v26
v20.d = v6_4.d f* v25
v20:4.d = v6_4:4.d f* v25
v6_4.d = v6_4.d f* v4
v6_4:4.d = v6_4:4.d f* v4
int128_t v7_1 = vadd_f32(v16, v19)
v5_1.d = v5_1.d f+ v18 * v17
int128_t v0_3 = vadd_f32(v0_2, v2_3)
v1_1.d = v1_1.d f+ v18 * v3
double v2_4 = vadd_f32(v7_1, v20)
double v0_4 = vadd_f32(v0_3, v6_4)
v1_1.d = v1_1.d f+ v7.d f* v4
int64_t var_38 = 0x3f80000000000000
int128_t var_48
var_48.d = 0x3f800000
double var_70 = v2_4
var_68:8.q = v0_4
var_68:4.d = v5_1.d f+ v7.d f* v25
int128_t var_58
var_58:4.d = v1_1.d
int64_t (* const var_88)() = RECT1
XAsset* var_80 = arg8
double* var_a0 = &var_70
SpriteColor const* var_98 = arg6
char var_90 = arg7 & 1
return DrawImageNew(arg1, nullptr, V21, &var_8, 0, RECT0, zx.q(arg9.d), &var_30)
