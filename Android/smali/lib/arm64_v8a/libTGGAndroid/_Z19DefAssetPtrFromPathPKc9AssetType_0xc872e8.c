// 函数: _Z19DefAssetPtrFromPathPKc9AssetType
// 地址: 0xc872e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2.d != 0)
    return AssetPtrFromPath(arg1, arg2) __tailcall

if (zx.d(*arg1) == 0)
    return 0

return AssetPtrFromPath(arg1, zx.q(AssetTypeFromPath(arg1))) __tailcall
