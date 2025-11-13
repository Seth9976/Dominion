// 函数: _Z19SphereContainsPointRK6SphereRK4Vec3
// 地址: 0xfaa734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v4 = *arg1
int128_t v2
v2.q = *(arg1 + 8)
int128_t v3
v3.q = *(arg2 + 4)
float v0 = *(arg1 + 4) - *arg2
int128_t v1_1 = vsub_f32(v2, v3)
double v1_2 = vmul_f32(v1_1, v1_1, 0)
v0 = v0 * v0 f+ v1_2.d
v1_2.d = v1_2:4.d
v0 = v0 f+ v1_2.d
v1_2.d = v4 f* v4
return zx.q(v0 f<= v1_2.d ? 1 : 0)
