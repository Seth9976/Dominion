// 函数: _Z29Enlightenment_ReplacementHint6CardID
// 地址: 0xac3da8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((HasOngoing(0x35, 0, 0) & 1) == 0)
    return 0

if ((CardIs(zx.q(arg1), 2) & 1) == 0)
    return 0

return zx.q(CurrentPhase() == 1 ? 1 : 0)
