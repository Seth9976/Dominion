// 函数: _Z3IK2P13StructureAnimRK4PoseRK4Vec3PiiP16DefStructureBoneP13BoneTransformP4Mat4
// 地址: 0xc7b464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_80 = v15
int64_t v14
int64_t var_78 = v14
int64_t v13
int64_t var_70 = v13
void* result = arg8 + (sx.q(*(arg6 + sx.q(*arg4) * 0xd8 + 0x6c)) << 6)
float v6 = *(result + 0x18)
float v7 = *(result + 0x1c)
float v0 = *(result + 0x28)
float v2 = *(result + 0x2c)
float v16 = *(result + 0x14)
float v17 = *(result + 4)
float v20 = *(result + 0x24)
float v1 = *(result + 0x38)
float v3 = *(result + 0x3c)
float v18 = *(result + 8)
float v19 = *(result + 0xc)
float v22 = *(result + 0x34)
float v24 = v16 * v0
float v25 = v16 * v2
float v26 = v6 * v2
float v27 = v20 * v6
float v28 = v20 * v7
float v29 = v0 * v7
float v30 = v0 * v17
float v31 = v2 * v17
int64_t v8
v8.d = v2 * v18
int64_t v9
v9.d = v20 * v18
int64_t v10
v10.d = v20 * v19
int64_t v11
v11.d = v0 * v19
int64_t v12
v12.d = v6 * v17
v17 = v7 * v17
v7 = v7 * v18
v18 = v16 * v18
v16 = v16 * v19
v6 = v6 * v19
v19 = v24 * v3
v24 = v1 * v25
v25 = v22 * v26
v26 = v27 * v3
v27 = v1 * v28
v28 = v22 * v29
v29 = v3 * v30
v30 = v1 * v31
v31 = v22 f* v8.d
v8.d = v3 f* v9.d
v9.d = v1 f* v10.d
v10.d = v22 f* v11.d
v11.d = v3 f* v12.d
v12.d = v2 f* v12.d
v1 = *(result + 0x20) * (v1 * v16 + v22 * v7 + v11.d f- v1 * v17 - v3 * v18 - v22 * v6)
    + *result * (v27 + v25 + v19 - v24 - v26 - v28)
    - *(result + 0x10) * (v9.d f+ v31 + v29 - v30 f- v8.d f- v10.d)

if (not(fabs(v1
        - *(result + 0x30) * (v0 * v16 + v20 * v7 + v12.d f- v0 * v17 - v2 * v18 - v20 * v6))
        < float.s(0x3727c5ac)))
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    int64_t v16_1
    int64_t v17_1
    int64_t v18_1
    int64_t v19_1
    int64_t v20_1
    int64_t v28_1
    int64_t v29_1
    v4_1, v5_1, v6_1, v7_1, v16_1, v17_1, v18_1, v19_1, v20_1, v28_1, v29_1 = Mat4Inverse(result)
    int32_t var_d0
    v5_1.d = var_d0
    int32_t var_cc
    v6_1.d = var_cc
    float v0_1 = *(arg2 + 0x10)
    float v1_1 = *(arg2 + 0x14)
    int32_t var_c8
    v16_1.d = var_c8
    int32_t var_c0
    v7_1.d = var_c0
    int32_t var_bc
    v18_1.d = var_bc
    float v2_1 = *(arg2 + 0x18)
    int32_t var_b0
    v20_1.d = var_b0
    int32_t var_ac
    v19_1.d = var_ac
    int32_t var_b8
    v17_1.d = var_b8
    int32_t var_b4
    v4_1.d = var_b4
    int32_t var_114_1 = v5_1.d
    float var_110_1 = v16_1.d
    v5_1.d = v5_1.d f* v0_1
    float var_10c_1 = v6_1.d
    v6_1.d = v6_1.d f* v1_1
    float var_120_1 = v7_1.d
    float var_11c_1 = v18_1.d
    v7_1.d = v0_1 f* v7_1.d
    v5_1.d = v5_1.d f+ v6_1.d
    v6_1.d = v1_1 f* v18_1.d
    v6_1.d = v7_1.d f+ v6_1.d
    v7_1.d = v16_1.d f* v2_1
    v0_1 = v0_1 f* v20_1.d + v1_1 f* v19_1.d
    v1_1 = v5_1.d f+ v7_1.d
    v5_1.d = v2_1 f* v17_1.d
    v5_1.d = v6_1.d f+ v5_1.d
    int32_t var_a8
    v7_1.d = var_a8
    int32_t var_a4
    v6_1.d = var_a4
    uint64_t i_2 = zx.q(arg5 - 1)
    int32_t i = 0
    int64_t x24_1 = sx.q(i_2.d)
    float var_128_1 = v20_1.d
    float var_124_1 = v19_1.d
    float var_118_1 = v17_1.d
    float var_12c_1 = v7_1.d
    float var_104_1 = v4_1.d f+ v5_1.d
    float var_c4
    float var_100_1 = var_c4 + v1_1
    float var_108_1 = v6_1.d f+ v0_1 + v2_1 f* v7_1.d
    float v3_1
    float v21_1
    float v22_1
    float v23_1
    float v24_1
    float v25_1
    float v26_1
    float v27_1
    float v30_1
    float v31_1
    
    while (i != 0x64)
        v23_1 = var_104_1
        v22_1 = var_100_1
        v24_1 = var_108_1
        uint64_t j_1 = i_2
        int32_t* x15_1 = arg4
        
        if (arg5 s>= 2)
            uint64_t j
            
            do
                int64_t x16_1 = sx.q(*x15_1)
                x15_1 = &x15_1[1]
                j = j_1
                j_1 -= 1
                float* x16_2 = arg7 + x16_1 * 0x2c
                v3_1 = *x16_2
                v4_1.d = x16_2[1]
                v5_1.d = x16_2[2]
                v6_1.d = x16_2[3]
                v19_1.d = v3_1 * v3_1
                v17_1.d = fneg(v5_1.d)
                v18_1.d = v6_1.d f* v6_1.d
                v0_1 = v22_1 - x16_2[4]
                v7_1.d = fneg(v3_1)
                v16_1.d = fneg(v4_1.d)
                v20_1.d = v4_1.d f* v4_1.d
                v21_1 = v5_1.d f* v5_1.d
                v22_1 = v3_1 f* v4_1.d
                v3_1 = v3_1 f* v5_1.d
                v4_1.d = v4_1.d f* v5_1.d
                v5_1.d = v19_1.d f+ v18_1.d
                v17_1.d = v6_1.d f* v17_1.d
                v18_1.d = v18_1.d f- v19_1.d
                v1_1 = v23_1 - x16_2[5]
                v16_1.d = v6_1.d f* v16_1.d
                v6_1.d = v6_1.d f* v7_1.d
                v5_1.d = v5_1.d f- v20_1.d
                v7_1.d = v22_1 f- v17_1.d
                v17_1.d = v22_1 f+ v17_1.d
                v2_1 = v24_1 - x16_2[6]
                v23_1 = v1_1 + v1_1
                v25_1 = v0_1 + v0_1
                v19_1.d = v3_1 f+ v16_1.d
                v26_1 = v4_1.d f- v6_1.d
                v4_1.d = v4_1.d f+ v6_1.d
                v6_1.d = v18_1.d f- v20_1.d
                v5_1.d = v5_1.d f- v21_1
                v18_1.d = v20_1.d f+ v18_1.d - v21_1
                v24_1 = v2_1 + v2_1
                v7_1.d = v23_1 f* v7_1.d
                v17_1.d = v25_1 f* v17_1.d
                v3_1 = v25_1 * (v3_1 f- v16_1.d)
                v4_1.d = v23_1 f* v4_1.d
                v6_1.d = v21_1 f+ v6_1.d
                v16_1.d = v24_1 f* v19_1.d
                v19_1.d = v24_1 * v26_1
                v22_1 = v16_1.d f+ v7_1.d f+ v0_1 f* v5_1.d
                v23_1 = v19_1.d f+ v17_1.d f+ v1_1 f* v18_1.d
                v24_1 = v3_1 f+ v4_1.d + v2_1 f* v6_1.d
            while (j != 1)
        
        void* x14_2 = arg7 + sx.q(arg4[x24_1]) * 0x2c
        v25_1 = *(x14_2 + 0x10)
        v26_1 = *(x14_2 + 0x14)
        v27_1 = *(x14_2 + 0x18)
        void* x14_3 = &arg4[sx.q(arg5 - 2)]
        
        while (true)
            int64_t x14_4 = sx.q(*x14_3)
            int32_t* x15_2 = arg7 + x14_4 * 0x2c
            v30_1 = v25_1 * v25_1 + v26_1 * v26_1 + v27_1 * v27_1
            float var_f0_1 = x15_2[9]
            v2_1 = x15_2[7]
            v1_1 = x15_2[8]
            v6_1.d = x15_2[3]
            v5_1.d = *x15_2
            v3_1 = x15_2[1]
            v4_1.d = x15_2[2]
            v7_1.d = x15_2[4]
            v19_1.d = v3_1 * v3_1
            v16_1.d = v5_1.d f* v3_1
            v17_1.d = v6_1.d f* v4_1.d
            float var_e8_1 = x15_2[5]
            int32_t var_e4_1 = v7_1.d
            v7_1.d = v5_1.d f* v5_1.d
            v28_1.d = v6_1.d f* v3_1
            v29_1.d = v5_1.d f* v4_1.d
            float var_ec_1 = x15_2[6]
            v0_1 = v6_1.d f* v6_1.d
            v9.d = v3_1 f* v4_1.d
            v10.d = v6_1.d f* v5_1.d
            v11.d = v0_1 f+ v7_1.d
            v0_1 = v0_1 f- v7_1.d
            v8.d = v4_1.d f* v4_1.d
            v21_1 = v16_1.d f- v17_1.d
            v20_1.d = v28_1.d f+ v29_1.d
            v18_1.d = v16_1.d f+ v17_1.d
            v17_1.d = v9.d f- v10.d
            v16_1.d = v29_1.d f- v28_1.d
            v7_1.d = v10.d f+ v9.d
            v28_1.d = v11.d f- v19_1.d
            v9.d = v0_1 f+ v19_1.d
            v29_1.d = v28_1.d f- v8.d
            v28_1.d = v9.d f- v8.d
            v19_1.d = v0_1 f- v19_1.d f+ v8.d
            v14 = v19_1
            float v12_1 = v7_1.d
            v11 = v16_1
            v10 = v17_1
            v13 = v28_1
            v9 = v18_1
            v8 = v20_1
            v31_1 = v21_1
            v15 = v29_1
            
            if (not(v30_1 <= float.s(0x3727c5ac)))
                v0_1 = v22_1 * v22_1 + v23_1 * v23_1 + v24_1 * v24_1
                v14 = v19_1
                v12_1 = v7_1.d
                v11 = v16_1
                v10 = v17_1
                v13 = v28_1
                v9 = v18_1
                v8 = v20_1
                v31_1 = v21_1
                v15 = v29_1
                
                if (not(v0_1 <= float.s(0x3727c5ac)))
                    v13.d = fconvert.s(1f)
                    v31_1 = v13.d f/ sqrt(v30_1)
                    v0_1 = v13.d f/ sqrt(v0_1)
                    v30_1 = v25_1 * v31_1
                    v8.d = v26_1 * v31_1
                    v10.d = v22_1 * v0_1
                    v11.d = v23_1 * v0_1
                    v9.d = v27_1 * v31_1
                    v12_1 = v24_1 * v0_1
                    v31_1 = v12_1 f* v9.d + v10.d f* v30_1 + v11.d f* v8.d f+ v13.d
                    
                    if (v31_1 >= float.s(0x3727c5ac))
                        v0_1 = v12_1 f* v8.d
                        v13.d = v11.d f* v9.d
                        v9.d = v10.d f* v9.d
                        v8.d = v10.d f* v8.d
                        v0_1 = v0_1 f- v13.d
                        v10.d = v31_1 * v31_1
                        v9.d = v9.d f- v12_1 * v30_1
                        v30_1 = v11.d f* v30_1 f- v8.d
                        v8.d = v0_1 * v0_1
                        v11.d = v9.d f* v9.d
                        v8.d = v8.d f+ v10.d
                        v8.d = v11.d f+ v8.d
                        v8.d = v30_1 * v30_1 f+ v8.d
                        v10.d = sqrt(v8.d)
                        v31_1 = v31_1 f/ v10.d
                        v8.d = v0_1 f/ v10.d
                        v9.d = v9.d f/ v10.d
                        v10.d = v30_1 f/ v10.d
                    else
                        v0_1 = fabs(v30_1)
                        v10.d = fabs(v8.d)
                        v11.d = fneg(v9.d)
                        v12_1 = fneg(v8.d)
                        v0_1 f- v10.d
                        bool cond:9_1 = v0_1 f> v10.d
                        bool cond:10_1 = v0_1 f> v10.d
                        bool cond:11_1 = v0_1 f> v10.d
                        v0_1 = 0f
                        
                        if (cond:9_1)
                            v8.d = v11.d
                        else
                            v8.d = v0_1
                        
                        if (cond:10_1)
                            v9.d = v0_1
                        else
                            v9.d = v9.d
                        
                        if (cond:11_1)
                            v10.d = v30_1
                        else
                            v10.d = v12_1
                    
                    float var_f4_1 = v6_1.d f* v31_1
                    float var_f8_1 = v5_1.d f* v8.d
                    float var_fc_1 = v3_1 f* v9.d
                    v12_1 = v4_1.d f* v10.d
                    v13.d = v6_1.d f* v8.d
                    v14.d = v5_1.d f* v31_1
                    v15.d = v3_1 f* v10.d
                    v30_1 = v4_1.d f* v9.d
                    v0_1 = v6_1.d f* v9.d
                    v6_1.d = v6_1.d f* v10.d
                    v10.d = v5_1.d f* v10.d
                    v5_1.d = v5_1.d f* v9.d
                    v9.d = v3_1 * v31_1
                    v31_1 = v4_1.d f* v31_1
                    v4_1.d = v4_1.d f* v8.d
                    v3_1 = v3_1 f* v8.d
                    v11.d = var_f8_1
                    v8.d = var_f4_1
                    v6_1.d = v6_1.d f+ v31_1
                    v13.d = v13.d f+ v14.d
                    v8.d = v8.d f- v11.d
                    v31_1 = v8.d f- var_fc_1
                    v8.d = v15.d f+ v13.d
                    v0_1 = v4_1.d f+ v0_1 f+ v9.d
                    v4_1.d = v5_1.d f+ v6_1.d
                    v5_1.d = v31_1 - v12_1
                    v6_1.d = v8.d f- v30_1
                    v0_1 = v0_1 f- v10.d
                    v3_1 = v4_1.d f- v3_1
                    v4_1.d = v5_1.d f* v5_1.d
                    v30_1 = v6_1.d f* v6_1.d
                    *x15_2 = v6_1.d
                    x15_2[1] = v0_1
                    x15_2[2] = v3_1
                    x15_2[3] = v5_1.d
                    v13.d = v0_1 * v0_1
                    v14.d = v3_1 * v3_1
                    v9.d = v6_1.d f* v0_1
                    v10.d = v5_1.d f* v3_1
                    v11.d = v5_1.d f* v0_1
                    v12_1 = v6_1.d f* v3_1
                    v0_1 = v0_1 * v3_1
                    v3_1 = v5_1.d f* v6_1.d
                    v5_1.d = v4_1.d f+ v30_1
                    v4_1.d = v4_1.d f- v30_1
                    v31_1 = v9.d f- v10.d
                    v8.d = v11.d f+ v12_1
                    v9.d = v9.d f+ v10.d
                    v10.d = v0_1 - v3_1
                    v11.d = v12_1 f- v11.d
                    v12_1 = v3_1 + v0_1
                    v3_1 = v4_1.d f+ v13.d
                    v4_1.d = v4_1.d f- v13.d
                    v15.d = v5_1.d f- v13.d f- v14.d
                    v13.d = v3_1 f- v14.d
                    v14.d = v4_1.d f+ v14.d
            
            v5_1.d = var_f0_1
            v0_1 = v22_1 * v2_1
            v3_1 = v23_1 * v1_1
            v2_1 = v25_1 * v2_1
            v4_1.d = v24_1 f* v5_1.d
            v1_1 = v26_1 * v1_1
            v6_1.d = v0_1 f* v29_1.d
            v23_1 = v4_1.d f+ v4_1.d
            v0_1 = v0_1 + v0_1
            v4_1.d = v4_1.d f* v19_1.d
            v19_1.d = v2_1 f* v15.d
            v24_1 = v1_1 + v1_1
            v2_1 = v2_1 + v2_1
            v5_1.d = v27_1 f* v5_1.d
            v20_1.d = v23_1 f* v20_1.d
            v18_1.d = v0_1 f* v18_1.d
            v17_1.d = v23_1 f* v17_1.d
            v0_1 = v0_1 f* v16_1.d
            v16_1.d = v24_1 * v31_1
            v23_1 = v2_1 f* v9.d
            v25_1 = v5_1.d f+ v5_1.d
            v5_1.d = v5_1.d f* v14.d
            v22_1 = v3_1 + v3_1
            v2_1 = v5_1.d f+ v2_1 f* v11.d + v24_1 * v12_1
            v5_1.d = var_e4_1
            v7_1.d = v22_1 f* v7_1.d
            v6_1.d = v6_1.d f+ v22_1 * v21_1
            v0_1 = v0_1 f+ v7_1.d
            v7_1.d = v19_1.d f+ v16_1.d
            v6_1.d = v20_1.d f+ v6_1.d
            v0_1 = v4_1.d f+ v0_1
            v4_1.d = v25_1 f* v8.d f+ v7_1.d
            v22_1 = v5_1.d f+ v6_1.d
            v6_1.d = var_e8_1
            v1_1 = v23_1 + v1_1 f* v13.d
            v23_1 = v6_1.d f+ v17_1.d f+ v18_1.d f+ v3_1 f* v28_1.d
            v1_1 = v25_1 f* v10.d + v1_1
            v24_1 = var_ec_1 + v0_1
            v25_1 = v5_1.d f+ v4_1.d
            v26_1 = v6_1.d f+ v1_1
            v27_1 = var_ec_1 + v2_1
            
            if (x14_4.d == *arg4)
                break
            
            x14_3 = arg6 + x14_4 * 0xd8 + 0x6c
        
        v0_1 = v25_1 - v22_1
        v1_1 = v26_1 - v23_1
        v2_1 = v27_1 - v24_1
        i += 1
        
        if (v2_1 * v2_1 + v0_1 * v0_1 + v1_1 * v1_1 < float.s(0x3727c5ac))
            break
    
    v1_1 = *arg2
    v0_1 = *(arg2 + 4)
    v2_1 = *(arg2 + 8)
    v3_1 = *(arg2 + 0xc)
    v20_1.d = var_114_1
    v4_1.d = v0_1 * v1_1
    v5_1.d = v2_1 * v3_1
    v6_1.d = v0_1 * v0_1
    v7_1.d = v2_1 * v2_1
    v17_1.d = v1_1 * v1_1
    v18_1.d = v0_1 * v2_1
    v19_1.d = v1_1 * v3_1
    v1_1 = v1_1 * v2_1
    v16_1.d = v3_1 * v3_1
    v2_1 = v4_1.d f- v5_1.d
    v4_1.d = v18_1.d f+ v19_1.d
    v0_1 = v1_1 + v0_1 * v3_1
    v5_1.d = v7_1.d f- v6_1.d
    v2_1 = v2_1 + v2_1
    v4_1.d = v4_1.d f+ v4_1.d
    v0_1 = v0_1 + v0_1
    v5_1.d = v5_1.d f- v17_1.d
    v1_1 = v18_1.d f- v19_1.d
    v3_1 = v6_1.d f- v7_1.d f+ v16_1.d f- v17_1.d
    v6_1.d = v20_1.d f* v2_1
    v7_1.d = var_110_1 f* v4_1.d
    v17_1.d = var_120_1 * v2_1
    v18_1.d = var_118_1 f* v4_1.d
    v19_1.d = var_12c_1 f* v4_1.d
    v4_1.d = v16_1.d f+ v5_1.d
    v5_1.d = v20_1.d f* v0_1
    v20_1.d = var_120_1 * v0_1
    v1_1 = v1_1 + v1_1
    v16_1.d = var_10c_1 * v1_1
    v5_1.d = v5_1.d f+ v16_1.d
    v16_1.d = var_110_1 f* v4_1.d
    v20_1.d = v20_1.d f+ var_11c_1 * v1_1
    v24_1 = var_128_1 * v0_1 + var_124_1 * v1_1
    v25_1 = var_12c_1 f* v4_1.d
    v1_1 = v6_1.d f+ var_10c_1 * v3_1
    v6_1.d = v17_1.d f+ var_11c_1 * v3_1
    v2_1 = var_128_1 * v2_1 + var_124_1 * v3_1
    v5_1.d = v16_1.d f+ v5_1.d
    v0_1 = var_118_1 f* v4_1.d f+ v20_1.d
    v4_1.d = v7_1.d f+ v1_1
    v3_1 = v18_1.d f+ v6_1.d
    v1_1 = v19_1.d f+ v2_1
    v2_1 = v25_1 + v24_1
    
    if (arg5 s< 2)
        v6_1 = v5_1
        v7_1 = v4_1
    else
        int32_t* x10_1 = arg4
        uint64_t i_1
        
        do
            int64_t x11_1 = sx.q(*x10_1)
            x10_1 = &x10_1[1]
            v6_1.d = v3_1 + v3_1
            v7_1.d = v1_1 + v1_1
            v16_1.d = v4_1.d f+ v4_1.d
            int32_t* x11_2 = arg7 + x11_1 * 0x2c
            v20_1.d = *x11_2
            v21_1 = x11_2[1]
            v22_1 = x11_2[2]
            v23_1 = x11_2[3]
            v17_1.d = v0_1 + v0_1
            v18_1.d = v2_1 + v2_1
            v28_1.d = v20_1.d f* v20_1.d
            v27_1 = v23_1 * v23_1
            v24_1 = fneg(v20_1.d)
            v25_1 = fneg(v21_1)
            v26_1 = fneg(v22_1)
            v29_1.d = v21_1 * v21_1
            v30_1 = v22_1 * v22_1
            v31_1 = v20_1.d f* v21_1
            v20_1.d = v20_1.d f* v22_1
            v21_1 = v21_1 * v22_1
            v22_1 = v28_1.d f+ v27_1
            v26_1 = v23_1 * v26_1
            v25_1 = v23_1 * v25_1
            v27_1 = v27_1 f- v28_1.d
            v23_1 = v23_1 * v24_1
            v24_1 = v31_1 - v26_1
            v28_1.d = v20_1.d f+ v25_1
            v26_1 = v31_1 + v26_1
            v31_1 = v29_1.d f+ v27_1
            v8.d = v21_1 - v23_1
            v20_1.d = v20_1.d f- v25_1
            v21_1 = v21_1 + v23_1
            v23_1 = v27_1 f- v29_1.d
            v22_1 = v22_1 f- v29_1.d - v30_1
            v19_1.d = v5_1.d f+ v5_1.d
            v25_1 = v6_1.d f* v24_1
            v27_1 = v7_1.d f* v28_1.d
            v29_1.d = v16_1.d f* v26_1
            v31_1 = v31_1 - v30_1
            v9.d = v7_1.d f* v8.d
            v7_1.d = v16_1.d f* v20_1.d
            v6_1.d = v6_1.d f* v21_1
            v16_1.d = v30_1 + v23_1
            v23_1 = v17_1.d f* v24_1
            v4_1.d = v4_1.d f* v22_1
            v5_1.d = v5_1.d f* v22_1
            v24_1 = v18_1.d f* v28_1.d
            v26_1 = v19_1.d f* v26_1
            v19_1.d = v19_1.d f* v20_1.d
            v17_1.d = v17_1.d f* v21_1
            v6_1.d = v7_1.d f+ v6_1.d
            v4_1.d = v25_1 f+ v4_1.d
            v5_1.d = v23_1 f+ v5_1.d
            v18_1.d = v18_1.d f* v8.d
            v17_1.d = v19_1.d f+ v17_1.d
            v1_1 = v6_1.d f+ v1_1 f* v16_1.d
            v7_1.d = v27_1 f+ v4_1.d
            v6_1.d = v24_1 f+ v5_1.d
            v3_1 = v9.d f+ v29_1.d f+ v3_1 * v31_1
            v0_1 = v18_1.d f+ v26_1 + v0_1 * v31_1
            i_1 = i_2
            i_2 -= 1
            v2_1 = v17_1.d f+ v2_1 f* v16_1.d
            v4_1 = v7_1
            v5_1 = v6_1
        while (i_1 != 1)
    
    v4_1.d = v7_1.d f* v7_1.d
    v5_1.d = v3_1 * v3_1
    v16_1.d = v6_1.d f* v6_1.d
    v4_1.d = v4_1.d f+ v5_1.d
    v5_1.d = v0_1 * v0_1
    v5_1.d = v16_1.d f+ v5_1.d
    v16_1.d = v1_1 * v1_1
    v16_1.d = v4_1.d f+ v16_1.d
    v4_1.d = v2_1 * v2_1
    v5_1.d = v5_1.d f+ v4_1.d
    v4_1.d = fconvert.s(1f)
    v16_1.d = sqrt(v16_1.d)
    v5_1.d = sqrt(v5_1.d)
    v16_1.d = v4_1.d f/ v16_1.d
    v5_1.d = v4_1.d f/ v5_1.d
    v7_1.d = v7_1.d f* v16_1.d
    v3_1 = v3_1 f* v16_1.d
    v16_1.d = v1_1 f* v16_1.d
    v1_1 = v6_1.d f* v5_1.d
    v0_1 = v0_1 f* v5_1.d
    v2_1 = v2_1 f* v5_1.d
    int32_t var_e0 = v7_1.d
    float var_dc_1 = v3_1
    v5_1.d = v2_1 * v3_1
    v6_1.d = v0_1 f* v16_1.d
    v17_1.d = v2_1 f* v7_1.d
    v0_1 = v0_1 f* v7_1.d
    v7_1.d = v1_1 f* v16_1.d
    v3_1 = v1_1 * v3_1
    v2_1 = v5_1.d f- v6_1.d
    v1_1 = v7_1.d f- v17_1.d
    v0_1 = v0_1 - v3_1
    v5_1.d = v1_1 * v1_1
    v6_1.d = v0_1 * v0_1
    v3_1 = sqrt(v6_1.d f+ v2_1 * v2_1 f+ v5_1.d)
    v5_1.d = float.s(0x3727c5ac)
    int32_t var_d8_1 = v16_1.d
    
    if (v3_1 f>= v5_1.d)
        v5_1.d = float.s(0x3727c5ac)
        v3_1 = v4_1.d f/ (v3_1 f+ v5_1.d)
        v2_1 = v2_1 * v3_1
        v1_1 = v1_1 * v3_1
        v3_1 = v0_1 * v3_1
        v5_1.d = v1_1 * v1_1
        v0_1 = v2_1 * v2_1 f+ v5_1.d
        v5_1.d = v3_1 * v3_1
        v4_1.d = v4_1.d f/ sqrt(v5_1.d f+ v0_1)
        v0_1 = v2_1 f* v4_1.d
        v1_1 = v1_1 f* v4_1.d
        v2_1 = v3_1 f* v4_1.d
    else
        v0_1 = *V0
        v1_1 = *(V0 + 4)
        v2_1 = *(V0 + 8)
    
    float var_90 = v0_1
    float var_8c_1 = v1_1
    float var_88_1 = v2_1
    int32_t v0_2
    int32_t v1_2
    int32_t v2_2
    int32_t v3_2
    result, v0_2, v1_2, v2_2, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &var_e0, &var_90)
    int32_t* x8_4 = arg7 + sx.q(arg4[x24_1]) * 0x2c
    *x8_4 = v0_2
    x8_4[1] = v1_2
    x8_4[2] = v2_2
    x8_4[3] = v3_2

return result
