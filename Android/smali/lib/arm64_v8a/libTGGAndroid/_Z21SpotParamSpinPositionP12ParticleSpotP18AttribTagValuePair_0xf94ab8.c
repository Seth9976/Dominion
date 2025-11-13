// 函数: _Z21SpotParamSpinPositionP12ParticleSpotP18AttribTagValuePair
// 地址: 0xf94ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x44)) != 0)
    void* x22_1 = *(arg1 + 0x30)
    int64_t* x21_1 = **(x22_1 + 0x300)
    int64_t* x8_2 = *x21_1
    
    if (x8_2 == 0)
        if (x21_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x21_1, false, true)
        x8_2 = *x21_1
    
    if (zx.d(*(**x8_2 + sx.q(*(x22_1 + 0x2f0)) * 0x168 + 0xe5)) != 0)
        return 

int64_t x0_4
float v0
x0_4, v0 = SpotGetFloatParamDelta(arg1, arg2)

if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
    float var_24_1 = v0
    v0 = var_24_1
    
    if (__cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION).d != 0)
        *DegToRad(float)::CONVERSION = *TWO_PI / float.s(0x43b40000)
        __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
        v0 = var_24_1

*(arg1 + 0x24) = *(arg1 + 0x24) + v0 * *DegToRad(float)::CONVERSION
