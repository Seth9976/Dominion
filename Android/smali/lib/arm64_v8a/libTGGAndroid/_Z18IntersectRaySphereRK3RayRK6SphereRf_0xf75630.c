// 函数: _Z18IntersectRaySphereRK3RayRK6SphereRf
// 地址: 0xf75630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
int128_t v1
v1.q = *(arg2 + 8)
int128_t v2
v2.q = *(arg1 + 4)
int32_t v6 = *arg2
float v3 = *(arg2 + 4)
float v4 = *(arg1 + 0xc)
int128_t v5
v5.q = *(arg1 + 0x10)
int128_t v1_1 = vsub_f32(v1, v2)
v3 = v3 - v0
double v2_1 = vmul_f32(v1_1, v5, 0)
double v1_2 = vmul_f32(v1_1, v1_1, 0)
v0 = v3 * v4 f+ v2_1.d
v2_1.d = v2_1:4.d
v3 = v3 * v3 f+ v1_2.d
v1_2.d = v1_2:4.d
v0 = v0 f+ v2_1.d
v2_1.d = v6 f* v6
v1_2.d = v3 f+ v1_2.d
v1_2.d = v1_2.d f- v2_1.d
v2_1.d = v0 * v0
v1_2.d = v2_1.d f- v1_2.d

if (not(v1_2.d f>= 0f))
    return 0

v1_2.d = sqrt(v1_2.d)
v0 = v0 f- v1_2.d
*arg3 = v0
return zx.q(v0 >= 0f ? 1 : 0)
