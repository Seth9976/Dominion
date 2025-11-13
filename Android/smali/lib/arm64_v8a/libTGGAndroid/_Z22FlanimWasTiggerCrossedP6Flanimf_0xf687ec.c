// 函数: _Z22FlanimWasTiggerCrossedP6Flanimf
// 地址: 0xf687ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg1 + 0x18)
v1 - 0f
int32_t v2

if (not(v1 <= 0f))
    v2 = *(arg1 + 8)
    v1 = *(arg1 + 0xc)
    
    if (v1 f>= v2)
        return zx.q(v1 < arg2 ? 1 : 0) | zx.q(v2 f>= arg2 ? 1 : 0)
    
    return zx.q(v1 < arg2 ? 1 : 0) & zx.q(v2 f>= arg2 ? 1 : 0)

if (v1 >= 0f)
    return 0

v2 = *(arg1 + 8)
v1 = *(arg1 + 0xc)

if (v1 f<= v2)
    return zx.q(v1 > arg2 ? 1 : 0) | zx.q(v2 f<= arg2 ? 1 : 0)

return zx.q(v1 > arg2 ? 1 : 0) & zx.q(v2 f<= arg2 ? 1 : 0)
