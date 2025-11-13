// 函数: _Z21IntersectSphereSphereRK6SphereS1_
// 地址: 0xf76174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v4
v4.q = *(arg1 + 8)
int128_t v5
v5.q = *(arg2 + 8)
float v0 = *arg1 + *arg2
float v1 = *(arg1 + 4) - *(arg2 + 4)
int128_t v2_1 = vsub_f32(v4, v5)
double v2_2 = vmul_f32(v2_1, v2_1, 0)
v1 = v1 * v1 f+ v2_2.d
v2_2.d = v2_2:4.d
return zx.q(v1 f+ v2_2.d <= v0 * v0 ? 1 : 0)
