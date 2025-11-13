// 函数: sub_6d7860
// 地址: 0x6d7860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm3 = arg6 - *arg9
float xmm0[0x2] = arg2[4]
double xmm2_1 = _mm_cvtps_pd(arg2[6])
double xmm1 = fconvert.d(xmm3)
double xmm0_1 = _mm_cvtps_pd(xmm0)
double _X = _mm_cvtps_pd(arg2[7]) * xmm1 + _mm_cvtps_pd(arg2[5])
double _Y
modf(xmm2_1 * xmm1 + xmm0_1, &_Y)
float var_bc = fconvert.s(arg7)
modf(_X, &_Y)
_Y.d = fconvert.s(arg8)
float xmm0_7[0x2] = xmm3 * arg2[3] + arg2[2]
int32_t var_104_1 = xmm0_7
double xmm0_8 = _mm_cvtps_pd(xmm0_7)
void var_108
_libm_sse2_sin_precise(arg5, arg4, var_108)
double var_c8
var_c8.d = fconvert.s(xmm0_8) ^ (data_8937c0.o).d
double xmm0_11 = _mm_cvtps_pd(var_104_1)
_libm_sse2_cos_precise()
float xmm2_4 = var_c8.d
float xmm1_1 = fconvert.s(xmm0_11)
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_54 = 0x3f800000
float xmm3_5[0x4] = data_8002c0
float var_64 = xmm1_1 * arg2[1]
float var_74 = xmm1_1 * *arg2
float xmm2_6 = (xmm2_4 ^ (data_8937c0.o).d) * arg2[1]
float var_68 = xmm2_4 * *arg2
float var_6c = var_bc
int32_t var_60 = _Y.d
float xmm0_20 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0x55) - 0.5f
float var_70 = xmm2_6
int128_t xmm2_7 = data_8002b0
int128_t var_100
__builtin_memcpy(&var_100, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
var_100:8.d = 0xbf000000
int128_t var_f0
var_f0:4.d = xmm0_20
int128_t var_50 = var_100
float xmm3_7 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0x55) + 0.5f
var_100 = xmm2_7
var_100:8.d = 0x3f000000
int128_t var_40 = var_f0
int128_t xmm0_23 = var_100
int32_t var_30 = 0x3f800000
int32_t var_90 = 0x3f800000
xmm3_5[1] = xmm3_7
int128_t var_b0 = xmm0_23
float var_a0[0x4] = xmm3_5
sub_4ac390(&var_74, &var_b0, &var_100, &var_74)
uint32_t result
uint32_t result_1 = result
var_b0 = var_100
float var_a0_1[0x4] = xmm3_5
sub_4ac390(&var_50, &var_b0, &var_100, &var_50)
*arg3 = var_100
arg3[1] = xmm3_5
arg3[2].d = result
CookieCheckFunction(result)
return result
