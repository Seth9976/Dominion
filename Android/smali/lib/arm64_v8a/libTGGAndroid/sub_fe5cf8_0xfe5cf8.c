// 函数: sub_fe5cf8
// 地址: 0xfe5cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = fabs(arg1)

if (v1 >= fconvert.s(1f))
    if (v1 >= fconvert.s(2f))
        return 0f
    
    arg1 = v1 * (v1 * (v1 * fconvert.s(-7f) + float.s(0x42100000)) + float.s(0xc2700000))
        + float.s(0x42000000)
else
    arg1 = arg1 * arg1 * (v1 * fconvert.s(21f) + float.s(0xc2100000)) + fconvert.s(16f)

return arg1 / fconvert.s(18f)
