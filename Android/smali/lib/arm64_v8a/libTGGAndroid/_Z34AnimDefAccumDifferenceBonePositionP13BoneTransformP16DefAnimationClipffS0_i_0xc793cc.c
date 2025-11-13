// 函数: _Z34AnimDefAccumDifferenceBonePositionP13BoneTransformP16DefAnimationClipffS0_i
// 地址: 0xc793cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_90 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8

if (not(arg4 != 0f))
    return 

int32_t* x20_1 = *(arg2 + 0x10)
uint64_t x21_1 = zx.q(x20_1[1])

if (x21_1.d s< 1)
    return 

int64_t x22_1 = 0
void* __offset(BoneTransform, 0x14) x23_1 = arg1 + 0x14
int64_t x24_1 = 0x10
v9.d = fconvert.s(0.5f)
v10.d = fconvert.s(-0.5f)

do
    int32_t* x26_1 = *(x20_1 + 8)
    
    if (*(x26_1 + x24_1) != 0xffffffff)
        int32_t x28_1 = x20_1[1]
        int64_t x27_1 = *(x20_1 + 0x18)
        int32_t fp_1 = *x20_1 - 1
        float iptr
        int128_t v0
        int128_t v1
        int96_t v2_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        int128_t v16_1
        int128_t v17_1
        int128_t v23_1
        v0, v1, v2_1, v5_1, v6_1, v7_1, v16_1, v17_1, v23_1 =
            modff(&iptr, float.s(fp_1) f* arg3.q.d)
        v1.d = iptr
        
        if (v1.d f< 0f)
            v2_1.d = v10.d
        else
            v2_1.d = v9.d
        
        v1.d = v1.d f+ v2_1.d
        uint32_t x9_3 = vcvts_s32_f32(v1.d)
        int128_t var_c0
        int96_t var_b0
        int96_t var_a4
        uint64_t v0_1
        float v3_1
        float v4_1
        float v18_1
        float v19_1
        float v21_1
        float v24_1
        
        if ((x9_3 & 0x80000000) != 0)
            x9_3 = 0
            v0.d = 0f
        label_c7971c:
            int32_t x8_9 = x22_1.d + x28_1 * x9_3
            int32_t x9_5 = x22_1.d + x28_1 * (x9_3 + 1)
            int32_t* x10_1 = x27_1 + muls.dp.d(x8_9, 0x2c)
            int32_t* x11_1 = x27_1 + muls.dp.d(x9_5, 0x2c)
            v1.d = *x10_1
            v2_1.d = x10_1[1]
            v6_1.d = x11_1[2]
            v3_1 = x11_1[3]
            v5_1.d = x10_1[2]
            v4_1 = x10_1[3]
            v16_1.d = *x11_1
            v7_1.d = x11_1[1]
            v17_1.d = v3_1 * v4_1
            v17_1.d = v17_1.d f+ v16_1.d f* v1.d
            v17_1.d = v17_1.d f+ v7_1.d f* v2_1.d
            v17_1.d = v17_1.d f+ v6_1.d f* v5_1.d
            
            if (not(v17_1.d f>= 0f))
                v3_1 = fneg(v3_1)
                v16_1.d = fneg(v16_1.d)
                v7_1.d = fneg(v7_1.d)
                v6_1.d = fneg(v6_1.d)
            
            v16_1.d = v16_1.d f- v1.d
            v7_1.d = v7_1.d f- v2_1.d
            v6_1.d = v6_1.d f- v5_1.d
            v16_1.d = v0.d f* v16_1.d
            v7_1.d = v0.d f* v7_1.d
            v6_1.d = v0.d f* v6_1.d
            v17_1.d = v0.d f* (v3_1 - v4_1)
            void* x9_2 = x27_1 + sx.q(x9_5) * 0x2c
            void* x8_2 = x27_1 + sx.q(x8_9) * 0x2c
            v3_1 = v1.d f+ v16_1.d
            v1.d = v2_1.d f+ v7_1.d
            v2_1.d = v5_1.d f+ v6_1.d
            v21_1 = v4_1 f+ v17_1.d
            v5_1.d = *(x8_2 + 0x10)
            v6_1.q = *(x9_2 + 0x14)
            v7_1.q = *(x8_2 + 0x14)
            v16_1.q = *(x9_2 + 0x1c)
            v17_1.q = *(x8_2 + 0x1c)
            v18_1 = *(x9_2 + 0x24)
            v19_1 = *(x8_2 + 0x24)
            char x8_3 = *(x9_2 + 0x28)
            v4_1 = v5_1.d f+ v0.d f* (*(x9_2 + 0x10) f- v5_1.d)
            int128_t v5_2 = vsub_f32(v6_1, v7_1)
            v6_1 = vsub_f32(v16_1, v17_1)
            v16_1.d = v18_1 - v19_1
            uint64_t v5_3 = vrev64_s32(v5_2)
            v6_1.d = v6_1.d f* v0.d
            v6_1:4.d = v6_1:4.d f* v0.d
            v16_1.d = v0.d f* v16_1.d
            v0.d = v5_3.d f* v0.d
            v0:4.d = v5_3:4.d f* v0.d
            v5_1 = vrev64_s32(v7_1)
            v23_1 = vadd_f32(v17_1, v6_1)
            v24_1 = v19_1 f+ v16_1.d
            v0_1 = vadd_f32(v5_1, v0)
            var_a4:0xc.b = x8_3
        else
            if (fp_1 s> x9_3)
                goto label_c7971c
            
            int128_t* x8_8 = x27_1 + muls.dp.d(x22_1.d + x28_1 * fp_1, 0x2c)
            v2_1 = (x8_8[1]).12
            var_a4 = (*(x8_8 + 0x1c)).12
            var_c0 = *x8_8
            var_b0 = v2_1
            v0.q = var_b0:4.q
            v23_1.q = var_a4.q
            v24_1 = var_a4:8.d
            v3_1 = var_c0.d
            v1.d = var_c0:4.d
            v2_1.d = var_c0:8.d
            v21_1 = var_c0:0xc.d
            v4_1 = var_b0.d
            v0_1 = vrev64_s32(v0)
        
        v19_1 = *(x23_1 - 0x14)
        float v20_1 = *(x23_1 - 0x10)
        v18_1 = *(x23_1 - 0xc)
        float v22_1 = *(x23_1 - 8)
        v7_1.q = *(x23_1 + 8)
        v17_1.d = *(x23_1 + 0x10)
        float v25_1 = v21_1 * v22_1
        double v23_2 = vmul_f32(v7_1, v23_1, 0)
        v5_1.d = *(x23_1 - 4)
        v6_1.d = *x23_1
        v16_1.d = *(x23_1 + 4)
        float v31_1 = v22_1 f* v2_1.d
        v11.d = v22_1 * v22_1
        v12.d = v19_1 * v19_1
        var_a4.q = v23_2
        v23_2.d = v19_1 * v20_1
        var_a4:8.d = v17_1.d f* v24_1
        v24_1 = v18_1 * v22_1
        float v26_1 = v20_1 * v22_1
        float v27_1 = v21_1 * v19_1 + v22_1 * v3_1
        float v28_1 = v19_1 * v18_1
        float v29_1 = v21_1 * v20_1 + v22_1 f* v1.d
        float v30_1 = v20_1 * v18_1
        v22_1 = v19_1 * v22_1
        v21_1 = v21_1 * v18_1 + v31_1
        v31_1 = v23_2.d f- v24_1
        v23_2.d = v23_2.d f+ v24_1
        v24_1 = v12.d f+ v11.d
        v11.d = v11.d f- v12.d
        v12.d = v28_1 + v26_1
        v26_1 = v28_1 - v26_1
        v28_1 = v30_1 - v22_1
        v22_1 = v30_1 + v22_1
        v25_1 = v25_1 - v19_1 * v3_1 - v20_1 f* v1.d
        v27_1 = v27_1 + v20_1 f* v2_1.d
        v29_1 = v18_1 * v3_1 + v29_1
        v21_1 = v19_1 f* v1.d + v21_1
        v30_1 = v0_1.d f+ v0_1.d
        v12.d = v12.d f* v30_1
        v28_1 = v28_1 * v30_1
        v30_1 = v4_1 + v4_1
        v23_2.d = v23_2.d f* v30_1
        v26_1 = v26_1 * v30_1
        v30_1 = v0_1:4.d
        v30_1 = v30_1 + v30_1
        v3_1 = v20_1 * v3_1
        v20_1 = v20_1 * v20_1
        v19_1 = v19_1 f* v2_1.d
        v2_1.d = v18_1 f* v2_1.d
        v1.d = v18_1 f* v1.d
        v18_1 = v18_1 * v18_1
        v2_1.d = v25_1 f- v2_1.d
        v1.d = v27_1 f- v1.d
        var_c0.d = v1.d
        var_c0:4.d = v29_1 - v19_1
        var_c0:8.d = v21_1 - v3_1
        var_c0:0xc.d = v2_1.d
        v1.d = (v24_1 - v20_1 - v18_1) * v4_1
        v2_1.d = (v20_1 f+ v11.d - v18_1) f* v0_1:4.d
        v0_1.d = (v18_1 + v11.d f- v20_1) f* v0_1.d
        v1.d = v1.d f+ v31_1 * v30_1
        v2_1.d = v23_2.d f+ v2_1.d
        v0_1.d = v0_1.d f+ v26_1 + v22_1 * v30_1
        v1.d = v1.d f+ v12.d
        v2_1.d = v2_1.d f+ v28_1
        v0_1.d = v17_1.d f* v0_1.d
        v1.d = v1.d f* v7_1.d
        v2_1.d = v2_1.d f* v7_1:4.d
        v0_1.d = v16_1.d f+ v0_1.d
        v1.d = v5_1.d f+ v1.d
        v2_1.d = v6_1.d f+ v2_1.d
        var_b0.d = v1.d
        var_b0:4.d = v2_1.d
        var_b0:8.d = v0_1.d
        BoneTransform* x0 = arg5 + sx.q(*(x26_1 + x24_1)) * 0x2c
        BoneTransformCompose(x0, x0, &var_c0)
    
    x22_1 += 1
    x24_1 += 0x18
    x23_1 += 0x2c
while (x21_1 != x22_1)
