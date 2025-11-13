// 函数: _Z26Highaymwan_ReplacementHint6CardID
// 地址: 0xa1924c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((HasOngoing(0x17, 0, 0) & 1) == 0)
    return 0

if ((CardIs(zx.q(arg1), 2) & 1) != 0 && (IsTurn() & 1) != 0)
    void* x0_5 = DomGetContext()
    return zx.q(CountTreasuresPlayed(*(x0_5 + 8), zx.q(*(x0_5 + 0x18))) s< 1 ? 1 : 0)

return 0
