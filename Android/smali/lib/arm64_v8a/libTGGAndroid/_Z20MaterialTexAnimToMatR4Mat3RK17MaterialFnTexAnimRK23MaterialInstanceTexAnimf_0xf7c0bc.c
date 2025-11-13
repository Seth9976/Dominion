// 函数: _Z20MaterialTexAnimToMatR4Mat3RK17MaterialFnTexAnimRK23MaterialInstanceTexAnimf
// 地址: 0xf7c0bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v1
v1.d = *arg3
double v2
v2.d = *(arg2 + 0x18)
double v3
v3.d = *(arg2 + 0x1c)
int64_t v10
v10.d = arg4 f- v1.d
arg4 = (fconvert.d(v2.d)).d
v2 = fconvert.d(v10.d)
double x = v2 * fconvert.d(v3.d) + fconvert.d(*(arg2 + 0x14))
double iptr
double v0
v0.d = fconvert.s(modf(&iptr, ((v2 f* arg4.q).d.q f+ fconvert.d(*(arg2 + 0x10))).d.q))
float var_50 = v0.d
int128_t v0_2 = modf(&iptr, x)
x.d = *arg2
int64_t v9
v9.d = *(arg2 + 4)
v0_2.d = fconvert.s(v0_2.q)
int128_t var_60 = v0_2
v0_2.d = v10.d f* *(arg2 + 0xc)
v0_2.d = *(arg2 + 8) f+ v0_2.d
float cosp
float sinp
int64_t result
int128_t v3_1
int128_t v7
float128 v16
int128_t v17
float128 v18
float128 v20
int128_t v22
int128_t v23
int128_t v31
result, v3_1, v7, v16, v17, v18, v20, v22, v23, v31 = sincosf(&sinp, &cosp, v0_2.d)
float cosp_1 = cosp
v3_1.d = sinp
float v4_1 = fconvert.s(0.5f)
float v21 = fneg(v3_1.d)
v22.d = x.d f* cosp_1
v3_1.d = v9.d f* v3_1.d
v16.q = *M3I
v18.q = *(M3I + 0xc)
v20.q = *(M3I + 0x18)
v17.d = *(M3I + 8)
float v19 = *(M3I + 0x14)
float v1_2 = *(M3I + 0x20)
float v5_1 = *V21 * v4_1
v4_1 = *(V21 + 4) * v4_1
int128_t v28 = vzip1_s32(v18, v20)
v23.d = v9.d f* cosp_1
v21 = x.d f* v21
float v6 = v22.d f* v16.d
float v24 = v3_1.d f* v16.d
int128_t v27_1 = vzip2_s32(v18, v20)
v22.d = v28.d f* v22.d
v22:4.d = v28:4.d f* v22.d
v3_1.d = v28.d f* v3_1.d
v3_1:4.d = v28:4.d f* v3_1.d
v28.d = v28.d f* var_50
v28:4.d = v28:4.d f* var_50
float v30 = v5_1 f+ v17.d
v5_1 = v17.d f- v5_1
v17.d = v4_1 + v19
v7.q = 0
float v25 = v23.d f* v16:4.d
v23.d = v27_1.d f* v23.d
v23:4.d = v27_1:4.d f* v23.d
v31.d = v27_1.d f* var_60.d
v31:4.d = v27_1:4.d f* v31.d
v27_1.d = v27_1.d f* v21
v27_1:4.d = v27_1:4.d f* v21
v17:4.d = v1_2
v4_1 = v19 - v4_1
float v0_3 = v30 * 0f
float v26 = var_50 f* v16.d + var_60.d f* v16:4.d + v30
int128_t v22_1 = vadd_f32(v22, v27_1)
int128_t v3_2 = vadd_f32(v3_1, v23)
int128_t v23_1 = vadd_f32(v28, v31)
int128_t v7_1 = vmul_f32(v17, v7, 0)
float128 v30_1
v30_1:8.d = v1_2
float128 v19_1
v19_1:8.d = v5_1
float128 v21_1
v21_1:8.d = v4_1
v6 = v6 + v21 f* v16:4.d + v0_3
v0_3 = v24 + v25 + v0_3
uint128_t v17_1 = vadd_f32(v23_1, v17)
uint128_t v22_2 = vadd_f32(v22_1, v7_1)
uint128_t v3_3 = vadd_f32(v3_2, v7_1)
cosp_1 = v16:4.d
float v29 = v20:4.d
v25 = v18:4.d
v30_1:0xc.d = v20.d
v20.d = v20.d f* v26
v20:4.d = v20:4.d f* v26
v23_1.d = v26 * v1_2
v19_1:0xc.d = v16.d
v21_1:0xc.d = v18.d
uint128_t v7_2 = vdupq_laneq_s32(v17_1, 0)
v16.d = v16.d f* v6
v16:4.d = v16:4.d f* v6
v18.d = v18.d f* v0_3
v18:4.d = v18:4.d f* v0_3
uint128_t v26_1 = vdupq_laneq_s32(v22_2, 0)
uint128_t v27_2 = vdupq_laneq_s32(v3_3, 0)
uint128_t v7_3 = vextq_s8(v7_2, v17_1, 8)
uint128_t v17_2 = vextq_s8(v26_1, v22_2, 8)
uint128_t v3_4 = vextq_s8(v27_2, v3_3, 8)
float128 v5_2 = vmulq_f32(v19_1, v17_2, 0)
float128 v3_5 = vmulq_f32(v21_1, v3_4, 0)
int128_t v16_1 = vadd_f32(v16, v18)
float128 v7_4 = vmulq_f32(v30_1, v7_3, 0)
*(arg1 + 8) = v5_1 * v6 + v0_3 * v4_1 f+ v23_1.d
float128 v0_4 = vaddq_f32(v5_2, v3_5)
double v16_2 = vadd_f32(v16_1, v20)
float128 v0_5 = vaddq_f32(v7_4, v0_4)
*arg1 = v16_2
*(arg1 + 0xc) = v0_5
*(arg1 + 0x1c) = v29 f* v17_1:4.d + cosp_1 f* v22_2:4.d + v25 f* v3_3:4.d
*(arg1 + 0x20) = v1_2 f* v17_1:4.d + v5_1 f* v22_2:4.d + v4_1 f* v3_3:4.d
return result
