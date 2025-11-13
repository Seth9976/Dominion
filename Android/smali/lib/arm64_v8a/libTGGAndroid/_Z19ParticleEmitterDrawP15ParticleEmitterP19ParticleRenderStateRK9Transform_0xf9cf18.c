// 函数: _Z19ParticleEmitterDrawP15ParticleEmitterP19ParticleRenderStateRK9Transform
// 地址: 0xf9cf18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_60 = v8
ParticleRenderState var_e8
ParticleGetRenderState(arg1, arg2, &var_e8)
int64_t result = ParticleSpotDraw(arg1, &var_e8, arg3)
int64_t* x21 = **(arg1 + 0x300)
int64_t* x8_1 = *x21

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result = AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

int64_t x8_3 = sx.q(*(arg1 + 0x2f0))

if (zx.d(*(**x8_1 + x8_3 * 0x168 + 0xf1)) != 0)
label_f9d038:
    Draw3DGetEyePose(3)
    ParticleEmitter* i = *(arg1 + 0x2d8)
    int64_t x24_1
    
    if (i == 0)
        x24_1 = 0
    else
        x24_1 = 0
        void var_40e0
        void* x25_1 = &var_40e0
        
        do
            int128_t v1_1
            int128_t v2_1
            v1_1, v2_1 = ParticleGetParticleWorldTransform(&var_e8, i)
            int32_t var_4114
            v8.d = var_4114
            int64_t var_4110
            v2_1.q = var_4110
            int64_t* x23_1 = **(arg1 + 0x300)
            int64_t* x8_8 = *x23_1
            
            if (x8_8 == 0)
                int128_t var_4140_1 = v2_1
                
                if (x23_1[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                v1_1, v2_1 = AssetCatalogLoadAsset(x23_1, false, true)
                x8_8 = *x23_1
                v2_1 = var_4140_1
            
            int64_t var_40f4
            
            if (zx.d(*(**x8_8 + sx.q(*(arg1 + 0x2f0)) * 0x168 + 0xf2)) == 0)
                v1_1.q = var_40f4
                float var_40f8
                float v0_1 = var_40f8 f- v8.d
                int128_t v1_2 = vsub_f32(v1_1, v2_1)
                double v1_3 = vmul_f32(v1_2, v1_2, 0)
                v0_1 = v0_1 * v0_1 f+ v1_3.d
                v1_3.d = v1_3:4.d
                *(x25_1 - 8) = i
                *x25_1 = v0_1 f+ v1_3.d
                
                if (x24_1 == 0x3ff)
                label_f9d154:
                    XTrace("too many particle to sort")
                    x24_1 = 0x400
                    break
            else
                *(x25_1 - 8) = i
                *x25_1 = fabs(v2_1.d f- var_40f4.d)
                
                if (x24_1 == 0x3ff)
                    goto label_f9d154
            i = *(i + 0x320)
            x24_1 += 1
            x25_1 += 0x10
        while (i != 0)
    
    bool (* var_4128)(ParticleSortData const&, ParticleSortData const&) = SpotSortFunc
    ParticleSortData var_40e8
    result = std::__ndk1::__sort<bool (*&)(ParticleSortData const&, ParticleSortData const&), ParticleSortData*>(
        &var_40e8, &var_40e8 + (zx.q(x24_1.d) << 4), &var_4128)
    
    if (x24_1.d != 0)
        uint64_t i_3 = zx.q(x24_1.d)
        ParticleEmitter** x21_2 = &var_40e8
        uint64_t i_1
        
        do
            ParticleEmitter* x0_12 = *x21_2
            x21_2 = &x21_2[2]
            result = ParticleEmitterDraw(x0_12, &var_e8, arg3)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
else
    int64_t* x21_1 = **(arg1 + 0x300)
    int64_t* x9_5 = *x21_1
    
    if (x9_5 == 0)
        if (x21_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        result = AssetCatalogLoadAsset(x21_1, false, true)
        x9_5 = *x21_1
        x8_3 = sx.q(*(arg1 + 0x2f0))
    
    if (zx.d(*(**x9_5 + x8_3 * 0x168 + 0xf2)) != 0)
        goto label_f9d038
    
    for (ParticleEmitter* i_2 = *(arg1 + 0x2d8); i_2 != 0; i_2 = *(i_2 + 0x320))
        result = ParticleEmitterDraw(i_2, &var_e8, arg3)

return result
