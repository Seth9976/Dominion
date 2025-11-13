// 函数: sub_5af6f0
// 地址: 0x5af6f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edi = arg1
arg1.b = *edi
float xmm1_2 = _mm_cvtepi32_ps(zx.o(zx.d(*arg2) - zx.d(arg1.b))) * arg3
float xmm1_3

if (0 f<= xmm1_2)
    xmm1_3 = xmm1_2 + 0.5f
else
    xmm1_3 = xmm1_2 - 0.5f

int32_t ebx
ebx.b = edi[1]
float xmm1_6 = _mm_cvtepi32_ps(zx.o(zx.d(arg2[1]) - zx.d(ebx.b))) * arg3
float xmm1_7

if (0 f<= xmm1_6)
    xmm1_7 = xmm1_6 + 0.5f
else
    xmm1_7 = xmm1_6 - 0.5f

char eax_3 = edi[2]
float xmm1_10 = _mm_cvtepi32_ps(zx.o(zx.d(arg2[2]) - zx.d(eax_3))) * arg3
float xmm1_11

if (0 f<= xmm1_10)
    xmm1_11 = xmm1_10 + 0.5f
else
    xmm1_11 = xmm1_10 - 0.5f

uint32_t eax_4
eax_4.b = edi[3]
float xmm1_14 = _mm_cvtepi32_ps(zx.o(zx.d(arg2[3]) - zx.d(eax_4.b))) * arg3
float xmm1_15

if (0 f<= xmm1_14)
    xmm1_15 = xmm1_14 + 0.5f
else
    xmm1_15 = xmm1_14 - 0.5f

uint32_t result = ((zx.d((int.d(xmm1_15)).b + eax_4.b) << 8 | zx.d((int.d(xmm1_11)).b + eax_3)) << 8
    | zx.d((int.d(xmm1_7)).b + ebx.b)) << 8 | zx.d((int.d(xmm1_3)).b + arg1.b)
return result
