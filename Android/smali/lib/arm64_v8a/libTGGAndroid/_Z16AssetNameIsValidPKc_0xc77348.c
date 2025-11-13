// 函数: _Z16AssetNameIsValidPKc
// 地址: 0xc77348
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*arg1) == 0)
    return 1

if (strchr(arg1, 0x5c) == 0)
    uint64_t result = strchr(arg1, 0x2f)
    
    if (result == 0)
        return result

return zx.q(AssetTypeFromPath(arg1) == 0 ? 1 : 0)
