// 函数: _Z19ParticleEmitterInitP15ParticleEmitter
// 地址: 0xf93a00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x300)
*(x8 + 0x28) += 1
ParticleSpotInit(arg1, arg1)
int64_t* x20 = **(arg1 + 0x300)
int64_t* x8_2 = *x20

if (x8_2 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8_2 = *x20

AttribMap* x20_1 = **x8_2 + sx.q(*(arg1 + 0x2f0)) * 0x168
int32_t i_2 = AttribMapGetInt(*gParticleAttribTable, x20_1, 3)

if (i_2 s>= 1)
    int32_t i_1 = i_2
    int32_t i
    
    do
        ParticleEmitterUpdate(arg1)
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result = AttribMapGetInt(*gParticleAttribTable, x20_1, 4)
*(arg1 + 0x318) = float.s(result.d) / float.s(0x42c80000)
return result
