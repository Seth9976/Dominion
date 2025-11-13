// 函数: spColor_addFloats
// 地址: 0xfb2bfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v5 = *arg1 + arg2
float v4 = arg1[1] f+ arg3
arg3 = arg1[2] f+ arg4
arg2 = arg1[3] f+ arg5
arg4 = 0f
*arg1 = v5
arg1[1] = v4
arg1[2] = arg3
arg1[3] = arg2

if (not(v5 < 0f))
    arg4 = fconvert.s(1f)

if (v5 < 0f || not(v5 <= arg4))
    *arg1 = arg4

arg4 = 0f

if (not(v4 < 0f))
    arg4 = fconvert.s(1f)

if (v4 < 0f || not(v4 <= arg4))
    arg1[1] = arg4

arg4 = 0f

if (not(arg3 < 0f))
    arg4 = fconvert.s(1f)

if (arg3 < 0f || not(arg3 <= arg4))
    arg1[2] = arg4

arg3 = 0f

if (not(arg2 < 0f))
    arg3 = fconvert.s(1f)

if (arg2 < 0f || not(arg2 <= arg3))
    arg1[3] = arg3

return arg2
