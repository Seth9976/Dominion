// 函数: _Z13RectToPercentRK5RectFS1_
// 地址: 0xc9246c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *arg1
int128_t v1
v1.q = *(arg1 + 8)
float128 v2 = *arg2
float128 v1_1 = vsub_f32(v1, v0)
v0:8.q = v0.q
v1_1:8.q = v1_1.q
float128 v0_2 = vdivq_f32(vsubq_f32(v2, v0), v1_1)
v1_1.d = v0_2:4.d
v2.d = v0_2:8.d
int128_t v3
v3.d = v0_2:0xc.d
