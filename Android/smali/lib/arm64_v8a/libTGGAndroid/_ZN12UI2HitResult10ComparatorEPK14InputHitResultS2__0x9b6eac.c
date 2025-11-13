// 函数: _ZN12UI2HitResult10ComparatorEPK14InputHitResultS2_
// 地址: 0x9b6eac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(arg1 + 8)
int32_t x9 = *(arg2 + 8)

if (x10 != 0 && x9 != 0)
    return zx.q(*(arg1 + 0x10) == *(arg2 + 0x10) ? 1 : 0)

return zx.q((x10 | x9) == 0 ? 1 : 0)
