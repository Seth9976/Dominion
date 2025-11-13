// 函数: _Z19UIElementRegionRectRK9UIElementRK11UITransformb
// 地址: 0x1052148
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
float128 v0_5
float128 v1_1
float128 v2_1
int128_t v3
int128_t var_40
int128_t v0

if ((arg3.d & 1) == 0)
    v0 = *(arg1 + 0x30)
    var_40 = *(arg1 + 0x20)
    int128_t var_30_1 = v0
    int128_t v0_6
    int128_t v1_2
    int128_t v2_2
    float128 v4_1
    int128_t v5_1
    result, v0_6, v1_2, v2_2, v3, v4_1, v5_1 =
        UIRectAligned(arg1 + 0x10, &var_40, arg2 + 0x4c, arg2 + 0x2c, arg2 + 0x3c)
    v4_1.d = *(arg2 + 0xc)
    v5_1.d = 0f
    v0_6:4.d = v1_2.d
    v4_1.d = vmax_f32(v4_1.d, v5_1.d)
    v1_2.q = *(arg2 + 0x10)
    v5_1.q = *(arg2 + 0x18)
    v2_2:4.d = v3.d
    v3.d = fconvert.s(1f)
    v3:4.d = fconvert.s(1f)
    v0_6.d = v0_6.d f* v4_1.d
    v0_6:4.d = v0_6:4.d f* v4_1.d
    int128_t v1_3 = vadd_f32(v1_2, v3)
    v3.q = *arg2
    v2_2.d = v2_2.d f* v4_1.d
    v2_2:4.d = v2_2:4.d f* v4_1.d
    v4_1 = *(arg1 + 0x98)
    int128_t v0_7 = vadd_f32(v3, v0_6)
    int128_t v2_3 = vadd_f32(v3, v2_2)
    int128_t v0_8 = vsub_f32(v0_7, v5_1)
    v2_1 = vsub_f32(v2_3, v5_1)
    int128_t v0_9 = vmul_f32(v1_3, v0_8, 0)
    int128_t v1_4 = vmul_f32(v1_3, v2_1, 0)
    float128 v0_10 = vadd_f32(v5_1, v0_9)
    float128 v1_6
    v1_6:8.q = vsub_f32(vadd_f32(v5_1, v1_4), v0_10).q
    v0_10:8.q = v0_10.q
    v0_5 = vaddq_f32(v0_10, vmulq_f32(v4_1, v1_6, 0))
else
    v0 = *(arg1 + 0x30)
    var_40 = *(arg1 + 0x20)
    int128_t var_30 = v0
    float128 v0_1
    int128_t v2
    float128 v5
    result, v0_1, v1_1, v2, v3, v5 =
        UIRectAligned(arg1 + 0x10, &var_40, arg2 + 0x4c, arg2 + 0x2c, arg2 + 0x3c)
    v5.d = 0f
    v0_1:4.d = v1_1.d
    v1_1.q = *arg2
    v0_1:8.d = v2.d
    v0_1:0xc.d = v3.d
    float temp0 = vmax_f32(*(arg2 + 0xc), v5.d)
    v3.q = *(arg2 + 0x10)
    v5.q = *(arg2 + 0x18)
    v2.d = fconvert.s(1f)
    v2:4.d = fconvert.s(1f)
    v1_1:8.q = v1_1.q
    v0_1.d = v0_1.d f* temp0
    v0_1:4.d = v0_1:4.d f* temp0
    v0_1:8.d = v0_1:8.d f* temp0
    v0_1:0xc.d = v0_1:0xc.d f* temp0
    v5:8.q = v5.q
    v2_1:8.q = vadd_f32(v3, v2).q
    v0_5 = vaddq_f32(v5, vmulq_f32(v2_1, vsubq_f32(vaddq_f32(v1_1, v0_1), v5), 0))
v1_1.d = v0_5:4.d
v2_1.d = v0_5:8.d
v3.d = v0_5:0xc.d
return result
