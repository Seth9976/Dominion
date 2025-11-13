// 函数: _Z13CalcInflationRK4BBoxS1_
// 地址: 0xfa44ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
float v1 = *(arg1 + 0xc)
*(arg2 + 0xc)
int128_t v5
v5.q = *(arg1 + 4)
int128_t v6
v6.q = *(arg1 + 0x10)
int128_t v7
v7.q = *(arg2 + 4)
int128_t v16
v16.q = *(arg2 + 0x10)
*arg2
int128_t v3_1 = vcgt_f32(v5, v7)
int128_t v7_1 = vsub_f32(v5, v7)
int128_t v1_1 = vcgt_f32(v16, v6)
int128_t v16_1 = vsub_f32(v16, v6)
int128_t v5_1 = vsub_f32(v6, v5)
v6.q = 0
int128_t v3_2 = vadd_f32(v7_1, v6) & v3_1
v7_1.d = (v1 - v0) f* v5_1.d
vadd_f32(v5_1, vbsl_s8(v1_1, vadd_f32(v16_1, v3_2), v3_2))
double v1_3
v1_3.d = v7_1.d f* v5_1:4.d
