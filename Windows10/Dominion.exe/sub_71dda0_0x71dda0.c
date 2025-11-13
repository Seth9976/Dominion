// 函数: sub_71dda0
// 地址: 0x71dda0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm3_1 = _mm_cvtepi32_ps(zx.o(arg6))
int32_t var_d0 = arg6
int32_t var_a4 = arg12
int32_t var_e0 = arg3
int32_t var_dc = arg4
int32_t var_cc = arg7
float xmm4_1 = xmm3_1 / _mm_cvtepi32_ps(zx.o(arg3))
float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg7))
float var_c0 = arg9
float var_b8 = arg11
float xmm6_1 = arg11 - arg9
float var_bc = arg10
float xmm5_1 = arg10 - arg8
float xmm2_3 = xmm1_1 / _mm_cvtepi32_ps(zx.o(arg4)) / xmm6_1
float xmm4_2 = xmm4_1 / xmm5_1
int32_t ecx_1
ecx_1.b = xmm4_2 <= 1f
int32_t var_94 = ecx_1 + 4
int32_t eax_1
eax_1.b = xmm2_3 <= 1f
int32_t var_90 = eax_1 + 4
float var_c4 = arg8
float var_ac = xmm4_2
float var_a8 = xmm2_3
float var_b4 = xmm3_1 * arg8 / xmm5_1
float var_b0 = xmm1_1 * arg9 / xmm6_1
void var_e4
uint32_t _Size = sub_71d730(&var_e4)
int32_t eax_3
int32_t ecx_4
eax_3, ecx_4 = malloc(_Size)

if (eax_3 == 0)
    return eax_3

uint32_t _Size_1 = _Size
int32_t var_f8 = eax_3
void var_114
long double x87_r2
long double x87_r3
int32_t eax_4 = sub_71d8c0(eax_3, arg2, &var_e4, x87_r2, x87_r3, ecx_4, arg5, var_114)
free(eax_3)
return eax_4
