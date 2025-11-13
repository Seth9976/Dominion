// 函数: _Z10AsAssetPtrPKcRP6XAsset
// 地址: 0x1032acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = AssetTypeFromPath(arg1)

if (x0 != 0)
    *arg2 = AssetPtrFromPath(arg1, zx.q(x0))

return zx.q(x0 != 0 ? 1 : 0)
