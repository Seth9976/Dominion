// 函数: _Z18ParticleSpotUpdateP15ParticleEmitterP12ParticleSpotP10DefEmitter
// 地址: 0xf95bc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_a0 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int128_t entry_v10
int64_t var_78 = entry_v10.q
int128_t entry_v9
int64_t var_70 = entry_v9.q
int64_t v8
int64_t var_68 = v8
int128_t v0
v0.d = *(arg1 + 0x308)
int64_t* x8 = *(arg1 + 0x300)
float sinp_3 = *(arg1 + 0x30c)
*(arg1 + 0x310) = v0.d
ParticleEmitter* x19 = arg1
v0.d = v0.d f+ sinp_3 f* x8[0x10].d
*(arg1 + 0x308) = v0.d

if (v0.d f< fconvert.s(1f))
    goto label_f95ca8

int64_t* x22_1 = *x8
int64_t* x8_1 = *x22_1

if (x8_1 == 0)
    if (x22_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0 = AssetCatalogLoadAsset(x22_1, false, true)
    x8_1 = *x22_1

int64_t result

if (zx.d(*(**x8_1 + sx.q(*(x19 + 0x2f0)) * 0x168 + 0xd9)) == 0)
    result = 0
else
    v0.d = *(x19 + 0x308)
    x8 = *(x19 + 0x300)
    v0.d = v0.d f+ fconvert.s(-1f)
    int32_t x9_3 = *(x19 + 0x314) + 1
    *(x19 + 0x308) = v0.d
    *(x19 + 0x314) = x9_3
label_f95ca8:
    int64_t* x22_2 = *x8
    int64_t* x8_7 = *x22_2
    
    if (x8_7 == 0)
        if (x22_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        arg1, v0 = AssetCatalogLoadAsset(x22_2, false, true)
        x8_7 = *x22_2
    
    if (zx.d(*(**x8_7 + sx.q(*(x19 + 0x2f0)) * 0x168 + 0xe3)) != 0)
        int32_t x8_13 = *(arg3 + 0xfc)
        int32_t x10_1 = x8_13 * *(arg3 + 0xf8)
        
        if (x10_1 s> 1)
            v0.d = *(x19 + 0x308)
            v0.d = v0.d f* float.s(x10_1)
            v0.d = vrndm_f32(v0.d)
            
            if (v0.d f< 0f)
                sinp_3 = fconvert.s(-0.5f)
            else
                sinp_3 = fconvert.s(0.5f)
            
            v0.d = v0.d f+ sinp_3
            uint32_t temp0_2 = vcvts_s32_f32(v0.d)
            uint32_t x9_7
            
            if (x10_1 - 1 s> temp0_2)
                x9_7 = temp0_2
            else
                x9_7 = x10_1 - 1
            
            *(arg2 + 0x3c) = x9_7 s% x8_13
            *(arg2 + 0x38) = x9_7 s/ *(arg3 + 0xfc)
    
    int32_t x22_3
    
    if (*(arg3 + 0x110) s< 1)
        entry_v10.d = float.s(0x3dcccccd)
        x22_3 = 0xa
        v8.d = fconvert.s(1f)
        entry_v9 = entry_v10
    label_f96910:
        v0.d = *arg2
        *(arg2 + 4)
        *(arg2 + 8)
        v0.d = *(*(x19 + 0x300) + 0x80) f* v0.d
        DefEmitter* x2
        float v0_29
        int128_t v1_27
        float v2_13
        int128_t v3_1
        int128_t v4_3
        x2, v0_29, v1_27, v2_13, v3_1, v4_3 = QuatFromYPR(arg1)
        v4_3.d = *(x19 + 0x2a0)
        float v5_3 = *(x19 + 0x294)
        float v6_3 = *(x19 + 0x298)
        float v7_3 = *(x19 + 0x29c)
        float v16_3 = v3_1.d f* v4_3.d
        float v17_3 = v0_29 * v5_3
        float v18_3 = v1_27.d f* v6_3
        float v19_3 = v2_13 * v7_3
        float v20_3 = v3_1.d f* v5_3
        float v21_3 = v4_3.d f* v0_29
        float v22_3 = v1_27.d f* v7_3
        float v23_3 = v2_13 * v6_3
        float v24_3 = v3_1.d f* v6_3
        v3_1.d = v3_1.d f* v7_3
        v7_3 = v0_29 * v7_3
        v0_29 = v0_29 * v6_3
        v6_3 = v4_3.d f* v1_27.d
        v4_3.d = v4_3.d f* v2_13
        v1_27.d = v1_27.d f* v5_3
        v3_1.d = v4_3.d f+ v3_1.d
        void* x8_95 = *(x19 + 0x300)
        v4_3.d = v16_3 - v17_3 - v18_3
        v0_29 = v0_29 f+ v3_1.d
        v3_1.d = v4_3.d f- v19_3
        v4_3.d = v21_3 + v20_3 + v22_3 - v23_3
        *(x19 + 0x294) = v4_3.d
        *(x19 + 0x298) = v2_13 * v5_3 + v6_3 + v24_3 - v7_3
        *(x19 + 0x29c) = v0_29 f- v1_27.d
        *(x19 + 0x2a0) = v3_1.d
        v0_29 = *(x8_95 + 0x80)
        v1_27.q = *(arg2 + 0xc)
        v3_1.q = *(x19 + 0x2a4)
        v1_27.d = v1_27.d f* v0_29
        v1_27:4.d = v1_27:4.d f* v0_29
        v4_3.d = 0x42c80000
        v4_3:4.d = 0x42c80000
        int128_t v1_28 = vmul_f32(v1_27, v4_3, 0)
        v2_13 = *(arg2 + 0x14)
        *(x19 + 0x2a4) = vadd_f32(v1_28, v3_1)
        double v1_29
        v1_29.d = *(x19 + 0x2ac)
        *(x19 + 0x2ac) = v0_29 * v2_13 * float.s(0x42c80000) f+ v1_29.d
        
        if (zx.d(*(arg3 + 0xea)) != 0)
            TrailUpdate(x19, arg2, x2, x22_3, entry_v9.d, entry_v10.d)
        else if (zx.d(*(arg3 + 0xeb)) != 0)
            RibbonUpdate(x19, arg2, x2, x22_3, entry_v9.d, v8.d)
        
        result = 1
    else
        v0.d = *TWO_PI
        entry_v9.d = float.s(0x3dcccccd)
        int64_t x24_1 = 0
        int64_t x25_1 = 0
        v8.d = fconvert.s(1f)
        x22_3 = 0xa
        v12.d = v0.d f/ float.s(0x43b40000)
        entry_v10 = entry_v9
        
        while (true)
            void* x23_1 = *(arg3 + 0x118)
            void* x1_3 = x23_1 + x24_1
            uint64_t x8_23 = zx.q(*x1_3 - 9)
            int32_t var_c0
            float var_bc
            float var_ac
            int32_t var_a8
            float var_a4
            float* x8_20
            float v2
            float v3
            
            if (x8_23.d u<= 0x62)
                switch (x8_23)
                    case 0
                        arg1, v0 = AnimPathGetDelta(arg2, *(x23_1 + x24_1 + 8))
                        v0.d = var_c0
                        float v19_2 = *(x19 + 0x2a0)
                        float v20_2 = *(x19 + 0x294)
                        float v21_2 = *(x19 + 0x298)
                        float var_b0
                        float v23_2 = var_b0 * var_b0
                        float v24_2 = var_bc * var_bc
                        float var_b8
                        float v25_1 = var_bc * var_b8
                        float var_b4
                        float v26_1 = var_b0 * var_b4
                        float v27_1 = var_b0 * var_b8
                        float v28_1 = var_bc * var_b4
                        float v29_1 = var_b8 * var_b4
                        float v30_1 = var_b0 * var_bc
                        v11.d = var_bc * v20_2
                        v13.d = var_b0 * v20_2
                        v14.d = v25_1 - v26_1
                        v25_1 = v25_1 + v26_1
                        v26_1 = v23_2 + v24_2
                        v23_2 = v23_2 - v24_2
                        v24_2 = v27_1 + v28_1
                        v27_1 = v28_1 - v27_1
                        v28_1 = v29_1 - v30_1
                        v29_1 = v30_1 + v29_1
                        float v31_1 = var_b0 * v19_2 f- v11.d
                        v11.d = var_b0 * v21_2
                        v30_1 = var_bc * v19_2 f+ v13.d
                        v13.d = var_b8 * v19_2
                        v11.d = v13.d f+ v11.d
                        v13.d = *(x19 + 0x290)
                        float v6_2 = *(x19 + 0x2ac)
                        v2 = *(x19 + 0x2a4)
                        float v22_2 = *(x19 + 0x29c)
                        float v5_2 = *(x19 + 0x2a8)
                        v13.d = v0.d f* v13.d
                        *(x19 + 0x290) = v13.d
                        v13.d = v6_2 + v6_2
                        v24_2 = v24_2 f* v13.d
                        v28_1 = v28_1 f* v13.d
                        v13.d = v2 + v2
                        float v7_2 = var_b4 * v19_2 + var_b0 * v22_2
                        v19_2 = var_b8 * var_b8
                        v25_1 = v13.d f* v25_1
                        v27_1 = v13.d f* v27_1
                        v13.d = v5_2 + v5_2
                        v26_1 = v26_1 - v19_2
                        v14.d = v14.d f* v13.d
                        v29_1 = v29_1 f* v13.d
                        v13.d = v23_2 + v19_2
                        v19_2 = v23_2 - v19_2
                        v23_2 = v31_1 - var_b8 * v21_2
                        v31_1 = var_bc * v21_2
                        v3 = var_b4 * var_b4
                        v27_1 = v27_1 + v29_1
                        v26_1 = v26_1 - v3
                        v29_1 = v13.d f- v3
                        v3 = v19_2 + v3
                        v19_2 = v23_2 - var_b4 * v22_2
                        v21_2 = v30_1 + var_b8 * v22_2 - var_b4 * v21_2
                        sinp_3 = var_b4 * v20_2 f+ v11.d - var_bc * v22_2
                        float v4_2 = v31_1 + v7_2 - var_b8 * v20_2
                        v3 = v0.d f* (v3 * v6_2 + v27_1)
                        v2 = v0.d f* (v2 * v26_1 f+ v14.d + v24_2)
                        v0.d = v0.d f* (v25_1 + v5_2 * v29_1 + v28_1)
                        v0.d = var_a8 f+ v0.d
                        *(x19 + 0x2ac) = var_a4 + v3
                        v3 = sqrt(v19_2 * v19_2 + v21_2 * v21_2 + sinp_3 * sinp_3 + v4_2 * v4_2)
                        *(x19 + 0x2a4) = var_ac + v2
                        *(x19 + 0x2a8) = v0.d
                        v0.d = v19_2 / v3
                        *(x19 + 0x294) = v21_2 / v3
                        *(x19 + 0x298) = sinp_3 / v3
                        *(x19 + 0x29c) = v4_2 / v3
                        *(x19 + 0x2a0) = v0.d
                    case 0x1a
                        v11 = SpotGetFloatParamDelta(arg2, x1_3)
                        int64_t v0_2
                        
                        if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                            int32_t x0_69
                            x0_69, v0_2 =
                                __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION)
                            
                            if (x0_69 != 0)
                                *DegToRad(float)::CONVERSION = v12.d
                                __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
                        
                        v0_2.d = *DegToRad(float)::CONVERSION
                        v0_2.d = v11.d f* v0_2.d
                        v0_2.d = v0_2.d f* fconvert.s(0.5f)
                        float cosp
                        float sinp
                        arg1, v0 = sincosf(&sinp, &cosp, v0_2.d)
                        v0.d = cosp
                        sinp_3 = sinp
                        x8_20 = VZ
                        goto label_f95e18
                    case 0x1b
                        v11 = SpotGetFloatParamDelta(arg2, x1_3)
                        int64_t v0_3
                        
                        if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                            int32_t x0_72
                            x0_72, v0_3 =
                                __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION)
                            
                            if (x0_72 != 0)
                                *DegToRad(float)::CONVERSION = v12.d
                                __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
                        
                        v0_3.d = *DegToRad(float)::CONVERSION
                        v0_3.d = v11.d f* v0_3.d
                        v0_3.d = v0_3.d f* fconvert.s(0.5f)
                        float cosp_1
                        float sinp_1
                        arg1, v0 = sincosf(&sinp_1, &cosp_1, v0_3.d)
                        v0.d = cosp_1
                        sinp_3 = sinp_1
                        x8_20 = VX
                        goto label_f95e18
                    case 0x1c
                        v11 = SpotGetFloatParamDelta(arg2, x1_3)
                        int64_t v0_1
                        
                        if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                            int32_t x0_66
                            x0_66, v0_1 =
                                __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION)
                            
                            if (x0_66 != 0)
                                *DegToRad(float)::CONVERSION = v12.d
                                __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
                        
                        v0_1.d = *DegToRad(float)::CONVERSION
                        v0_1.d = v11.d f* v0_1.d
                        v0_1.d = v0_1.d f* fconvert.s(0.5f)
                        float cosp_2
                        float sinp_2
                        arg1, v0 = sincosf(&sinp_2, &cosp_2, v0_1.d)
                        v0.d = cosp_2
                        sinp_3 = sinp_2
                        x8_20 = VY
                    label_f95e18:
                        v2 = *(x19 + 0x2a0)
                        v3 = *(x19 + 0x294)
                        float v4_1 = *(x19 + 0x298)
                        float v5_1 = *(x19 + 0x29c)
                        float v6_1 = *x8_20 * sinp_3
                        float v7_1 = x8_20[1] * sinp_3
                        sinp_3 = sinp_3 * x8_20[2]
                        float v17_1 = v0.d f* v2
                        float v18_1 = v0.d f* v3
                        float v19_1 = v0.d f* v4_1
                        v0.d = v0.d f* v5_1
                        v0.d = v2 * sinp_3 f+ v0.d
                        v0.d = v6_1 * v4_1 f+ v0.d
                        v0.d = v0.d f- v7_1 * v3
                        *(x19 + 0x294) = v2 * v6_1 + v18_1 + v7_1 * v5_1 - sinp_3 * v4_1
                        *(x19 + 0x298) = sinp_3 * v3 + v2 * v7_1 + v19_1 - v6_1 * v5_1
                        *(x19 + 0x29c) = v0.d
                        *(x19 + 0x2a0) = v17_1 - v6_1 * v3 - v7_1 * v4_1 - sinp_3 * v5_1
                    case 0x1d
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *arg2
                        *arg2 = v0.d
                    case 0x1e
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(arg2 + 4)
                        *(arg2 + 4) = v0.d
                    case 0x1f
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(arg2 + 8)
                        *(arg2 + 8) = v0.d
                    case 0x20
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(x19 + 0x2a4)
                        *(x19 + 0x2a4) = v0.d
                    case 0x21
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(x19 + 0x2a8)
                        *(x19 + 0x2a8) = v0.d
                    case 0x22
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(x19 + 0x2ac)
                        *(x19 + 0x2ac) = v0.d
                    case 0x23
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(arg2 + 0xc)
                        *(arg2 + 0xc) = v0.d
                    case 0x24
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(arg2 + 0x10)
                        *(arg2 + 0x10) = v0.d
                    case 0x25
                        arg1, v0 = SpotGetFloatParamDelta(arg2, x1_3)
                        v0.d = v0.d f+ *(arg2 + 0x14)
                        *(arg2 + 0x14) = v0.d
                    case 0x26
                        DefScalarTrack* x23_2 = *(x23_1 + x24_1 + 8)
                        void* x28_1 = *(arg2 + 0x30)
                        int32_t* x8_29
                        
                        if (*(x23_2 + 8) == 1)
                            x8_29 = *x23_2
                            v0.d = *x8_29
                        
                        if (*(x23_2 + 8) != 1 || not(v0.d f== x8_29[1]))
                            float v0_4 = MakeUnitFloat(WhiteNoise(*(x28_1 + 0x2c) * 0x2f + 0x8a1))
                            arg1, v0 =
                                TrackScalarGetValue(x23_2, *(x28_1 + 0x314), *(x28_1 + 0x308), v0_4)
                        
                        v0.d = v0.d f* *(*(x19 + 0x300) + 0x80)
                        v0.d = *(arg2 + 0xc) f+ v0.d
                        *(arg2 + 0xc) = v0.d
                    case 0x27
                        DefScalarTrack* x23_3 = *(x23_1 + x24_1 + 8)
                        void* x28_2 = *(arg2 + 0x30)
                        int32_t* x8_35
                        
                        if (*(x23_3 + 8) == 1)
                            x8_35 = *x23_3
                            v0.d = *x8_35
                        
                        if (*(x23_3 + 8) != 1 || not(v0.d f== x8_35[1]))
                            float v0_6 = MakeUnitFloat(WhiteNoise(*(x28_2 + 0x2c) * 0x30 + 0x900))
                            arg1, v0 =
                                TrackScalarGetValue(x23_3, *(x28_2 + 0x314), *(x28_2 + 0x308), v0_6)
                        
                        v0.d = v0.d f* *(*(x19 + 0x300) + 0x80)
                        v0.d = *(arg2 + 0x10) f+ v0.d
                        *(arg2 + 0x10) = v0.d
                    case 0x28
                        DefScalarTrack* x23_4 = *(x23_1 + x24_1 + 8)
                        void* x28_3 = *(arg2 + 0x30)
                        int32_t* x8_41
                        
                        if (*(x23_4 + 8) == 1)
                            x8_41 = *x23_4
                            v0.d = *x8_41
                        
                        if (*(x23_4 + 8) != 1 || not(v0.d f== x8_41[1]))
                            float v0_8 = MakeUnitFloat(WhiteNoise(*(x28_3 + 0x2c) * 0x31 + 0x961))
                            arg1, v0 =
                                TrackScalarGetValue(x23_4, *(x28_3 + 0x314), *(x28_3 + 0x308), v0_8)
                        
                        v0.d = v0.d f* *(*(x19 + 0x300) + 0x80)
                        v0.d = *(arg2 + 0x14) f+ v0.d
                        *(arg2 + 0x14) = v0.d
                    case 0x29
                        DefScalarTrack* x23_5 = *(x23_1 + x24_1 + 8)
                        void* x28_4 = *(arg2 + 0x30)
                        int32_t* x8_47
                        
                        if (*(x23_5 + 8) == 1)
                            x8_47 = *x23_5
                            v0.d = *x8_47
                        
                        if (*(x23_5 + 8) != 1 || not(v0.d f== x8_47[1]))
                            float v0_10 = MakeUnitFloat(WhiteNoise(*(x28_4 + 0x2c) * 0x32 + 0x9c4))
                            arg1, v0 = TrackScalarGetValue(x23_5, *(x28_4 + 0x314), 
                                *(x28_4 + 0x308), v0_10)
                        
                        v0.d = fconvert.s(1f) f- v0.d
                        v0.d = v0.d f* *(*(x19 + 0x300) + 0x80)
                        v0.d = v0.d f* float.s(0x42c80000)
                        v0.d = *(arg2 + 0xc) f* v0.d
                        *(arg2 + 0xc) = v0.d
                    case 0x2a
                        DefScalarTrack* x23_6 = *(x23_1 + x24_1 + 8)
                        void* x28_5 = *(arg2 + 0x30)
                        int32_t* x8_53
                        
                        if (*(x23_6 + 8) == 1)
                            x8_53 = *x23_6
                            v0.d = *x8_53
                        
                        if (*(x23_6 + 8) != 1 || not(v0.d f== x8_53[1]))
                            float v0_12 = MakeUnitFloat(WhiteNoise(*(x28_5 + 0x2c) * 0x33 + 0xa29))
                            arg1, v0 = TrackScalarGetValue(x23_6, *(x28_5 + 0x314), 
                                *(x28_5 + 0x308), v0_12)
                        
                        v0.d = fconvert.s(1f) f- v0.d
                        v0.d = v0.d f* *(*(x19 + 0x300) + 0x80)
                        v0.d = v0.d f* float.s(0x42c80000)
                        v0.d = *(arg2 + 0x10) f* v0.d
                        *(arg2 + 0x10) = v0.d
                    case 0x2b
                        DefScalarTrack* x23_7 = *(x23_1 + x24_1 + 8)
                        void* x28_6 = *(arg2 + 0x30)
                        int32_t* x8_59
                        
                        if (*(x23_7 + 8) == 1)
                            x8_59 = *x23_7
                            v0.d = *x8_59
                        
                        if (*(x23_7 + 8) != 1 || not(v0.d f== x8_59[1]))
                            float v0_14 = MakeUnitFloat(WhiteNoise(*(x28_6 + 0x2c) * 0x34 + 0xa90))
                            arg1, v0 = TrackScalarGetValue(x23_7, *(x28_6 + 0x314), 
                                *(x28_6 + 0x308), v0_14)
                        
                        v0.d = fconvert.s(1f) f- v0.d
                        v0.d = v0.d f* *(*(x19 + 0x300) + 0x80)
                        v0.d = v0.d f* float.s(0x42c80000)
                        v0.d = *(arg2 + 0x14) f* v0.d
                        *(arg2 + 0x14) = v0.d
                    case 0x2c
                        arg1, v0 = SpotParamDrag(arg2, x1_3)
                    case 0x2d
                        arg1, v0 = SpotParamSpinPosition(arg2, x1_3)
                    case 0x2e
                        arg1, v0 = SpotParamSpinSpeed(arg2, x1_3)
                    case 0x2f
                        arg1, v0 = SpotParamTumbleSpeed(arg2, x1_3)
                    case 0x33
                        int64_t* x23_8 = *(x23_1 + x24_1 + 8)
                        void* x28_7 = *(arg2 + 0x30)
                        int32_t* x8_65
                        
                        if (x23_8[1].d == 1)
                            x8_65 = *x23_8
                            v0.d = *x8_65
                        
                        if (x23_8[1].d != 1 || not(v0.d f== x8_65[1]))
                            float v0_16 = MakeUnitFloat(WhiteNoise(*(x28_7 + 0x2c) * 0x3c + 0xe10))
                            arg1, v0 = TrackScalarGetValue(x23_8, *(x28_7 + 0x314), 
                                *(x28_7 + 0x308), v0_16)
                        
                        *(x19 + 0x290) = v0.d
                    case 0x38
                        arg1, v0 = SpotParamFlipSpeed(arg2, x1_3)
                    case 0x42
                        int64_t* x23_9 = *(x23_1 + x24_1 + 8)
                        void* x28_8 = *(arg2 + 0x30)
                        
                        if (x23_9[1].d == 1)
                            int32_t* x8_70 = *x23_9
                            v11.d = *x8_70
                            v0.d = x8_70[1]
                        
                        if (x23_9[1].d != 1 || not(v11.d f== v0.d))
                            float v0_18 = MakeUnitFloat(WhiteNoise(0x15f9 + *(x28_8 + 0x2c) * 0x4b))
                            v11 = TrackScalarGetValue(x23_9, *(x28_8 + 0x314), *(x28_8 + 0x308), 
                                v0_18)
                        
                        arg1, v0 = ParticleGetParticleToSystemTransform(x19)
                        void* __offset(ParticleEmitter, 0x2a8) x8_74
                        
                        if (zx.d(*(*(x19 + 0x300) + 0x9c)) == 0)
                            v0.d = var_a8
                            x8_74 = x19 + 0x2a8
                            
                            if (not(v0.d f< v11.d))
                            label_f9684c:
                                v0.d = v11.d f- v0.d
                                v0.d = v0.d f+ *x8_74
                                *x8_74 = v0.d
                                *(arg2 + 0x44) = 1
                                int64_t x9_9 = *V0
                                *(arg2 + 0x14) = *(V0 + 8)
                                *(arg2 + 0xc) = x9_9
                        else
                            v0.d = var_a4
                            x8_74 = x19 + 0x2ac
                            
                            if (not(v0.d f> v11.d))
                                goto label_f9684c
                    case 0x43
                        if (zx.d(*(arg2 + 0x44)) != 0)
                            ParticleGetParticleToSystemTransform(x19)
                            XAsset* x0_77 = *(x23_1 + x24_1 + 8)
                            
                            if (x0_77 != 0)
                                int128_t v0_32 = *QI
                                var_c0 = 0x3f800000
                                int64_t var_cc
                                var_ac.q = var_cc
                                var_bc.o = v0_32
                                int32_t var_c4
                                int32_t var_a4_1 = var_c4
                                void* x0_78 = ParticleCreateParams(x0_77, &var_c0)
                                
                                if (x0_78 != 0)
                                    *(x0_78 + 0x40) = 1
                                    *(x0_78 + 0x38) = *(*(x19 + 0x300) + 0x38)
                            
                            break
                    case 0x47
                        arg1, v0 = SpotParamWobble(arg2, x1_3)
                    case 0x5e
                        int64_t* x23_10 = *(x23_1 + x24_1 + 8)
                        void* x28_9 = *(arg2 + 0x30)
                        
                        if (x23_10[1].d == 1)
                            int32_t* x8_78 = *x23_10
                            entry_v9.d = *x8_78
                            v0.d = x8_78[1]
                        
                        if (x23_10[1].d != 1 || not(entry_v9.d f== v0.d))
                            float v0_21 = MakeUnitFloat(WhiteNoise(0x2971 + *(x28_9 + 0x2c) * 0x67))
                            arg1, v0 = TrackScalarGetValue(x23_10, *(x28_9 + 0x314), 
                                *(x28_9 + 0x308), v0_21)
                            entry_v9 = v0
                    case 0x5f
                        int64_t* x23_11 = *(x23_1 + x24_1 + 8)
                        void* x28_10 = *(arg2 + 0x30)
                        
                        if (x23_11[1].d == 1)
                            int32_t* x8_82 = *x23_11
                            v8.d = *x8_82
                            v0.d = x8_82[1]
                        
                        if (x23_11[1].d != 1 || not(v8.d f== v0.d))
                            float v0_23 =
                                MakeUnitFloat(WhiteNoise(0x2a40 + *(x28_10 + 0x2c) * 0x68))
                            arg1, v0 = TrackScalarGetValue(x23_11, *(x28_10 + 0x314), 
                                *(x28_10 + 0x308), v0_23)
                            v8 = v0.q
                    case 0x60
                        int64_t* x22_4 = *(x23_1 + x24_1 + 8)
                        void* x23_12 = *(arg2 + 0x30)
                        int32_t* x8_86
                        
                        if (x22_4[1].d == 1)
                            x8_86 = *x22_4
                            v0.d = *x8_86
                        
                        if (x22_4[1].d != 1 || not(v0.d f== x8_86[1]))
                            float v0_25 =
                                MakeUnitFloat(WhiteNoise(0x2b11 + *(x23_12 + 0x2c) * 0x69))
                            arg1, v0 = TrackScalarGetValue(x22_4, *(x23_12 + 0x314), 
                                *(x23_12 + 0x308), v0_25)
                        
                        v0.d = vrndm_f32(v0.d)
                        
                        if (v0.d f< 0f)
                            sinp_3 = fconvert.s(-0.5f)
                        else
                            sinp_3 = fconvert.s(0.5f)
                        
                        v0.d = v0.d f+ sinp_3
                        x22_3 = vcvts_s32_f32(v0.d) + 1
                    case 0x62
                        int64_t* x23_13 = *(x23_1 + x24_1 + 8)
                        void* x28_11 = *(arg2 + 0x30)
                        
                        if (x23_13[1].d == 1)
                            int32_t* x8_91 = *x23_13
                            entry_v10.d = *x8_91
                            v0.d = x8_91[1]
                        
                        if (x23_13[1].d != 1 || not(entry_v10.d f== v0.d))
                            float v0_27 =
                                MakeUnitFloat(WhiteNoise(0x2cb9 + *(x28_11 + 0x2c) * 0x6b))
                            arg1, v0 = TrackScalarGetValue(x23_13, *(x28_11 + 0x314), 
                                *(x28_11 + 0x308), v0_27)
                            entry_v10 = v0
            x25_1 += 1
            x24_1 += 0x10
            
            if (x25_1 s>= sx.q(*(arg3 + 0x110)))
                goto label_f96910
        
        result = 0

entry_v9.q = var_70
entry_v10.q = var_78
return result
