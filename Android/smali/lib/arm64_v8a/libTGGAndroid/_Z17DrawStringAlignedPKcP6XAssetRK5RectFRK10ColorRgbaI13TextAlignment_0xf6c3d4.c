// 函数: _Z17DrawStringAlignedPKcP6XAssetRK5RectFRK10ColorRgbaI13TextAlignment
// 地址: 0xf6c3d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg5 - 1)

if (x9.d u> 9)
    pthread_kill(pthread_self(), 6)
    return AlignmentGetOffsetPercent(XNoReturn()) __tailcall

int128_t v0
v0.d = 0f
int128_t v1
v1.d = 0f

switch (x9)
    case 1
        v1.d = 0f
        v0.d = fconvert.s(0.5f)
    case 2
        v1.d = 0f
        v0.d = fconvert.s(1f)
    case 3
        v1.d = fconvert.s(0.5f)
    case 4, 9
        v0.d = fconvert.s(0.5f)
        v1.d = fconvert.s(0.5f)
    case 5
        v1.d = fconvert.s(0.5f)
        v0.d = fconvert.s(1f)
    case 6
        v1.d = fconvert.s(1f)
    case 7
        v1.d = fconvert.s(1f)
        v0.d = fconvert.s(0.5f)
    case 8
        v0.d = fconvert.s(1f)
        v1.d = fconvert.s(1f)

int32_t v2 = *arg3
float v3 = *(arg3 + 4)
int128_t v5
v5.d = *(arg3 + 8)
uint64_t x3 = zx.q(*arg4)
v5.d = v5.d f- v2
v0.d = v0.d f* v5.d
int128_t v16
v16.q = *M3I
int128_t v18
v18.q = *(M3I + 0xc)
uint128_t v20
v20.q = *(M3I + 0x18)
v5 = data_71a7f0
int32_t v17 = *(M3I + 8)
int128_t v7
v7.q = 0
v1.d = v1.d f* (*(arg3 + 0xc) - v3)
int128_t v6_1 = vmul_f32(v16, v7, 0)
int128_t var_30 = v5
int128_t v5_1 = vmul_f32(v18, v7, 0)
uint128_t v7_1 = vmul_f32(v20, v7, 0)
uint128_t v4
v4.d = 0f
v0.d = v2 f+ v0.d
v1.d = v3 f+ v1.d
int128_t v2_1 = vrev64_s32(v6_1)
int128_t v3_1 = vrev64_s32(v5_1)
int128_t v5_2 = vrev64_s32(v7_1)
int128_t v2_2 = vadd_f32(v16, v2_1)
v6_1.d = v0.d f* v16.d
v7_1.d = v1.d f* v16:4.d
int128_t v3_2 = vadd_f32(v18, v3_1)
v16.d = v0.d f* v18.d
v18.d = v1.d f* v18:4.d
int128_t v5_3 = vadd_f32(v20, v5_2)
v0.d = v0.d f* v20.d
v1.d = v1.d f* v20:4.d
v20.d = v17 f* v4.d
int128_t v20_1 = vdup_laneq_s32(v20, 0)
int32_t v19 = *(M3I + 0x14)
double v2_3 = vadd_f32(v2_2, v20_1)
v20_1.d = *(M3I + 0x20)
int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
v6_1.d = v6_1.d f+ v7_1.d
v7_1.d = v19 f* v4.d
uint64_t x4 = zx.q(*gRgbaIWhite)
uint64_t x5 = zx.q(*gRgbaINone)
v4.d = v20_1.d f* v4.d
v0.d = v0.d f+ v1.d
double v3_3 = vadd_f32(v3_2, vdup_laneq_s32(v7_1, 0))
int128_t v7_2
v7_2.d = v16.d f+ v18.d
v1.d = v17 f+ v6_1.d
v0.d = v20_1.d f+ v0.d
double v4_2 = vadd_f32(v5_3, vdup_laneq_s32(v4, 0))
v5_3.d = v19 f+ v7_2.d
int32_t var_44 = v1.d
int32_t var_14 = v0.d
v0.d = 0f
v1.d = 0f
double var_50 = v2_3
double var_40 = v3_3
double var_20 = v4_2
int32_t var_34 = v5_3.d
int64_t var_60 = 0
return DrawStringMatrix(arg1, &var_50, arg2, x3, x4, x5, zx.q(arg5), nullptr, v0, v1)
