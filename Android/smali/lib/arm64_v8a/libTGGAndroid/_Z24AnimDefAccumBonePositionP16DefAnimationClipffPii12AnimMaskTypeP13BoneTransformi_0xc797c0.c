// 函数: _Z24AnimDefAccumBonePositionP16DefAnimationClipffPii12AnimMaskTypeP13BoneTransformi
// 地址: 0xc797c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int128_t entry_v9
int64_t var_70 = entry_v9.q
int64_t v8
int64_t var_68 = v8
int32_t* x23 = *(arg1 + 0x10)
uint64_t x24 = zx.q(x23[1])

if (x24.d s>= 1)
    int32_t x20_1 = arg6
    int64_t i = 0
    uint128_t v0 = vdupq_laneq_s32(arg3, 0)
    entry_v9 = vdup_laneq_s32(arg3, 0)
    v10.d = fconvert.s(0.5f)
    v11.d = fconvert.s(-0.5f)
    uint128_t var_a0_1 = v0
    
    do
        int32_t* fp_2 = *(x23 + 8) + i * 0x18 + 0x10
        
        if (*fp_2 != 0xffffffff)
            if (x20_1 == 0)
            label_c7998c:
                int32_t x26_1 = x23[1]
                int64_t x22_1 = *(x23 + 0x18)
                int32_t x21_1 = *x23 - 1
                v0.d = float.s(x21_1)
                v0.d = v0.d f* arg2.q.d
                float iptr
                float128 v0_1
                float128 v1
                float128 v2_1
                float128 v3_1
                float128 v4_1
                float128 v5_6
                float128 v16_1
                v0_1, arg1, v1, v2_1, v3_1, v4_1, v5_6, v16_1 = modff(&iptr, v0.d)
                v1.d = iptr
                
                if (v1.d f< 0f)
                    v2_1.d = v11.d
                else
                    v2_1.d = v10.d
                
                v1.d = v1.d f+ v2_1.d
                uint32_t x8_3 = vcvts_s32_f32(v1.d)
                int64_t x8_6
                
                if ((x8_3 & 0x80000000) != 0)
                    x8_3 = 0
                    v0_1.d = 0f
                label_c79848:
                    int32_t x8_5 = i.d + (x8_3 + 1) * x26_1
                    int128_t* x9_2 = x22_1 + muls.dp.d(i.d + x8_3 * x26_1, 0x2c)
                    int128_t* x10_1 = x22_1 + muls.dp.d(x8_5, 0x2c)
                    v1 = *x10_1
                    v4_1 = x10_1[1]
                    v2_1 = *x9_2
                    v3_1 = x9_2[1]
                    v16_1.d = 0f
                    x8_6 = sx.q(x8_5)
                    float128 v5_1 = vmulq_f32(v1, v2_1, 0)
                    int128_t v6_1 = vdup_laneq_s32(v5_1, 3)
                    int128_t v7_1 = vdup_laneq_s32(v5_1, 1)
                    uint128_t v5_4 = vcgtq_f32(v16_1, 
                        vadd_f32(vadd_f32(vadd_f32(v6_1, v5_1), v7_1), vextq_s8(v5_1, v5_1, 8)))
                    uint128_t v6_4 = vnegq_f32(v1)
                    v5_6 = vbslq_s8(vdupq_laneq_s32(v5_4, 0), v6_4, v1)
                    v6_4.q = x9_2[2].q
                    v7_1.q = x10_1[2].q
                    float128 v1_1
                    v1_1.d = vsubq_f32(v4_1, v3_1).d f* v0_1.d
                    v1_1:4.d = v1_1:4.d f* v0_1.d
                    v1_1:8.d = v1_1:8.d f* v0_1.d
                    v1_1:0xc.d = v1_1:0xc.d f* v0_1.d
                    v1 = vaddq_f32(v3_1, v1_1)
                    v3_1 = vsub_f32(v7_1, v6_4)
                    v4_1 = vsubq_f32(v5_6, v2_1)
                    v3_1.d = v3_1.d f* v0_1.d
                    v3_1:4.d = v3_1:4.d f* v0_1.d
                    v0_1.d = v4_1.d f* v0_1.d
                    v0_1:4.d = v4_1:4.d f* v0_1.d
                    v0_1:8.d = v4_1:8.d f* v0_1.d
                    v0_1:0xc.d = v4_1:0xc.d f* v0_1.d
                    v0_1 = vaddq_f32(v2_1, v0_1)
                    v2_1 = vadd_f32(v6_4, v3_1)
                else
                    if (x21_1 s> x8_3)
                        goto label_c79848
                    
                    int32_t x8_14 = i.d + x21_1 * x26_1
                    int128_t* x9_6 = x22_1 + muls.dp.d(x8_14, 0x2c)
                    v0_1 = *x9_6
                    v1 = x9_6[1]
                    v2_1.q = x9_6[2].q
                    x8_6 = sx.q(x8_14)
                    v16_1.d = 0f
                
                int64_t x9_3 = sx.q(*fp_2)
                v3_1 = var_a0_1
                int128_t v2_2 = vmul_f32(v2_1, entry_v9, 0)
                uint128_t* x9_4 = arg7 + x9_3 * 0x2c
                uint128_t v0_2 = vmulq_f32(v0_1, v3_1, 0)
                float128 v1_2 = vmulq_f32(v1, v3_1, 0)
                v3_1 = *x9_4
                v4_1 = x9_4[1]
                v5_6.q = x9_4[2].q
                char x8_8 = *(x22_1 + x8_6 * 0x2c + 0x28)
                uint128_t v6_5 = vnegq_f32(v0_2)
                float128 v1_3 = vaddq_f32(v1_2, v4_1)
                float128 v4_2 = vmulq_f32(v0_2, v3_1, 0)
                x9_4[2].q = vadd_f32(v2_2, v5_6)
                int128_t v2_4 = vdup_laneq_s32(v4_2, 3)
                uint128_t v5_7 = vextq_s8(v4_2, v4_2, 8)
                *x9_4 = vaddq_f32(v3_1, 
                    vbslq_s8(
                        vdupq_laneq_s32(
                            vcgtq_f32(v16_1, 
                                vadd_f32(vadd_f32(vadd_f32(v2_4, v4_2), vdup_laneq_s32(v4_2, 1)), 
                                    v5_7)), 
                            0), 
                        v6_5, v0_2))
                x9_4[1] = v1_3
                *(x9_4 + 0x28) = x8_8
            else
                uint64_t x9_5 = zx.q(arg5)
                int32_t* x8_12 = arg4
                
                if (arg5 s< 1)
                label_c79978:
                    
                    if (x20_1 == 2)
                        goto label_c7998c
                else
                    while (i != zx.q(*x8_12))
                        int32_t temp0_1 = x9_5
                        x9_5 -= 1
                        x8_12 = &x8_12[1]
                        
                        if (temp0_1 == 1)
                            goto label_c79978
                    
                    if (x20_1 == 1)
                        goto label_c7998c
        
        i += 1
    while (i != x24)

entry_v9.q = var_70
