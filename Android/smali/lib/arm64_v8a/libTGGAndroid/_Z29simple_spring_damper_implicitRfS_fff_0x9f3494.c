// 函数: _Z29simple_spring_damper_implicitRfS_fff
// 地址: 0x9f3494
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg4 = float.s(0x40317218) / (arg4 + float.s(0x3727c5ac)) * fconvert.s(0.5f)
float v4 = *arg1 - arg3
float v5 = arg4 * arg5
float v7 = fconvert.s(1f)
float v6 = *arg2 + arg4 * v4
float v3 = v7 / (v5 + v7 + v5 * v5 * float.s(0x3ef5c28f) + v5 * v5 * v5 * float.s(0x3e70a3d7))
*arg1 = v3 * (v4 + v6 * arg5) + arg3
*arg2 = v3 * (*arg2 - arg4 * v6 * arg5)
