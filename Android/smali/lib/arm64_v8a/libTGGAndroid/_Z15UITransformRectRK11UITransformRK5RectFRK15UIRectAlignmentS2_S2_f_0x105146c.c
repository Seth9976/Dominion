// 函数: _Z15UITransformRectRK11UITransformRK5RectFRK15UIRectAlignmentS2_S2_f
// 地址: 0x105146c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v2
int64_t var_70 = entry_v2.q
int128_t entry_v1
int64_t var_80 = entry_v1.q
int64_t var_90 = arg6.q
entry_v1 = *(arg3 + 0x10)
int32_t arg_0
entry_v2.d = arg_0
int64_t entry_v6
int64_t var_c0 = entry_v6
int128_t var_30 = (*arg3).d.o
int128_t var_20 = entry_v1
int64_t result
float128 v0
float128 v1
int32_t v2
int128_t v3
float128 v6
int128_t v18
int128_t v19
int128_t v20
result, v0, v1, v2, v3, v6, v18, v19, v20 =
    UIRectAligned(arg2, &var_30, arg1 + 0x4c, arg1 + 0x2c, arg1 + 0x3c)
int32_t entry_v7
v18:4.d = entry_v7
float128 v4_1
int32_t entry_v5
v4_1:4.d = entry_v5
float128 v5
v5:4.d = entry_v5
v20:4.d = var_80.o.d
v0:4.d = v1.d
int64_t entry_v3
v19:4.d = entry_v3.o.d
v0:8.d = v2
int128_t v2_1 = vsub_f32(v18, v19)
float128 v16_2 = vsub_f32(v18, v4_1)
double v4_2 = vsub_f32(v4_1, v20)
int64_t entry_v4
v5:8.d = entry_v4.o.d
v2_1.d = v2_1.d f* entry_v2.d
v2_1:4.d = v2_1:4.d f* entry_v2.d
v0:0xc.d = v3.d
v3.d = v4_2.d f* entry_v2.d
v3:4.d = v4_2:4.d f* entry_v2.d
v6.d = *(arg1 + 0xc)
v5:0xc.d = entry_v5
int128_t v2_2 = vadd_f32(v19, v2_1)
float128 v3_1 = vadd_f32(v20, v3)
v1.q = *arg1
v16_2:8.q = v16_2.q
float128 v0_1 = vsubq_f32(v0, v5)
float128 v2_3
v2_3:8.q = vsub_f32(v2_2, v3_1).q
v3_1:8.q = v3_1.q
float128 v0_3 = vmulq_f32(v2_3, vdivq_f32(v0_1, v16_2), 0)
v4_2.d = vmax_f32(v6.d, 0f)
v1:8.q = v1.q
float128 v0_4
v0_4.d = vaddq_f32(v3_1, v0_3).d f* v4_2.d
v0_4:4.d = v0_4:4.d f* v4_2.d
v0_4:8.d = v0_4:8.d f* v4_2.d
v0_4:0xc.d = v0_4:0xc.d f* v4_2.d
float128 v0_5 = vaddq_f32(v1, v0_4)
v1.d = v0_5:4.d
v2_3.d = v0_5:8.d
v3_1.d = v0_5:0xc.d
return result
