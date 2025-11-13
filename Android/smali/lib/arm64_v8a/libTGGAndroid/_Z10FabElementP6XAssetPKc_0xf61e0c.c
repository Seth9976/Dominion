// 函数: _Z10FabElementP6XAssetPKc
// 地址: 0xf61e0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* entry_x20
XAsset* var_10 = entry_x20
int64_t* x8 = *arg1

if (x8 == 0)
    entry_x20 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(entry_x20, false, true)
    x8 = *entry_x20

int64_t* x8_2 = *x8
int64_t x21 = sx.q(x8_2[1].d)

if (x21.d s>= 1)
    entry_x20 = nullptr
    int64_t* x22_1 = *x8_2 + 8
    
    do
        if (strcmp(arg2, *x22_1) == 0)
            return zx.q(entry_x20.d)
        
        entry_x20 += 1
        x22_1 = &x22_1[0x1c]
    while (entry_x20 s< x21)

pthread_kill(pthread_self(), 6)
XNoReturn()
return zx.q(entry_x20.d)
