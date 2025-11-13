// 函数: _Z29AssetPathIsMarkedAsUnloadablePKc
// 地址: 0xc77a28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*arg1) != 0x21 && strstr(arg1, "/!") == 0)
    return zx.q(strstr(arg1, "\!") != 0 ? 1 : 0)

return 1
