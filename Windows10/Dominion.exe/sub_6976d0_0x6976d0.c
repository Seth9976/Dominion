// 函数: sub_6976d0
// 地址: 0x6976d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm4_1 = arg3 - arg1
float xmm3_1 = arg4 - arg2
int32_t eax

if (not(arg7 >= 0f) && arg8 f< 0)
    sub_63b870(eax, &data_801800, "minSpacing.x >= 0 || minSpacing.y >= 0", 
        "C:\x\ax2017\Engine\UIDef.cpp", 0x228, "CalcSpacing")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_c = arg9

if (not(arg9 < 0f))
    var_c = _mm_max_ss(arg7, arg9)

float var_10 = arg10

if (not(arg10 < 0f))
    var_10 = _mm_max_ss(arg8, arg10)

float xmm2_1 = arg11 - 1f
float xmm1_3 = arg12 - 1f
float xmm7_2 = arg5 * arg11 + xmm2_1 * arg7
float xmm5_2 = arg6 * arg12 + xmm1_3 * arg8
xmm7_2 f- 0
eax:1.b =
    (xmm7_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_2, 0f) ? 1 : 0) << 2 | (xmm7_2 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm0_9

if (p_1)
    xmm0_9 = xmm4_1 / xmm7_2
else
    xmm0_9 = (zx.o(0)).d

xmm5_2 f- 0
eax:1.b =
    (xmm5_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_2, 0f) ? 1 : 0) << 2 | (xmm5_2 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm5_3

if (p_3)
    xmm5_3 = xmm3_1 / xmm5_2
else
    xmm5_3 = (zx.o(0)).d

if (not(0 f> arg7))
    if (not(0 f> arg8))
        xmm0_9 = _mm_min_ss(xmm0_9, xmm5_3)
    
    xmm5_3 = xmm0_9

xmm5_3 f- 0
eax:1.b =
    (xmm5_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_3, 0f) ? 1 : 0) << 2 | (xmm5_3 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (not(p_5))
    return 0

float xmm4_3

if (arg11 <= 1f)
    xmm4_3 = (zx.o(0)).d
else
    xmm4_3 = (xmm4_1 - arg5 * xmm5_3 * arg11) / xmm2_1

float xmm3_3

if (arg12 <= 1f)
    xmm3_3 = (zx.o(0)).d
else
    xmm3_3 = (xmm3_1 - arg6 * xmm5_3 * arg12) / xmm1_3

float xmm6_1 = 1f / xmm5_3
float xmm4_4 = _mm_min_ss(xmm4_3, xmm5_3 * var_c)
arg8 = _mm_min_ss(xmm3_3, xmm5_3 * var_10) * xmm6_1
return xmm4_4 * xmm6_1
