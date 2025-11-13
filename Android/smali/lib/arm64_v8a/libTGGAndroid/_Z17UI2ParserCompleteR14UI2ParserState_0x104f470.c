// 函数: _Z17UI2ParserCompleteR14UI2ParserState
// 地址: 0x104f470
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(**(arg1 + 8))
uint64_t x9 = zx.q(x8 - 0x24)

if ((x9.d u> 0x39 || (1 << x9 & 0x200000000000101) == 0) && x8 != 0)
    return 0

return 1
