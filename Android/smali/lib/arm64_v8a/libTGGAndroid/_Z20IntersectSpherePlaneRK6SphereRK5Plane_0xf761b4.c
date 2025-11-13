// 函数: _Z20IntersectSpherePlaneRK6SphereRK5Plane
// 地址: 0xf761b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v4 = *arg1
int128_t v1
v1.q = *(arg2 + 4)
int128_t v3
v3.q = *(arg1 + 8)
float v0 = *arg2 * *(arg1 + 4)
float v2 = *(arg2 + 0xc)
double v1_1 = vmul_f32(v1, v3, 0)
v0 = v0 f+ v1_1.d
v1_1.d = v1_1:4.d
return zx.q(fabs(v2 + v0 f+ v1_1.d) f<= v4 ? 1 : 0)
