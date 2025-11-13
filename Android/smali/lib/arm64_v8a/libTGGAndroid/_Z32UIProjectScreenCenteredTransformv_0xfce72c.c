// 函数: _Z32UIProjectScreenCenteredTransformv
// 地址: 0xfce72c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_2422670) & 1) == 0)
    int32_t x0_1
    int128_t v0_3
    x0_1, v0_3 = __cxa_guard_acquire(&data_2422670)
    
    if (x0_1 != 0)
        v0_3.q = *VY
        float v1_2 = *(VY + 8)
        double var_30 = vneg_f32(v0_3)
        float var_28_1 = fneg(v1_2)
        int32_t v0_5
        int32_t v1_3
        int32_t v2_2
        int32_t v3_2
        v0_5, v1_3, v2_2, v3_2 = QuatFromBasisChange(VX, &var_30, VRIGHT, VUP)
        data_24226f8 = v0_5
        data_24226fc = v1_3
        data_2422700 = v2_2
        data_2422704 = v3_2
        __cxa_guard_release(&data_2422670)

int64_t result
int128_t v0_1
int128_t v1_1
result, v0_1, v1_1 = InVRMode()
int64_t (* x8)()
int64_t (* x9_1)()
int64_t (* x10)()
int64_t (* x12)()
int64_t (* x13)()
int64_t (* x14)()
int64_t (* x15)()
double v0_2

if ((result.d & 1) == 0)
    x9_1 = gDraw3DData + 0xa0
    x10 = gDraw3DData + 0x9c
    x13 = gDraw3DData + 0x94
    x8 = gDraw3DData + 0xa4
    x14 = gDraw3DData + 0x90
    x15 = gDraw3DData + 0x8c
    v0_1.q = *(*gAppInterface + 0x28)
    x12 = gDraw3DData + 0x98
    v0_2 = vcvt_f32_s32(v0_1)
else
    v0_1.d = fconvert.s(0.25f)
    v0_1:4.d = fconvert.s(0.25f)
    x8 = gDraw3DData + 0xc0
    x9_1 = gDraw3DData + 0xbc
    v1_1.q = *(gVR + 0xb8)
    x10 = gDraw3DData + 0xb8
    x12 = gDraw3DData + 0xb4
    x13 = gDraw3DData + 0xb0
    x14 = gDraw3DData + 0xac
    v0_2 = vmul_f32(vcvt_f32_s32(v1_1), v0_1, 0)
    x15 = gDraw3DData + 0xa8

float v4 = *x12
float v3_1 = *x15
v1_1.d = *x13
float v2_1 = *x14
float v6 = fconvert.s(0.5f) f* v0_2:4.d
float v16 = float.s(0x80000000) f* v0_2.d
v0_2.d = 0f f* v0_2:4.d
float v7 = data_24226f8
float v17 = data_24226fc
float v19 = data_2422700
float v18 = data_2422704
float v5 = *gDraw3DData / v6
v6 = v4 * v4
float v20 = v3_1 * v3_1
float v21 = v2_1 * v2_1
float v22 = v2_1 * v3_1
float v23 = v4 f* v1_1.d
float v24 = v4 * v2_1
float v25 = v1_1.d f* v3_1
float v26 = v1_1.d f* v2_1
float v27 = v4 * v3_1
float v28 = v6 + v20
v6 = v6 - v20
float v29 = v22 - v23
float v30 = v24 + v25
v22 = v23 + v22
v20 = v26 - v27
v23 = v25 - v24
v24 = v26 + v27
v28 = v28 - v21
int64_t v8
v8.d = v21 + v6
v6 = v6 - v21
v0_2.d = v0_2.d f* v5
v25 = v4 * v18 - v3_1 * v7
v26 = v4 * v17
v21 = v3_1 * v18 + v4 * v7
float v31 = v2_1 * v18
v16 = v16 * v5
v4 = v1_1.d f* v18 + v4 * v19
v18 = v0_2.d f+ v0_2.d
v30 = v30 * v18
v18 = v20 * v18
v20 = v16 + v16
v27 = v2_1 * v17
v26 = v31 + v26
v31 = v1_1.d f* v19
v22 = v22 * v20
v20 = v23 * v20
v23 = v2_1 * v19
v19 = v3_1 * v19
v3_1 = v3_1 * v17
v17 = v1_1.d f* v17
v2_1 = v2_1 * v7
v7 = v1_1.d f* v7
v1_1.d = v1_1.d f* v1_1.d
v28 = v28 f- v1_1.d
v8.d = v8.d f- v1_1.d
v1_1.d = v1_1.d f+ v6
v6 = v25 - v27
v21 = v21 + v23
v3_1 = v3_1 + v4
v4 = *x8
v23 = *x9_1
v25 = *x10
v0_2.d = v0_2.d f* v1_1.d
v0_2.d = v0_2.d f+ v24 + v24 + v20
int32_t* entry_x8
entry_x8[2] = v7 + v26 - v19
entry_x8[3] = v3_1 - v2_1
v1_1.d = v6 - v31
v0_2.d = v4 f+ v0_2.d
*entry_x8 = v5
entry_x8[1] = v21 - v17
entry_x8[4] = v1_1.d
entry_x8[5] = v25 + v30 + v29 + v29 + v16 * v28
entry_x8[6] = v23 + v18 + v8.d f+ v22
entry_x8[7] = v0_2.d
return result
