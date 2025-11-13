// 函数: _Z16Obelisk_VPBannerR7DomGame9PlayerWhoRiS2_S2_
// 地址: 0xc0000c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x2

if (*(arg1 + 0xd7c) == 0xc3f)
    x2 = zx.q(*(arg1 + 0 + 0xd80))
else if (*(arg1 + 0xdb8) == 0xc3f)
    x2 = zx.q(*(arg1 + 0x3c + 0xd80))
else if (*(arg1 + 0xdf4) == 0xc3f)
    x2 = zx.q(*(arg1 + 2 * 0x3c + 0xd80))
else if (*(arg1 + 0xe30) != 0xc3f)
    x2 = 0
else
    x2 = zx.q(*(arg1 + 3 * 0x3c + 0xd80))

*arg4 = x2.d
int64_t result = CountCardsFromPile(arg1, arg2, x2)
*arg3 = result.d
return result
