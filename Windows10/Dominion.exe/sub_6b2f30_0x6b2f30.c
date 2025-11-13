// 函数: sub_6b2f30
// 地址: 0x6b2f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm5 = arg2[1]
float xmm4 = *arg2
float xmm2_2 = (xmm5 + xmm4) f* data_17774f8
float xmm2_3 = xmm2_2 + xmm5
float xmm1_1 = xmm2_2 + xmm4
int32_t eax_3 = int.d(xmm1_1)
int32_t ebx = eax_3 - 1

if (_mm_cvtepi32_ps(zx.o(eax_3)) f<= xmm1_1)
    ebx = eax_3

int32_t eax_4 = int.d(xmm2_3)
uint32_t edi = zx.d(ebx.b)
int32_t edx = eax_4 - 1
bool cond:0 = _mm_cvtepi32_ps(zx.o(eax_4)) <= xmm2_3
float xmm2_4 = data_17774fc

if (cond:0)
    edx = eax_4

float xmm0_5 = _mm_cvtepi32_ps(zx.o(ebx))
uint32_t ebx_1 = zx.d(edx.b)
float xmm1_4 = _mm_cvtepi32_ps(zx.o(edx + ebx)) * xmm2_4
float xmm4_1 = xmm4 - (xmm0_5 - xmm1_4)
float xmm5_1 = xmm5 - (_mm_cvtepi32_ps(zx.o(edx)) - xmm1_4)
int32_t ecx
ecx.b = xmm4_1 <= xmm5_1
int32_t eax_6
eax_6.b = xmm4_1 > xmm5_1
int32_t eax_8 = *(arg1 + ((ecx + ebx_1) << 2))
int32_t ecx_1
ecx_1.b = xmm4_1 > xmm5_1
float xmm3_2 = xmm4_1 - _mm_cvtepi32_ps(zx.o(eax_6)) + xmm2_4
float xmm1_7 = xmm5_1 - _mm_cvtepi32_ps(zx.o(ecx)) + xmm2_4
float xmm2_5 = xmm2_4 * 2f
uint32_t result = *(arg1 + (ebx_1 << 2) + 4) + edi
int32_t ecx_3 = *(arg1 + (result << 2) + 0x804)
float xmm6_2 = xmm4_1 - 1f + xmm2_5
float xmm7_2 = xmm5_1 - 1f + xmm2_5

if (0 f<= 0.5f - xmm4_1 * xmm4_1 - xmm5_1 * xmm5_1)
    result = *(arg1 + ((*(arg1 + (ebx_1 << 2)) + edi) << 2) + 0x800) * 3
    *((result << 2) + &data_caf788)

if (0 f<= 0.5f - xmm3_2 * xmm3_2 - xmm1_7 * xmm1_7)
    result = *(arg1 + ((eax_8 + ecx_1 + 0x200 + edi) << 2)) * 3
    *((result << 2) + &data_caf788)

if (not(0 f> 0.5f - xmm6_2 * xmm6_2 - xmm7_2 * xmm7_2))
    result = ecx_3 * 3
    *((result << 2) + &data_caf788)

CookieCheckFunction(result)
return result
