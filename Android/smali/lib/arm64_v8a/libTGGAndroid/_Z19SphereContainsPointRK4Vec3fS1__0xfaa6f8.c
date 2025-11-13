// 函数: _Z19SphereContainsPointRK4Vec3fS1_
// 地址: 0xfaa6f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v3
v3.q = *(arg1 + 4)
int128_t v4
v4.q = *(arg3 + 4)
float v1 = *arg1 - *arg3
int128_t v2_1 = vsub_f32(v3, v4)
double v2_2 = vmul_f32(v2_1, v2_1, 0)
v1 = v1 * v1 f+ v2_2.d
v2_2.d = v2_2:4.d
return zx.q(v1 f+ v2_2.d <= arg2 * arg2 ? 1 : 0)
