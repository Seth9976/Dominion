// 函数: _Z22ReflectPointAboutPlaneRK5PlaneRK4Vec3
// 地址: 0xc95d44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 8)
int128_t v0
v0.q = *arg1
int128_t v3
v3.q = *arg2
float v4 = *(arg2 + 8)
float v1 = fneg(*(arg1 + 0xc))
int128_t v5
v5.d = v0.d f* v1
v5:4.d = v0:4.d f* v1
int128_t v3_1 = vsub_f32(v3, v5)
double v6 = vmul_f32(v3_1, v0, 0)
v6.d = v6.d f+ v6:4.d
v6.d = v6.d f+ (v4 - v2 * v1) * v2
v6.d = v6.d f+ v6.d
v0.d = v0.d f* v6.d
v0:4.d = v0:4.d f* v6.d
vadd_f32(v5, vsub_f32(v3_1, v0))
