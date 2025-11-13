// 函数: _Z22ParticleGetRenderStateP15ParticleEmitterP19ParticleRenderStateS2_
// 地址: 0xf990d0
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
int128_t v0 = *(arg2 + 0x20)
int128_t v2 = *arg2
*(arg3 + 0x10) = *(arg2 + 0x10)
*(arg3 + 0x20) = v0
*arg3 = v2
int128_t v1 = *(arg2 + 0x40)
v0 = *(arg2 + 0x50)
v2 = *(arg2 + 0x30)
*(arg3 + 0x60) = *(arg2 + 0x60)
*(arg3 + 0x40) = v1
*(arg3 + 0x50) = v0
*(arg3 + 0x30) = v2
int64_t* x22 = **(arg1 + 0x300)
int64_t* x8_2 = *x22

if (x8_2 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x8_2 = *x22

int64_t x28 = sx.q(*(arg1 + 0x2f0))
int64_t fp = **x8_2
XAsset* result
float128 v0_1
float128 v1_1
float128 v2_1
result, v0_1, v1_1, v2_1 = ParticleGetParticleWorldTransform(arg2, arg1)
int128_t var_b0
v1_1 = var_b0
void* x8_5 = fp + x28 * 0x168
int128_t var_a0
*(arg3 + 0x78) = var_a0
*(arg3 + 0x68) = v1_1

if (*(x8_5 + 0x130) s>= 1)
    v12.d = *CIRCLE_FULL
    int64_t x22_1 = 0
    int64_t i = 0
    v10.d = fconvert.s(0.5f)
    v11.d = fconvert.s(-0.5f)
    
    do
        int32_t* x21_2 = *(fp + x28 * 0x168 + 0x138)
        uint64_t x8_10 = zx.q(*(x21_2 + x22_1) - 0x1f)
        
        if (x8_10.d u<= 0x34)
            switch (x8_10)
                case 0
                    int32_t** x21_3 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_3[1].d == 1)
                        int32_t* x8_13 = *x21_3
                        v0_1.d = *x8_13
                        v1_1.d = x8_13[1]
                    
                    if (x21_3[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_4 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x1f + 0x3c1))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_3, *(arg1 + 0x314), *(arg1 + 0x308), v0_4)
                    
                    v1_1.d = *(arg3 + 0x10)
                    v0_1.d = v0_1.d f+ v1_1.d
                    *(arg3 + 0x10) = v0_1.d
                case 1
                    int32_t** x21_4 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_4[1].d == 1)
                        int32_t* x8_18 = *x21_4
                        v0_1.d = *x8_18
                        v1_1.d = x8_18[1]
                    
                    if (x21_4[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_6 = MakeUnitFloat(WhiteNoise((*(arg1 + 0x2c) << 5) + 0x400))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_4, *(arg1 + 0x314), *(arg1 + 0x308), v0_6)
                    
                    v1_1.d = *(arg3 + 0x14)
                    v0_1.d = v0_1.d f+ v1_1.d
                    *(arg3 + 0x14) = v0_1.d
                case 2
                    int32_t** x21_5 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_5[1].d == 1)
                        int32_t* x8_23 = *x21_5
                        v0_1.d = *x8_23
                        v1_1.d = x8_23[1]
                    
                    if (x21_5[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_8 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x21 + 0x441))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_5, *(arg1 + 0x314), *(arg1 + 0x308), v0_8)
                    
                    v1_1.d = *(arg3 + 0x18)
                    v0_1.d = v0_1.d f+ v1_1.d
                    *(arg3 + 0x18) = v0_1.d
                case 0x1a
                    DefScalarTrack* x21_6 = *(x21_2 + x22_1 + 8)
                    v0_1.d = *(arg1 + 0x308)
                    v1_1.d = 0f
                    int64_t v0_10 = TrackScalarGetValue(x21_6, *(arg1 + 0x314), v0_1.d, v1_1.d)
                    result, v0_1, v1_1, v2_1 =
                        TrackScalarGetValue(x21_6, *(arg1 + 0x314), *(arg1 + 0x308), fconvert.s(1f))
                    *(arg3 + 0x44) = v0_10.d
                    *(arg3 + 0x48) = v0_1.d
                case 0x1b
                    DefScalarTrack* x21_7 = *(x21_2 + x22_1 + 8)
                    v0_1.d = *(arg1 + 0x308)
                    v1_1.d = 0f
                    int64_t v0_12 = TrackScalarGetValue(x21_7, *(arg1 + 0x314), v0_1.d, v1_1.d)
                    result, v0_1, v1_1, v2_1 =
                        TrackScalarGetValue(x21_7, *(arg1 + 0x314), *(arg1 + 0x308), fconvert.s(1f))
                    *(arg3 + 0x4c) = v0_12.d
                    *(arg3 + 0x50) = v0_1.d
                case 0x1c
                    DefScalarTrack* x21_8 = *(x21_2 + x22_1 + 8)
                    v0_1.d = *(arg1 + 0x308)
                    v1_1.d = 0f
                    int64_t v0_14 = TrackScalarGetValue(x21_8, *(arg1 + 0x314), v0_1.d, v1_1.d)
                    result, v0_1, v1_1, v2_1 =
                        TrackScalarGetValue(x21_8, *(arg1 + 0x314), *(arg1 + 0x308), fconvert.s(1f))
                    *(arg3 + 0x54) = v0_14.d
                    *(arg3 + 0x58) = v0_1.d
                case 0x1e
                    int32_t** x21_9 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_9[1].d == 1)
                        int32_t* x8_31 = *x21_9
                        v0_1.d = *x8_31
                        v1_1.d = x8_31[1]
                    
                    if (x21_9[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_16 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x3d + 0xe89))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_9, *(arg1 + 0x314), *(arg1 + 0x308), v0_16)
                    
                    v1_1.q = *arg3
                    v2_1.d = *(arg3 + 8)
                    v1_1.d = v1_1.d f* v0_1.d
                    v1_1:4.d = v1_1:4.d f* v0_1.d
                    v0_1.d = v0_1.d f* v2_1.d
                    *arg3 = v1_1.q
                    *(arg3 + 8) = v0_1.d
                case 0x1f
                    int32_t** x21_10 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_10[1].d == 1)
                        int32_t* x8_36 = *x21_10
                        v0_1.d = *x8_36
                        v1_1.d = x8_36[1]
                    
                    if (x21_10[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_18 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x3e + 0xf04))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_10, *(arg1 + 0x314), *(arg1 + 0x308), v0_18)
                    
                    v1_1.d = *arg3
                    v0_1.d = v0_1.d f* v1_1.d
                    *arg3 = v0_1.d
                case 0x20
                    int32_t** x21_11 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_11[1].d == 1)
                        int32_t* x8_41 = *x21_11
                        v0_1.d = *x8_41
                        v1_1.d = x8_41[1]
                    
                    if (x21_11[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_20 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x3f + 0xf81))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_11, *(arg1 + 0x314), *(arg1 + 0x308), v0_20)
                    
                    v1_1.d = *(arg3 + 4)
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 4) = v0_1.d
                case 0x21
                    int32_t** x21_12 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_12[1].d == 1)
                        int32_t* x8_46 = *x21_12
                        v0_1.d = *x8_46
                        v1_1.d = x8_46[1]
                    
                    if (x21_12[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_22 = MakeUnitFloat(WhiteNoise((*(arg1 + 0x2c) << 6) + 0x1000))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_12, *(arg1 + 0x314), *(arg1 + 0x308), v0_22)
                    
                    v1_1.d = *(arg3 + 8)
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 8) = v0_1.d
                case 0x22
                    v8.d = MakeUnitFloat(WhiteNoise(0)) f* v12.d
                    float cosp
                    float sinp
                    int128_t v0_27
                    result, v0_27, v1_1, v2_1 = sincosf(&sinp, &cosp, 
                        v8.d f+ sinf(v12.d f* MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) + 1))
                            + *(arg1 + 0x28)))
                    v0_27.d = sinp
                    v1_1.q = *arg3
                    v0_27:4.d = cosp
                    *arg3 = vmul_f32(v1_1, v0_27, 0).q
                case 0x23
                    int32_t** x21_13 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_13[1].d == 1)
                        int32_t* x8_52 = *x21_13
                        v0_1.d = *x8_52
                        v1_1.d = x8_52[1]
                    
                    if (x21_13[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_28 = MakeUnitFloat(WhiteNoise(0x1104 + *(arg1 + 0x2c) * 0x42))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_13, *(arg1 + 0x314), *(arg1 + 0x308), v0_28)
                    
                    v1_1.d = *(arg3 + 0x24)
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 0x24) = v0_1.d
                case 0x24
                    int32_t** x21_14 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_14[1].d == 1)
                        int32_t* x8_56 = *x21_14
                        v0_1.d = *x8_56
                        v1_1.d = x8_56[1]
                    
                    if (x21_14[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_30 = MakeUnitFloat(WhiteNoise(0x1189 + *(arg1 + 0x2c) * 0x43))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_14, *(arg1 + 0x314), *(arg1 + 0x308), v0_30)
                    
                    v1_1.d = *(arg3 + 0x28)
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 0x28) = v0_1.d
                case 0x25
                    int32_t** x21_15 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_15[1].d == 1)
                        int32_t* x8_60 = *x21_15
                        v0_1.d = *x8_60
                        v1_1.d = x8_60[1]
                    
                    if (x21_15[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_32 = MakeUnitFloat(WhiteNoise(0x1210 + *(arg1 + 0x2c) * 0x44))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_15, *(arg1 + 0x314), *(arg1 + 0x308), v0_32)
                    
                    v1_1.d = *(arg3 + 0x2c)
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 0x2c) = v0_1.d
                case 0x26
                    int32_t** x21_16 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_16[1].d == 1)
                        int32_t* x8_64 = *x21_16
                        v0_1.d = *x8_64
                        v1_1.d = x8_64[1]
                    
                    if (x21_16[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_34 = MakeUnitFloat(WhiteNoise(0x1299 + *(arg1 + 0x2c) * 0x45))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_16, *(arg1 + 0x314), *(arg1 + 0x308), v0_34)
                    
                    v1_1.d = *(arg3 + 0x30)
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 0x30) = v0_1.d
                case 0x27
                    int32_t** x21_17 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_17[1].d == 1)
                        int32_t* x8_68 = *x21_17
                        v0_1.d = *x8_68
                        v1_1.d = x8_68[1]
                    
                    if (x21_17[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_36 = MakeUnitFloat(WhiteNoise(0x1324 + *(arg1 + 0x2c) * 0x46))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_17, *(arg1 + 0x314), *(arg1 + 0x308), v0_36)
                    
                    v1_1.d = *(arg3 + 0x40)
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 0x40) = v0_1.d
                case 0x28
                    int32_t** x21_18 = *(x21_2 + x22_1 + 8)
                    v8.d = *(arg3 + 0x34)
                    
                    if (x21_18[1].d == 1)
                        int32_t* x8_72 = *x21_18
                        v0_1.d = *x8_72
                        v1_1.d = x8_72[1]
                    
                    if (x21_18[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_38 = MakeUnitFloat(WhiteNoise(0x13b1 + *(arg1 + 0x2c) * 0x47))
                        v0_1 = TrackScalarGetValue(x21_18, *(arg1 + 0x314), *(arg1 + 0x308), v0_38)
                    
                    v8.d = v8.d f+ v0_1.d
                    v9.d = float.s(0x43b40000)
                    v0_1, result, v1_1, v2_1 = fmodf(v8.d, v9.d)
                    v1_1.d = v0_1.d f+ v9.d
                    
                    if (v8.d f< 0f)
                        v0_1.d = v1_1.d
                    else
                        v0_1.d = v0_1.d
                    
                    *(arg3 + 0x34) = v0_1.d
                    *(arg3 + 0x64) = 1
                case 0x29
                    int64_t* x21_19 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_19[1].d == 1)
                        int32_t* x8_76 = *x21_19
                        v0_1.d = *x8_76
                        v1_1.d = x8_76[1]
                    
                    if (x21_19[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_41 = MakeUnitFloat(WhiteNoise(0x1440 + *(arg1 + 0x2c) * 0x48))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_19, *(arg1 + 0x314), *(arg1 + 0x308), v0_41)
                    
                    v1_1.d = *(arg3 + 0x38)
                    *(arg3 + 0x64) = 1
                    v0_1.d = v0_1.d f+ v1_1.d
                    *(arg3 + 0x38) = v0_1.d
                case 0x2a
                    int64_t* x21_20 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_20[1].d == 1)
                        int32_t* x8_80 = *x21_20
                        v0_1.d = *x8_80
                        v1_1.d = x8_80[1]
                    
                    if (x21_20[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_43 = MakeUnitFloat(WhiteNoise(0x14d1 + *(arg1 + 0x2c) * 0x49))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_20, *(arg1 + 0x314), *(arg1 + 0x308), v0_43)
                    
                    v1_1.d = *(arg3 + 0x3c)
                    *(arg3 + 0x64) = 1
                    v0_1.d = v0_1.d f* v1_1.d
                    *(arg3 + 0x3c) = v0_1.d
                case 0x2b
                    result = *(x21_2 + x22_1 + 8)
                    
                    if (result != 0)
                        TextureGetImageData(result, &var_b0)
                        int32_t x8_83 = *(x21_2 + x22_1)
                        float v0_45 = MakeUnitFloat(WhiteNoise((*(arg1 + 0x2c) + x8_83) * x8_83))
                            * float.s(var_b0:0xc.d)
                        float temp0_1 = vrndm_f32(*(arg1 + 0x308) * float.s(var_b0:8.d))
                        float temp0_2 = vrndm_f32(v0_45)
                        float v2_21
                        
                        if (temp0_1 < 0f)
                            v2_21 = v11.d
                        else
                            v2_21 = v10.d
                        
                        float v1_38 = temp0_1 + v2_21
                        
                        if (temp0_2 < 0f)
                            v2_21 = v11.d
                        else
                            v2_21 = v10.d
                        
                        uint32_t temp0_3 = vcvts_s32_f32(v1_38)
                        uint32_t temp0_4 = vcvts_s32_f32(temp0_2 + v2_21)
                        int32_t x0_64 = TextureFormatBytesPerPixel(zx.q(var_a0:4.d))
                        int128_t v0_46
                        result, v0_46, v1_1, v2_1 = ImagePixelToRgba(
                            var_b0.q + sx.q(x0_64 * temp0_3) + sx.q(var_a0.d) * sx.q(temp0_4), 
                            zx.q(var_a0:4.d))
                        v0_46.d = float.s(result.d)
                        v0_46:2.w = (result u>> 8).d
                        v0_46:4.w = (result u>> 0x10).d
                        v0_46:6.w = (result u>> 0x18).d
                        uint128_t v0_47
                        v0_47.d = zx.d((v0_46 & true).w)
                        v0_47:4.d = zx.d(v0_47:2.w)
                        v0_47:8.d = zx.d(v0_47:4.w)
                        v0_47:0xc.d = zx.d(v0_47:6.w)
                        v2_1.d = 0x437f0000
                        v2_1:4.d = 0x437f0000
                        v2_1:8.d = 0x437f0000
                        v2_1:0xc.d = 0x437f0000
                        *(arg3 + 0x24) =
                            vmulq_f32(*(arg3 + 0x24), vdivq_f32(vcvtq_f32_u32(v0_47), v2_1), 0)
                case 0x32
                    DefScalarTrack* x21_22 = *(x21_2 + x22_1 + 8)
                    v0_1.d = *(arg1 + 0x308)
                    v1_1.d = 0f
                    int64_t var_c0_1 = TrackScalarGetValue(x21_22, *(arg1 + 0x314), v0_1.d, v1_1.d)
                    int32_t v0_52
                    result, v0_52, v1_1, v2_1 = TrackScalarGetValue(x21_22, *(arg1 + 0x314), 
                        *(arg1 + 0x308), fconvert.s(1f))
                    v1_1.q = *(arg3 + 0x1c)
                    v2_1:4.d = v0_52
                    *(arg3 + 0x1c) = vadd_f32(v2_1, v1_1).q
                case 0x33
                    int64_t* x21_23 = *(x21_2 + x22_1 + 8)
                    
                    if (x21_23[1].d == 1)
                        int32_t* x8_90 = *x21_23
                        v0_1.d = *x8_90
                        v1_1.d = x8_90[1]
                    
                    if (x21_23[1].d != 1 || not(v0_1.d f== v1_1.d))
                        float v0_53 = MakeUnitFloat(WhiteNoise(0x1a44 + *(arg1 + 0x2c) * 0x52))
                        result, v0_1, v1_1, v2_1 =
                            TrackScalarGetValue(x21_23, *(arg1 + 0x314), *(arg1 + 0x308), v0_53)
                    
                    v1_1.d = *(arg3 + 0xc)
                    v0_1.d = v0_1.d f+ v1_1.d
                    *(arg3 + 0xc) = v0_1.d
                case 0x34
                    DefScalarTrack* x21_1 = *(x21_2 + x22_1 + 8)
                    v0_1.d = *(arg1 + 0x308)
                    v1_1.d = 0f
                    int64_t v0_2 = TrackScalarGetValue(x21_1, *(arg1 + 0x314), v0_1.d, v1_1.d)
                    result, v0_1, v1_1, v2_1 =
                        TrackScalarGetValue(x21_1, *(arg1 + 0x314), *(arg1 + 0x308), fconvert.s(1f))
                    *(arg3 + 0x5c) = v0_2.d
                    *(arg3 + 0x60) = v0_1.d
        
        i += 1
        x22_1 += 0x10
    while (i s< sx.q(*(x8_5 + 0x130)))

return result
