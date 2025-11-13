// 函数: _Z23Battlefield_OnGain_Test6CardID
// 地址: 0xa6dd00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardIs(arg1, 8) & 1) == 0)
    return 0

return zx.q(CountTokensHere(0x601) != 0 ? 1 : 0)
