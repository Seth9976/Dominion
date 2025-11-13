// 函数: _Z20AnimPathGetPosAtTimeP6XAssetfi
// 地址: 0xc7b04c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *StructureGetDef(arg1)
int32_t* x9_2 = *(*(x8 + 0x68) + muls.dp.d(arg3, 0x18) + 0x10)
int32_t* x20_1 = *(x8 + 0x28)
int32_t x22 = x9_2[1]
int32_t x23 = x20_1[0xe]
int64_t x21 = *(x9_2 + 0x18)
int32_t x24 = *x9_2 - 1
float iptr
int64_t result
float128 v0_1
float128 v1
float128 v2
float128 v3
float128 v4
float128 v5
float128 v6
int128_t v7
v0_1, result, v1, v2, v3, v4, v5, v6, v7 = modff(&iptr, float.s(x24) * arg2)
v1.d = iptr
v2.d = fconvert.s(0.5f)
v3.d = fconvert.s(-0.5f)

if (v1.d f< 0f)
    v2.d = v3.d
else
    v2.d = v2.d

v1.d = v1.d f+ v2.d
uint32_t x8_2 = vcvts_s32_f32(v1.d)
v1.d = 0f
double v16

if ((x8_2 & 0x80000000) != 0)
    x8_2 = 0
    v0_1.d = 0f
label_c7b118:
    int128_t* x9_4 = x21 + muls.dp.d(x23 + x8_2 * x22, 0x2c)
    int128_t* x8_7 = x21 + muls.dp.d(x23 + (x8_2 + 1) * x22, 0x2c)
    v2 = *x8_7
    v5 = x8_7[1]
    v3 = *x9_4
    v4 = x9_4[1]
    float128 v6_1 = vmulq_f32(v2, v3, 0)
    int128_t v7_1 = vdup_laneq_s32(v6_1, 3)
    int128_t v16_1 = vdup_laneq_s32(v6_1, 1)
    v7 = vadd_f32(vadd_f32(v7_1, v6_1), v16_1)
    uint128_t v6_2 = vextq_s8(v6_1, v6_1, 8)
    v16_1.q = x9_4[2].q
    float128 v6_3 = vadd_f32(v7, v6_2)
    v7.q = x8_7[2].q
    uint128_t v1_1 = vcgtq_f32(v1, v6_3)
    v6 = vnegq_f32(v2)
    uint128_t v2_1 = vbslq_s8(vdupq_laneq_s32(v1_1, 0), v6, v2)
    float128 v1_3 = vsubq_f32(v5, v4)
    v5 = vsub_f32(v7, v16_1)
    v2 = vsubq_f32(v2_1, v3)
    v1_3.d = v1_3.d f* v0_1.d
    v1_3:4.d = v1_3:4.d f* v0_1.d
    v1_3:8.d = v1_3:8.d f* v0_1.d
    v1_3:0xc.d = v1_3:0xc.d f* v0_1.d
    v5.d = v5.d f* v0_1.d
    v5:4.d = v5:4.d f* v0_1.d
    v0_1.d = v2.d f* v0_1.d
    v0_1:4.d = v2:4.d f* v0_1.d
    v0_1:8.d = v2:8.d f* v0_1.d
    v0_1:0xc.d = v2:0xc.d f* v0_1.d
    v1 = vaddq_f32(v4, v1_3)
    v0_1 = vaddq_f32(v3, v0_1)
    v16 = vadd_f32(v16_1, v5)
else
    if (x24 s> x8_2)
        goto label_c7b118
    
    int128_t* x8_4 = x21 + muls.dp.d(x23 + x24 * x22, 0x2c)
    v0_1 = *x8_4
    v1 = x8_4[1]
    v16 = x8_4[2].q

v3.d = *x20_1
v4.d = x20_1[1]
v6.d = x20_1[2]
v7.d = x20_1[3]
v2.d = x20_1[6]
float v19 = x20_1[7]
float v20 = x20_1[8]
v5.d = x20_1[9]
float v18 = v16:4.d
float v22 = vmulq_f32(v0_1, v0_1, 0)
float v23 = v0_1:4.d
float v24 = v0_1:8.d
v16.d = v1:0xc.d f+ v16.d
float v17 = v0_1:0xc.d f* v0_1:0xc.d
float v25 = v0_1.d f* v0_1:4.d
float v26 = v0_1.d f* v0_1:8.d
float v21 = v23 f* v0_1:4.d
float v28 = v24 f* v0_1:8.d
v24 = v24 f* v0_1:0xc.d
float v29 = v23 f* v0_1:0xc.d
v16.d = v16.d f+ v18
v18 = v22 + v17
v17 = v17 - v22
float v27 = v0_1.d f* v0_1:0xc.d
v23 = v23 f* v0_1:8.d
float v30 = v25 - v24
float v31 = v26 + v29
v24 = v25 + v24
v25 = v26 - v29
v22 = v23 - v27
v23 = v23 + v27
v19 = v19 + v20
v18 = v18 - v21 - v28
v20 = v21 + v17 - v28
v17 = v28 + v17 - v21
v21 = v7.d f* v0_1:0xc.d
v26 = v3.d f* v0_1.d
v27 = v4.d f* v0_1:4.d
v28 = v6.d f* v0_1:8.d
v29 = v3.d f* v0_1:0xc.d
float v8 = v7.d f* v0_1.d
int64_t v9
v9.d = v6.d f* v0_1:4.d
int64_t v10
v10.d = v4.d f* v0_1:8.d
int64_t v11
v11.d = v4.d f* v0_1:0xc.d
int64_t v12
v12.d = v7.d f* v0_1:4.d
int64_t v13
v13.d = v3.d f* v0_1:8.d
int64_t v14
v14.d = v6.d f* v0_1.d
v6.d = v6.d f* v0_1:0xc.d
v7.d = v7.d f* v0_1:8.d
v4.d = v4.d f* v0_1.d
v0_1.d = v3.d f* v0_1:4.d
v3.d = v2.d f+ v2.d
v5.d = v19 f+ v5.d
v31 = v31 f* v3.d
v3.d = v22 f* v3.d
v19 = x20_1[4]
v22 = x20_1[5]
v6.d = v6.d f+ v7.d
v18 = v18 * v19
v19 = v19 + v19
v20 = v20 * v22
v22 = v22 + v22
v7.d = float.s(0x3eaaaaab)
v2.d = v17 f* v2.d
v16.d = v16.d f* v7.d
v5.d = v5.d f* v7.d
v7.d = v18 + v30 * v22
v4.d = v4.d f+ v6.d
v6.d = v7.d f+ v31
v3.d = v24 * v19 + v20 f+ v3.d
v2.d = v2.d f+ v25 * v19 + v23 * v22
v24 = v1:8.d
v0_1.d = v4.d f- v0_1.d
v4.d = v16.d f* v5.d
v5.d = v16.d f* v6.d
v3.d = v16.d f* v3.d
v2.d = v16.d f* v2.d
v7.d = v21 - v26 - v27 - v28
int32_t* entry_x8
entry_x8[2] = v13.d f+ v11.d f+ v12.d f- v14.d
entry_x8[3] = v0_1.d
v0_1.d = v1.d f+ v5.d
v1.d = v1:4.d f+ v3.d
v2.d = v24 f+ v2.d
entry_x8[6] = v1.d
entry_x8[7] = v2.d
entry_x8[4] = v7.d
entry_x8[5] = v0_1.d
*entry_x8 = v4.d
entry_x8[1] = v9.d f+ v29 + v8 f- v10.d
return result
