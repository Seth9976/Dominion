// 函数: sub_6ef1a0
// 地址: 0x6ef1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

double xmm0 = fconvert.d(arg2)
char** var_20 = arg1
long double x87_r7 = fconvert.t(fconvert.d(arg2 + 0.5f))
floor(fconvert.d(x87_r7))

if (not(0x3ee4f8b580000000 f<= __andps_xmmxud_memxud(
        _mm_cvtps_pd(arg2 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r7)))), data_8937b0.o)))
    double var_38_1 = xmm0
    sub_63df30(arg1, "%.0f")
    return arg1

float xmm0_10 = arg2 * 10f
double var_28_1
var_28_1.d = xmm0_10
long double x87_r7_1 = fconvert.t(_mm_cvtps_pd(xmm0_10 + 0.5f))
floor(fconvert.d(x87_r7_1))

if (not(0x3ee4f8b580000000 f<= __andps_xmmxud_memxud(
        _mm_cvtps_pd(var_28_1.d - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r7_1)))), data_8937b0.o)))
    double var_38_3 = xmm0
    sub_63df30(arg1, "%.1f")
    return arg1

float xmm0_19 = arg2 * 100f
long double x87_r7_2 = fconvert.t(_mm_cvtps_pd(xmm0_19 + 0.5f))
floor(fconvert.d(x87_r7_2))
double var_38_5 = xmm0

if (9.9999997473787516e-06 <= __andps_xmmxud_memxud(
        _mm_cvtps_pd(xmm0_19 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r7_2)))), data_8937b0.o))
    sub_63df30(arg1, "%f")
    return arg1

sub_63df30(arg1, "%.2f")
return arg1
