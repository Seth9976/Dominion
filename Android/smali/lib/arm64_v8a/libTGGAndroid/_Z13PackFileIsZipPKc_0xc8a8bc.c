// 函数: _Z13PackFileIsZipPKc
// 地址: 0xc8a8bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s1 = strrchr(arg1, 0x2e)

if (s1 != 0 && strcasecmp(s1, ".zip") == 0)
    return 1

return 0
