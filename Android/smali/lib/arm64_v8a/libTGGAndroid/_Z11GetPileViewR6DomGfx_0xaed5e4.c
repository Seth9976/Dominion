// 函数: _Z11GetPileViewR6DomGfx
// 地址: 0xaed5e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + 0x8c))

if (result.d != 0)
    return result

int32_t x8 = *(arg1 + 0x5c)

if (x8 == 0x44d)
    return 3

if (x8 == 0x44e)
    return 4

if (x8 == 0x3e9)
    return 2

if (x8 == 0x3ea)
    return 0

if (x8 - 0x452 u< 0x22)
    return 3

return 0
