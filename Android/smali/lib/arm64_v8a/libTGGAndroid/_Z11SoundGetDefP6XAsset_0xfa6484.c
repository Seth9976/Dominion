// 函数: _Z11SoundGetDefP6XAsset
// 地址: 0xfa6484
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 != 0)
    return *x8

if (*(arg1 + 8) == 0x15)
    XString::GetString()
    XTrace("Unpreloaded sound %s")

AssetCatalogLoadAsset(arg1, false, true)
return **arg1
