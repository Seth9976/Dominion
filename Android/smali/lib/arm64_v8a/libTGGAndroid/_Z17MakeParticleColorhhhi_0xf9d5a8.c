// 函数: _Z17MakeParticleColorhhhi
// 地址: 0xf9d5a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = float.s(0x437f0000)
float v2 = float.s(zx.d(arg1)) / v1
float v3 = float.s(zx.d(arg2)) / v1
v2 - v3
float v4 = float.s(zx.d(arg3)) / v1
float v0

v0 = v2 < v3 ? v2 : v3

v1 = v2 > v3 ? v2 : v3

float v5

v5 = v0 < v4 ? v0 : v4

v0 = v1 > v4 ? v1 : v4

v5 = v0 - v5

if (v5 <= 0f)
    return 0

if (v2 >= v0)
    v2 = (v3 - v4) / v5
else
    if (v3 >= v0)
        v2 = (v4 - v2) / v5
        v3 = fconvert.s(2f)
    else
        v2 = (v2 - v3) / v5
        v3 = fconvert.s(4f)
    
    v2 = v2 + v3

v2 = v2 * float.s(0x42700000)

if (v2 < 0f)
    v2 = v2 + float.s(0x43b40000)

return zx.q(v5 / v0) << 0x20 | zx.q(v2)
