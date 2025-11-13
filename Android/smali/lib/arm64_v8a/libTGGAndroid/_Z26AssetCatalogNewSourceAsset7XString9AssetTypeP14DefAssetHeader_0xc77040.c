// 函数: _Z26AssetCatalogNewSourceAsset7XString9AssetTypeP14DefAssetHeader
// 地址: 0xc77040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefAssetHeader** x0_1 = AssetPtrFromPath(XString::operator char const*(), zx.q(arg2))

if (*(x0_1 + 0xc) == 4 && *x0_1 != 0)
    DefinitionPurgeAsset(x0_1)
    *x0_1 = nullptr

*x0_1 = arg3
*(x0_1 + 0xc) = 1
return XString::operator=(&x0_1[2]) __tailcall
