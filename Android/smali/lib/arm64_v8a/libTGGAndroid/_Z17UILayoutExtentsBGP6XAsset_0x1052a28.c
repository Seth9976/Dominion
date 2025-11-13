// 函数: _Z17UILayoutExtentsBGP6XAsset
// 地址: 0x1052a28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (x8 == 0)
    XAsset* x19_1 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x19_1, false, true)
    x8 = *x19_1

void* x8_2 = *x8
v0.d = *(x8_2 + 0xc)
v1.d = *(x8_2 + 0x10)
v2.d = *(x8_2 + 0x14)
v3.d = *(x8_2 + 0x18)
