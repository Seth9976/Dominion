// 函数: _Z22ComposeMatrixTransfromR4Mat4RK9TransformRK4Vec2S6_fRK4Vec3
// 地址: 0xf9a504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
v9.d = *QI
int64_t v10
v10.d = *(QI + 4)
float v1
float v2
float v3
float v4
int64_t v8
float cosp_1
float sinp_1

if (arg5 != 0f)
    v8.d = *(V0 + 8)
    float cosp
    float sinp
    sincosf(&sinp, &cosp, arg5 * fconvert.s(0.5f))
    arg5 = *arg4
    v1 = *(arg4 + 4)
    cosp_1 = cosp
    sinp_1 = sinp
    
    if (arg5 != 0f || v1 != 0f)
        v3 = cosp_1 * arg5 - sinp_1 * v1
        arg5 = sinp_1 * arg5 + cosp_1 * v1
        v4 = cosp_1 * v3 - sinp_1 * arg5
        v1 = *arg6
        v2 = *(arg6 + 4)
        arg5 = sinp_1 * v3 + cosp_1 * arg5
        v3 = v1 * v4
        v4 = v2 * arg5
    else
        v3 = *V0
        v4 = *(V0 + 4)
        v1 = *arg6
        v2 = *(arg6 + 4)
else
    v1 = *arg6
    v2 = *(arg6 + 4)
    sinp_1 = *(QI + 8)
    cosp_1 = *(QI + 0xc)
    v3 = *arg4 * v1
    v4 = *(arg4 + 4) * v2
    v8.d = *(arg6 + 8) * 0f

float v7 = *arg3
float v16 = *(arg3 + 4)
int64_t v11
v11.d = cosp_1 + cosp_1
float v19 = *(arg2 + 8)
float v20 = *(arg2 + 0xc)
cosp_1 = *arg2
float v21 = *(arg2 + 4)
float v22 = *(arg2 + 0x10)
float v30 = v10.d f+ v10.d
float v31 = v9.d f+ v9.d
arg5 = fconvert.s(1f)
float v24 = v10.d f* v30
float v27 = v31 f* v10.d
float v29 = sinp_1 f* v11.d
float v26 = v31 * sinp_1
float v5 = 0f
float v25 = sinp_1 * (sinp_1 + sinp_1)
float v28 = v10.d f* v11.d
sinp_1 = v30 * sinp_1
v30 = v9.d f* v11.d
v10.d = arg5 - v24
v11.d = v27 - v29
v27 = v27 + v29
v29 = arg5 - v9.d f* v31
int64_t v12
v12.d = v26 + v28
v31 = sinp_1 - v30
v26 = v26 - v28
sinp_1 = sinp_1 + v30
v28 = v10.d f- v25
v25 = v29 - v25
v24 = v29 - v24
v1 = v7 * v1
v2 = v16 * v2
float v17 = *(arg6 + 8) * v5
v3 = v3 * v7
v7 = v19 + v19
v29 = v21 + v21
v22 = v22 + v22
v9.d = v8.d f* v5
v4 = v4 * v16
v28 = v28 * v1
v30 = v11.d f* v2
v10.d = v12.d f* v17
v27 = v27 * v1
v25 = v25 * v2
v31 = v31 * v17
v1 = v26 * v1
v2 = sinp_1 * v2
v17 = v24 * v17
sinp_1 = v19 * v7
v24 = v19 * v29
v26 = v20 * v22
v11.d = v20 * v29
v5 = 0f
v16 = v20 * (v20 + v20)
v19 = v19 * v22
v7 = v7 * v20
v20 = v21 * v22
v12.d = arg5 - sinp_1
int64_t v13
v13.d = v24 - v26
v24 = v24 + v26
v26 = arg5 - v21 * v29
int64_t v14
v14.d = v11.d f+ v19
v29 = v7 - v20
v19 = v11.d f- v19
v7 = v7 + v20
v11.d = v27 * v5
v12.d = v12.d f- v16
v16 = v26 - v16
sinp_1 = v26 - sinp_1
v20 = v28 * v5 f+ v11.d
v11.d = v10.d f* v5
v24 = cosp_1 * v24
int64_t v15
v15.d = v1 * v5
v26 = v11.d f+ v31 * v5
v11.d = v2 * v5
v21 = v9.d f+ v3 * v5 + v4 * v5
v9.d = v17 * v5
float var_98 = v28 * v24
float var_8c = v15.d f+ v20
float var_9c = v30 * v24
v13.d = cosp_1 f* v13.d
v19 = cosp_1 * v19
v7 = cosp_1 * v7
v12.d = cosp_1 f* v12.d
float var_90 = v11.d f+ v30 * v5 + v25 * v5
v14.d = cosp_1 f* v14.d
v29 = cosp_1 * v29
v16 = cosp_1 * v16
cosp_1 = cosp_1 * sinp_1
v11.d = v10.d f* v24
v15.d = v3 * v24
float var_94 = v9.d f+ v26
v9.d = v28 * v19
float var_88 = v21 + arg5
v21 = v30 * v19
sinp_1 = v10.d f* v19
v19 = v3 * v19
v28 = v28 f* v12.d
v30 = v30 f* v12.d
v10.d = v10.d f* v12.d
v24 = v3 f* v12.d
v12.d = v27 f* v13.d
v20 = v25 f* v13.d
v22 = v31 f* v13.d
v13.d = v4 f* v13.d
arg5 = v27 * v7
v3 = v25 * v7
v5 = v31 * v7
v7 = v4 * v7
v27 = v27 * v16
v25 = v25 * v16
v31 = v31 * v16
v4 = v4 * v16
arg5 = v9.d f+ arg5
v3 = v21 + v3
v5 = sinp_1 + v5
v7 = v19 + v7
v16 = v1 f* v14.d
v19 = v2 f* v14.d
v21 = v17 f* v14.d
v26 = v8.d f* v14.d
v9.d = v1 * v29
v14.d = v2 * v29
sinp_1 = v17 * v29
v29 = v8.d f* v29
v1 = v1 * cosp_1
v2 = v2 * cosp_1
v17 = v17 * cosp_1
cosp_1 = v8.d f* cosp_1
v28 = v28 f+ v12.d
v12.d = v10.d f+ v22
v8.d = var_94
arg5 = v1 + arg5
v1 = v2 + v3
v2 = *(arg2 + 0x18)
v3 = *(arg2 + 0x1c)
float var_84 = *(arg2 + 0x14)
float v6 = 0f
v20 = v30 + v20
v30 = v11.d f+ v31
v10.d = v3 * v6
*(arg1 + 0x20) = v10.d f+ arg5
*(arg1 + 0x24) = v10.d f+ v1
v11.d = var_84
v5 = v17 + v5
v17 = v11.d f* v6
v7 = cosp_1 + v7
cosp_1 = v2 * v6
v8.d = v8.d f+ v6
*(arg1 + 0x30) = var_8c + v6
*(arg1 + 0x34) = var_90 + v6
*(arg1 + 0x28) = v10.d f+ v5
*(arg1 + 0x2c) = v3 + v7
*arg1 = v17 + v16 + v28
*(arg1 + 4) = v17 + v19 + v20
*(arg1 + 8) = v17 + v21 f+ v12.d
*(arg1 + 0xc) = v11.d f+ v26 + v24 f+ v13.d
*(arg1 + 0x10) = cosp_1 + v9.d f+ var_98 + v27
*(arg1 + 0x14) = cosp_1 + v14.d f+ var_9c + v25
*(arg1 + 0x18) = cosp_1 + sinp_1 + v30
*(arg1 + 0x1c) = v2 + v29 + v15.d f+ v4
*(arg1 + 0x38) = v8.d
*(arg1 + 0x3c) = var_88
