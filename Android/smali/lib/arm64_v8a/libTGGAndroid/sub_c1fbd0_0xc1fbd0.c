// 函数: sub_c1fbd0
// 地址: 0xc1fbd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_4 = *arg1
float v1 = *arg2
int32_t x8 = *(arg1 + 0x24)
int32_t* x10 = *(x9_4 + 0x10)
float v0 = *x10

if (v1 <= v0)
    if (x8 == 1)
        return 0
else if (x8 == 0)
    return 1

float v2 = *(x9_4 + 0x28)
float v3

if (v2 != fconvert.s(1f))
    v0 = v1 - v0
    v2 = *(x9_4 + 0x30) - v1 * v2
    v1 = v2 f- x10[1]
    v3 = arg2[1] f- v2
    return zx.q(v3 * v3 > v0 * v0 + v1 * v1 ? 1 : 0) ^ zx.q(x8 != 0 ? 1 : 0)

v2 = *(x9_4 + 0x2c)
float v5 = arg2[1]
float v4 = v1 - v0
v2 - 0f
int32_t x10_2

if (v1 > v0)
    x10_2 = v2 >= 0f ? 1 : 0
else
    x10_2 = v2 < 0f ? 1 : 0

v3 = v5 f- x10[1]

if (x10_2 != 1)
    float v6 = *(x9_4 + 0x30)
    v1 = v1 + v5 * v2
    
    if (v2 >= 0f)
        if (v1 <= v6)
            return zx.q(x8 != 0 ? 1 : 0)
    else if (not(v1 <= v6))
        return zx.q(x8 != 0 ? 1 : 0)
    
    goto label_c1fcf0

int32_t x9

if (v3 < v4 * v2)
label_c1fcf0:
    v1 = v4 * v4 - v3 * v3
    v0 = v0 - **(x9_4 + 8)
    v4 = (v4 + v4) / v0
    v3 = v3 * v0
    v0 = v2 * v1
    v1 = v3 * (v2 * v2 + v4 + fconvert.s(1f))
    x9 = v0 < v1 ? 1 : 0
    
    if (not(v2 >= 0f))
        return zx.q(v0 >= v1 ? 1 : 0) ^ zx.q(x8 != 0 ? 1 : 0)
else
    x9 = 1

return zx.q(x9) ^ zx.q(x8 != 0 ? 1 : 0)
