// 函数: _Z20ParticleCreateParamsP6XAssetRK9Transform
// 地址: 0xf93790
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *(*gpGameData + 0x20)
uint64_t x22 = zx.q(x8_1[2].d)
int32_t x9_1
int64_t x23

if (x22.d != x8_1[1].d)
    x23 = *x8_1
    x9_1 = *(x23 + x22 * 0xa8 + 0xa0)
else
    x23 = *x8_1
    x9_1 = x22.d + 1
    x8_1[1].d = x9_1

x8_1[2].d = x9_1
int128_t v0
v0.q = 0
v0:8.q = 0
XAsset** result = x23 + x22 * 0xa8
__builtin_memset(result, 0, 0xa0)
result[0x14].d = x22.d | x8_1[3].d << 0x10
int32_t x9_5 = x8_1[3].d
int32_t x9_6

if (x9_5 == 0xffff)
    x9_6 = 1
else
    x9_6 = x9_5 + 1

*(x8_1 + 0x14) += 1
x8_1[3].d = x9_6
int128_t v1 = *arg2
*(result + 0x64) = *(arg2 + 0x10)
*(result + 0x54) = v1
v0.q = result[0xd]
v1.d = result[0xe].d
*result = arg1
*(result + 0x8c) = 0x3f800000
result[0x12] = v0.q
result[0x13].d = v1.d
v0.d = *gSecondsPerUpdate
result[0x10].d = v0.d
*(result + 0x9d) = 1
int64_t* x8_2 = *arg1
int64_t* x24

if (x8_2 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x24 = **arg1
    
    if (x24[1].d s>= 1)
        goto label_f938ec
else
    x24 = *x8_2
    
    if (x24[1].d s>= 1)
    label_f938ec:
        void* x8_7 = x23 + x22 * 0xa8
        int64_t i = 0
        int64_t x26_1 = 0x10
        
        do
            int32_t* fp_1 = *x24
            
            if ((AttribMapGetBool(*gParticleAttribTable, fp_1 + x26_1 - 0x10, 0x6e) & 1) != 0)
                *(x8_7 + 0x9c) = 1
            
            if ((AttribMapGetBool(*gParticleAttribTable, fp_1 + x26_1 - 0x10, 0x6f) & 1) == 0)
                *(result + 0x9d) = 0
            
            if (*(fp_1 + x26_1) == 0)
                ParticleEmitter* x0_7 = XPooledCalloc(0x330)
                __builtin_memset(x0_7 + 0x2d8, 0, 0x14)
                *(x0_7 + 0x320) = 0
                *(x0_7 + 0x328) = *(x8_7 + 0x18)
                ParticleEmitter* x8_13 = *(x8_7 + 0x18)
                void* __offset(ParticleEmitter, 0x320) x8_15
                
                if (x8_13 == 0)
                    x8_15 = x8_7 + 0x10
                else
                    x8_15 = x8_13 + 0x320
                
                *x8_15 = x0_7
                *(x8_7 + 0x20) += 1
                *(x8_7 + 0x18) = x0_7
                *(x0_7 + 0x2f0) = i.d
                *(x0_7 + 0x300) = result
                *(x0_7 + 0x2f8) = 0
                ParticleEmitterInit(x0_7)
            
            i += 1
            x26_1 += 0x168
        while (i s< sx.q(x24[1].d))
return result
