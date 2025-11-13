// 函数: _Z20SphereOverlapsSphereRK6SphereS1_
// 地址: 0xfaa7b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v5 = *arg2
int128_t v1
v1.q = *(arg1 + 8)
int32_t v4 = *arg1
int128_t v3
v3.q = *(arg2 + 8)
float v0 = *(arg1 + 4) - *(arg2 + 4)
int128_t v1_1 = vsub_f32(v1, v3)
double v1_2 = vmul_f32(v1_1, v1_1, 0)
v0 = v0 * v0 f+ v1_2.d
v1_2.d = v1_2:4.d
v0 = sqrt(v0 f+ v1_2.d)
v1_2.d = v4 f+ v5
return zx.q(v0 f<= v1_2.d ? 1 : 0)
