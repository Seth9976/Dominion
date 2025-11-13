// 函数: sub_6dd960
// 地址: 0x6dd960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm3 = *arg1 f* data_8c4634
float xmm0 = arg1[1]
arg1[2] = xmm0
float i = xmm0 + xmm3
arg1[1] = i
int32_t var_8
int32_t result

if (xmm3 <= 0f)
    if (0 f<= xmm3)
        goto label_6dd9be
    
    result = arg1[7]
    
    if (result == 1)
        if (not(0 f< i))
            arg1[1] = 0
        
        goto label_6dd9be
    
    if (result != 0)
        char const* const var_4_1 = "AnimSetUpdateTime"
        var_8 = 0x11c
        goto label_6dda48
    
    if (0 f<= i)
        goto label_6dd9be
    
    do
        i = i + 1f
    while (0 f> i)
    
    goto label_6dd9b9

result = arg1[7]

if (result == 1)
    if (not(i < 1f))
        arg1[1] = 0x3f800000
    
    goto label_6dd9be

if (result != 0)
    char const* const var_4 = "AnimSetUpdateTime"
    var_8 = 0x107
label_6dda48:
    sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Engine\Animation.cpp", var_8, 
        "AnimSetUpdateTime")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

if (i <= 1f)
    goto label_6dd9be

do
    i = i - 1f
while (i > 1f)

label_6dd9b9:
arg1[1] = i
label_6dd9be:
float xmm0_1 = arg1[6]
float xmm3_1 = arg1[5]

if (xmm0_1 <= 0f)
    if (0 f<= xmm0_1)
        0 f- xmm3_1
        result.b = 0f < xmm3_1
        return result
    
    float xmm0_3 = xmm0_1 + xmm3_1
    arg1[5] = xmm0_3
    
    if (0f >= xmm0_3)
        result.b = 0
        return result
else
    float xmm0_2 = xmm0_1 + xmm3_1
    arg1[5] = xmm0_2
    
    if (not(xmm0_2 <= 1f))
        arg1[5] = 0x3f800000
        result.b = 1
        arg1[6] = 0
        return result

result.b = 1
return result
