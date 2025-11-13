// 函数: _Z25ParticleEmitterUpdateDataP15ParticleEmitterP10DefEmitter
// 地址: 0xf9828c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v8
int64_t var_68 = v8
int64_t var_e8
int32_t x22
int32_t x23
int32_t x26
int32_t x27
uint32_t fp
float v0
float v1
int128_t v2
int64_t v9
int128_t v14

if (*(arg2 + 0x120) s< 1)
    x23 = 0
    x27 = 0
    x22 = 0
    x26 = 0
    fp = 0
    v14.d = fconvert.s(1f)
    v9.d = 0f
    var_e8 = 0
else
    int64_t x24_1 = 0
    int64_t i = 0
    fp = 0
    x26 = 0
    x22 = 0
    x27 = 0
    x23 = 0
    v10.d = 0f
    v11.d = fconvert.s(1f)
    v12.d = fconvert.s(0.5f)
    v13.d = fconvert.s(-0.5f)
    v14.d = fconvert.s(1f)
    v9.d = 0f
    var_e8 = 0
    
    do
        int32_t* x21_1 = *(arg2 + 0x128)
        uint64_t x8_6 = zx.q(*(x21_1 + x24_1) - 0xf)
        int128_t v4
        
        if (x8_6.d u<= 5)
            switch (x8_6)
                case 0
                    DefScalarTrack* x21_2 = *(x21_1 + x24_1 + 8)
                    float* x8_9
                    
                    if (*(x21_2 + 8) == 1)
                        x8_9 = *x21_2
                        v0 = *x8_9
                    
                    if (*(x21_2 + 8) != 1 || not(v0 == x8_9[1]))
                        float v0_3 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0xf + 0xe1))
                        v0, v2, v4 =
                            TrackScalarGetValue(x21_2, *(arg1 + 0x314), *(arg1 + 0x308), v0_3)
                    
                    if (v0 < 0f)
                        v1 = v13.d
                    else
                        v1 = v12.d
                    
                    fp = vcvts_s32_f32(v0 + v1)
                    x22 = 1
                case 1
                    DefScalarTrack* x21_3 = *(x21_1 + x24_1 + 8)
                    float* x8_14
                    
                    if (*(x21_3 + 8) == 1)
                        x8_14 = *x21_3
                        v0 = *x8_14
                    
                    if (*(x21_3 + 8) != 1 || not(v0 == x8_14[1]))
                        float v0_5 = MakeUnitFloat(WhiteNoise((*(arg1 + 0x2c) << 4) + 0x100))
                        v0, v2, v4 =
                            TrackScalarGetValue(x21_3, *(arg1 + 0x314), *(arg1 + 0x308), v0_5)
                    
                    if (v0 < 0f)
                        v1 = v13.d
                    else
                        v1 = v12.d
                    
                    var_e8.d = vcvts_s32_f32(v0 + v1)
                    x27 = 1
                case 2
                    DefScalarTrack* x21_4 = *(x21_1 + x24_1 + 8)
                    float* x8_20
                    
                    if (*(x21_4 + 8) == 1)
                        x8_20 = *x21_4
                        v0 = *x8_20
                    
                    if (*(x21_4 + 8) != 1 || not(v0 == x8_20[1]))
                        float v0_1 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x11 + 0x121))
                        v0, v2, v4 =
                            TrackScalarGetValue(x21_4, *(arg1 + 0x314), *(arg1 + 0x308), v0_1)
                    
                    v9.d = v9.d f+ v0 * *(*(arg1 + 0x300) + 0x80)
                    x26 = 1
                case 3
                    DefScalarTrack* x21_5 = *(x21_1 + x24_1 + 8)
                    float* x8_23
                    
                    if (*(x21_5 + 8) == 1)
                        x8_23 = *x21_5
                        v0 = *x8_23
                    
                    if (*(x21_5 + 8) != 1 || not(v0 == x8_23[1]))
                        float v0_7 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x12 + 0x144))
                        v0, v2, v4 =
                            TrackScalarGetValue(x21_5, *(arg1 + 0x314), *(arg1 + 0x308), v0_7)
                    
                    void* x8_26 = *(arg1 + 0x300)
                    v2.q = *(x8_26 + 0x6c)
                    v4.q = *(x8_26 + 0x94)
                    v1 = *(x8_26 + 0x90) - *(x8_26 + 0x68)
                    int128_t v2_5 = vsub_f32(v4, v2)
                    v2 = vmul_f32(v2_5, v2_5, 0)
                    v1 = v1 * v1 f+ v2.d
                    v2.d = v2:4.d
                    v9.d = v9.d f+ v0 * sqrt(v1 f+ v2.d)
                    x26 = 1
                case 4
                    DefScalarTrack* x21_6 = *(x21_1 + x24_1 + 8)
                    float* x8_29
                    
                    if (*(x21_6 + 8) == 1)
                        x8_29 = *x21_6
                        v0 = *x8_29
                    
                    if (*(x21_6 + 8) != 1 || not(v0 == x8_29[1]))
                        float v0_9 = MakeUnitFloat(WhiteNoise(*(arg1 + 0x2c) * 0x13 + 0x169))
                        v0, v2, v4 =
                            TrackScalarGetValue(x21_6, *(arg1 + 0x314), *(arg1 + 0x308), v0_9)
                    
                    if (v0 < 0f)
                        v1 = v13.d
                    else
                        v1 = v12.d
                    
                    x23 = 1
                    var_e8:4.d = vcvts_s32_f32(v0 + v1)
                case 5
                    ParticleGetParticleToSystemTransform(arg1)
                    int32_t var_ac
                    v8.d = var_ac
                    int64_t var_a8
                    v14.q = var_a8
                    Draw3DGetOldEyePose(3)
                    int64_t var_cc
                    int128_t v2_7
                    v2_7.q = var_cc
                    DefScalarTrack* x21_7 = *(x21_1 + x24_1 + 8)
                    float var_d0
                    float v1_11 = v8.d f- var_d0
                    int128_t v2_8 = vsub_f32(v14, v2_7)
                    float v0_11 = *(arg1 + 0x308)
                    int32_t x1_5 = *(arg1 + 0x314)
                    double v2_9 = vmul_f32(v2_8, v2_8, 0)
                    v1_11 = v1_11 * v1_11 f+ v2_9.d
                    v2_9.d = v2_9:4.d
                    v15.d = sqrt(v1_11 f+ v2_9.d)
                    v14.d = 0f
                    int64_t v0_12 = TrackScalarGetValue(x21_7, x1_5, v0_11, 0f)
                    v0, v2, v4 =
                        TrackScalarGetValue(x21_7, *(arg1 + 0x314), *(arg1 + 0x308), fconvert.s(1f))
                    v0 = (v15.d f- v0_12.d) / (v0 f- v0_12.d)
                    
                    if (not(v0 <= 0f) && not(v0 f>= v11.d))
                        v14.d = v11.d f- fabs(v11.d f- (v0 + v0)) f+ v10.d
        i += 1
        x24_1 += 0x10
    while (i s< sx.q(*(arg2 + 0x120)))

v0 = v9.d f* v14.d + *(arg1 + 0x2d0)

if ((x22 & 1) != 0 || (x26 & 1) == 0)
    uint32_t x9_6
    
    if (((x22 | x26) & 1) != 0)
        x9_6 = fp
    else
        x9_6 = 1
    
    v1 = float.s(x9_6 - *(arg1 + 0x2e8))
    
    if (not(v0 > v1))
        v0 = v1
    
    if ((x27 & 1) == 0)
        goto label_f98684
    
    goto label_f98774

if ((x27 & 1) != 0)
label_f98774:
    int32_t x8_47 = var_e8.d - *(arg1 + 0x2e8)
    v1 = float.s(x8_47 & not.d(x8_47 s>> 0x1f))
    
    if (not(v0 < v1))
        v0 = v1
    
    if ((x23 & 1) != 0)
        goto label_f98690
else
label_f98684:
    
    if ((x23 & 1) != 0)
    label_f98690:
        int32_t x8_35 = var_e8:4.d - *(arg1 + 0x2d4)
        v1 = float.s(x8_35 & not.d(x8_35 s>> 0x1f))
        
        if (not(v0 < v1))
            v0 = v1

int64_t* x8_37 = *(arg1 + 0x300)
float temp0_4 = vrndm_f32(v0)
*(arg1 + 0x2d0) = v0 - temp0_4
v2.d = *(x8_37 + 0x74)

if (temp0_4 < 0f)
    v0 = fconvert.s(-0.5f)
else
    v0 = fconvert.s(0.5f)

uint32_t i_4 = vcvts_s32_f32(temp0_4 + v0)

if (not(v2.d f<= 0f))
    int64_t* x20_2 = *x8_37
    int64_t* x8_38 = *x20_2
    
    if (x8_38 == 0)
        if (x20_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x20_2, false, true)
        x8_38 = *x20_2
    
    if (zx.d(*(**x8_38 + sx.q(*(arg1 + 0x2f0)) * 0x168 + 0xe6)) == 0 && i_4 s> 0)
        goto label_f987a4
else if (i_4 s>= 1)
label_f987a4:
    uint32_t i_1
    
    do
        ParticleEmitOne(arg1)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

void* i_3 = *(arg1 + 0x2d8)

if (i_3 != 0)
    void* i_2
    
    do
        i_2 = *(i_3 + 0x320)
        
        if ((ParticleEmitterUpdate(i_3) & 1) == 0)
            EmitterDestroy(i_3)
            void* x8_49 = *(i_3 + 0x328)
            void* __offset(ParticleEmitter, 0x2d8) x8_50
            
            if (x8_49 == 0)
                x8_50 = arg1 + 0x2d8
            else
                x8_50 = x8_49 + 0x320
            
            *x8_50 = *(i_3 + 0x320)
            void* x8_51 = *(i_3 + 0x320)
            void* __offset(ParticleEmitter, 0x2e0) x8_52
            
            if (x8_51 == 0)
                x8_52 = arg1 + 0x2e0
            else
                x8_52 = x8_51 + 0x328
            
            *x8_52 = *(i_3 + 0x328)
            *(arg1 + 0x2e8) -= 1
            void* j_1
            
            for (void* j = *(i_3 + 0x2d8); j != 0; j = j_1)
                j_1 = *(j + 0x320)
                ParticleEmitter::~ParticleEmitter()
                XPooledFree(j, 0x330)
            
            __builtin_memset(i_3 + 0x2d8, 0, 0x14)
            XPooledFree(i_3, 0x330)
        
        i_3 = i_2
    while (i_2 != 0)

return 1
