// 函数: _Z12ParticleIs3DP14ParticleSystem
// 地址: 0xf9ddf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int64_t* x19_1 = *arg1
int64_t* x8_1 = *x19_1
int64_t* x19_2

if (x8_1 == 0)
    if (x19_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19_1, false, true)
    x19_2 = **x19_1
    
    if (x19_2[1].d s< 1)
        return 
else
    x19_2 = *x8_1
    
    if (x19_2[1].d s< 1)
        return 

int64_t x20_1 = 0
int64_t i = 0

do
    if (AttribMapGetAssetPtr(*gParticleAttribTable, *x19_2 + x20_1, 8) != 0)
        break
    
    i += 1
    x20_1 += 0x168
while (i s< sx.q(x19_2[1].d))
