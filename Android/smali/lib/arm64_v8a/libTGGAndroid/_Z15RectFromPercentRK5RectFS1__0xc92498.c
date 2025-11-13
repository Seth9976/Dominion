// 函数: _Z15RectFromPercentRK5RectFS1_
// 地址: 0xc92498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *arg1
int128_t v1
v1.q = *(arg1 + 8)
float128 v2 = *arg2
float128 v1_1
v1_1:8.q = vsub_f32(v1, v0).q
v0:8.q = v0.q
float128 v0_1 = vaddq_f32(v0, vmulq_f32(v1_1, v2, 0))
float128 v1_2
v1_2.d = v0_1:4.d
v2.d = v0_1:8.d
int128_t v3
v3.d = v0_1:0xc.d
