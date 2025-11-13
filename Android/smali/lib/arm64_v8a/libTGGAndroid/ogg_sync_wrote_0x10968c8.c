// 函数: ogg_sync_wrote
// 地址: 0x10968c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(arg1 + 8))

if ((x9.d & 0x80000000) != 0)
    return 0xffffffff

int64_t x10_1 = sx.q(*(arg1 + 0xc)) + arg2

if (x10_1 s> x9)
    return 0xffffffff

*(arg1 + 0xc) = x10_1.d
return 0
