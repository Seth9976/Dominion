// 函数: sub_fe5b48
// 地址: 0xfe5b48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = fconvert.s(1f)

if (not(arg2 > v2))
    v2 = fconvert.s(0.5f)
    float v4 = arg2 * v2
    v2 = v4 + v2
    float v3 = fabs(arg1)
    arg1 = 0f
    
    if (not(v3 >= v2))
        arg1 = fconvert.s(1f)
        
        if (not(v3 <= fconvert.s(0.5f) - v4))
            return (v2 - v3) / arg2
    
    return arg1

int64_t lr
int64_t var_10 = lr
int64_t lr_1
float v0
lr_1, v0 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 0x2f8, 
    "float stbir__filter_trapezoid(float, float)", "scale <= 1", arg1, arg2, v2)

if (not(v0 > fconvert.s(1f)))
    float v1 = fconvert.s(0.5f)
    return v0 * v1 + v1

int64_t var_20 = lr_1
float v0_1 = fabs(__assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_resize.h", 0x30a, 
    "float stbir__support_trapezoid(float)", "scale <= 1"))
float v1_1 = fconvert.s(1f)

if (v0_1 > v1_1)
    return 0f

return v1_1 - v0_1
