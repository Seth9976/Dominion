// 函数: sub_5a0e40
// 地址: 0x5a0e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t* ecx_1 = *sub_5af880(ecx)
int32_t eax_1 = *ecx_1
float xmm1_1 = ecx_1[3] f* ecx_1[2]
double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_1 u>> 0x1f << 3) + &data_893660)
int32_t eax_3 = ecx_1[1]
float result = _mm_cvtpd_ps(xmm0_2) * xmm1_1
float var_c =
    _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_893660)) * xmm1_1
return result
