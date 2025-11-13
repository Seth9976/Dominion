// 函数: _Z15UITransformRectRK11UITransformRK5RectFRK15UIRectAlignment
// 地址: 0x1051584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *(arg3 + 0x10)
int128_t var_30 = *arg3
int128_t var_20 = v0
int64_t result
float128 v0_1
float128 v1_1
int128_t v2
float128 v3
int128_t v5
result, v0_1, v1_1, v2, v3, v5 = UIRectAligned(arg2, &var_30, arg1 + 0x4c, arg1 + 0x2c, arg1 + 0x3c)
v0_1:4.d = v1_1.d
v1_1.q = *arg1
v0_1:8.d = v2.d
v0_1:0xc.d = v3.d
v2.q = *(arg1 + 0x10)
v3.q = *(arg1 + 0x18)
v5.d = 0f
float temp0 = vmax_f32(*(arg1 + 0xc), v5.d)
v5.d = fconvert.s(1f)
v5:4.d = fconvert.s(1f)
v1_1:8.q = v1_1.q
v0_1.d = v0_1.d f* temp0
v0_1:4.d = v0_1:4.d f* temp0
v0_1:8.d = v0_1:8.d f* temp0
v0_1:0xc.d = v0_1:0xc.d f* temp0
v3:8.q = v3.q
float128 v2_1
v2_1:8.q = vadd_f32(v2, v5).q
float128 v0_5 = vaddq_f32(v3, vmulq_f32(v2_1, vsubq_f32(vaddq_f32(v1_1, v0_1), v3), 0))
v1_1.d = v0_5:4.d
v2_1.d = v0_5:8.d
v3.d = v0_5:0xc.d
return result
