// 函数: _Z10IsLeapYeari
// 地址: 0x106693c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (ror.d(0x51eb850 + arg1 * 0xc28f5c29, 4) u< 0xa3d70b)
    return 1

if (ror.d(0x51eb850 + arg1 * 0xc28f5c29, 2) u< 0x28f5c29)
    return 0

return zx.q((arg1 & 3) == 0 ? 1 : 0)
