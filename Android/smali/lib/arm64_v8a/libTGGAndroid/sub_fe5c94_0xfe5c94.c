// 函数: sub_fe5c94
// 地址: 0xfe5c94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = fabs(arg1)
float v2 = fconvert.s(1f)

if (v1 >= v2)
    v2 = fconvert.s(2f)
    
    if (v1 >= v2)
        return 0f
    
    arg1 = v1 * (v1 * (v1 * fconvert.s(0.5f) + fconvert.s(-2.5f)) + fconvert.s(4f))
else
    arg1 = arg1 * arg1 * (v1 * fconvert.s(-1.5f) + fconvert.s(2.5f))

return v2 - arg1
