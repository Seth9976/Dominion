// 函数: sub_655800
// 地址: 0x655800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* eax_2 = data_cf65b8
float xmm1 = data_cf65c0
int32_t var_60 = 0
uint128_t xmm2 = zx.o(*(eax_2 + 0x14))
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x18)))
int32_t var_38 = data_cf65e0:0xc
int32_t var_5c = 0
float xmm2_1 = _mm_cvtepi32_ps(xmm2)
float var_54 = xmm0_1
float var_58 = xmm2_1
float xmm2_3 = xmm2_1 / xmm0_1 * xmm1
float var_20 = xmm2_3
float xmm0_3 = xmm2_3 ^ (data_8937c0.o).d
int32_t var_24 = xmm1 ^ (data_8937c0.o).d
int64_t var_40 = data_cf65e0:4.q
int128_t var_70 = xmm0_3.o
int128_t var_50 = data_cf65d0:4.o
void var_88
void arg_8
int64_t* eax_5 = sub_6dc460(&var_88, &arg_8, &var_70, &var_88)
float xmm2_4[0x4] = *eax_5
var_20.q = eax_5[2]
int64_t var_30 = xmm2_4[0].q
float xmm2_5 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xff)
uint32_t xmm6_3[0x4] = var_20 * 0f + xmm2_5 * 0f + xmm1
bool cond:0 = 9.99999975e-06f > __andps_xmmxud_memxud(xmm6_3, data_8937a0.o)
float xmm0_11 = var_30:4.d
float xmm1_8

if (not(cond:0))
    xmm1_8 = xmm0_11 * 0f + var_30.d * 0f + xmm0_3 + -0f

float xmm1_10

if (cond:0 || 0 f< xmm1_8 f* xmm6_3)
    xmm1_10 = xmm0_11
else
    xmm1_10 = (xmm1_8 ^ (data_8937c0.o).d) f/ xmm6_3

*arg1 = xmm2_5 * xmm1_10 f+ var_30.d
arg1[1] = var_20 * xmm1_10 + xmm0_11
arg1[2] = xmm1 * xmm1_10 + xmm0_3
CookieCheckFunction(arg1)
return arg1
