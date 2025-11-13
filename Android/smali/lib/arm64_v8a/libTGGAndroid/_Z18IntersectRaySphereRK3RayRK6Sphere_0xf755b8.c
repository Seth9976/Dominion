// 函数: _Z18IntersectRaySphereRK3RayRK6Sphere
// 地址: 0xf755b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
int128_t v1
v1.q = *(arg2 + 8)
int128_t v2
v2.q = *(arg1 + 4)
int32_t v6 = *arg2
float v3 = *(arg2 + 4)
int32_t v4 = *(arg1 + 0xc)
int128_t v5
v5.q = *(arg1 + 0x10)
int128_t v1_1 = vsub_f32(v1, v2)
v0 = v3 - v0
v2.d = v0 f* v4
double v3_1 = vmul_f32(v1_1, v5, 0)
double v1_2 = vmul_f32(v1_1, v1_1, 0)
v2.d = v2.d f+ v3_1.d
v3_1.d = v3_1:4.d
v0 = v0 * v0 f+ v1_2.d
v1_2.d = v1_2:4.d
v2.d = v2.d f+ v3_1.d
v3_1.d = v6 f* v6
v0 = v0 f+ v1_2.d f- v3_1.d
v1_2.d = v2.d f* v2.d
v0 = v1_2.d f- v0
return zx.q(v0 >= 0f ? 1 : 0) & zx.q(v2.d f- sqrt(v0) >= 0f ? 1 : 0)
