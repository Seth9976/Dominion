// 函数: _Z20UIProjectRTTransformRK4Vec2
// 地址: 0xfce9e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float* entry_x8
int128_t v0
float v1

if ((zx.d(data_2422678) & 1) == 0)
    Vec2 const& var_18_1 = arg1
    float* x19_1 = entry_x8
    int32_t x0
    x0, v0 = __cxa_guard_acquire(&data_2422678)
    arg1 = var_18_1
    entry_x8 = x19_1
    
    if (x0 != 0)
        v0.q = *VY
        v1 = *(VY + 8)
        double var_30 = vneg_f32(v0)
        float var_28_1 = fneg(v1)
        int32_t v0_2
        int32_t v1_1
        int32_t v2_1
        int32_t v3_1
        v0_2, v1_1, v2_1, v3_1 = QuatFromBasisChange(VX, &var_30, VRIGHT, VUP)
        data_2422708 = v0_2
        data_242270c = v1_1
        data_2422710 = v2_1
        data_2422714 = v3_1
        __cxa_guard_release(&data_2422678)
        arg1 = var_18_1
        entry_x8 = x19_1

float v4 = *(gDraw3DData + 0x8c)
float v5 = *(gDraw3DData + 0x90)
float v6 = *(gDraw3DData + 0x94)
float v7 = *(gDraw3DData + 0x98)
float v17 = data_2422708
float v18 = data_242270c
float v20 = data_2422710
float v19 = data_2422714
v0.d = fconvert.s(0.5f)
v0.d = *(arg1 + 4) f* v0.d
float v2 = v7 * v7
float v3 = v4 * v4
float v21 = v4 * v5
float v22 = v6 * v7
float v23 = v5 * v7
float v24 = v4 * v6
float v25 = v5 * v6
float v26 = v4 * v7
float v30 = v21 - v22
v21 = v21 + v22
v22 = v3 + v2
v2 = v2 - v3
v3 = v24 + v23
v23 = v24 - v23
v24 = v25 - v26
v25 = v25 + v26
float v27 = v7 * v19 - v4 * v17
v26 = v4 * v19 + v7 * v17
float v28 = v5 * v19 + v7 * v18
float v29 = v5 * v5
v7 = v6 * v19 + v7 * v20
v19 = v22 - v29
v22 = v29 + v2
v2 = v2 - v29
v27 = v27 - v5 * v18
v29 = v5 * v20
float v16 = *gDraw3DData f/ v0.d
v5 = v5 * v17
v17 = v6 * v17 + v28
v0.d = v0.d f* v16
v1 = *arg1 * fconvert.s(-0.5f) * v16
v7 = v4 * v18 + v7
v28 = v0.d f+ v0.d
v4 = v4 * v20
v20 = v6 * v20
v18 = v6 * v18
v6 = v6 * v6
v3 = v3 * v28
v24 = v24 * v28
v28 = v1 + v1
v0.d = (v6 + v2) f* v0.d
v0.d = v0.d f+ v25 + v25 + v23 * v28
v2 = *(gDraw3DData + 0xa0) + v24 + v22 - v6 + v21 * v28
v0.d = *(gDraw3DData + 0xa4) f+ v0.d
v1 = *(gDraw3DData + 0x9c) + v30 + v30 + (v19 - v6) * v1 + v3
*entry_x8 = v16
entry_x8[1] = v26 + v29 - v18
entry_x8[2] = v17 - v4
entry_x8[3] = v7 - v5
entry_x8[4] = v27 - v20
entry_x8[5] = v1
entry_x8[6] = v2
entry_x8[7] = v0.d
