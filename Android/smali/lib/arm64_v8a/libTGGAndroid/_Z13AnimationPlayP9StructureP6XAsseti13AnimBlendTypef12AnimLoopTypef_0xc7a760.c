// 函数: _Z13AnimationPlayP9StructureP6XAsseti13AnimBlendTypef12AnimLoopTypef
// 地址: 0xc7a760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 u> 4)
    pthread_kill(pthread_self(), 6)
    XAsset* x0_12
    char* x1_2
    x0_12, x1_2 = XNoReturn()
    return AnimationClipFindInStructure(x0_12, x1_2) __tailcall

StructureAnim* x19 = *(arg1 + 0x38)
int128_t v8 = arg7
int32_t x22 = arg4
int128_t v11
v11.d = fconvert.s(1f)
int64_t v10
v10.d = 0f
int64_t v9
v9.d = 0f

switch (arg4)
    case 0
        void* i_3 = *(x19 + 8)
        v9.d = fconvert.s(1f)
        
        if (i_3 != 0)
            void* i
            
            do
                void** x8_1 = *i_3
                i = *(i_3 + 8)
                int32_t x9_1 = x8_1[5].d
                bool z_1
                
                if (x9_1 != 2)
                    z_1 = x9_1 == 4
                else
                    z_1 = true
                
                if (not(z_1))
                    void** x9_3 = *(*gpGameData + 8)
                    void* x11_1 = *x9_3
                    *(x9_3 + 0x14) -= 1
                    *x8_1 = x11_1
                    *x9_3 = x8_1
                    void* x8_2 = *(i_3 + 0x10)
                    void** x8_3
                    
                    if (x8_2 == 0)
                        x8_3 = x19 + 8
                    else
                        x8_3 = x8_2 + 8
                    
                    *x8_3 = *(i_3 + 8)
                    void* x8_4 = *(i_3 + 8)
                    void* __offset(StructureAnim, 0x10) x8_5
                    
                    if (x8_4 == 0)
                        x8_5 = x19 + 0x10
                    else
                        x8_5 = x8_4 + 0x10
                    
                    *x8_5 = *(i_3 + 0x10)
                    *(x19 + 0x18) -= 1
                    XPooledFree(i_3, 0x18)
                
                i_3 = i
            while (i != 0)
        
        v11.d = fconvert.s(1f)
        v10.d = fconvert.s(1f)
    case 1
        int64_t* i_1 = *(x19 + 8)
        arg7 = *gSecondsPerUpdate
        
        if (i_1 != 0)
            do
                void* x9_6 = *i_1
                i_1 = i_1[1]
                int32_t x10_5 = *(x9_6 + 0x28)
                bool z_2
                
                if (x10_5 != 2)
                    z_2 = x10_5 == 4
                else
                    z_2 = true
                
                if (not(z_2))
                    *(x9_6 + 0x20) = arg7 * fneg(*(x9_6 + 0x1c)) / arg5
            while (i_1 != 0)
        
        v10.d = arg7 / arg5
        v11.d = 0f
        v9.d = fconvert.s(1f)
    case 2
        v9.d = fconvert.s(1f)
        v11.d = fconvert.s(1f)
    case 3
        v9.d = fconvert.s(1f)
        v11 = v8

AnimSet** x25_3 = *(*gpGameData + 8)
AnimSet* result = *x25_3
*(x25_3 + 0x14) += 1

if (result == 0)
    int64_t* x0_1 = XMalloc(8 | (0x3ffffff & (x25_3[2].d * 3)) << 6)
    *x0_1 = x25_3[1]
    int32_t x8_14 = x25_3[2].d
    result = *x25_3
    x25_3[1] = x0_1
    
    if (x8_14 s>= 1)
        int64_t i_2 = 0
        AnimSet** result_2 = &x0_1[1]
        
        do
            AnimSet** result_1 = result_2
            *result_2 = result
            result_2 = &result_2[0x18]
            i_2 += 1
            result = result_1
        while (i_2 s< sx.q(x25_3[2].d))
        
        result = result_2 - 0xc0
    
    *x25_3 = result

*x25_3 = *result
*(result + 0x10) = arg2
*(result + 0x18) = arg3
*(result + 0x1c) = v11.d
*(result + 0x20) = v10.d
*(result + 0x24) = arg6
*(result + 0x28) = x22
*(result + 0x2c) = v9.d
*(result + 0xb4) = 0
*(result + 0xb8) = 0

if (x22 == 2)
    void* x0_3 = AnimSetGetClip(x19, result)
    int32_t x8_16 = *(x19 + 0xc0)
    int32_t x8_19
    
    if (x8_16 s< 1)
        x8_19 = *(x19 + 0xe4)
        *(x19 + 0xe4) = x8_19 + 1
    else
        *(x19 + 0xc0) = x8_16 - 1
        x8_19 = *(x19 + (zx.q(x8_16 - 1) << 2) + 0xc4)
    
    *(result + 0x30) = x8_19
    int32_t* x22_1 = *(x0_3 + 0x10)
    uint64_t x27_1 = zx.q(x22_1[1])
    int64_t x0_5 = XPooledCalloc(x27_1.d * 0x2c)
    *(x19 + (sx.q(x8_19) << 4) + 0x30) = x0_5
    *(x19 + (sx.q(x8_19) << 4) + 0x38) = 0
    *(x19 + (sx.q(x8_19) << 4) + 0x3c) = x27_1.d
    
    if (x27_1.d s> 0)
        size_t x21_1 = x27_1 * 0x2c
        memset(x0_5, 0, x21_1)
        int64_t x25_4 = 0
        int32_t x26_2 = 0
        v9.d = fconvert.s(0.5f)
        *(x19 + (sx.q(x8_19) << 4) + 0x38) += x27_1.d
        v10.d = fconvert.s(-0.5f)
        v11.d = 0f
        
        do
            int32_t fp_1 = x22_1[1]
            int64_t x28_3 = *(x22_1 + 0x18)
            int32_t x19_2 = *x22_1 - 1
            int128_t v0
            v0.d = float.s(x19_2)
            v0.d = v0.d f* v8.d
            float iptr
            int128_t v1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            int128_t v16_6
            int128_t v17_5
            v0, v1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1, v16_6, v17_5 = modff(&iptr, v0.d)
            v1.d = iptr
            
            if (v1.d f< 0f)
                v2_1.d = v10.d
            else
                v2_1.d = v9.d
            
            v1.d = v1.d f+ v2_1.d
            uint32_t x8_22 = vcvts_s32_f32(v1.d)
            float v19_1
            
            if ((x8_22 & 0x80000000) != 0)
                x8_22 = 0
                v0.d = 0f
            label_c7aa3c:
                int64_t* x9_9 = x28_3 + muls.dp.d(x26_2 + fp_1 * x8_22, 0x2c)
                int64_t* x8_25 = x28_3 + muls.dp.d(x26_2 + fp_1 * (x8_22 + 1), 0x2c)
                v5_1.q = *x9_9
                v4_1.q = x9_9[1]
                v1.q = *x8_25
                v2_1.q = x8_25[1]
                v3_1.q = x9_9[2]
                v6_1.d = x9_9[3].d
                v7_1.q = *(x9_9 + 0x1c)
                uint128_t v16_1 = vmul_f32(v2_1, v4_1, 0)
                uint128_t v17_1 = vmul_f32(v1, v5_1, 0)
                uint128_t v16_3 = vcgt_f32(v11, 
                    vadd_f32(
                        vadd_f32(vadd_f32(vdup_laneq_s32(v16_1, 1), v17_1), 
                            vdup_laneq_s32(v17_1, 1)), 
                        v16_1))
                int128_t v17_4 = vneg_f32(v2_1)
                int128_t v16_4 = vdup_laneq_s32(v16_3, 0)
                int128_t v18_2
                v18_2.q = x8_25[2]
                v17_5 = vbsl_s8(v16_4, v17_4, v2_1)
                int128_t v16_5 = vbsl_s8(v16_4, vneg_f32(v1), v1)
                v2_1.d = x8_25[3].d
                int128_t v1_1
                v1_1.d = vsub_f32(v18_2, v3_1).d f* v0.d
                v1_1:4.d = v1_1:4.d f* v0.d
                v1 = vadd_f32(v3_1, v1_1)
                v2_1.d = v2_1.d f- v6_1.d
                v3_1.q = *(x8_25 + 0x1c)
                v2_1.d = v0.d f* v2_1.d
                v19_1 = *(x9_9 + 0x24)
                v2_1.d = v6_1.d f+ v2_1.d
                v6_1.d = *(x8_25 + 0x24)
                int128_t v3_2
                v3_2.d = vsub_f32(v3_1, v7_1).d f* v0.d
                v3_2:4.d = v3_2:4.d f* v0.d
                v3_1 = vadd_f32(v7_1, v3_2)
                v6_1.d = v6_1.d f- v19_1
                v7_1.d = v0.d f* v6_1.d
                int128_t v6_2 = vsub_f32(v16_5, v5_1)
                v16_6 = vsub_f32(v17_5, v4_1)
                v6_2.d = v6_2.d f* v0.d
                v6_2:4.d = v6_2:4.d f* v0.d
                v0.d = v16_6.d f* v0.d
                v0:4.d = v16_6:4.d f* v0.d
                v6_1 = vadd_f32(v5_1, v6_2)
                v0 = vadd_f32(v4_1, v0)
                v4_1.d = v19_1 f+ v7_1.d
            else
                if (x19_2 s> x8_22)
                    goto label_c7aa3c
                
                int64_t* x8_30 = x28_3 + muls.dp.d(x26_2 + fp_1 * x19_2, 0x2c)
                v6_1.q = *x8_30
                v0.q = x8_30[1]
                v1.q = x8_30[2]
                v2_1.d = x8_30[3].d
                v3_1.q = *(x8_30 + 0x1c)
                v4_1.d = *(x8_30 + 0x24)
            
            v16_6.q = *V1
            v7_1.d = fneg(v0.d)
            v19_1 = v0:4.d
            int128_t v5_2 = vneg_f32(v6_1)
            float v20_1 = vmul_f32(v6_1, v6_1, 0)
            float v21_1 = v6_1:4.d
            float v22_1 = v1:4.d
            float v23_1 = v6_1.d f* v6_1:4.d
            void* x8_26 = *(x19 + (sx.q(x8_19) << 4) + 0x30)
            float v27_1 = v19_1 f* v0:4.d
            float v28_1 = v7_1.d f* v0:4.d
            v17_5.d = *(V1 + 8)
            float v25_1 = vmul_f32(v6_1, v0, 0)
            v6_1.d = v21_1 f* v6_1:4.d
            v22_1 = v22_1 + v22_1
            double v29_1 = vmul_f32(v0, v5_2, 0)
            v21_1 = v21_1 f* v0.d
            v19_1 = v19_1 f* v5_2.d
            float v30_1 = v20_1 + v27_1
            float v31_1 = v23_1 - v28_1
            v20_1 = v27_1 - v20_1
            float v18_3 = vmul_f32(v0, v0, 0)
            v29_1.d = v29_1:4.d
            v23_1 = v23_1 + v28_1
            v27_1 = v21_1 - v19_1
            v19_1 = v21_1 + v19_1
            v21_1 = v30_1 f- v6_1.d
            v28_1 = v31_1 * v22_1
            v31_1 = v6_1.d f+ v20_1
            float v26_1 = v1.d f+ v1.d
            v6_1.d = v20_1 f- v6_1.d
            double v3_3 = vdiv_f32(v16_6, v3_1)
            v16_6.d = v21_1 - v18_3
            float v24_1 = v2_1.d f+ v2_1.d
            v6_1.d = v18_3 f+ v6_1.d
            void* x8_27 = x8_26 + x25_4
            v16_6.d = v16_6.d f* v1.d
            v1.d = (v31_1 - v18_3) f* v1:4.d
            v4_1.d = v17_5.d f/ v4_1.d
            v17_5.d = (v25_1 f+ v29_1.d) * v24_1
            v2_1.d = v2_1.d f* v6_1.d
            v6_1.d = v28_1 f+ v16_6.d
            v1.d = v26_1 * v23_1 f+ v1.d
            x25_4 += 0x2c
            *x8_27 = v5_2.q
            *(x8_27 + 8) = v7_1.d
            v5_2.d = fneg(v3_3:4.d)
            v2_1.d = v2_1.d f+ v26_1 * (v25_1 f- v29_1.d) + v19_1 * v22_1
            *(x8_27 + 0xc) = v0:4.d
            v0.d = v17_5.d f+ v6_1.d
            v1.d = v27_1 * v24_1 f+ v1.d
            v2_1.d = v2_1.d f* fneg(v4_1.d)
            v0.d = v0.d f* fneg(v3_3.d)
            v1.d = v1.d f* v5_2.d
            x26_2 += 1
            *(x8_27 + 0x1c) = v3_3
            *(x8_27 + 0x24) = v4_1.d
            *(x8_27 + 0x14) = v1.d
            *(x8_27 + 0x18) = v2_1.d
            *(x8_27 + 0x10) = v0.d
        while (x21_1 != x25_4)
    else if ((x27_1.d & 0x80000000) != 0)
        *(x19 + (sx.q(x8_19) << 4) + 0x38) = x27_1.d

int32_t* x0_8 = AnimSetGetClip(x19, result)
float v0_1

if (*(result + 0x24) == 2)
    v0_1 = 0f
else
    v0_1 = fconvert.s(1f) / (float.s(**(x0_8 + 0x10)) / *x0_8)

*result = v0_1
*(result + 4) = 0
*(result + 8) = 0
void** x0_9 = XPooledCalloc(0x18)
*x0_9 = result
x0_9[1] = 0
x0_9[2] = *(x19 + 0x10)
void* x8_33 = *(x19 + 0x10)
void* x8_34

if (x8_33 == 0)
    x8_34 = x19 + 8
else
    x8_34 = x8_33 + 8

*x8_34 = x0_9
int32_t x8_35 = *(x19 + 0x18)
*(x19 + 0x10) = x0_9
*(x19 + 0x18) = x8_35 + 1
return result
