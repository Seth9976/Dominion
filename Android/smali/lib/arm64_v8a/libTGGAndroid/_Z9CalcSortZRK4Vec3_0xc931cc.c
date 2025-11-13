// 函数: _Z9CalcSortZRK4Vec3
// 地址: 0xc931cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.q = *(arg1 + 4)
int128_t v3
v3.q = *(gDraw3DData + 0xbc)
*(gDraw3DData + 0xb8) - *arg1
int128_t v1_1 = vsub_f32(v3, v1)
double v1_2
v1_2.d = vmul_f32(v1_1, v1_1, 0):4.d
