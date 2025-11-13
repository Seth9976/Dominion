// 函数: _Z20AssetCatalogNewAssetPKc9AssetTypeP14DefAssetHeader
// 地址: 0xc76f28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefAssetHeader** result = AssetPtrFromPath(arg1, arg2)

if (*(result + 0xc) == 4 && *result != 0)
    DefinitionPurgeAsset(result)
    *result = nullptr

*result = arg3
*(result + 0xc) = 3
XString::operator=(&result[2])
return result
