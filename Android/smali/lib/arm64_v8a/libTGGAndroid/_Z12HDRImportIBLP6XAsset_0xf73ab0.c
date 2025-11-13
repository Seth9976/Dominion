// 函数: _Z12HDRImportIBLP6XAsset
// 地址: 0xf73ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* result = arg1

if (arg1 == 0)
    arg1 = AssetPtrGetNull(0x21)
    
    if (*arg1 == 0)
        AssetCatalogLoadAsset(arg1, false, true)
else if (*arg1 == 0)
    AssetCatalogLoadAsset(arg1, false, true)

return result
