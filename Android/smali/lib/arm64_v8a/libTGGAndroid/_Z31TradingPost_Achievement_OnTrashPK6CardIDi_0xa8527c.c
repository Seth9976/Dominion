// 函数: _Z31TradingPost_Achievement_OnTrashPK6CardIDi
// 地址: 0xa8527c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 2 && (CardIs(zx.q(*arg1), 0x105) & 1) == 0)
    return CardIs(zx.q(*(arg1 + 4)), 0x105) __tailcall

return zx.q(arg2 == 2 ? 1 : 0)
