// 函数: _Z8FabBegin5FabIDP6XAssetRK12FabTransform
// 地址: 0xf5c3c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset** x19 = *gFabs + mulu.dp.d(zx.d(arg1), 0x4e8)
*x19 = arg2
int128_t v1 = *arg3
*(x19 + 0x1c) = *(arg3 + 0x10)
*(x19 + 0xc) = v1
v1 = *(arg3 + 0x30)
int128_t v0 = *(arg3 + 0x40)
int128_t v2 = *(arg3 + 0x20)
*(x19 + 0x5c) = *(arg3 + 0x50)
*(x19 + 0x4c) = v0
*(x19 + 0x3c) = v1
*(x19 + 0x2c) = v2
FabClear(x19)
return zx.q(x19[0x9c].d)
