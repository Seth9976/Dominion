// 函数: _ZN7fftimpl7cftb040EPf
// 地址: 0x10766f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t v2
v2.q = *(arg1 + 8)
int128_t v0
v0.q = *(arg1 + 0x10)
int128_t v1
v1.q = *arg1
uint128_t v3
v3.q = *(arg1 + 0x18)
float128 v0_1 = vrev64_s32(v0)
float128 v1_1 = vrev64_s32(v1)
uint128_t v2_1 = vzip1q_s32(v2, v2)
uint128_t v3_1 = vzip1q_s32(v3, v3)
v1_1:8.q = v1_1.q
v0_1:8.q = v0_1.q
float128 v4 = vsubq_f32(v2_1, v3_1)
float128 v2_2 = vaddq_f32(v2_1, v3_1)
float128 v3_2 = vsubq_f32(v1_1, v0_1)
float128 v0_2 = vaddq_f32(v1_1, v0_1)
uint128_t v1_2 = vextq_s8(v4, v2_2, 0xc)
uint128_t v5 = vextq_s8(v3_2, v0_2, 0xc)
uint128_t v6 = vextq_s8(v1_2, v4, 4)
uint128_t v1_3 = vextq_s8(v1_2, v1_2, 8)
float128 v0_3 = vaddq_f32(v0_2, v2_2)
float128 v2_3 = vaddq_f32(v3_2, v4)
uint128_t v3_3 = vextq_s8(v5, v3_2, 4)
uint128_t v4_1 = vextq_s8(v5, v5, 8)
uint128_t v1_4 = vextq_s8(v6, v1_3, 0xc)
int64_t v0_4 = vextq_s8(v0_3, v0_3, 4)
float128 v3_4 = vextq_s8(v3_3, v4_1, 0xc)
*arg1 = v0_4
float128 v0_5 = vsubq_f32(v3_4, v1_4)
arg1[2] = v2_3:0xc.d
*(arg1 + 0xc) = v0_5
arg1[7] = v2_3.d
