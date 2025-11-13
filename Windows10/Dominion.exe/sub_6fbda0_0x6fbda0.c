// 函数: sub_6fbda0
// 地址: 0x6fbda0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
memset(arg2, 0, 0x38)
float var_34
int32_t var_30
_libm_sse2_tan_precise(arg1, var_34.w, var_30)
bool cond:0 = data_147df8c != 2
void* eax_2 = data_cf65b8
*arg2 = fconvert.s(0.52359879016876221)
uint128_t xmm0_2 = zx.o(*(eax_2 + 0x14))
float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x18)))
arg2[2] = 0x3e4ccccd
arg2[3] = 0x447a0000
arg2[1] = xmm1_1 / _mm_cvtepi32_ps(xmm0_2)
arg2[4] = 0x3f800000
float var_18
int64_t* const edx
float xmm0_7
float xmm1_4

if (cond:0)
    *(arg2 + 0x24) = data_147df0c.q
    arg2[0xb] = data_147df14
    float xmm1_6 = data_147df1c f- data_147df10
    float xmm2_2 = data_147df18 f- data_147df0c
    float xmm3_2 = data_147df20 f- data_147df14
    var_34 = xmm2_2
    edx = &data_7fef8c
    float xmm1_11 = 1f / sub_4ac580(ebp, xmm1_6 * xmm1_6 + xmm2_2 * xmm2_2 + xmm3_2 * xmm3_2)
    var_18 = xmm1_11 * var_34
    xmm0_7 = xmm1_11 * xmm1_6
    xmm1_4 = xmm1_11 * xmm3_2
else
    *(arg2 + 0x24) = 0
    arg2[0xb] = 0x3f800000
    edx = &data_7fef98
    float xmm1_3 = 1f / sub_4ac580(ebp, 1f)
    xmm1_4 = xmm1_3 * -1f
    xmm0_7 = xmm1_3 * 0f
    var_18 = xmm0_7

float var_14 = xmm0_7
float var_10 = xmm1_4
void var_28
*(arg2 + 0x14) = *sub_4ac9c0(&var_28, edx, &var_18, &var_28)
CookieCheckFunction(arg2)
return arg2
