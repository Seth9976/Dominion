// 函数: spCurveTimeline_getCurvePercent
// 地址: 0xfad9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float* x8 = *(arg1 + 0x10)
int32_t x11 = arg2 * 0x13
float v2 = fconvert.s(1f)
float v3 = x8[sx.q(x11)]
int128_t v1
v1.d = vmin_f32(arg3, v2)
bool cond:0 = arg3 < 0f
arg3 = 0f

if (cond:0)
    v1.d = arg3
else
    v1.d = v1.d

if (not(v3 != 0f))
    return v1

if (not(v3 != v2))
    return arg3

int32_t x9 = x11 + 1
int64_t x17 = zx.q(x9) << 0x20
int64_t x10 = 0
int64_t x11_2 = x17 + -0x100000000
int64_t x12 = x17 + -0x200000000

while (true)
    arg3 = x8[sx.q(x9) + x10]
    
    if (arg3 f>= v1.d)
        break
    
    x10 += 2
    x11_2 += 0x200000000
    x12 += 0x200000000
    
    if (sx.q(x9) - 2 + x10 s>= sx.q(x11 + 0x11))
        v2 = *(x8 + (x11_2 s>> 0x1e))
        v3 = fconvert.s(1f)
        v1.d = v1.d f- arg3
        v1.d = v1.d f* (v3 - v2)
        return v2 + v1.d f/ (v3 - arg3)

if (x10.d == 0)
    v2 = 0f
    v3 = 0f
else
    v2 = *(x8 + (x12 s>> 0x1e))
    v3 = *(x8 + (x11_2 s>> 0x1e))
    x9 += x10.d

v1.d = v1.d f- v2
v1.d = v1.d f* (x8[sx.q(x9 + 1)] - v3)
return v3 + v1.d f/ (arg3 - v2)
