// 函数: sub_fe5c18
// 地址: 0xfe5c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = fabs(arg1)

if (not(v1 >= fconvert.s(1f)))
    return (arg1 * arg1 * (v1 * fconvert.s(3f) + fconvert.s(-6f)) + fconvert.s(4f)) / fconvert.s(6f)

if (v1 >= fconvert.s(2f))
    return 0f

arg1 = fconvert.s(6f)
return (v1 * (v1 * (arg1 - v1) + fconvert.s(-12f)) + fconvert.s(8f)) / arg1
