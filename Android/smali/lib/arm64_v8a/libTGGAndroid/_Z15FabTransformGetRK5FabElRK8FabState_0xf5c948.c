// 函数: _Z15FabTransformGetRK5FabElRK8FabState
// 地址: 0xf5c948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(FabState, 0x490) x8
void* __offset(FabState, 0x494) x9_1
void* __offset(FabState, 0x498) x10_1
void* __offset(FabState, 0x49c) x11
void* __offset(FabState, 0x4a0) x12
void* __offset(FabState, 0x4a4) x13
void* __offset(FabState, 0x4a8) x14

if (*(arg2 + 0x48c) s<= *(arg2 + 0x60))
    x8 = arg1 + 0x10
    x9_1 = arg1 + 0x14
    x10_1 = arg1 + 0x18
    x11 = arg1 + 0x1c
    x12 = arg1 + 0x20
    x13 = arg1 + 0x24
    x14 = arg1 + 0x28
else
    x8 = arg2 + 0x490
    x9_1 = arg2 + 0x494
    x10_1 = arg2 + 0x498
    x11 = arg2 + 0x49c
    x12 = arg2 + 0x4a0
    x13 = arg2 + 0x4a4
    x14 = arg2 + 0x4a8

float v4 = *x14
float v0 = *x13
float v1 = *x12
float var_78 = *x8
float v2 = *x11
int64_t v11
v11.d = *x10_1
int64_t v10
v10.d = *x9_1
float v3 = *PI
int64_t v14
v14.d = fconvert.s(0.5f)
v0 = (v0 + v0) * v3
v2 = (v2 + v2) * v3
v1 = (v1 + v1) * v3
v3 = float.s(0x3b360b61)
int64_t v12
v12.d = v2 * v3
int64_t v13
v13.d = v1 * v3
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v0 * v3 f* v14.d)
int64_t v8
v8.d = cosp_2
int64_t v15
v15.d = sinp_2
float cosp
float sinp
sincosf(&sinp, &cosp, v12.d f* v14.d)
int64_t v9
v9.d = cosp
v12.d = sinp
float cosp_1
float sinp_1
int64_t result = sincosf(&sinp_1, &cosp_1, v13.d f* v14.d)
float cosp_3 = cosp_1
float sinp_3 = sinp_1
float v0_3 = *(arg2 + 0x40)
float v2_1 = *(arg2 + 0x44)
float v1_1 = *(arg2 + 0x48)
float v3_1 = *(arg2 + 0x4c)
float v21 = *(arg2 + 0x50)
float v22 = *(arg2 + 0x54)
float v18 = v10.d f+ v10.d
float v10_1 = v11.d
float v19 = v11.d f+ v11.d
v11.d = var_78
float v6 = v8.d f* v9.d
float v7 = v15.d f* v12.d
float v16 = v8.d f* v12.d
float v17 = v15.d f* v9.d
float v23 = cosp_3 * v6
float v24 = sinp_3 * v7
float v25 = cosp_3 * v16
float v26 = sinp_3 * v17
v6 = sinp_3 * v6
v7 = cosp_3 * v7
cosp_3 = cosp_3 * v17
sinp_3 = sinp_3 * v16
v16 = v21 * v21
v17 = v2_1 * v2_1
float v28 = v2_1 * v1_1
float v29 = v21 * v3_1
float v30 = v21 * v1_1
float v31 = v2_1 * v3_1
v8.d = v1_1 * v3_1
v9.d = v21 * v2_1
float v20 = v11.d f+ v11.d
v23 = v23 + v24
v24 = v25 - v26
v6 = v6 + v7
sinp_3 = cosp_3 - sinp_3
cosp_3 = v16 + v17
v16 = v16 - v17
float v27 = v1_1 * v1_1
v7 = v18 * (v28 - v29)
v25 = v19 * (v30 + v31)
v17 = v19 * (v8.d f- v9.d)
v19 = v20 * (v31 - v30)
v18 = v18 * (v9.d f+ v8.d)
cosp_3 = cosp_3 - v27
v26 = v20 * (v28 + v29)
v30 = v16 + v27
v16 = v16 - v27
v20 = v21 * v23
v27 = v2_1 * v24
v28 = v1_1 * v6
v29 = v3_1 * sinp_3
v31 = v21 * v24
v8.d = v2_1 * v23
v9.d = v1_1 * sinp_3
v12.d = v21 * v6
v21 = v21 * sinp_3
sinp_3 = v2_1 * sinp_3
v2_1 = v2_1 * v6
v6 = v3_1 * v6
v18 = v19 + v18
v19 = v1_1 * v23
v1_1 = v1_1 * v24
v24 = v3_1 * v24
v23 = v3_1 * v23
v3_1 = v3_1 * v3_1
cosp_3 = cosp_3 - v3_1
v30 = v30 - v3_1
v3_1 = v16 + v3_1
v16 = v20 - v27
v21 = v23 + v21
v23 = v10.d * v30
v27 = *(arg2 + 0x58)
v30 = *(arg2 + 0x5c)
int32_t* entry_x8
entry_x8[2] = v24 + v19 f+ v12.d - sinp_3
entry_x8[3] = v2_1 + v21 - v1_1
entry_x8[6] = v27 + v0_3 * (v17 + v26 + v23)
entry_x8[7] = v30 + v0_3 * (v10_1 * v3_1 + v18)
entry_x8[4] = v16 - v28 - v29
entry_x8[5] = v22 + v0_3 * (v25 + v11.d f* cosp_3 + v7)
*entry_x8 = v4 * v0_3
entry_x8[1] = v9.d f+ v8.d f+ v31 - v6
return result
