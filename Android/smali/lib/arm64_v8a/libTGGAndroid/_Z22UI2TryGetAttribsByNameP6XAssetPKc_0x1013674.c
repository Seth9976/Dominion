// 函数: _Z22UI2TryGetAttribsByNameP6XAssetPKc
// 地址: 0x1013674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int64_t* x20

if (x8 == 0)
    int64_t*** x20_1 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_1, false, true)
    x20 = **x20_1
    
    if (x20[1].d s>= 1)
        goto label_10136f4
else
    x20 = *x8
    
    if (x20[1].d s>= 1)
    label_10136f4:
        int64_t x21_1 = 0
        int64_t i = 0
        
        do
            if (strcasecmp(AttribMapGetString(*gUI2AttribTable, *x20 + x21_1, 0x64), arg2) == 0)
                return *x20 + x21_1
            
            i += 1
            x21_1 += 0x18
        while (i s< sx.q(x20[1].d))
return 0
