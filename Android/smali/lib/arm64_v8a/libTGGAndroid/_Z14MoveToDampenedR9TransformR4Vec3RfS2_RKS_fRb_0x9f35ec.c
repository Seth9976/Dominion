// 函数: _Z14MoveToDampenedR9TransformR4Vec3RfS2_RKS_fRb
// 地址: 0x9f35ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_60 = v15
int64_t v14
int64_t var_58 = v14
int64_t v13
int64_t var_50 = v13
int64_t v12
int64_t var_48 = v12
int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
float y_1 = *(arg1 + 0x14)
int128_t v1
v1.q = *(arg5 + 0x18)
int128_t v3
v3.d = *arg1
float v4 = *arg5
float v5 = *(arg5 + 0x14)
int128_t v0 = vsub_f32((*(arg1 + 0x18)).d, v1)
int128_t v0_1 = vmul_f32(v0, v0, 0)
v1.d = v3.d f- v4
v3.d = y_1 - v5
v3.d = v3.d f* v3.d
v3.d = v3.d f+ v0_1.d
v0_1.d = v0_1:4.d
v1.d = v1.d f* v1.d
v0_1.d = v3.d f+ v0_1.d
v0_1.d = v0_1.d f+ v1.d
v1.d = float.s(0x3c23d70a)

if (not(v0_1.d f>= v1.d))
    *arg7 = true
    v0_1 = *(arg5 + 0x10)
    *arg1 = *arg5
    *(arg1 + 0x10) = v0_1
    int64_t x10_1 = *V0
    *(arg2 + 8) = *(V0 + 8)
    *arg2 = x10_1
    int64_t x8_1 = *V0
    *(arg4 + 8) = *(V0 + 8)
    *arg4 = x8_1
    *arg3 = 0f
    return 

v0_1.d = float.s(0x415dc8f0)
v5 = arg6 f* v0_1.d
v1.d = fconvert.s(1f)
*(arg1 + 4) = *(arg5 + 4)
v3.d = v5 f+ v1.d + v5 * v5 * float.s(0x3ef5c28f)
v4 = v5 * v5 * v5 * float.s(0x3e70a3d7)
v5 = *(arg5 + 0x14)
v3.d = v3.d f+ v4
v9.d = v1.d f/ v3.d
y_1 = y_1 - v5
v3.d = y_1 f* v0_1.d
v3.d = *arg2 f+ v3.d
*(arg1 + 0x14) = v5 + v9.d f* (y_1 + v3.d f* arg6)
v4 = *(arg2 + 4)
v3.d = v3.d f* v0_1.d
v3.d = v3.d f* arg6
*arg2 = v9.d f* (*arg2 f- v3.d)
y_1 = *(arg5 + 0x18)
v3.d = *(arg1 + 0x18)
v3.d = v3.d f- y_1
v4 = v4 + v3.d f* v0_1.d
v3.d = v3.d f+ v4 * arg6
v3.d = v9.d f* v3.d
*(arg1 + 0x18) = y_1 f+ v3.d
v3.d = v4 f* v0_1.d
v4 = *(arg2 + 8)
v3.d = v3.d f* arg6
*(arg2 + 4) = v9.d f* (*(arg2 + 4) f- v3.d)
y_1 = *(arg5 + 0x1c)
v3.d = *(arg1 + 0x1c)
v3.d = v3.d f- y_1
v4 = v4 + v3.d f* v0_1.d
v3.d = v3.d f+ v4 * arg6
v3.d = v9.d f* v3.d
*(arg1 + 0x1c) = y_1 f+ v3.d
v3.d = v4 f* v0_1.d
v3.d = v3.d f* arg6
*(arg2 + 8) = v9.d f* (*(arg2 + 8) f- v3.d)
y_1 = *arg5
v3.d = *arg1
v3.d = v3.d f- y_1
v4 = *arg3 + v3.d f* v0_1.d
v3.d = v3.d f+ v4 * arg6
v3.d = v9.d f* v3.d
*arg1 = y_1 f+ v3.d
v0_1.d = v4 f* v0_1.d
v0_1.d = v0_1.d f* arg6
v0_1.d = *arg3 f- v0_1.d
v0_1.d = v9.d f* v0_1.d
*arg3 = v0_1.d
v12.d = *(arg1 + 4)
v15.d = *(arg1 + 8)
v14.d = *(arg1 + 0xc)
v11.d = *(arg1 + 0x10)
v3.d = *PI
v0_1.d = v15.d f* v15.d
float var_7c_1 = v3.d
int32_t var_78_1 = v0_1.d
v0_1.d = v15.d f* v11.d
v0_1.d = v0_1.d f- v12.d f* v14.d
v0_1.d = v0_1.d f+ v0_1.d
y_1 = fabs(v0_1.d)
v13.d = v3.d f+ v3.d

if (y_1 f>= v1.d)
    v0_1.d = v0_1.d f/ y_1
    v1.d = float.s(0x42b40000)
    v3.d = float.s(0x3727c5ac)
    v0_1.d = v0_1.d f* v1.d
    
    if (y_1 f< v3.d)
        v0_1.d = v1.d
    else
        v0_1.d = v0_1.d
else
    v0_1, v1 = asinf(v0_1.d)
    v1.d = float.s(0x43b40000)
    v0_1.d = v0_1.d f* v1.d
    v0_1.d = v0_1.d f/ v13.d

v10.d = var_78_1
float var_74_1 = v0_1.d
v0_1.d = v11.d f* v12.d
v1.d = v15.d f* v14.d
v0_1.d = v0_1.d f+ v1.d
v1.d = v10.d f+ v12.d f* v12.d
v1.d = v1.d f+ v1.d
y_1 = fconvert.s(1f)
v0_1.d = v0_1.d f+ v0_1.d
v1.d = y_1 f- v1.d
float v1_1 = v11.d f* v14.d
v11.d = float.s(0x43b40000)
v1_1 = v15.d f* v12.d + v1_1
float y_2 = v10.d f+ v14.d f* v14.d
v12.d = atan2f(v0_1.d, v1.d, y_1) f* v11.d f/ v13.d
float y = v1_1 + v1_1
v1_1 = y_2 + y_2
y_2 = fconvert.s(1f)
float v0_2 = atan2f(y, y_2 - v1_1, y_2) f* v11.d
float v1_2 = *(arg4 + 8)
float v4_1 = float.s(0x415dc8f0)
v0_2 = v0_2 f/ v13.d
float v5_1 = float.s(0x3b360b61)
float v6_1 = v0_2 - v0_2
v11.d = var_7c_1 * (v12.d f+ v12.d) * v5_1
float v2 = v1_2 + v6_1 * v4_1
v12.d = var_7c_1 * (var_74_1 + var_74_1) * v5_1
v0_2 = v0_2 + v9.d f* (v6_1 + v2 * arg6)
float v8 = fconvert.s(0.5f)
*(arg4 + 8) = v9.d f* (v1_2 - v2 * v4_1 * arg6)
float cosp
float sinp
sincosf(&sinp, &cosp, var_7c_1 * (v0_2 + v0_2) * v5_1 * v8)
v10.d = cosp
v9.d = sinp
float cosp_1
float sinp_1
sincosf(&sinp_1, &cosp_1, v11.d f* v8)
v13.d = cosp_1
v11.d = sinp_1
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, v12.d f* v8)
float cosp_3 = cosp_2
float sinp_3 = sinp_2
float v2_1 = v13.d f* v10.d
float v3_3 = v11.d f* v9.d
float v4_2 = v11.d f* v10.d
float v5_2 = v13.d f* v9.d
*(arg1 + 4) = cosp_3 * v4_2 - sinp_3 * v5_2
*(arg1 + 8) = sinp_3 * v2_1 + cosp_3 * v3_3
*(arg1 + 0xc) = cosp_3 * v5_2 - sinp_3 * v4_2
*(arg1 + 0x10) = cosp_3 * v2_1 + sinp_3 * v3_3
