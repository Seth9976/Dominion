// 函数: _Z12RectNearZeroRK5RectF
// 地址: 0xb94410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(fabs(*arg1) <= float.s(0x3727c5ac)))
    return 0

if (not(fabs(*(arg1 + 8)) <= float.s(0x3727c5ac)))
    return 0

if (fabs(*(arg1 + 4)) <= float.s(0x3727c5ac))
    return zx.q(fabs(*(arg1 + 0xc)) <= float.s(0x3727c5ac) ? 1 : 0)

return 0
