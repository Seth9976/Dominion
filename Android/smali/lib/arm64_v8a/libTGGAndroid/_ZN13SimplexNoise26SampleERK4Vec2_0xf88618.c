// 函数: _ZN13SimplexNoise26SampleERK4Vec2
// 地址: 0xf88618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int128_t v1
v1.q = *entry_x1
uint128_t v4
v4.d = *F2
float v2 = fconvert.s(0.5f)
uint128_t v16
v16.d = *G2
int128_t v3
v3.d = 1
v3:4.d = 1
v4.d = (v1.d f+ v1:4.d) f* v4.d
int128_t v4_2 = vadd_f32(v1, vdup_laneq_s32(v4, 0))
int128_t v5_1 = vcvt_s32_f32(v4_2)
uint128_t v4_4 = vcgt_f32(vcvt_f32_s32(v5_1), v4_2) + v5_1
int32_t x10 = v4_4:4.d
int32_t x9 = v4_4.d
int128_t v5_2 = vcvt_f32_s32(v4_4)
v4_4.d = float.s(x9 + x10)
v4_4.d = v16.d f* v4_4.d
uint128_t v5_3 = vsub_f32(v1, vsub_f32(v5_2, vdup_laneq_s32(v4_4, 0)))
double v1_1 = vmul_f32(v5_3, v5_3, 0)
uint128_t v4_6
v4_6.d = v2 f- v1_1.d
v1_1.d = v1_1:4.d
int128_t v7
v7.d = v4_6.d f- v1_1.d
int32_t x12 = vcgt_f32(v5_3, vdup_laneq_s32(v5_3, 1)).d
int32_t x13 = x12 ^ 1
int128_t v1_3
v1_3:4.d = x13
int128_t v1_5 = vcvt_f32_u32(v1_3 & v3)
int128_t v6
v6.d = fconvert.s(-1f)
v6:4.d = fconvert.s(-1f)
int128_t v3_1 = vdup_laneq_s32(v16, 0)
v4_6.d = v16.d f+ v16.d
int128_t v1_6 = vsub_f32(v5_3, v1_5)
int128_t v0
v0.d = 0f
int128_t v4_7 = vdup_laneq_s32(v4_6, 0)
int32_t x9_1 = x9 & 0xff
int32_t x10_1 = x10 & 0xff
int128_t v6_1 = vadd_f32(v5_3, v6)
int128_t v3_2 = vadd_f32(v3_1, v1_6)
v1_6.d = 0f

if (not(v7.d f< 0f))
    v7.d = v7.d f* v7.d
    v7.d = v7.d f* v7.d
    v1_6.q = *(&data_865b5c
        + sx.q(*(arg1 + (sx.q(*(arg1 + (zx.q(x10_1) << 2)) + x9_1) << 2) + 0x800)) * 0xc)
    v1_6 = vmul_f32(v5_3, v1_6, 0)
    v1_6.d = v1_6.d f+ v1_6:4.d
    v1_6.d = v7.d f* v1_6.d

double v5_4 = vmul_f32(v3_2, v3_2, 0)
v2 = v2 f- v5_4.d
v5_4.d = v5_4:4.d
v5_4.d = v2 f- v5_4.d
int128_t v2_1 = vadd_f32(v4_7, v6_1)

if (not(v5_4.d f< 0f))
    v4_7.d = v5_4.d f* v5_4.d
    v4_7.d = v4_7.d f* v4_7.d
    v0.q = *(&data_865b5c +
        sx.q(*(arg1 + 0x800 + (sx.q(x9_1 + *(arg1 + (zx.q(x10_1 + (x13 & 1)) << 2)) - x12) << 2)))
        * 0xc)
    v0 = vmul_f32(v3_2, v0, 0)
    v0.d = v0.d f+ v0:4.d
    v0.d = v4_7.d f* v0.d

double v3_3 = vmul_f32(v2_1, v2_1, 0)
v4_7.d = fconvert.s(0.5f)
v4_7.d = v4_7.d f- v3_3.d
v3_3.d = v3_3:4.d
v3_3.d = v4_7.d f- v3_3.d
v4_7.d = 0f

if (not(v3_3.d f< 0f))
    v3_3.d = v3_3.d f* v3_3.d
    v3_3.d = v3_3.d f* v3_3.d
    v4_7.q = *(&data_865b5c
        + sx.q(*(arg1 + 0x800 + (sx.q(*(arg1 + (zx.q(x10_1 + 1) << 2)) + x9_1 + 1) << 2))) * 0xc)
    double v2_2 = vmul_f32(v2_1, v4_7, 0)
    v2_2.d = v2_2.d f+ v2_2:4.d
    v4_7.d = v3_3.d f* v2_2.d

v0.d = v1_6.d f+ v0.d
v0.d = v0.d f+ v4_7.d
v1_6.d = float.s(0x428c0000)
v0.d = v0.d f* v1_6.d
