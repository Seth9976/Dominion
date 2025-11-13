// 函数: _Z21ParticleEmitterUpdateP15ParticleEmitter
// 地址: 0xf97f84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(*gpGameData + 0x20)
*(x8_1 + 0x30) += 1
float v0 = *(arg1 + 0x318)
int64_t* x8_2 = *(arg1 + 0x300)

if (not(v0 <= 0f))
    *(arg1 + 0x318) = v0 f- x8_2[0x10].d
    return 1

int64_t* x20 = *x8_2
int64_t* x8_3 = *x20

if (x8_3 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8_3 = *x20

DefEmitter* x20_1 = **x8_3 + sx.q(*(arg1 + 0x2f0)) * 0x168
ParticleEmitterUpdateData(arg1, x20_1)
return ParticleSpotUpdate(arg1, arg1, x20_1) __tailcall
