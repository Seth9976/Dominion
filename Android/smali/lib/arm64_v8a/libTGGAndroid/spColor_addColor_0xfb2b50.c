// 函数: spColor_addColor
// 地址: 0xfb2b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = arg1[1]
float v3 = *arg2 + *arg1
*arg1 = v3
float v1 = arg1[2]
float v4 = arg1[3]
v2 = arg2[1] f+ v2
arg1[1] = v2
v1 = arg2[2] f+ v1
arg1[2] = v1
float result = arg2[3] f+ v4
v4 = 0f
arg1[3] = result

if (not(v3 < 0f))
    v4 = fconvert.s(1f)

if (v3 < 0f || not(v3 <= v4))
    *arg1 = v4

v3 = 0f

if (not(v2 < 0f))
    v3 = fconvert.s(1f)

if (v2 < 0f || not(v2 <= v3))
    arg1[1] = v3

v2 = 0f

if (not(v1 < 0f))
    v2 = fconvert.s(1f)

if (v1 < 0f || not(v1 <= v2))
    arg1[2] = v2

v1 = 0f

if (not(result < 0f))
    v1 = fconvert.s(1f)

if (result < 0f || not(result <= v1))
    arg1[3] = v1

return result
