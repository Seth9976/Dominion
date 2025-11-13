// 函数: _Z15ParticleEmitOneP15ParticleEmitter
// 地址: 0xf9814c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = **(arg1 + 0x300)
int64_t* x9 = *x20
int64_t* x22

if (x9 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    int64_t** x21_1 = **(arg1 + 0x300)
    x9 = *x21_1
    x22 = **x20
    
    if (x9 == 0)
        if (x21_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x21_1, false, true)
        x9 = *x21_1
else
    x22 = *x9

int64_t x11 = sx.q(*(arg1 + 0x2f0))
int32_t x8_5 = x22[1].d

if (x11.d + 1 s>= x8_5)
    return 

int64_t i = sx.q(x11.d + 1)
int32_t x21_2 = *(**x9 + x11 * 0x168 + 0x10)
int64_t x24_1 = muls.dp.d(x11.d + 1, 0x168) + 0x10

do
    int32_t x9_6 = *(*x22 + x24_1)
    
    if (x9_6 s<= x21_2)
        break
    
    if (x9_6 == x21_2 + 1)
        ParticleEmitOneByIndex(arg1, i.d)
        x8_5 = x22[1].d
    
    i += 1
    x24_1 += 0x168
while (i s< sx.q(x8_5))
