// 函数: spColor_setFromFloats
// 地址: 0xfb2a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v4 = 0f
*arg1 = arg2
arg1[1] = arg3
arg1[2] = arg4
arg1[3] = arg5

if (not(arg2 < 0f))
    v4 = fconvert.s(1f)

if (arg2 < 0f || not(arg2 <= v4))
    *arg1 = v4

arg2 = 0f

if (not(arg3 < 0f))
    arg2 = fconvert.s(1f)

if (arg3 < 0f || not(arg3 <= arg2))
    arg1[1] = arg2

arg2 = 0f

if (not(arg4 < 0f))
    arg2 = fconvert.s(1f)

if (arg4 < 0f || not(arg4 <= arg2))
    arg1[2] = arg2

arg2 = 0f

if (not(arg5 < 0f))
    arg2 = fconvert.s(1f)

if (arg5 < 0f || not(arg5 <= arg2))
    arg1[3] = arg2

return arg2
