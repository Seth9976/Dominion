// 函数: _Z18SpotParamSpinSpeedP12ParticleSpotP18AttribTagValuePair
// 地址: 0xf94934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ParticleSpot* x19 = arg1

if (zx.d(*(arg1 + 0x44)) != 0)
    void* x22_1 = *(x19 + 0x30)
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

int64_t* x21_2 = *(arg2 + 8)
void* x22_2 = *(x19 + 0x30)
int32_t* x8_9
float v0

if (x21_2[1].d == 1)
    x8_9 = *x21_2
    v0 = *x8_9

if (x21_2[1].d != 1 || not(v0 f== x8_9[1]))
    int32_t x8_10 = *arg2
    float v0_1 = MakeUnitFloat(WhiteNoise((*(x22_2 + 0x2c) + x8_10) * x8_10))
    arg1, v0 = TrackScalarGetValue(x21_2, *(x22_2 + 0x314), *(x22_2 + 0x308), v0_1)

if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
    float var_24_1 = v0
    v0 = var_24_1
    
    if (__cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION).d != 0)
        *DegToRad(float)::CONVERSION = *TWO_PI / float.s(0x43b40000)
        __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
        v0 = var_24_1

*(x19 + 0x24) =
    *(x19 + 0x24) + v0 * *DegToRad(float)::CONVERSION * *(*(*(x19 + 0x30) + 0x300) + 0x80)
