// 函数: _Z21EmitterCountParticlesP15ParticleEmitter
// 地址: 0xf9dcbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = **(arg1 + 0x300)
int64_t* x8_1 = *x20

if (x8_1 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8_1 = *x20

int64_t x8_3 = sx.q(*(arg1 + 0x2f0))
int64_t x9_1 = **x8_1
int32_t x20_1
ParticleEmitter* i_1

if (*(x9_1 + x8_3 * 0x168 + 0x158) != 0 || zx.d(*(x9_1 + x8_3 * 0x168 + 0xe2)) != 0
        || *(x9_1 + x8_3 * 0x168 + 0x140) != 0)
    x20_1 = 1
    i_1 = *(arg1 + 0x2d8)
    
    if (i_1 != 0)
    label_f9dd6c:
        ParticleEmitter* i
        
        do
            i = *(i_1 + 0x320)
            x20_1 += EmitterCountParticles(i_1)
            i_1 = i
        while (i != 0)
else
    x20_1 = 0
    i_1 = *(arg1 + 0x2d8)
    
    if (i_1 != 0)
        goto label_f9dd6c
return zx.q(x20_1)
