// 函数: _Z12Mat4MultiplyRK4Mat4S1_
// 地址: 0xc7c948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t v0 = *arg2
float128 v3 = *(arg2 + 0x10)
int32_t temp0 = *arg1
int128_t v4
v4.d = temp0
v4:4.d = temp0
uint128_t v2 = *(arg2 + 0x20)
float128 v1 = *(arg2 + 0x30)
int128_t v5
v5.d = *(arg1 + 8)
float128 v6
v6.d = *(arg1 + 0xc)
uint128_t v7 = vextq_s8(v0, v0, 8)
int128_t v16
v16.d = *arg1
int128_t v17 = vmul_f32(v4, v0, 0)
uint128_t v20 = vextq_s8(v3, v3, 8)
int128_t v4_1 = vmul_f32(v4, v7, 0)
int128_t v21
v21.d = v3.d f* v16.d
v21:4.d = v3:4.d f* v16.d
int128_t v17_1 = vadd_f32(v17, v21)
int64_t v21_1 = vextq_s8(v2, v2, 8)
v16.d = v20.d f* v16.d
v16:4.d = v20:4.d f* v16.d
int128_t v18
v18.d = v2.d f* v5.d
v18:4.d = v2:4.d f* v5.d
int128_t v4_2 = vadd_f32(v4_1, v16)
uint128_t v16_1 = vextq_s8(v1, v1, 8)
v5.d = v21_1.d f* v5.d
v5:4.d = v21_1:4.d f* v5.d
int128_t v19
v19.d = v1.d f* v6.d
v19:4.d = v1:4.d f* v6.d
v6.d = v16_1.d f* v6.d
v6:4.d = v16_1:4.d f* v6.d
int128_t v17_2 = vadd_f32(v17_1, v18)
int128_t v4_3 = vadd_f32(v4_2, v5)
int128_t v5_1 = vadd_f32(v17_2, v19)
int128_t v4_4 = vadd_f32(v4_3, v6)
int64_t* entry_x8
*entry_x8 = v5_1.q
entry_x8[1] = v4_4.q
v4_4.d = *(arg1 + 0x10)
v5_1.d = *(arg1 + 0x14)
v6.d = *(arg1 + 0x18)
v17_2.d = *(arg1 + 0x1c)
v18.d = v0.d f* v4_4.d
v18:4.d = v0:4.d f* v4_4.d
v19.d = v3.d f* v5_1.d
v19:4.d = v3:4.d f* v5_1.d
v4_4.d = v7.d f* v4_4.d
v4_4:4.d = v7:4.d f* v4_4.d
v5_1.d = v20.d f* v5_1.d
v5_1:4.d = v20:4.d f* v5_1.d
v7.d = v2.d f* v6.d
v7:4.d = v2:4.d f* v6.d
v20.d = v1.d f* v17_2.d
v20:4.d = v1:4.d f* v17_2.d
v6.d = v21_1.d f* v6.d
v6:4.d = v21_1:4.d f* v6.d
v16_1.d = v16_1.d f* v17_2.d
v16_1:4.d = v16_1:4.d f* v17_2.d
int128_t v17_3 = vadd_f32(v18, v19)
int128_t v4_5 = vadd_f32(v4_4, v5_1)
int128_t v5_2 = vadd_f32(v17_3, v7)
int128_t v4_6 = vadd_f32(v4_5, v6)
float128 v5_3 = vadd_f32(v5_2, v20)
float128 v4_7 = vadd_f32(v4_6, v16_1)
entry_x8[2] = v5_3.q
entry_x8[3] = v4_7.q
v4_7.d = *(arg1 + 0x20)
v5_3.d = *(arg1 + 0x24)
v6.d = *(arg1 + 0x28)
v7.d = *(arg1 + 0x2c)
v4_7.d = v0.d f* v4_7.d
v4_7:4.d = v0:4.d f* v4_7.d
v4_7:8.d = v0:8.d f* v4_7.d
v4_7:0xc.d = v0:0xc.d f* v4_7.d
v5_3.d = v3.d f* v5_3.d
v5_3:4.d = v3:4.d f* v5_3.d
v5_3:8.d = v3:8.d f* v5_3.d
v5_3:0xc.d = v3:0xc.d f* v5_3.d
v6.d = v2.d f* v6.d
v6:4.d = v2:4.d f* v6.d
v6:8.d = v2:8.d f* v6.d
v6:0xc.d = v2:0xc.d f* v6.d
v7.d = v1.d f* v7.d
v7:4.d = v1:4.d f* v7.d
v7:8.d = v1:8.d f* v7.d
v7:0xc.d = v1:0xc.d f* v7.d
*(entry_x8 + 0x20) = vaddq_f32(vaddq_f32(vaddq_f32(v4_7, v5_3), v6), v7)
float128 v4_10
v4_10.d = *(arg1 + 0x30)
v5_3.d = *(arg1 + 0x34)
v6.d = *(arg1 + 0x38)
v7.d = *(arg1 + 0x3c)
v0.d = v0.d f* v4_10.d
v0:4.d = v0:4.d f* v4_10.d
v0:8.d = v0:8.d f* v4_10.d
v0:0xc.d = v0:0xc.d f* v4_10.d
v3.d = v3.d f* v5_3.d
v3:4.d = v3:4.d f* v5_3.d
v3:8.d = v3:8.d f* v5_3.d
v3:0xc.d = v3:0xc.d f* v5_3.d
v2.d = v2.d f* v6.d
v2:4.d = v2:4.d f* v6.d
v2:8.d = v2:8.d f* v6.d
v2:0xc.d = v2:0xc.d f* v6.d
v1.d = v1.d f* v7.d
v1:4.d = v1:4.d f* v7.d
v1:8.d = v1:8.d f* v7.d
v1:0xc.d = v1:0xc.d f* v7.d
*(entry_x8 + 0x30) = vaddq_f32(vaddq_f32(vaddq_f32(v0, v3), v2), v1)
