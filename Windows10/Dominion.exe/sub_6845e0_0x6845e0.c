// 函数: sub_6845e0
// 地址: 0x6845e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm6 = 1f - arg3[1]
float xmm5 = 1f - *arg3
float xmm4_1 = xmm6 * xmm5
float xmm2_2 = _mm_cvtepi32_ps(zx.o(arg4.b)) * xmm4_1
float xmm2_3

if (0 f<= xmm2_2)
    xmm2_3 = xmm2_2 + 0.5f
else
    xmm2_3 = xmm2_2 - 0.5f

float xmm2_6 = _mm_cvtepi32_ps(zx.o((arg4 u>> 8).b)) * xmm4_1
float xmm2_7

if (0 f<= xmm2_6)
    xmm2_7 = xmm2_6 + 0.5f
else
    xmm2_7 = xmm2_6 - 0.5f

float xmm2_10 = _mm_cvtepi32_ps(zx.o((arg4 u>> 0x10).b)) * xmm4_1
float xmm2_11

if (0 f<= xmm2_10)
    xmm2_11 = xmm2_10 + 0.5f
else
    xmm2_11 = xmm2_10 - 0.5f

float xmm2_14 = _mm_cvtepi32_ps(zx.o(arg4 u>> 0x18)) * xmm4_1
float xmm2_15

if (0 f<= xmm2_14)
    xmm2_15 = xmm2_14 + 0.5f
else
    xmm2_15 = xmm2_14 - 0.5f

float xmm7 = 1f - xmm5
uint32_t edx_6 =
    ((zx.d((int.d(xmm2_15)).b) << 8 | zx.d((int.d(xmm2_11)).b)) << 8 | zx.d((int.d(xmm2_7)).b)) << 8
    | zx.d(int.d(xmm2_3).b)
float xmm4_3 = xmm7 * xmm6
float xmm2_18 = _mm_cvtepi32_ps(zx.o(arg5.b)) * xmm4_3
float xmm2_19

if (0 f<= xmm2_18)
    xmm2_19 = xmm2_18 + 0.5f
else
    xmm2_19 = xmm2_18 - 0.5f

float xmm2_22 = _mm_cvtepi32_ps(zx.o((arg5 u>> 8).b)) * xmm4_3
float xmm2_23

if (0 f<= xmm2_22)
    xmm2_23 = xmm2_22 + 0.5f
else
    xmm2_23 = xmm2_22 - 0.5f

float xmm2_26 = _mm_cvtepi32_ps(zx.o((arg5 u>> 0x10).b)) * xmm4_3
float xmm2_27

if (0 f<= xmm2_26)
    xmm2_27 = xmm2_26 + 0.5f
else
    xmm2_27 = xmm2_26 - 0.5f

float xmm2_30 = _mm_cvtepi32_ps(zx.o(arg5 u>> 0x18)) * xmm4_3
float xmm2_31

if (0 f<= xmm2_30)
    xmm2_31 = xmm2_30 + 0.5f
else
    xmm2_31 = xmm2_30 - 0.5f

float xmm3 = 1f - xmm6
uint32_t eax_16 = ((zx.d((int.d(xmm2_31)).b) << 8 | zx.d((int.d(xmm2_27)).b)) << 8
    | zx.d((int.d(xmm2_23)).b)) << 8 | zx.d((int.d(xmm2_19)).b)
float xmm4_5 = xmm3 * xmm5
float xmm2_34 = _mm_cvtepi32_ps(zx.o(arg6.b)) * xmm4_5
float xmm2_35

if (0 f<= xmm2_34)
    xmm2_35 = xmm2_34 + 0.5f
else
    xmm2_35 = xmm2_34 - 0.5f

float xmm2_38 = _mm_cvtepi32_ps(zx.o((arg6 u>> 8).b)) * xmm4_5
float xmm2_39

if (0 f<= xmm2_38)
    xmm2_39 = xmm2_38 + 0.5f
else
    xmm2_39 = xmm2_38 - 0.5f

float xmm2_42 = _mm_cvtepi32_ps(zx.o((arg6 u>> 0x10).b)) * xmm4_5
float xmm2_43

if (0 f<= xmm2_42)
    xmm2_43 = xmm2_42 + 0.5f
else
    xmm2_43 = xmm2_42 - 0.5f

float xmm2_46 = _mm_cvtepi32_ps(zx.o(arg6 u>> 0x18)) * xmm4_5
float xmm2_47

if (0 f<= xmm2_46)
    xmm2_47 = xmm2_46 + 0.5f
else
    xmm2_47 = xmm2_46 - 0.5f

float xmm3_1 = xmm3 * xmm7
uint32_t ecx_34 = ((zx.d((int.d(xmm2_47)).b) << 8 | zx.d((int.d(xmm2_43)).b)) << 8
    | zx.d((int.d(xmm2_39)).b)) << 8 | zx.d(int.d(xmm2_35).b)
float xmm2_50 = _mm_cvtepi32_ps(zx.o(arg7.b)) * xmm3_1
float xmm2_51

if (0 f<= xmm2_50)
    xmm2_51 = xmm2_50 + 0.5f
else
    xmm2_51 = xmm2_50 - 0.5f

float xmm2_54 = _mm_cvtepi32_ps(zx.o((arg7 u>> 8).b)) * xmm3_1
float xmm2_55

if (0 f<= xmm2_54)
    xmm2_55 = xmm2_54 + 0.5f
else
    xmm2_55 = xmm2_54 - 0.5f

float xmm2_58 = _mm_cvtepi32_ps(zx.o((arg7 u>> 0x10).b)) * xmm3_1
float xmm2_59

if (0 f<= xmm2_58)
    xmm2_59 = xmm2_58 + 0.5f
else
    xmm2_59 = xmm2_58 - 0.5f

float xmm2_62 = _mm_cvtepi32_ps(zx.o(arg7 u>> 0x18)) * xmm3_1
float xmm2_63

if (0 f<= xmm2_62)
    xmm2_63 = xmm2_62 + 0.5f
else
    xmm2_63 = xmm2_62 - 0.5f

uint32_t esi = zx.d(int.d(xmm2_51).b)
uint32_t ebx_4 = zx.d((int.d(xmm2_55)).b)
uint32_t eax_34 =
    ((zx.d((int.d(xmm2_63)).b) << 8 | zx.d((int.d(xmm2_59)).b)) << 8 | ebx_4) << 8 | esi
uint32_t ebx_8 = zx.d(eax_16.b) + esi + zx.d(ecx_34.b) + zx.d(edx_6.b)

if (ebx_8 u> 0xff)
    ebx_8 = 0xff

arg4.b = ebx_8.b
uint32_t ebx_17 = zx.d((edx_6 u>> 8).b) + zx.d((eax_16 u>> 8).b) + ebx_4 + zx.d((ecx_34 u>> 8).b)

if (ebx_17 u> 0xff)
    ebx_17 = 0xff

arg4:1.b = ebx_17.b
uint32_t ebx_27 = zx.d((edx_6 u>> 0x10).b) + zx.d((eax_34 u>> 0x10).b) + zx.d((ecx_34 u>> 0x10).b)
    + zx.d((eax_16 u>> 0x10).b)

if (ebx_27 u> 0xff)
    ebx_27 = 0xff

arg4:2.b = ebx_27.b
uint32_t eax_38 = (eax_34 u>> 0x18) + (ecx_34 u>> 0x18) + (eax_16 u>> 0x18) + (edx_6 u>> 0x18)

if (eax_38 u> 0xff)
    eax_38 = 0xff

arg4:3.b = eax_38.b
return arg4
