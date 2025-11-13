// 函数: ogg_stream_reset
// 地址: 0x1097038
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 0xffffffff

if (*arg1 == 0)
    return 0xffffffff

arg1[0x2e] = 0
*(arg1 + 0x16c) = 0
arg1[2] = 0
arg1[3] = 0
__builtin_memset(&arg1[7], 0, 0x18)
arg1[0x31] = 0
arg1[0x32] = 0
arg1[0x30] = -1
return 0
