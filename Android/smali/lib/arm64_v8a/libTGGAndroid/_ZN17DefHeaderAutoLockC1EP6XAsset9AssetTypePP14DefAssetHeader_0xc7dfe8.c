// 函数: _ZN17DefHeaderAutoLockC1EP6XAsset9AssetTypePP14DefAssetHeader
// 地址: 0xc7dfe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = arg2
int64_t x8 = *arg2
int64_t* x19 = arg2

if (x8 == 0)
    AssetCatalogLoadAsset(x19, false, true)
    x8 = *x19

*(x19 + 0x24) += 1
int64_t* entry_x3
*entry_x3 = x8
