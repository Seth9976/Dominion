// 函数: sub_6eee20
// 地址: 0x6eee20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0 = data_147d480
float xmm1 = data_147d484
float xmm0_1 = xmm0 - xmm1
int32_t var_2c
GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_2c)
ScreenToClient(data_147d470, &var_2c)
POINT point
ScreenToClient(data_147d470, &point)
uint128_t xmm0_2 = zx.o(arg1 - (var_2c + 0x16))
float xmm1_2 = _mm_cvtepi32_ps(zx.o(point.x - (var_2c + 0x16) - 8))
int32_t xmm0_5 = sub_6eed20(_mm_cvtepi32_ps(xmm0_2) / xmm1_2, 1f)
int32_t var_28
int32_t eax_7
int32_t xmm0_9
eax_7, xmm0_9 = sub_6eed20(
    (1f - _mm_cvtepi32_ps(zx.o(arg2 - (var_28 + 0xa)))
        / _mm_cvtepi32_ps(zx.o(point.y - (var_28 + 0xa) - 0x14))) * xmm0_1 + xmm1, 
    xmm0_1)
int32_t result = (zx.o(0)).d

if (not(0 f> xmm0_5))
    result = _mm_min_ss(0x3f800000, xmm0_5)

float xmm0_11 = xmm1

if (not(xmm0 < xmm0_11))
    if (not(xmm0_11 f> xmm0_9))
        xmm0_11 = _mm_min_ss(xmm0, xmm0_9)
    
    float var_10_1 = xmm0_11
    return result

sub_63b870(eax_7, &data_801800, "min <= max", "C:\x\ax2017\Engine\MathFunctions.cpp", 0xe6, "Clamp")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
