// 函数: _Z2IKP13StructureAnimRK4PosePiiP16DefStructureBoneP13BoneTransformP4Mat4
// 地址: 0xc7c12c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v8
v8.d = *(arg2 + 0x10)
int64_t v9
v9.d = *(arg2 + 0x14)
int64_t v10
v10.d = *(arg2 + 0x18)
int128_t v0
v0.d = *V0
int128_t v1
v1.d = *(V0 + 4)
void* x8_2 = arg7 + (sx.q(arg3[sx.q(arg4 - 1)]) << 6)
int128_t v3
v3.d = *x8_2
int128_t v2
v2.d = *(V0 + 8)
v3.d = v3.d f* v0.d
float v4 = *(x8_2 + 4) f* v1.d
float v7 = v0.d f* *(x8_2 + 0x10)
float v16 = v1.d f* *(x8_2 + 0x14)
v0.d = v0.d f* *(x8_2 + 0x20)
v1.d = v1.d f* *(x8_2 + 0x24)
float v5 = *(x8_2 + 8) f* v2.d
float v17 = v2.d f* *(x8_2 + 0x18)
v3.d = v3.d f+ v4
v2.d = v2.d f* *(x8_2 + 0x28)
v0.d = v0.d f+ v1.d
v1.d = v3.d f+ v5
v3.d = v7 + v16 + v17
v0.d = v0.d f+ v2.d
int64_t v14
v14.d = *(x8_2 + 0xc) f+ v1.d
int64_t v15
v15.d = *(x8_2 + 0x1c) f+ v3.d
int64_t v13
v13.d = *(x8_2 + 0x2c) f+ v0.d
v0.d = v8.d f- v14.d
v1.d = v9.d f- v15.d
v2.d = v10.d f- v13.d
v0.d = v0.d f* v0.d
v1.d = v1.d f* v1.d
v2.d = v2.d f* v2.d
v0.d = v0.d f+ v1.d
v0.d = v0.d f+ v2.d
v1.d = float.s(0x3c23d70a)

if (v0.d f<= v1.d)
    return 

int32_t x25_1 = 0
v11.d = fconvert.s(1f)
v12.d = 0f

do
    if (arg4 s>= 2)
        uint64_t x26_1 = zx.q(arg4 - 2)
        bool cond:4_1
        
        do
            int64_t x20_1 = sx.q(arg3[x26_1])
            void* x8_6 = arg7 + (x20_1 << 6)
            v2 = *(x8_6 + 0x10)
            int128_t var_c0_1 = *(x8_6 + 0x20)
            int128_t var_b0_1 = *(x8_6 + 0x30)
            int128_t var_e0 = *x8_6
            int128_t var_d0_1 = v2
            arg1, v0, v1, v2, v3 = Mat4Inverse(&var_e0)
            int32_t var_114
            v3.d = var_114
            float var_120
            v0.d = v8.d f* var_120
            float var_11c
            v1.d = v9.d f* var_11c
            v0.d = v0.d f+ v1.d
            float var_100
            v1.d = v8.d f* var_100
            float var_118
            v2.d = v10.d f* var_118
            float var_fc
            v1.d = v1.d f+ v9.d f* var_fc
            v0.d = v0.d f+ v2.d
            float var_f8
            v2.d = v10.d f* var_f8
            float v24_1 = v1.d f+ v2.d
            v2.d = v3.d f+ v0.d
            float var_110
            float var_10c
            float var_108
            float var_104
            v1.d = var_104 + v8.d f* var_110 + v9.d f* var_10c + v10.d f* var_108
            float var_f4
            v0.d = var_f4 + v24_1
            float v23_1 = sqrt(v2.d f* v2.d + v1.d f* v1.d + v0.d f* v0.d)
            
            if (v23_1 >= float.s(0x3727c5ac))
                v23_1 = v11.d f/ (v23_1 + float.s(0x3727c5ac))
                v2.d = v2.d f* v23_1
                v1.d = v1.d f* v23_1
                v23_1 = v0.d f* v23_1
                v0.d = v2.d f* v2.d
                v0.d = v0.d f+ v1.d f* v1.d
                v0.d = v23_1 * v23_1 f+ v0.d
                v0.d = sqrt(v0.d)
                v24_1 = v11.d f/ v0.d
                v0.d = v2.d f* v24_1
                v1.d = v1.d f* v24_1
                v2.d = v23_1 * v24_1
            else
                v0.d = *V0
                v1.d = *(V0 + 4)
                v2.d = *(V0 + 8)
            
            float v17_1 = v14.d f* var_110 + v15.d f* var_10c + v13.d f* var_108
            float v6_1 = v14.d f* var_100 + v15.d f* var_fc + v13.d f* var_f8
            v13.d = v3.d f+ v14.d f* var_120 + v15.d f* var_11c + v13.d f* var_118
            v14.d = var_104 + v17_1
            v15.d = var_f4 + v6_1
            v3.d = v13.d f* v13.d
            v3.d = v3.d f+ v14.d f* v14.d
            v3.d = v3.d f+ v15.d f* v15.d
            v3.d = sqrt(v3.d)
            int32_t var_130 = v0.d
            int32_t var_12c_1 = v1.d
            int32_t var_128_1 = v2.d
            float v4_1
            float v5_1
            float v7_1
            float v16_1
            float var_140
            
            if (v3.d f>= float.s(0x3727c5ac))
                v3.d = v3.d f+ float.s(0x3727c5ac)
                v3.d = v11.d f/ v3.d
                v4_1 = v13.d f* v3.d
                v5_1 = v14.d f* v3.d
                v3.d = v15.d f* v3.d
                v6_1 = v11.d f/ sqrt(v3.d f* v3.d + v4_1 * v4_1 + v5_1 * v5_1)
                v4_1 = v4_1 * v6_1
                v5_1 = v5_1 * v6_1
                v6_1 = v3.d f* v6_1
                var_140 = v4_1
                float var_13c_2 = v5_1
                float var_138_2 = v6_1
                
                if (x26_1 != 0)
                label_c7c3e0:
                    v3.d = v0.d f* v4_1
                    v3.d = v3.d f+ v1.d f* v5_1
                    v3.d = v3.d f+ v2.d f* v6_1
                    v3.d = v3.d f+ v11.d
                    
                    if (v3.d f>= float.s(0x3727c5ac))
                        v7_1 = v2.d f* v5_1
                        v16_1 = v1.d f* v6_1
                        v6_1 = v0.d f* v6_1
                        v2.d = v2.d f* v4_1
                        v1.d = v1.d f* v4_1
                        v0.d = v0.d f* v5_1
                        v5_1 = v7_1 - v16_1
                        v2.d = v6_1 f- v2.d
                        v6_1 = v1.d f- v0.d
                        v0.d = v5_1 * v5_1
                        v1.d = v2.d f* v2.d
                        v0.d = v0.d f+ v3.d f* v3.d
                        v0.d = v1.d f+ v0.d
                        v0.d = v6_1 * v6_1 f+ v0.d
                        v4_1 = sqrt(v0.d)
                        v3.d = v3.d f/ v4_1
                        v0.d = v5_1 / v4_1
                        v1.d = v2.d f/ v4_1
                        v2.d = v6_1 / v4_1
                    else
                        v0.d = fabs(v4_1)
                        v1.d = fabs(v5_1)
                        v2.d = fneg(v6_1)
                        v0.d f- v1.d
                        bool cond:2_1 = v0.d f> v1.d
                        bool cond:3_1 = v0.d f> v1.d
                        
                        if (v0.d f> v1.d)
                            v0.d = v2.d
                        else
                            v0.d = v12.d
                        
                        if (cond:2_1)
                            v1.d = v12.d
                        else
                            v1.d = v6_1
                        
                        if (cond:3_1)
                            v2.d = v4_1
                        else
                            v2.d = fneg(v5_1)
                else
                    arg1, v0, v1, v2, v3 = QuatFromBasisChange(&var_140, VZ, &var_130, VZ)
            else
                v4_1 = *V0
                v5_1 = *(V0 + 4)
                v6_1 = *(V0 + 8)
                var_140 = v4_1
                float var_13c_1 = v5_1
                float var_138_1 = v6_1
                
                if (x26_1 != 0)
                    goto label_c7c3e0
                
                arg1, v0, v1, v2, v3 = QuatFromBasisChange(&var_140, VZ, &var_130, VZ)
            float* x8_7 = arg6 + x20_1 * 0x2c
            v4_1 = v3.d f* v3.d
            v5_1 = v0.d f* v0.d
            v17_1 = v1.d f* v0.d
            float v18_1 = v3.d f* v2.d
            float v25_1 = *x8_7
            float v26_1 = x8_7[1]
            float v28_1 = x8_7[2]
            float v27_1 = x8_7[3]
            v6_1 = v1.d f* v1.d
            v16_1 = v14.d f+ v14.d
            float v20_1 = v3.d f* v1.d
            float v21_1 = v2.d f* v0.d
            v23_1 = v2.d f* v1.d
            v24_1 = v3.d f* v0.d
            float v29_1 = v17_1 - v18_1
            v17_1 = v18_1 + v17_1
            v18_1 = v4_1 + v5_1
            v4_1 = v4_1 - v5_1
            v7_1 = v2.d f* v2.d
            float v22_1 = v13.d f+ v13.d
            v5_1 = v20_1 + v21_1
            v20_1 = v21_1 - v20_1
            v21_1 = v23_1 - v24_1
            v23_1 = v23_1 + v24_1
            v24_1 = v16_1 * v29_1
            v29_1 = v6_1 + v4_1
            float v19_1 = v15.d f+ v15.d
            v4_1 = v7_1 + v4_1 - v6_1
            v5_1 = v19_1 * v5_1
            v17_1 = v22_1 * v17_1
            v19_1 = v19_1 * v21_1
            v16_1 = v22_1 * v20_1 + v16_1 * v23_1
            v6_1 = v13.d f* (v18_1 - v6_1 - v7_1)
            v7_1 = v14.d f* (v29_1 - v7_1)
            v18_1 = v3.d f* v27_1
            v20_1 = v0.d f* v25_1
            v21_1 = v1.d f* v26_1
            v22_1 = v2.d f* v28_1
            v23_1 = v3.d f* v25_1
            v29_1 = v0.d f* v27_1
            float v30_1 = v1.d f* v28_1
            float v31_1 = v2.d f* v26_1
            v13.d = v3.d f* v26_1
            v3.d = v3.d f* v28_1
            v28_1 = v0.d f* v28_1
            v0.d = v0.d f* v26_1
            v26_1 = v1.d f* v27_1
            v27_1 = v2.d f* v27_1
            v2.d = v2.d f* v25_1
            v4_1 = v16_1 + v15.d f* v4_1
            v3.d = v27_1 f+ v3.d
            v1.d = v1.d f* v25_1
            v5_1 = v5_1 + v24_1 + v6_1
            v6_1 = v19_1 + v17_1 + v7_1
            v2.d = v2.d f+ v26_1 f+ v13.d
            v0.d = v0.d f+ v3.d
            v3.d = v18_1 - v20_1 - v21_1 - v22_1
            v2.d = v2.d f- v28_1
            v0.d = v0.d f- v1.d
            *x8_7 = v29_1 + v23_1 + v30_1 - v31_1
            x8_7[1] = v2.d
            x8_7[2] = v0.d
            x8_7[3] = v3.d
            v0.d = var_e0.d
            v1.d = var_e0:4.d
            v2.d = var_e0:8.d
            v3.d = var_e0:0xc.d
            v0.d = v5_1 f* v0.d
            v1.d = v6_1 f* v1.d
            v2.d = v4_1 f* v2.d
            v0.d = v0.d f+ v1.d
            v1.d = v5_1 * var_d0_1.d + v6_1 * var_d0_1:4.d
            v0.d = v0.d f+ v2.d
            v1.d = v1.d f+ v4_1 * var_d0_1:8.d
            v2.d = v5_1 * var_c0_1.d + v6_1 * var_c0_1:4.d + v4_1 * var_c0_1:8.d
            v14.d = v3.d f+ v0.d
            v15.d = var_d0_1:0xc.d f+ v1.d
            v13.d = var_c0_1:0xc.d f+ v2.d
            v0.d = v8.d f- v14.d
            v1.d = v9.d f- v15.d
            v2.d = v10.d f- v13.d
            v0.d = v0.d f* v0.d
            v1.d = v1.d f* v1.d
            v0.d = v0.d f+ v1.d
            v1.d = v2.d f* v2.d
            v0.d = v0.d f+ v1.d
            v1.d = float.s(0x3c23d70a)
            
            if (v0.d f<= v1.d)
                break
            
            cond:4_1 = x26_1 s> 0
            x26_1 -= 1
        while (cond:4_1)
    
    if (x25_1 u> 0x62)
        break
    
    v1.d = float.s(0x3c23d70a)
    x25_1 += 1
while (v0.d f> v1.d)
