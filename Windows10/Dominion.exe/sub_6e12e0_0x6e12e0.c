// 函数: sub_6e12e0
// 地址: 0x6e12e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm7 = arg2[3]
float xmm2[0x4] = *arg5
float xmm0_1 = *arg2 f* xmm2
float xmm3_1 = _mm_shuffle_ps(xmm2, xmm2, 0xff)
float xmm4_1 = _mm_shuffle_ps(xmm2, xmm2, 0x55)
float xmm5_1 = _mm_shuffle_ps(xmm2, xmm2, 0xaa)
float var_30

if (not(0 f<= xmm7 * xmm3_1 + xmm0_1 + arg2[1] f* xmm4_1 + arg2[2] f* xmm5_1))
    var_30 = xmm2 f* -1f
    var_30.o = var_30.o
    xmm3_1 = xmm3_1 * -1f
    xmm5_1 = xmm5_1 * -1f
    xmm4_1 = xmm4_1 * -1f
    xmm2 = var_30

float xmm4_5 = (xmm4_1 f- arg2[1]) * arg4 f+ arg2[1]
float xmm5_5 = (xmm5_1 f- arg2[2]) * arg4 f+ arg2[2]
var_30 = (xmm2 f- *arg2) * arg4 f+ *arg2
float var_2c_2 = xmm4_5
float var_28_2 = xmm5_5
float var_24_2 = (xmm3_1 - xmm7) * arg4 + xmm7
*arg3 = var_30.o
float xmm1_8 = (*(arg5 + 0x18) f- arg2[6]) * arg4 f+ arg2[6]
arg3[1].d = (arg5[1].d f- arg2[4]) * arg4 f+ arg2[4]
*(arg3 + 0x14) = (*(arg5 + 0x14) f- arg2[5]) * arg4 f+ arg2[5]
*(arg3 + 0x18) = xmm1_8
float xmm2_12 = (arg5[2].d f- arg2[8]) * arg4 f+ arg2[8]
float xmm1_12 = (*(arg5 + 0x24) f- arg2[9]) * arg4 f+ arg2[9]
*(arg3 + 0x1c) = (*(arg5 + 0x1c) f- arg2[7]) * arg4 f+ arg2[7]
arg3[2].d = xmm2_12
*(arg3 + 0x24) = xmm1_12
int128_t* result
result.b = *(arg5 + 0x28)

if (arg2[0xa].b == result.b)
    *(arg3 + 0x28) = result.b
    CookieCheckFunction(result)
    return result

sub_63b870(result, &data_801800, "tFirst.propegatesScale == tSecond.propegatesScale", 
    "C:\x\ax2017\Engine\BoneTransform.h", 0x40, "BoneTransformLerp")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
