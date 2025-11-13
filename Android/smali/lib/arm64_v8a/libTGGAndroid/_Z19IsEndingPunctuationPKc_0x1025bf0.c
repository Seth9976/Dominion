// 函数: _Z19IsEndingPunctuationPKc
// 地址: 0x1025bf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(zx.d(*arg1) - 0x22)

if (x8.d u> 0x3b)
    return 0

return zx.q((0x800000001001ca1 u>> x8).d) & 1
