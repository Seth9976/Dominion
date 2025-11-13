// 函数: _Z10RandomSeedR6Randomj
// 地址: 0xfa148c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = 2
*arg1 = arg2
*(arg1 + 4) = 1 + (arg2 ^ arg2 u>> 0x1e) * 0x6c078965
*(arg1 + 0x9c0) = 2
int32_t x10_2 = 1

do
    int32_t x10_3 = *(arg1 + (zx.q(x10_2) << 2))
    *(arg1 + (zx.q(i) << 2)) = i + (x10_3 ^ x10_3 u>> 0x1e) * 0x6c078965
    x10_2 = *(arg1 + 0x9c0)
    i = x10_2 + 1
    *(arg1 + 0x9c0) = i
while (i u< 0x270)
