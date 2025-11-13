// 函数: _Z20ButtonSourceCacheSetR17ButtonSourceCache12ButtonSourceb
// 地址: 0xc814d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char x8 = arg3 & 1
uint64_t x9 = zx.q(arg2)
*(arg1 + x9) = x8

if ((arg3.d & 1) != 0)
    *(arg1 + x9 + 0x24) = x8
