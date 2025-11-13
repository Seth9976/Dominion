// 函数: _Z7DistBoxRK5Vec3I15DistributeShapeS1_RK5OBBoxS5_
// 地址: 0xf5ba2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_50 = v14
int64_t v13
int64_t var_48 = v13
int64_t v12
int64_t var_40 = v12
int64_t v11
int64_t var_38 = v11
int64_t v10
int64_t var_30 = v10
int64_t v9
int64_t var_28 = v9
int64_t v8
int64_t var_20 = v8
int32_t* entry_x8
int128_t v0
float v1
float v2
float v3
float v4
float v5
float v7

if (arg2 == 1)
    v0.d = *(arg4 + 0x1c)
    v1 = *(arg4 + 0x20)
    int32_t x8_1 = *(arg1 + 8)
    v3 = *(arg4 + 0x24)
    v2 = *(arg1 + 4)
    v4 = *(arg3 + 8)
    *entry_x8 = 0x3f800000
    
    if (v0.d f< v1)
        v7 = v0.d
    else
        v7 = v1
    
    v9.d = fconvert.s(0.5f)
    v2 = v7 * fconvert.s(0.25f) / float.s(v2)
    v5 = *PI
    v10.d = v0.d f* v9.d
    v0.d = float.s(*arg1)
    v11.d = v1 f* v9.d
    v0.d = (v5 + v5) * float.s(*arg3) f/ v0.d
    v8.d = v3 / float.s(x8_1) * (float.s(v4) - float.s(x8_1 - 1) f* v9.d)
    v12.d = v10.d f- v2
    v13.d = v11.d f- v2
    float cosp
    float sinp
    sincosf(&sinp, &cosp, v0.d)
    float cosp_1 = cosp
    float sinp_1 = sinp
    float v4_1 = *(arg4 + 0xc)
    float v3_1 = *(arg4 + 0x10)
    float v5_1 = *(arg4 + 0x14)
    float v6_1 = *(arg4 + 0x18)
    float v0_1 = fconvert.s(1f)
    float v7_1 = v10.d f* sinp_1
    float v16_1 = v11.d f* cosp_1
    sinp_1 = v12.d f* sinp_1
    cosp_1 = v13.d f* cosp_1
    float v17_1 = v3_1 * v4_1
    float v18_1 = v5_1 * v6_1
    float v19_1 = v3_1 * v3_1
    float v20_1 = v5_1 * v5_1
    float v21_1 = v6_1 * v6_1
    float v22_1 = v4_1 * v4_1
    float v23_1 = v3_1 * v5_1
    float v24_1 = v4_1 * v6_1
    v4_1 = v4_1 * v5_1
    v3_1 = v3_1 * v6_1
    v5_1 = v7_1 - sinp_1
    v7_1 = v17_1 - v18_1
    v17_1 = v17_1 + v18_1
    v18_1 = v4_1 - v3_1
    v3_1 = v4_1 + v3_1
    v4_1 = v23_1 + v24_1
    v23_1 = v23_1 - v24_1
    v13.d = v3_1 + v3_1
    sinp_1 = sinp_1 + v5_1 f* v9.d
    cosp_1 = cosp_1 + (v16_1 - cosp_1) f* v9.d
    v14.d = v21_1 + v20_1 - v19_1 - v22_1
    v9.d = (v7_1 + v7_1) * cosp_1 + sinp_1 * (v22_1 + v21_1 - v20_1 - v19_1)
    v10.d = (v17_1 + v17_1) * sinp_1 + (v19_1 - v20_1 + v21_1 - v22_1) * cosp_1
    v11.d = (v18_1 + v18_1) * sinp_1 + (v4_1 + v4_1) * cosp_1
    cosp_1 = v0_1 / sqrt(v11.d f* v11.d + v10.d f* v10.d + v9.d f* v9.d)
    v12.d = v23_1 + v23_1
    sinp_1 = v9.d f* cosp_1
    v3_1 = v10.d f* cosp_1
    v5_1 = v11.d f* cosp_1
    float sinp_2 = sinp_1
    float var_6c_1 = v3_1
    v16_1 = v12.d f* sinp_1
    cosp_1 = v14.d f* v3_1 - v12.d f* v5_1
    sinp_1 = v13.d f* v5_1 - v14.d f* sinp_1
    v3_1 = v16_1 - v13.d f* v3_1
    v4_1 = sqrt(v3_1 * v3_1 + cosp_1 * cosp_1 + sinp_1 * sinp_1)
    float var_68_1 = v5_1
    
    if (v4_1 >= float.s(0x3727c5ac))
        v4_1 = v0_1 / (v4_1 + float.s(0x3727c5ac))
        cosp_1 = cosp_1 * v4_1
        sinp_1 = sinp_1 * v4_1
        v3_1 = v3_1 * v4_1
        v4_1 = v0_1 / sqrt(v3_1 * v3_1 + cosp_1 * cosp_1 + sinp_1 * sinp_1)
        v0_1 = cosp_1 * v4_1
        cosp_1 = sinp_1 * v4_1
        sinp_1 = v3_1 * v4_1
    else
        v0_1 = *V0
        cosp_1 = *(V0 + 4)
        sinp_1 = *(V0 + 8)
    
    float var_60 = v0_1
    float cosp_2 = cosp_1
    float sinp_3 = sinp_1
    float v3_2
    arg1, v0, v1, v2, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &sinp_2, &var_60)
    entry_x8[1] = v0.d
    entry_x8[2] = v1
    entry_x8[3] = v2
    entry_x8[4] = v3_2
    v0.d = v8.d f* v13.d
    v0.d = v0.d f+ v9.d
    v0.d = v0.d f+ *arg4
    v1 = v8.d f* v12.d f+ v10.d + *(arg4 + 4)
    v2 = v8.d f* v14.d f+ v11.d + *(arg4 + 8) + *(arg4 + 0x24) * fconvert.s(-0.5f)
else
    if (arg2 != 0)
        pthread_kill(pthread_self(), 6)
        return FabClear(XNoReturn()) __tailcall
    
    *(entry_x8 + 4) = *(arg4 + 0xc)
    v3 = *(arg4 + 0x20)
    int32_t x9_1 = *arg1
    int32_t x8
    int32_t x10_1
    
    if (v3 != 0f)
        v0.d = *(arg5 + 0x1c)
        v2 = *(arg5 + 0x20)
        x10_1 = *(arg1 + 4)
        x8 = *(arg1 + 8)
        v1 = *(arg5 + 0x24)
        v4 = *(arg4 + 0x1c) / (v0.d f* float.s(x9_1))
        v3 = v3 / (v2 * float.s(x10_1))
        v5 = *(arg4 + 0x24) / (v1 * float.s(x8))
        
        if (not(v3 < v5))
            v3 = v5
        
        if (v4 < v3)
            v3 = v4
    else
        x10_1 = *(arg1 + 4)
        x8 = *(arg1 + 8)
        v0.d = *(arg5 + 0x1c)
        v2 = *(arg5 + 0x20)
        v1 = *(arg5 + 0x24)
        v3 = *(arg4 + 0x1c) / (v0.d f* float.s(x9_1))
        v4 = *(arg4 + 0x24) / (v1 * float.s(x8))
        
        if (not(v3 < v4))
            v3 = v4
    
    float v16 = entry_x8[3]
    v5 = entry_x8[4]
    float v6 = entry_x8[1]
    v7 = entry_x8[2]
    *entry_x8 = v3
    float v17 = v5 * v5
    float v18 = v6 * v6
    float v19 = v7 * v7
    float v20 = v6 * v7
    float v21 = v5 * v16
    float v22 = v5 * v7
    float v23 = v6 * v16
    v7 = v7 * v16
    v5 = v5 * v6
    v4 = fconvert.s(0.5f)
    v6 = v17 + v18
    v17 = v17 - v18
    v18 = v7 - v5
    v5 = v5 + v7
    float v26 = v17 + v19
    v17 = v17 - v19
    v16 = v16 * v16
    v0.d = (float.s(*arg3) - float.s(x9_1 - *V3I1) * v4) f* v0.d
    v0.d = v3 f* v0.d
    v2 = v3 * (float.s(*(arg3 + 4)) - float.s(x10_1 - *(V3I1 + 4)) * v4) * v2
    v1 = v3 * (float.s(*(arg3 + 8)) - float.s(x8 - *(V3I1 + 8)) * v4) * v1
    v3 = v0.d f* (v6 - v19 - v16)
    v4 = v2 + v2
    v0.d = v0.d f+ v0.d
    v6 = v1 + v1
    v7 = v4 * (v20 - v21)
    v19 = v0.d f* (v20 + v21)
    v0.d = v0.d f* (v23 - v22)
    v0.d = v0.d f+ v4 * v5
    v4 = v1 * (v17 + v16) f+ v0.d
    v0.d = *arg4 + v6 * (v22 + v23) + v3 + v7
    v1 = *(arg4 + 4) + v6 * v18 + v19 + v2 * (v26 - v16)
    v2 = *(arg4 + 8) + v4
entry_x8[5] = v0.d
entry_x8[6] = v1
entry_x8[7] = v2
