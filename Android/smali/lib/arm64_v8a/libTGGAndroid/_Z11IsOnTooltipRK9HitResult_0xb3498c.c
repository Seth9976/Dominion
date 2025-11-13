// 函数: _Z11IsOnTooltipRK9HitResult
// 地址: 0xb3498c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) != 2)
    return 0

int32_t x8 = *(arg1 + 0x24)
return zx.q(x8 u> 0x4e20 ? 1 : 0) | zx.q(x8 == 0x2e7e ? 1 : 0)
