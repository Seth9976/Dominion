// 函数: _Z13IsSingleDigitRK7XString
// 地址: 0xc09940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (XString::Length() != 1)
    return 0

return zx.q(zx.d(*XString::operator char const*()) - 0x30 u< 0xa ? 1 : 0)
