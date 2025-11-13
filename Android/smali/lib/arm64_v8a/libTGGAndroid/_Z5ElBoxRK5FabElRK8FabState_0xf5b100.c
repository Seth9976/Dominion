// 函数: _Z5ElBoxRK5FabElRK8FabState
// 地址: 0xf5b100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(FabState, 0x490) x8
void* __offset(FabState, 0x494) x9_1
void* __offset(FabState, 0x498) x10_1
void* __offset(FabState, 0x49c) x11
void* __offset(FabState, 0x4a0) x12
void* __offset(FabState, 0x4a4) x13

if (*(arg2 + 0x48c) s<= *(arg2 + 0x60))
    x8 = arg1 + 0x10
    x9_1 = arg1 + 0x14
    x10_1 = arg1 + 0x18
    x11 = arg1 + 0x1c
    x12 = arg1 + 0x20
    x13 = arg1 + 0x24
else
    x8 = arg2 + 0x490
    x9_1 = arg2 + 0x494
    x10_1 = arg2 + 0x498
    x11 = arg2 + 0x49c
    x12 = arg2 + 0x4a0
    x13 = arg2 + 0x4a4

float sinp_4 = *x10_1
int128_t v8
v8.d = *x13
int64_t v9
v9.d = *x12
int64_t v14
v14.d = *x11
int128_t v12
v12.d = *x9_1
int128_t v13
v13.d = *x8
float v0
float v1
float v2
v0, v1, v2 = ElSize(arg1, arg2)
float var_a8 = v2
float var_a4 = v0
float var_ac = v1
v2 = v14.d f+ v14.d
v1 = *PI
v14.d = fconvert.s(0.5f)
v0 = (v8.d f+ v8.d) * v1
float v3 = float.s(0x3b360b61)
v8.d = v2 * v1 * v3
v9.d = (v9.d f+ v9.d) * v1 * v3
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v0 * v3 f* v14.d)
int64_t v10
v10.d = cosp_2
int64_t v15
v15.d = sinp_2
float cosp
float sinp
sincosf(&sinp, &cosp, v8.d f* v14.d)
int64_t v11
v11.d = cosp
v8.d = sinp
float cosp_1
float sinp_1
void** result
int64_t x3
int64_t x4
Vec3* x5
Vec3* x6
result, x3, x4, x5, x6 = sincosf(&sinp_1, &cosp_1, v9.d f* v14.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
int32_t x8_1 = *arg1
float v2_1 = v10.d f* v11.d
float v3_1 = v15.d f* v8.d
float v4 = v10.d f* v8.d
float v5 = v15.d f* v11.d
v14.d = cosp_3 * v2_1 + sinp_3 * v3_1
v15.d = cosp_3 * v4 - sinp_3 * v5
v9.d = sinp_3 * v2_1 + cosp_3 * v3_1
v8.d = cosp_3 * v5 - sinp_3 * v4
int32_t* entry_x8

if (x8_1 - 1 u>= 2)
    if (x8_1 != 3)
    label_f5b44c:
        *entry_x8 = v13.d
        entry_x8[1] = v12.d
        entry_x8[4] = v9.d
        entry_x8[5] = v8.d
        entry_x8[8] = var_ac
        entry_x8[9] = var_a8
        sinp_3 = sinp_4
    else
        result = StructureGetDef(*(arg1 + 0x60))
        void* x8_2 = *result
        float v1_3 = v14.d f* v14.d
        float v2_3 = v15.d f* v15.d
        float v3_2 = v9.d f* v9.d
        float v5_1 = v15.d f* v9.d
        float v6_1 = v14.d f* v8.d
        float v7_1 = v14.d f* v9.d
        float v16_1 = v15.d f* v8.d
        float v17_1 = v9.d f* v8.d
        float v18_2 = v14.d f* v15.d
        float v19_2 = v1_3 + v2_3
        v1_3 = v1_3 - v2_3
        float v4_1 = v8.d f* v8.d
        float v20_2 = v5_1 - v6_1
        float v21_2 = v7_1 + v16_1
        v5_1 = v5_1 + v6_1
        v2_3 = v17_1 - v18_2
        v6_1 = v16_1 - v7_1
        v7_1 = v18_2 + v17_1
        v17_1 = v3_2 + v1_3
        v1_3 = v1_3 - v3_2
        v3_2 = v19_2 - v3_2 - v4_1
        v16_1 = v17_1 - v4_1
        v1_3 = v4_1 + v1_3
        sinp_3 = fconvert.s(0.5f)
        v4_1 = (*(x8_2 + 0x4c) + *(x8_2 + 0x40)) * sinp_3
        v17_1 = (*(x8_2 + 0x50) + *(x8_2 + 0x44)) * sinp_3
        sinp_3 = (*(x8_2 + 0x54) + *(x8_2 + 0x48)) * sinp_3
        v3_2 = v3_2 * v4_1
        v18_2 = v17_1 + v17_1
        v4_1 = v4_1 + v4_1
        v19_2 = sinp_3 + sinp_3
        sinp_3 = sinp_4 + v1_3 * sinp_3 + v6_1 * v4_1 + v7_1 * v18_2
        entry_x8[8] = var_ac
        entry_x8[9] = var_a8
        entry_x8[4] = v9.d
        entry_x8[5] = v8.d
        *entry_x8 = v13.d f+ v3_2 + v20_2 * v18_2 + v21_2 * v19_2
        entry_x8[1] = v12.d f+ v5_1 * v4_1 + v16_1 * v17_1 + v2_3 * v19_2
    
    entry_x8[2] = sinp_3
    entry_x8[3] = v15.d
    entry_x8[6] = v14.d
    entry_x8[7] = var_a4
else
    uint64_t x9_3 = zx.q(*(arg1 + 0x48))
    
    if (x9_3.d u> 3)
        pthread_kill(pthread_self(), 6)
        return ElBoxAsset(XNoReturn()) __tailcall
    
    *(gDraw3DData + 0x24)
    *(gDraw3DData + 0x28)
    *(gDraw3DData + 0x2c)
    int32_t var_d0
    Vec3 var_80
    Vec3 var_70
    int64_t x0_5
    void* x1_4
    void* x2_2
    int128_t v0_4
    float v1_2
    float v6
    float v7
    float v16
    
    switch (x9_3)
        case 0
            goto label_f5b44c
        case 1
            cosp_3 = *(gDraw3DData + 0x1c)
            sinp_3 = *(gDraw3DData + 0x20)
            v6 = *(gDraw3DData + 0x14)
            v2_1 = *(gDraw3DData + 0x18)
            v8.d = sinp_4
            float v19_1 = cosp_3 * cosp_3
            v7 = v2_1 * sinp_3
            float v17 = v2_1 * cosp_3
            float v18_1 = sinp_3 * v6
            float v20_1 = v2_1 * v2_1
            float v22_1 = sinp_3 * sinp_3
            sinp_3 = v2_1 * v6 - sinp_3 * cosp_3
            float v21_1 = v6 * v6
            cosp_3 = v7 + cosp_3 * v6
            v6 = v17 - v18_1
            v16 = v17 + v18_1
            float var_bc_1 = v22_1 + v20_1 - v19_1 - v21_1
            float var_b8_1 = v16 + v16
            float var_d0_1 = cosp_3 + cosp_3
            float var_cc_1 = v6 + v6
            float var_c0_1 = sinp_3 + sinp_3
            float var_c8_1 = v22_1 + v19_1 - v20_1 - v21_1
            BillboardAxes(0, &var_70, &var_80, x3, x4, x5, x6)
            v0_4.q = *VUP
            v1_2 = *(VUP + 8)
        case 2
            x1_4 = &var_70
            x2_2 = &var_80
            x0_5 = 1
            float var_c8_2 = *(VUP + 8)
            int32_t var_c0
            var_c0.q = *V0
            float var_b8_2 = *(V0 + 8)
            var_d0.q = *VUP
        label_f5b51c:
            v8.d = sinp_4
            BillboardAxes(x0_5, x1_4, x2_2, x3, x4, x5, x6)
            v0_4.q = *VUP
            v1_2 = *(VUP + 8)
        case 3
            cosp_3 = *(gDraw3DData + 0x1c)
            sinp_3 = *(gDraw3DData + 0x20)
            v2_1 = *(gDraw3DData + 0x14)
            v6 = *(gDraw3DData + 0x18)
            v7 = sinp_3 * sinp_3 + v2_1 * v2_1
            v16 = sinp_3 * cosp_3 + v2_1 * v6
            sinp_3 = v2_1 * cosp_3 - sinp_3 * v6
            float var_c8_3 = *(VUP + 8)
            var_d0.q = *VUP
            float var_bc_2 = v16 + v16
            float var_b8_3 = sinp_3 + sinp_3
            x1_4 = &var_70
            x2_2 = &var_80
            x0_5 = 3
            float var_c0_2 = v7 - cosp_3 * cosp_3 - v6 * v6
            goto label_f5b51c
    
    double v0_6 = vneg_f32(v0_4)
    *entry_x8 = v13.d
    entry_x8[1] = v12.d
    entry_x8[2] = v8.d
    double var_90 = v0_6
    float var_88_1 = fneg(v1_2)
    float v0_7
    int32_t v1_5
    int32_t v2_5
    int32_t v3_3
    result, v0_7, v1_5, v2_5, v3_3 = QuatFromBasisChange(VRIGHT, &var_90, &var_70, &var_80)
    entry_x8[3] = v0_7
    entry_x8[4] = v1_5
    entry_x8[5] = v2_5
    entry_x8[6] = v3_3
    entry_x8[7] = var_a4
    entry_x8[8] = var_ac
    entry_x8[9] = var_a8
return result
