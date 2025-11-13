// 函数: _Z16AssetPathIsXPackPKc
// 地址: 0xc77398
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s1 = strrchr(arg1, 0x2e)

if (s1 == 0)
    return s1

return zx.q(strcasecmp(s1, ".xpack") == 0 ? 1 : 0)
