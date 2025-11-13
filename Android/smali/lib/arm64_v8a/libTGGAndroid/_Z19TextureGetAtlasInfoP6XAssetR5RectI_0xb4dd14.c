// 函数: _Z19TextureGetAtlasInfoP6XAssetR5RectI
// 地址: 0xb4dd14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int32_t* x8_2

if (x8 == 0)
    int32_t**** x20_1 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_1, false, true)
    x8_2 = ***x20_1
    
    if (*(x8_2 + 0x28) != 0)
        goto label_b4dd3c
else
    x8_2 = **x8
    
    if (*(x8_2 + 0x28) != 0)
    label_b4dd3c:
        *arg2 = x8_2[0xd]
        *(arg2 + 4) = x8_2[0xe]
        *(arg2 + 8) = *x8_2 + x8_2[0xd]
        *(arg2 + 0xc) = x8_2[1] + x8_2[0xe]
        return *(x8_2 + 0x28)
return 0
