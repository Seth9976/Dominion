// 函数: spBone_rotateWorld
// 地址: 0xfb5060
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8 = *(arg1 + 0x64)
int64_t v9 = *(arg1 + 0x70)
float cosp
float sinp
int64_t result
int128_t v0
int128_t v1_1
int128_t v2
int128_t v3
result, v0, v1_1, v2, v3 = sincosf(&sinp, &cosp, arg2 * float.s(0x3c8efa35))
v0.d = cosp
v1_1.d = sinp
*(arg1 + 0x60) = 0
v2.d = v8.d f* v0.d
v2:4.d = v8:4.d f* v0.d
v3.d = v9.d f* v1_1.d
v3:4.d = v9:4.d f* v1_1.d
v1_1.d = v8.d f* v1_1.d
v1_1:4.d = v8:4.d f* v1_1.d
v0.d = v9.d f* v0.d
v0:4.d = v9:4.d f* v0.d
double v2_1 = vsub_f32(v2, v3)
double v0_1 = vadd_f32(v1_1, v0)
*(arg1 + 0x64) = v2_1
*(arg1 + 0x70) = v0_1
return result
