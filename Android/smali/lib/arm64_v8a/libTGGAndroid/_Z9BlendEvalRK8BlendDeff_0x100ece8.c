// 函数: _Z9BlendEvalRK8BlendDeff
// 地址: 0x100ece8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *arg1
float v2 = arg2 - *(arg1 + 4)

if (not(v1 != 0f))
    return 

if (v2 < 0f || v2 >= v1)
    return 

float v3 = v2 / v1

if (v3 <= 0f)
    return 

arg1 = zx.q(*(arg1 + 8))

if (not(v3 >= fconvert.s(1f)))
    return XCurveEvalNormal(arg1, v3, 0f, fconvert.s(1f)) __tailcall

if (arg1.d - 0xa u< 0xa)
    *(&data_8692dc + (sx.q(arg1.d - 0xa) << 2))
