// 函数: _Z17IsCrossGameFriendiR11TggGameType
// 地址: 0x9b7850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *(GetClient() + (sx.q(arg1) << 5) + 0x38)

if ((x8_2 & 0x80000000) == 0)
    return zx.q(x8_2 u>> 0x1f)

*arg2 = neg.d(x8_2)
return zx.q(x8_2 u>> 0x1f)
