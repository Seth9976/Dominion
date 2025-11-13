// 函数: _Z24EmitterTryGetLaunchParamP15ParticleEmitter17ParticleParamTypePf
// 地址: 0xf93fe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(arg1 + 0x2f8)

if (x23 != 0)
    uint32_t x21_1 = arg2
    int64_t* x22_1 = **(x23 + 0x300)
    int64_t* x8_2 = *x22_1
    
    if (x8_2 == 0)
        if (x22_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x22_1, false, true)
        x8_2 = *x22_1
    
    int64_t x8_4 = sx.q(*(x23 + 0x2f0))
    int64_t x9_2 = **x8_2
    
    if (zx.d(*(x9_2 + x8_4 * 0x168 + zx.q(x21_1) + 0x14)) != 0)
        DefScalarTrack* x0_4 = AttribMapGetDef(*gParticleAttribTable, x9_2 + x8_4 * 0x168, 
            *macro_ptr_DefScalarTrack, x21_1)
        float v0 = RandomUnit(gRNG)
        *arg3 = TrackScalarGetValue(x0_4, 0, *(*(arg1 + 0x2f8) + 0x308), v0)
        return 1

return 0
