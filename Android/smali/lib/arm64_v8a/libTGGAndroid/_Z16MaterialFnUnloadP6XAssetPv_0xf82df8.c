// 函数: _Z16MaterialFnUnloadP6XAssetPv
// 地址: 0xf82df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* result = GameExists()

if ((result.d & 1) != 0)
    XAsset* x0 = *(arg2 + 0x10)
    
    if (x0 != 0)
        AssetCatalogPurgeAsset(x0)
        *(arg2 + 0x10) = 0
    
    result = *(arg2 + 0x18)
    
    if (result != 0)
        result = AssetCatalogPurgeAsset(result)
        *(arg2 + 0x18) = 0

return result
