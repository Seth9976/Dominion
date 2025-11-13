// 函数: _Z23DrawParented9SliceImageP6XAssetRK4Mat3S3_ffffPK11SpriteColorb13ImageRotationbRK5RectFS0_
// 地址: 0xfd2140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v6
v6.d = *arg2
int128_t v19
v19.d = *(arg2 + 4)
float v21 = *(arg2 + 0xc)
float v5 = *(arg2 + 0x10)
int128_t v7
v7.d = fconvert.s(1f)
float v4 = 0f
int128_t v16
v16.q = 0
v16:8.q = 0
int32_t var_8 = v6.d
float var_4 = v5
int128_t v17
v17.d = v7.d f/ v6.d
float v20 = *(arg2 + 8)
float v22 = *(arg2 + 0x14)
v7.d = v7.d f/ v5
int128_t v18
v18.d = v6.d f* v4
int64_t v23 = *arg3
int64_t v24 = *(arg3 + 0xc)
int64_t v25 = *(arg3 + 0x18)
float v26 = *(arg3 + 8)
float v27 = *(arg3 + 0x14)
float v28 = *(arg3 + 0x20)
float var_18 = v6.d f* arg6
float var_14 = v5 * arg7
arg6 = v6.d f* v17.d
int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
v6.d = v6.d f* arg4
v16.d = v19.d f* arg5
arg6 = arg6 + v19.d f* v4
arg7 = v7.d f* v19.d
v6.d = v6.d f+ v16.d
arg5 = v5 * arg5
v7.d = v5 f* v7.d
v16.d = v17.d f* v21
v5 = v5 * v4 f+ v16.d
v16.d = v21 * v4
v7.d = v7.d f+ v16.d
arg4 = arg5 + v21 * arg4
arg5 = v20 * v4
v4 = v22 * v4
arg6 = arg6 + arg5
arg5 = v18.d f+ arg7 + arg5
v5 = v5 + v4
v4 = v7.d f+ v4
arg7 = v20 f+ v6.d
arg4 = v22 + arg4
v6.d = v23.d f* arg6
v6:4.d = v23:4.d f* arg6
v7.d = v24.d f* arg5
v7:4.d = v24:4.d f* arg5
v17.d = v23.d f* v5
v17:4.d = v23:4.d f* v5
v18.d = v24.d f* v4
v18:4.d = v24:4.d f* v4
v16.d = v25.d f* arg7
v16:4.d = v25:4.d f* arg7
v19.d = v25.d f* arg4
v19:4.d = v25:4.d f* arg4
int128_t v6_1 = vadd_f32(v6, v7)
int128_t v2 = vadd_f32(v17, v18)
double v5_1 = vadd_f32(v6_1, v16)
double v2_1 = vadd_f32(v2, v19)
int64_t var_20 = 0x3f80000000000000
int128_t var_30
var_30.d = 0x3f800000
double var_58 = v5_1
var_50:8.q = v2_1
var_50:4.d = arg6 * v26 + arg5 * v27 + arg7 * v28
int128_t var_40
var_40:4.d = v5 * v26 + v4 * v27 + arg4 * v28
RectF const& var_68 = arg12
XAsset* var_60 = arg13
int32_t x10

if ((arg11.d & 1) != 0)
    x10 = 2
else
    x10 = 1

char var_70 = arg9 & 1
double* var_80 = &var_58
SpriteColor const* var_78 = arg8
return DrawImageNew(arg1, nullptr, &var_8, &var_18, zx.q(x10), RECT0, zx.q(arg10), &data_24225a0)
