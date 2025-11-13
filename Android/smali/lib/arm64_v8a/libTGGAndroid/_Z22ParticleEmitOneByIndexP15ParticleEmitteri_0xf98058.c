// 函数: _Z22ParticleEmitOneByIndexP15ParticleEmitteri
// 地址: 0xf98058
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x300)
int64_t* x21 = *x8

if (*x21 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    
    if (*(*(arg1 + 0x300) + 0x28) s> 0xbb8)
        return 
else if (x8[5].d s> 0xbb8)
    return 

ParticleEmitter* x0_3 = XPooledCalloc(0x330)
__builtin_memset(x0_3 + 0x2d8, 0, 0x14)
int64_t x8_6 = *(arg1 + 0x2d8)
*(x0_3 + 0x328) = 0
*(x0_3 + 0x320) = x8_6
void* x8_7 = *(arg1 + 0x2d8)
ParticleEmitter** x8_8

if (x8_7 == 0)
    x8_8 = arg1 + 0x2e0
else
    x8_8 = x8_7 + 0x328

*x8_8 = x0_3
int32_t x8_9 = *(arg1 + 0x2e8)
*(arg1 + 0x2d8) = x0_3
*(arg1 + 0x2e8) = x8_9 + 1
*(x0_3 + 0x2f0) = arg2
int64_t x8_11 = *(arg1 + 0x300)
*(x0_3 + 0x2f8) = arg1
*(x0_3 + 0x300) = x8_11
ParticleEmitterInit(x0_3)
*(arg1 + 0x2d4) += 1
