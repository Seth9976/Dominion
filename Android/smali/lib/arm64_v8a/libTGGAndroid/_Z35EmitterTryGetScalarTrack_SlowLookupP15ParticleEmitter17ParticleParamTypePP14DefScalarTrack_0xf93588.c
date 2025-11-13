// 函数: _Z35EmitterTryGetScalarTrack_SlowLookupP15ParticleEmitter17ParticleParamTypePP14DefScalarTrack
// 地址: 0xf93588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x20 = arg2
int64_t* x22 = **(arg1 + 0x300)
int64_t* x8_1 = *x22

if (x8_1 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x8_1 = *x22

int64_t x8_3 = sx.q(*(arg1 + 0x2f0))
int64_t x9_1 = **x8_1
uint32_t x21_1 = zx.d(*(x9_1 + x8_3 * 0x168 + zx.q(x20) + 0x14))

if (x21_1 != 0)
    *arg3 =
        AttribMapGetDef(*gParticleAttribTable, x9_1 + x8_3 * 0x168, *macro_ptr_DefScalarTrack, x20)

return zx.q(x21_1 != 0 ? 1 : 0)
