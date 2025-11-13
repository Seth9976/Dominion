// 函数: _Z10MoveToAnimRK9TransformS1_S1_R12MoveAnimDatafRb
// 地址: 0x9f2664
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_70 = v14
int64_t v13
int64_t var_68 = v13
int64_t v12
int64_t var_60 = v12
uint64_t v11
uint64_t var_58 = v11
int128_t entry_v10
int64_t var_50 = entry_v10.q
int128_t entry_v9
int64_t var_48 = entry_v9.q
int128_t entry_v8
int64_t var_40 = entry_v8.q
*(arg4 + 0x9c) = *(arg4 + 0x9c) + arg5
SpineUpdate(*arg4, V20, V21, arg5, fconvert.s(1f))
int64_t result
int32_t* entry_x8

if ((SpineIsRunning(*arg4) & 1) == 0 || *(arg4 + 0x9c) f>= *(arg4 + 0x98))
    int128_t v0_5
    int128_t v1_3
    result, v0_5, v1_3 = SpineDestroy(*arg4)
    *arg4 = 0
    *arg6 = true
    v0_5 = *(arg3 + 0x10)
    *entry_x8 = *arg3
    *(entry_x8 + 0x10) = v0_5
else
    int64_t var_b8
    int128_t v0_1
    int128_t v2_1
    int128_t v7_1
    int128_t v16_1
    uint128_t v17_1
    int128_t v18_1
    int128_t v23_1
    int128_t v25_1
    int128_t v27_1
    int128_t v29_1
    result, v0_1, v2_1, v7_1, v16_1, v17_1, v18_1, v23_1, v25_1, v27_1, v29_1 =
        SpineGetSlotInfoByName(*arg4, *(arg4 + 8), &var_b8)
    v0_1.q = var_b8
    v7_1.q = *(arg4 + 0x54)
    v2_1.q = *(arg4 + 0x10)
    v16_1.q = *(arg3 + 0x14)
    v18_1.q = *(arg1 + 0x14)
    float v19_1 = *(arg3 + 0x1c)
    float v20_1 = *(arg1 + 0x1c)
    int32_t var_ac
    v23_1.d = var_ac
    float v26_1 = *(arg4 + 0x18)
    v25_1.d = *(arg4 + 0x1c)
    float v28_1 = *(arg4 + 0x5c)
    v27_1.d = *(arg4 + 0x60)
    float v21_1 = fconvert.s(1f)
    float v22_1 = fconvert.s(0.5f)
    float v3_1 = *VZ
    float v4_1 = *(VZ + 4)
    v17_1.d = *(VZ + 8)
    float v5_1 = *(arg4 + 0x9c) / *(arg4 + 0x98)
    int128_t v6_2 = vsub_f32(v7_1, v2_1)
    int128_t v7_2 = vsub_f32(v16_1, v18_1)
    v16_1.d = v19_1 - v20_1
    v19_1 = v23_1.d f+ v21_1
    v23_1.d = v21_1 f- v23_1.d
    float v24_1 = v25_1.d f+ v21_1
    v25_1.d = v21_1 f- v25_1.d
    v29_1.d = v27_1.d f+ v21_1
    v21_1 = v21_1 f- v27_1.d
    v6_2.d = v6_2.d f* v5_1
    v6_2:4.d = v6_2:4.d f* v5_1
    v27_1.d = v19_1 * v22_1
    v27_1.d = sqrt(v27_1.d)
    v7_2.d = v7_2.d f* v5_1
    v7_2:4.d = v7_2:4.d f* v5_1
    v16_1.d = v5_1 f* v16_1.d
    v25_1.d = v25_1.d f* v22_1
    v29_1.d = v29_1.d f* v22_1
    v21_1 = v21_1 * v22_1
    entry_v8.d = sqrt(v24_1 * v22_1)
    int128_t v0_2 = vsub_f32(v0_1, vadd_f32(v2_1, v6_2))
    int128_t v2_2
    v2_2.d = fneg(v27_1.d)
    float v30_1 = v23_1.d f* v22_1
    v23_1.d = fneg(v3_1)
    float v31_1 = fneg(v4_1)
    v22_1 = fneg(v17_1.d)
    int128_t v18_2 = vadd_f32(v18_1, v7_2)
    v19_1 = v20_1 f+ v16_1.d
    v7_2.d = sqrt(v25_1.d)
    v29_1.d = sqrt(v29_1.d)
    v20_1 = sqrt(v21_1)
    float var_b0
    
    if (var_b0 < 0f)
        v2_2.d = v2_2.d
    else
        v2_2.d = v27_1.d
    
    v16_1.d = v7_2.d f* v23_1.d
    v6_2.d = v7_2.d f* v31_1
    v7_2.d = v7_2.d f* v22_1
    v25_1.d = v20_1 f* v23_1.d
    v24_1 = v20_1 * v31_1
    v20_1 = v20_1 * v22_1
    
    if (v26_1 < 0f)
        v21_1 = fneg(entry_v8.d)
    else
        v21_1 = entry_v8.d
    
    if (v28_1 < 0f)
        v23_1.d = fneg(v29_1.d)
    else
        v23_1.d = v29_1.d
    
    v27_1.d = v6_2.d f* v24_1
    v22_1 = sqrt(v30_1)
    
    if (not(v7_2.d f* v20_1 + v27_1.d f+ v21_1 f* v23_1.d + v16_1.d f* v25_1.d >= 0f))
        v23_1.d = fneg(v23_1.d)
        v25_1.d = fneg(v25_1.d)
        v24_1 = fneg(v24_1)
        v20_1 = fneg(v20_1)
    
    float v1_2 = v19_1 + 0f
    v28_1 = v24_1 f- v6_2.d
    v23_1.d = v23_1.d f- v21_1
    v19_1 = v5_1 * (v25_1.d f- v16_1.d)
    int128_t v0_3 = vadd_f32(v0_2, v18_2)
    v3_1 = v3_1 * v22_1
    v4_1 = v4_1 * v22_1
    v22_1 = v22_1 f* v17_1.d
    v29_1.d = v20_1 f- v7_2.d
    v24_1 = *(arg3 + 4)
    v25_1.d = *(arg3 + 8)
    v26_1 = *(arg3 + 0xc)
    v27_1.d = *(arg3 + 0x10)
    v17_1.d = *(arg1 + 4)
    v18_2.d = *(arg1 + 8)
    v16_1.d = v16_1.d f+ v19_1
    v19_1 = *(arg1 + 0xc)
    v20_1 = *(arg1 + 0x10)
    v23_1.d = v5_1 f* v23_1.d
    v28_1 = v6_2.d f+ v5_1 * v28_1
    v6_2.d = v21_1 f+ v23_1.d
    v29_1.d = v5_1 f* v29_1.d
    v23_1.d = v16_1.d f* v16_1.d
    v7_2.d = v7_2.d f+ v29_1.d
    v29_1.d = v28_1 * v28_1
    v21_1 = v6_2.d f* v6_2.d f+ v23_1.d
    v23_1.d = v27_1.d f* v20_1
    v21_1 = v29_1.d f+ v21_1
    v29_1.d = v24_1 f* v17_1.d
    v23_1.d = v23_1.d f+ v29_1.d
    v29_1.d = v7_2.d f* v7_2.d
    v21_1 = v29_1.d f+ v21_1
    v29_1.d = v25_1.d f* v18_2.d
    v29_1.d = v23_1.d f+ v29_1.d
    v23_1.d = sqrt(v21_1)
    v6_2.d = v6_2.d f/ v23_1.d
    
    if (not(v29_1.d f+ v26_1 * v19_1 >= 0f))
        v27_1.d = fneg(v27_1.d)
        v24_1 = fneg(v24_1)
        v25_1.d = fneg(v25_1.d)
        v26_1 = fneg(v26_1)
    
    v25_1.d = v25_1.d f- v18_2.d
    v27_1.d = v27_1.d f- v20_1
    v31_1 = fneg(v28_1)
    entry_v8.d = fneg(v7_2.d)
    v30_1 = fneg(v16_1.d) f/ v23_1.d
    v28_1 = v2_2.d f* v6_2.d
    v25_1.d = v5_1 f* v25_1.d
    v27_1.d = v5_1 f* v27_1.d
    v31_1 = v31_1 f/ v23_1.d
    v23_1.d = entry_v8.d f/ v23_1.d
    v17_1.d = v17_1.d f+ v5_1 * (v24_1 f- v17_1.d)
    v24_1 = v3_1 * v30_1
    v29_1.d = v3_1 f* v6_2.d
    entry_v9.d = v4_1 f* v6_2.d
    entry_v10.d = v22_1 f* v6_2.d
    int32_t var_a8
    v6_2.d = var_a8
    v11.d = *(arg4 + 0x64)
    v7_2.d = *(arg4 + 0x20)
    v21_1 = *arg1
    v18_2.d = v18_2.d f+ v25_1.d
    v19_1 = v19_1 + v5_1 * (v26_1 - v19_1)
    v20_1 = v20_1 f+ v27_1.d
    v25_1.d = v4_1 * v31_1
    v26_1 = v22_1 f* v23_1.d
    v27_1.d = v2_2.d f* v30_1
    entry_v8.d = v22_1 * v31_1
    v12.d = v4_1 f* v23_1.d
    v13.d = v22_1 * v30_1
    v22_1 = v4_1 * v30_1
    v4_1 = v2_2.d f* v31_1
    v30_1 = v2_2.d f* v23_1.d
    v23_1.d = v3_1 f* v23_1.d
    v31_1 = v3_1 * v31_1
    v14.d = *arg3
    v3_1 = v28_1 - v24_1
    v24_1 = *V21
    v27_1.d = v27_1.d f+ v29_1.d
    v28_1 = v4_1 f+ entry_v9.d
    v29_1.d = v30_1 f+ entry_v10.d
    v2_2.q = *QI
    v25_1.d = v3_1 f- v25_1.d
    v3_1 = *(QI + 8)
    v4_1 = *(QI + 0xc)
    entry_v9.d = v18_2.d f* v18_2.d
    entry_v8.d = entry_v8.d f+ v27_1.d
    entry_v10.d = v23_1.d f+ v28_1
    v27_1.d = v19_1 * v19_1
    v29_1.d = v22_1 f+ v29_1.d
    v11.d = v11.d f- v7_2.d
    v14.d = v14.d f- v21_1
    v28_1 = entry_v9.d f+ v20_1 * v20_1 + v17_1.d f* v17_1.d
    v23_1.d = v25_1.d f- v26_1
    v22_1 = entry_v8.d f- v12.d
    v26_1 = v29_1.d f- v31_1
    v29_1.d = v5_1 f* v11.d
    entry_v8.d = v2_2.d f* v2_2:4.d
    entry_v9.d = v3_1 * v4_1
    v27_1.d = v27_1.d f+ v28_1
    v16_1.d = fconvert.s(1f)
    v11 = vrev64_s32(v2_2)
    v7_2.d = v7_2.d f+ v29_1.d
    uint128_t v28_2 = vadd_f32(entry_v8, entry_v9)
    v27_1.d = sqrt(v27_1.d)
    v25_1.d = entry_v10.d f- v13.d
    entry_v10.d = v2_2.d f* v3_1
    entry_v10:4.d = v2_2:4.d f* v3_1
    float v21_2 = vsub_f32(entry_v8, entry_v9)
    v29_1.d = v11.d f* v4_1
    v29_1:4.d = v11:4.d f* v4_1
    entry_v8.d = v16_1.d f/ v7_2.d
    vdup_laneq_s32(v28_2, 0)
    v20_1 = v20_1 f/ v27_1.d
    v17_1.d = v17_1.d f/ v27_1.d
    v18_2.d = v18_2.d f/ v27_1.d
    v19_1 = v19_1 f/ v27_1.d
    v31_1 = v4_1 * v4_1
    double v16_2 = vadd_f32(entry_v10, v29_1)
    int128_t v7_3 = vsub_f32(entry_v10, v29_1)
    v6_2.d = v6_2.d f* entry_v8.d
    int128_t v5_2
    v5_2.d = v21_2
    v21_2 = v23_1.d f* v20_1
    v27_1.d = v22_1 f* v17_1.d
    v28_2.d = v25_1.d f* v18_2.d
    v29_1.d = v26_1 * v19_1
    entry_v8.d = v22_1 * v20_1
    entry_v9.d = v23_1.d f* v17_1.d
    entry_v10.d = v26_1 f* v18_2.d
    v11.d = v25_1.d f* v19_1
    v12.d = v25_1.d f* v20_1
    v20_1 = v26_1 * v20_1
    v26_1 = v26_1 f* v17_1.d
    v17_1.d = v25_1.d f* v17_1.d
    v25_1.d = v23_1.d f* v18_2.d
    v23_1.d = v23_1.d f* v19_1
    v18_2.d = v22_1 f* v18_2.d
    int128_t v30_2 = vmul_f32(v2_2, v2_2, 0)
    int128_t v22_2
    v22_2.d = v31_1
    v31_1 = v31_1 f- v30_2.d
    v6_2.d = v6_2.d f* v24_1 * (v21_1 + v5_1 f* v14.d)
    int128_t v24_2 = vadd_f32(v30_2, v22_2)
    v30_2:4.d = v2_2:4.d
    uint128_t v22_3 = vmul_f32(v30_2, v22_2, 0)
    v21_2 = v21_2 f- v27_1.d
    v27_1.d = entry_v9.d f+ entry_v8.d
    v25_1.d = v25_1.d f+ v12.d
    v27_1.d = entry_v10.d f+ v27_1.d
    v17_1.d = v17_1.d f+ v23_1.d f+ v20_1
    v23_1.d = v22_3:4.d
    vsub_f32(v24_2, vdup_laneq_s32(v22_3, 1))
    v21_2 = v21_2 f- v28_2.d f- v29_1.d
    v24_2.d = v27_1.d f- v11.d
    v25_1.d = v22_1 * v19_1 f+ v25_1.d - v26_1
    v26_1 = v17_1.d f- v18_2.d
    v23_1.d = v31_1 f- v23_1.d
    int128_t v30_3
    v30_3:4.d = v31_1
    v17_1.d = v21_2 * v21_2
    v18_2.d = v24_2.d f* v24_2.d
    v19_1 = v24_2.d f* v25_1.d
    v27_1.d = v21_2 * v26_1
    v28_2.d = v21_2 f* v25_1.d
    v29_1.d = v24_2.d f* v26_1
    v31_1 = v25_1.d f* v26_1
    entry_v8.d = v21_2 f* v24_2.d
    entry_v9.d = v4_1 * v21_2
    entry_v10.d = v24_2.d f* v2_2.d
    double v22_4 = vadd_f32(v22_3, v30_3)
    v30_3.d = v19_1 f- v27_1.d
    v19_1 = v19_1 f+ v27_1.d
    v27_1.d = v17_1.d f+ v18_2.d
    v17_1.d = v17_1.d f- v18_2.d
    v12.d = v28_2.d f+ v29_1.d
    v18_2.d = v29_1.d f- v28_2.d
    v28_2.d = v31_1 f- entry_v8.d
    v29_1.d = entry_v8.d f+ v31_1
    entry_v8.d = entry_v9.d f- entry_v10.d
    entry_v9.d = v21_2 f* v2_2:4.d
    entry_v10.d = v4_1 f* v25_1.d
    v11.d = v21_2 f* v2_2.d
    entry_v9.d = entry_v10.d f+ entry_v9.d
    entry_v10.d = v4_1 * v26_1
    int128_t v20_2
    v20_2:4.d = v22_4:4.d
    v22_4.d = float.s(0xc3e78000)
    v31_1 = v4_1 f* v24_2.d f+ v11.d
    v21_2 = entry_v10.d f+ v3_1 * v21_2
    entry_v10.d = float.s(0xc4320000)
    v11.d = v19_1 f* v22_4.d
    v22_4.d = v18_2.d f* v22_4.d
    v18_2.d = v25_1.d f* v25_1.d
    v30_3.d = v30_3.d f* entry_v10.d
    v29_1.d = v29_1.d f* entry_v10.d
    entry_v10.d = v18_2.d f+ v17_1.d
    v13.d = v17_1.d f- v18_2.d
    v17_1.d = v25_1.d f* v2_2:4.d
    entry_v8.d = entry_v8.d f- v17_1.d
    v17_1.d = v3_1 f* v25_1.d
    v31_1 = v17_1.d f+ v31_1
    v17_1.d = v26_1 f* v2_2.d
    entry_v9.d = v17_1.d f+ entry_v9.d
    v17_1.d = v24_2.d f* v2_2:4.d
    v21_2 = v17_1.d f+ v21_2
    v17_1.d = v3_1 * v3_1
    v19_1 = 0f
    v27_1.d = v27_1.d f- v18_2.d
    v18_2.d = v17_1.d f+ v23_1.d
    v23_1.d = v28_2.d f* v19_1
    v28_2.d = v26_1 * v26_1
    v22_4.d = v22_4.d f+ v29_1.d
    v29_1.d = entry_v10.d f- v28_2.d
    entry_v10.d = v3_1 * v26_1
    v24_2.d = v3_1 f* v24_2.d
    v27_1.d = v27_1.d f- v28_2.d
    v28_2.d = v28_2.d f+ v13.d
    v26_1 = v31_1 - v26_1 f* v2_2:4.d
    v24_2.d = entry_v9.d f- v24_2.d
    entry_v9.d = float.s(0xc3b20000)
    v25_1.d = v25_1.d f* v2_2.d
    entry_v8.d = entry_v8.d f- entry_v10.d
    v21_2 = v21_2 f- v25_1.d
    v25_1.d = v27_1.d f* float.s(0xc3678000)
    v27_1.d = v29_1.d f* entry_v9.d
    v28_2.d = v28_2.d f* v19_1
    int128_t v17_2 = vdup_laneq_s32(v17_1, 0)
    entry_v10.d = *(V0 + 8)
    v29_1.d = v4_1 f* entry_v8.d
    v27_1.d = v11.d f+ v27_1.d
    v11.d = v4_1 * v26_1
    v22_4.d = v22_4.d f- v28_2.d
    v28_2.d = entry_v8.d f* v2_2.d
    int128_t v17_3 = vsub_f32(v20_2, v17_2)
    v20_2.d = v12.d f* v19_1
    v29_1.d = v29_1.d f- v26_1 f* v2_2.d
    v28_2.d = v28_2.d f+ v11.d
    v11.d = entry_v8.d f* v2_2:4.d
    v20_2:4.d = v23_1.d
    v23_1.q = *V0
    v31_1 = v11.d f+ v4_1 f* v24_2.d
    v11.d = v4_1 * v21_2
    entry_v8.d = v3_1 f* entry_v8.d
    entry_v9.d = v24_2.d f* v2_2:4.d
    v25_1.d = v30_3.d f+ v25_1.d
    entry_v8.d = entry_v8.d f+ v11.d
    v11.d = v21_2 f* v2_2:4.d
    v30_3.d = v3_1 * v21_2
    v25_1:4.d = v27_1.d
    v27_1.d = v3_1 f* v24_2.d
    v22_4.d = entry_v10.d f+ v22_4.d
    entry_v10.d = v3_1 * v26_1
    v24_2.d = v24_2.d f* v2_2.d
    v29_1.d = v29_1.d f- entry_v9.d
    v28_2.d = v11.d f+ v28_2.d
    v24_2.d = v24_2.d f+ entry_v8.d
    int128_t v20_3 = vsub_f32(v25_1, v20_2)
    v25_1.d = v29_1.d f- v30_3.d
    v27_1.d = v28_2.d f- v27_1.d
    v21_2 = entry_v10.d f+ v31_1 - v21_2 f* v2_2.d
    v24_2.d = v24_2.d f- v26_1 f* v2_2:4.d
    int128_t v20_4 = vadd_f32(v23_1, v20_3)
    v23_1.d = v4_1 f* v25_1.d
    v28_2.d = v21_2 f* v2_2:4.d
    v30_3.d = v4_1 f* v27_1.d
    v31_1 = v25_1.d f* v2_2.d
    v23_1.d = v23_1.d f- v27_1.d f* v2_2.d
    entry_v8.d = v24_2.d f* v2_2:4.d
    entry_v10.d = v4_1 * v21_2
    v11.d = v25_1.d f* v2_2:4.d
    v25_1.d = v3_1 f* v25_1.d
    v4_1 = v4_1 f* v24_2.d
    v26_1 = v31_1 f+ v30_3.d
    v23_1.d = v23_1.d f- v28_2.d
    int128_t v28_3 = vadd_f32(v20_4, v20_4)
    v29_1.d = v3_1 f* v24_2.d
    entry_v9.d = v3_1 * v21_2
    v3_1 = v3_1 f* v27_1.d
    v24_2.d = v24_2.d f* v2_2.d
    v21_2 = v21_2 f* v2_2.d
    v2_2.d = v27_1.d f* v2_2:4.d
    v27_1.q = 0x43b2000043678000
    v30_3.d = v11.d f+ entry_v10.d
    v31_1 = v16_2:4.d
    v4_1 = v25_1.d f+ v4_1
    v26_1 = entry_v8.d f+ v26_1
    entry_v8 = vrev64_s32(v28_3)
    v16_2:4.d = v7_3:4.d
    v25_1.d = v22_4.d f+ v22_4.d
    int128_t v20_5 = vmul_f32(v17_3, v20_4, 0)
    int32_t v30_4 = vmul_f32(v7_3, v28_3, 0)
    v28_3.d = v31_1 f* v28_3:4.d
    v22_4.d = v18_2.d f* v22_4.d
    v25_1.d = v16_2.d f* v25_1.d
    v25_1:4.d = v16_2:4.d f* v25_1.d
    v28_3.d = v30_4 f+ v28_3.d
    v2_2.d = v21_2 + v4_1 f- v2_2.d
    int128_t v4_2 = vadd_f32(v20_5, vmul_f32(v5_2, entry_v8, 0))
    *arg6 = false
    v20_5.d = v22_4.d f+ v28_3.d
    entry_x8[2] = v3_1 f+ v30_3.d f- v24_2.d
    entry_x8[3] = v2_2.d
    v3_1 = v20_5.d f+ v19_1
    int128_t v2_4 = vadd_f32(vadd_f32(v25_1, v4_2), v27_1)
    v4_2.d = v3_1 + v3_1
    int128_t v18_3 = vadd_f32(v2_4, v2_4)
    v4_2.d = v16_2.d f* v4_2.d
    v4_2:4.d = v16_2:4.d f* v4_2.d
    int128_t v16_3 = vrev64_s32(v18_3)
    int128_t v2_5 = vmul_f32(v17_3, v2_4, 0)
    float v7_4 = vmul_f32(v7_3, v18_3, 0)
    v17_3.d = v31_1 f* v18_3:4.d
    int128_t v2_7
    v2_7.d = vadd_f32(v4_2, vadd_f32(v2_5, vmul_f32(v5_2, v16_3, 0))).d f* v6_2.d
    v2_7:4.d = v2_7:4.d f* v6_2.d
    v23_1.d = v23_1.d f- v29_1.d
    double v0_4 = vadd_f32(v0_3, v2_7)
    *entry_x8 = v6_2.d
    entry_x8[1] = v26_1 f- entry_v9.d
    entry_x8[4] = v23_1.d
    *(entry_x8 + 0x14) = v0_4
    entry_x8[7] = v1_2 + v6_2.d f* (v18_2.d f* v3_1 + v7_4 f+ v17_3.d)
entry_v9.q = var_48
entry_v8.q = var_40
entry_v10.q = var_50
return result
