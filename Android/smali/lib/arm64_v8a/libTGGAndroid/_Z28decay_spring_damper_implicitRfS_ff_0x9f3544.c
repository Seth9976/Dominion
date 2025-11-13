// 函数: _Z28decay_spring_damper_implicitRfS_ff
// 地址: 0x9f3544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v5 = *arg1
arg3 = float.s(0x40317218) / (arg3 + float.s(0x3727c5ac)) * fconvert.s(0.5f)
float v7 = arg3 * arg4
float v6 = fconvert.s(1f)
float v3 = *arg2 + arg3 * v5
float v2 = v6 / (v7 + v6 + v7 * v7 * float.s(0x3ef5c28f) + v7 * v7 * v7 * float.s(0x3e70a3d7))
*arg1 = v2 * (v5 + v3 * arg4)
*arg2 = v2 * (*arg2 - arg3 * v3 * arg4)
