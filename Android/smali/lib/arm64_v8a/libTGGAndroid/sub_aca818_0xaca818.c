// 函数: sub_aca818
// 地址: 0xaca818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardIs(arg1, 2) & 1) == 0)
    return 0

return (CountPlayedThisTurn(CardWhat(zx.q(arg1.d))) == 1 ? 1 : 0).b
