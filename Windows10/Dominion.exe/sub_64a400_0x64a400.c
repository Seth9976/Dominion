// 函数: sub_64a400
// 地址: 0x64a400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
float xmm0_4 = arg1.d
float xmm7 = arg7:4.d
float xmm3_1 = xmm0_4 f- arg3.d
float xmm6 = arg7.d
float xmm0_5 = arg1:4.d
float xmm2_1 = xmm0_5 f- arg3:4.d
float xmm1_1 = arg2 - arg4
float xmm5_3 = (xmm7 * xmm1_1 - arg8 * xmm2_1) ^ (data_8937c0.o).d
float var_88 = xmm5_3
float xmm4_3 = (arg8 * xmm3_1 - xmm6 * xmm1_1) ^ (data_8937c0.o).d
float var_9c = xmm4_3
float xmm6_3 = (xmm6 * xmm2_1 - xmm7 * xmm3_1) ^ 0x80000000
float var_84 = xmm6_3
float var_90 = 0f

if (not(xmm4_3 f* arg5:4.d + xmm5_3 f* arg5.d + xmm6_3 * arg6 f<= 0))
    var_9c = xmm4_3 ^ 0x80000000
    var_88 = xmm5_3 ^ 0x80000000
    var_84 = xmm6_3 ^ 0x80000000

float xmm1_6 = arg7.d
float xmm0_21 = sub_4ac580(ebp, xmm7 * xmm7 + xmm1_6 * xmm1_6 + arg8 * arg8)
float var_98 = 1f
float var_8c
float var_80
int64_t var_60
float xmm0_22

if (9.99999975e-06f <= xmm0_21)
    float xmm0_23 = 1f / (xmm0_21 + 9.99999975e-06f)
    float xmm1_13 = arg7:4.d * xmm0_23
    float xmm3_3 = arg7.d * xmm0_23
    float xmm2_3 = arg8 * xmm0_23
    var_60.d = xmm2_3
    float xmm1_19 = var_98 / sub_4ac580(ebp, xmm1_13 * xmm1_13 + xmm3_3 * xmm3_3 + xmm2_3 * xmm2_3)
    var_80 = xmm1_19 * xmm3_3
    xmm0_22 = xmm1_19 * xmm1_13
    var_8c = xmm1_19 f* var_60.d
else
    xmm0_22 = var_90
    var_80 = xmm0_22
    var_8c = xmm0_22

float xmm0_36 = sub_4ac580(ebp, var_88 * var_88 + var_9c * var_9c + var_84 * var_84)
float var_98_1
float xmm0_37

if (9.99999975e-06f <= xmm0_36)
    float xmm0_39 = var_98 / (xmm0_36 + 9.99999975e-06f)
    float xmm1_28 = var_9c * xmm0_39
    float xmm2_6 = var_88 * xmm0_39
    float xmm3_5 = var_84 * xmm0_39
    float xmm3_7 = var_98 / sub_4ac580(ebp, xmm1_28 * xmm1_28 + xmm2_6 * xmm2_6 + xmm3_5 * xmm3_5)
    var_90 = xmm3_7 * xmm2_6
    xmm0_37 = xmm3_7 * xmm1_28
    var_98_1 = xmm3_7 * xmm3_5
else
    xmm0_37 = var_90
    var_98_1 = xmm0_37

int32_t eax_6
int32_t edx
eax_6, edx = sub_6b7590(5)
var_60.d = eax_6
var_60:4.d = edx
int64_t xmm3_9 = arg14
float xmm2_8[0x4] = arg16
int32_t* ecx_1 = *sub_5af880(arg9)
int64_t xmm2_9 = _mm_unpacklo_ps(xmm2_8, xmm3_9)
int32_t eax_8 = *ecx_1
float xmm1_34 = ecx_1[3] f* ecx_1[2]
int32_t eax_10 = ecx_1[1]
int64_t var_50
var_50.o = _mm_cvtpd_ps(float.d(eax_8) f+ *((eax_8 u>> 0x1f << 3) + &data_893660)) * xmm1_34
uint32_t result = eax_10 u>> 0x1f
int128_t xmm0_55 = _mm_cvtpd_ps(float.d(eax_10) f+ *((result << 3) + &data_893660)) * xmm1_34
float xmm7_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(xmm2_8, xmm3_9), xmm2_9)
int64_t var_30
var_30.o = xmm0_55
int64_t xmm6_6 = _mm_unpacklo_ps(arg13, arg15)
float xmm0_57[0x4] = var_60.d
float xmm6_8[0x4] = _mm_sub_ps(xmm6_6 | xmm6_6 << 0x40, _mm_shuffle_ps(xmm0_57, xmm0_57, 0))
float xmm0_59[0x4] = var_60:4.d
float xmm7_4[0x4] = _mm_sub_ps(xmm7_3, _mm_shuffle_ps(xmm0_59, xmm0_59, 0))
float xmm5_6[0x4] = _mm_shuffle_ps(xmm6_8, xmm6_8, 0xe5)
int64_t var_40
var_40.o = xmm7_4
float xmm4_6[0x4] = _mm_unpackhi_ps(xmm5_6, xmm5_6)
float xmm7_5[0x4] = __shufps_xmmps_memps_immb(xmm7_4, var_40.o, 0xe5)
int64_t xmm0_62 = _mm_unpackhi_ps(xmm4_6, xmm4_6)
float xmm3_11[0x4] = _mm_unpackhi_ps(xmm7_5, xmm7_5)
int64_t xmm1_37 = _mm_unpacklo_ps(xmm5_6, xmm0_62)
float xmm0_64[0x4] = arg11
float xmm6_10[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(xmm6_8, xmm4_6[0].q), xmm1_37)
float xmm1_38[0x4] = var_50.o
float xmm0_65[0x4] = _mm_shuffle_ps(xmm0_64, xmm0_64, 0)
float xmm6_11[0x4] = _mm_mul_ps(xmm6_10, _mm_mul_ps(_mm_shuffle_ps(xmm1_38, xmm1_38, 0), xmm0_65))
float xmm0_67[0x4] = _mm_shuffle_ps(xmm6_11, xmm6_11, 0xe5)
float xmm1_42[0x4] = _mm_unpackhi_ps(xmm0_67, xmm0_67)
var_50.o = xmm0_67
float xmm0_69 = _mm_unpackhi_ps(xmm1_42, xmm1_42)
int64_t xmm0_71 = _mm_unpackhi_ps(xmm3_11, xmm3_11)
var_60.o = xmm1_42
float xmm3_14[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(var_40.d, xmm3_11[0].q), _mm_unpacklo_ps(xmm7_5, xmm0_71))
float xmm1_45[0x4] = var_30.o
float xmm0_73[0x4] = arg12
float xmm1_47[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(xmm1_45, xmm1_45, 0), _mm_shuffle_ps(xmm0_73, xmm0_73, 0))
float xmm0_76 = xmm6_11[0] * var_80
float xmm3_15[0x4] = _mm_mul_ps(xmm3_14, xmm1_47)
float xmm2_13[0x4] = _mm_shuffle_ps(xmm3_15, xmm3_15, 0xe5)
float xmm4_8[0x4] = _mm_unpackhi_ps(xmm2_13, xmm2_13)
float xmm7_7 = _mm_unpackhi_ps(xmm4_8, xmm4_8)
*arg10 = (var_90 f* xmm3_15 + xmm0_76) * 0.00999999978f + xmm0_4
arg10[1] = (xmm0_37 f* xmm3_15 + xmm0_22 f* xmm6_11) * 0.00999999978f + xmm0_5
arg10[2] = (var_98_1 f* xmm3_15 + var_8c f* xmm6_11) * 0.00999999978f + arg2
float xmm3_16 = var_50.d
arg10[3] = (var_80 * xmm3_16 + var_90 f* xmm2_13) * 0.00999999978f + xmm0_4
arg10[4] = (xmm3_16 * xmm0_22 + xmm0_37 f* xmm2_13) * 0.00999999978f + xmm0_5
float xmm1_73 = xmm4_8[0]
arg10[5] = (xmm3_16 * var_8c + var_98_1 f* xmm2_13) * 0.00999999978f + arg2
float xmm2_14 = var_60.d
arg10[6] = (xmm1_73 * var_90 + var_80 * xmm2_14) * 0.00999999978f + xmm0_4
arg10[7] = (xmm4_8[0] * xmm0_37 + xmm0_22 * xmm2_14) * 0.00999999978f + xmm0_5
arg10[8] = (xmm4_8 f* var_98_1 + var_8c * xmm2_14) * 0.00999999978f + arg2
arg10[9] = (var_80 * xmm0_69 + var_90 * xmm7_7) * 0.00999999978f + xmm0_4
arg10[0xa] = (xmm0_37 * xmm7_7 + xmm0_22 * xmm0_69) * 0.00999999978f + xmm0_5
arg10[0xb] = (var_98_1 * xmm7_7 + var_8c * xmm0_69) * 0.00999999978f + arg2
CookieCheckFunction(result)
return result
