// 函数: _Z16TraitTargetPilesRK14DomKingdomDataP11DomCardEnum
// 地址: 0xa322c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = *arg1
*(arg2 + 4) = *(arg1 + 4)
*(arg2 + 8) = *(arg1 + 8)
*(arg2 + 0xc) = *(arg1 + 0xc)
*(arg2 + 0x10) = *(arg1 + 0x10)
*(arg2 + 0x14) = *(arg1 + 0x14)
*(arg2 + 0x18) = *(arg1 + 0x18)
*(arg2 + 0x1c) = *(arg1 + 0x1c)
*(arg2 + 0x20) = *(arg1 + 0x20)
*(arg2 + 0x24) = *(arg1 + 0x24)
int32_t x8_9 = *(arg1 + 0x118)
int32_t x8_10
int32_t x9

if (x8_9 == 0)
    x8_10 = 0xa
    x9 = *(arg1 + 0x170)
    
    if (x9 != 0)
        *(arg2 + (zx.q(x8_10) << 2)) = x9
        x8_10 += 1
else
    *(arg2 + 0x28) = x8_9
    x8_10 = 0xb
    x9 = *(arg1 + 0x170)
    
    if (x9 != 0)
        *(arg2 + (zx.q(x8_10) << 2)) = x9
        x8_10 += 1
return zx.q(x8_10)
