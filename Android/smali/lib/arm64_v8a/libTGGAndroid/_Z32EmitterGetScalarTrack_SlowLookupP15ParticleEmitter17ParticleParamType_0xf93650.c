// 函数: _Z32EmitterGetScalarTrack_SlowLookupP15ParticleEmitter17ParticleParamType
// 地址: 0xf93650
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x19 = arg2
int64_t* x21 = **(arg1 + 0x300)
int64_t* x8_1 = *x21

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

int64_t x8_3 = sx.q(*(arg1 + 0x2f0))
int64_t x9_1 = **x8_1
AttribTable* x0_3 = *gParticleAttribTable

if (zx.d(*(x9_1 + x8_3 * 0x168 + zx.q(x19) + 0x14)) == 0)
    return AttribTagGetDefaultValue(x0_3, x19) __tailcall

return AttribMapGetDef(x0_3, x9_1 + x8_3 * 0x168, *macro_ptr_DefScalarTrack, x19) __tailcall
