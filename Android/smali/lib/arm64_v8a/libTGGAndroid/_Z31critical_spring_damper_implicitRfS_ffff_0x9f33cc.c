// 函数: _Z31critical_spring_damper_implicitRfS_ffff
// 地址: 0x9f33cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg5 = float.s(0x40317218) / (arg5 + float.s(0x3727c5ac))
float v6 = arg5 * fconvert.s(0.5f)
arg4 = arg5 * arg4 / (arg5 * arg5 * fconvert.s(0.25f))
arg5 = v6 * arg6
float v4 = fconvert.s(1f)
arg3 = arg4 + arg3
float v7 = *arg1 - arg3
arg4 = arg5 + v4 + arg5 * arg5 * float.s(0x3ef5c28f) + arg5 * arg5 * arg5 * float.s(0x3e70a3d7)
arg5 = *arg2 + v6 * v7
arg4 = v4 / arg4
*arg1 = arg3 + arg4 * (v7 + arg5 * arg6)
*arg2 = arg4 * (*arg2 - v6 * arg5 * arg6)
