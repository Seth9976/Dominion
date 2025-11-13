// 函数: sub_6565b0
// 地址: 0x6565b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 == 0xd)
    return arg10

float xmm4_1 = arg6 - arg4
float xmm3_1 = arg7 - arg5
float var_c
float xmm6

if (0f > arg10 || 0 f> arg11)
    xmm6 = arg12
    var_c = arg13
else
    if (not(arg10 f>= 0) && arg11 f< 0)
        sub_63b870(arg1, &data_801800, "minSpacing.x >= 0 || minSpacing.y >= 0", 
            "C:\x\ax2017\Engine\UI2.cpp", 0x1c42, "UI2CalcSpacing")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    xmm6 = arg12
    
    if (not(xmm6 f< 0))
        xmm6 = _mm_max_ss(arg10, xmm6)
    
    var_c = arg13
    
    if (not(arg13 < 0f))
        var_c = _mm_max_ss(arg11, arg13)

float xmm7_2 = arg15 - 1f
float xmm2_1 = arg14 - 1f
float xmm7_4 = xmm2_1 * arg10 + arg8 * arg14
float xmm5_7 = xmm7_2 * arg11 + arg9 * arg15
xmm7_4 f- 0
arg1:1.b =
    (xmm7_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2 | (xmm7_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm0_7

if (p_1)
    xmm0_7 = xmm4_1 / xmm7_4
else
    xmm0_7 = (zx.o(0)).d

xmm5_7 f- 0
arg1:1.b =
    (xmm5_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_7, 0f) ? 1 : 0) << 2 | (xmm5_7 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm5_8

if (p_3)
    xmm5_8 = xmm3_1 / xmm5_7
else
    xmm5_8 = (zx.o(0)).d

if (0f <= arg10 || not(arg14 > 1f))
    if (0 f<= arg11 || not(arg15 > 1f))
        xmm0_7 = _mm_min_ss(xmm0_7, xmm5_8)
    
    xmm5_8 = xmm0_7

xmm5_8 f- 0
arg1:1.b =
    (xmm5_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_8, 0f) ? 1 : 0) << 2 | (xmm5_8 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (not(p_5))
    return 0

float xmm4_3

if (arg14 <= 1f)
    xmm4_3 = (zx.o(0)).d
else
    xmm4_3 = (xmm4_1 - arg8 * xmm5_8 * arg14) / xmm2_1

float xmm3_3

if (arg15 <= 1f)
    xmm3_3 = (zx.o(0)).d
else
    xmm3_3 = (xmm3_1 - arg9 * xmm5_8 * arg15) / xmm7_2

int32_t xmm4_4 = _mm_min_ss(xmm4_3, xmm5_8 * xmm6)
int32_t xmm3_4 = _mm_min_ss(xmm3_3, xmm5_8 * var_c)
float xmm4_5 = _mm_max_ss(xmm4_4, xmm5_8 * arg10)
float xmm0_17 = 1f / xmm5_8
float var_18_1 = _mm_max_ss(xmm3_4, xmm5_8 * arg11) * xmm0_17
return xmm4_5 * xmm0_17
