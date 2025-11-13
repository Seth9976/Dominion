// 函数: sub_6ab610
// 地址: 0x6ab610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg1[1]
int32_t ebx = arg1[2]
float xmm0_3[0x2] = _mm_cvtepi32_ps(zx.o(edi)) * arg2 - 0.5f
long double x87_r7 = fconvert.t(_mm_cvtps_pd(xmm0_3))
floor(fconvert.d(x87_r7))
double var_68
var_68.d = fconvert.s(x87_r7)
float xmm0_8[0x2] = _mm_cvtepi32_ps(zx.o(ebx)) * arg3 - 0.5f
float var_60
var_60.q = _mm_cvtps_pd(xmm0_8)
long double x87_r7_1 = fconvert.t(var_60.q)
floor(fconvert.d(x87_r7_1))
float xmm1 = var_68.d
float var_60_1 = fconvert.s(x87_r7_1)
float xmm0_11

if (0f <= xmm1)
    xmm0_11 = xmm1 + 0.5f
else
    xmm0_11 = xmm1 - 0.5f

int32_t ecx = int.d(xmm0_11)
var_68.d = ecx
float xmm0_13

if (0f <= var_60_1)
    xmm0_13 = var_60_1 + 0.5f
else
    xmm0_13 = var_60_1 - 0.5f

int32_t eax_1 = edi + ecx
int32_t esi = int.d(xmm0_13)

if (ecx s>= 0)
    eax_1 = ecx

int32_t ebx_2 = eax_1 - edi

if (eax_1 s< edi)
    ebx_2 = eax_1

float xmm0_15 = xmm0_3 - xmm1
float xmm1_2 = xmm0_8 - var_60_1
float xmm3 = 1f - xmm0_15
float xmm2_1 = 1f - xmm1_2
int32_t ecx_1

if (esi s>= 0)
    ecx_1 = esi
    
    if (esi s> ebx - 1)
        ecx_1 = ebx - 1
else
    ecx_1 = 0

int32_t eax_7 = var_68.d
int32_t ecx_3 = eax_7 + 1 + edi

if (eax_7 + 1 s>= 0)
    ecx_3 = eax_7 + 1

int32_t eax_10 = ecx_3 - edi

if (ecx_3 s< edi)
    eax_10 = ecx_3

var_68.d = eax_10
int32_t ecx_4

if (esi s>= 0)
    ecx_4 = esi
    
    if (esi s> ebx - 1)
        ecx_4 = ebx - 1
else
    ecx_4 = 0

int32_t ecx_5 = esi + 1
int32_t var_4c = *(arg1[3] * ecx_4 + *arg1 + (var_68.d << 2))
int32_t esi_1

if (ecx_5 s>= 0)
    esi_1 = ecx_5
    
    if (ecx_5 s> ebx - 1)
        esi_1 = ebx - 1
else
    esi_1 = 0

int32_t esi_2 = *arg1
int32_t var_48 = *(arg1[3] * esi_1 + esi_2 + (ebx_2 << 2))

if (ecx_5 s< 0)
    ecx_5 = 0
else if (ecx_5 s> ebx - 1)
    ecx_5 = ebx - 1

uint32_t xmm4[0x4] = data_891990
float xmm3_1[0x4] = data_8936c0
int32_t var_44 = *(arg1[3] * ecx_5 + esi_2 + (var_68.d << 2))
uint32_t xmm2_2[0x4] = (*(arg1[3] * ecx_1 + *arg1 + (ebx_2 << 2))).o
uint32_t xmm1_4[0x4] = _mm_srli_epi32(xmm2_2, 0x18)
float xmm5[0x4] = _mm_cvtepi32_ps(_mm_srli_epi32(xmm1_4, 8))
uint32_t xmm0_19[0x4] = _mm_and_ps(xmm4, xmm1_4)
float xmm5_2[0x4] = _mm_add_ps(_mm_mul_ps(xmm5, xmm3_1), _mm_cvtepi32_ps(xmm0_19))
uint32_t xmm1_7[0x4] = _mm_and_ps(_mm_srli_epi32(xmm2_2, 0x10), xmm4)
int32_t var_50
var_50.o = xmm5_2
float xmm5_3[0x4] = _mm_cvtepi32_ps(_mm_srli_epi32(xmm1_7, 8))
uint32_t xmm0_24[0x4] = _mm_and_ps(xmm4, xmm1_7)
float xmm5_5[0x4] = _mm_add_ps(_mm_mul_ps(xmm5_3, xmm3_1), _mm_cvtepi32_ps(xmm0_24))
uint32_t xmm1_10[0x4] = _mm_and_ps(_mm_srli_epi32(xmm2_2, 8), xmm4)
float xmm7[0x4] = _mm_cvtepi32_ps(_mm_srli_epi32(xmm1_10, 8))
uint32_t xmm0_29[0x4] = _mm_and_ps(xmm4, xmm1_10)
float xmm7_2[0x4] = _mm_add_ps(_mm_mul_ps(xmm7, xmm3_1), _mm_cvtepi32_ps(xmm0_29))
uint32_t xmm1_12[0x4] = _mm_and_ps(xmm4, xmm2_2)
uint32_t xmm4_1[0x4] = _mm_and_ps(xmm4, xmm1_12)
uint32_t xmm0_32[0x4] = _mm_srli_epi32(xmm1_12, 8)
float xmm1_14 = xmm5_5[0] * xmm3
float xmm2_3[0x4] = _mm_cvtepi32_ps(xmm0_32)
float xmm0_33[0x4] = _mm_cvtepi32_ps(xmm4_1)
float xmm2_5[0x4] = _mm_add_ps(_mm_mul_ps(xmm2_3, xmm3_1), xmm0_33)
float xmm1_18 = xmm1_14 * xmm2_1 + _mm_shuffle_ps(xmm5_5, xmm5_5, 0x55) * xmm0_15 * xmm2_1
    + _mm_shuffle_ps(xmm5_5, xmm5_5, 0xaa) * xmm3 * xmm1_2
    + _mm_shuffle_ps(xmm5_5, xmm5_5, 0xff) * xmm0_15 * xmm1_2
float xmm1_19

if (0 f<= xmm1_18)
    xmm1_19 = xmm1_18 + 0.5f
else
    xmm1_19 = xmm1_18 - 0.5f

float xmm0_43 = _mm_shuffle_ps(xmm7_2, xmm7_2, 0x55)
int32_t ecx_6 = int.d(xmm1_19)
float xmm1_25 = xmm7_2[0] * xmm3 * xmm2_1 + xmm0_43 * xmm0_15 * xmm2_1
    + _mm_shuffle_ps(xmm7_2, xmm7_2, 0xaa) * xmm3 * xmm1_2
    + _mm_shuffle_ps(xmm7_2, xmm7_2, 0xff) * xmm0_15 * xmm1_2
float xmm1_26

if (0 f<= xmm1_25)
    xmm1_26 = xmm1_25 + 0.5f
else
    xmm1_26 = xmm1_25 - 0.5f

float xmm0_51 = _mm_shuffle_ps(xmm2_5, xmm2_5, 0x55)
int32_t ebx_3 = int.d(xmm1_26)
float xmm1_32 = xmm2_5[0] * xmm3 * xmm2_1 + xmm0_51 * xmm0_15 * xmm2_1
    + _mm_shuffle_ps(xmm2_5, xmm2_5, 0xaa) * xmm3 * xmm1_2
    + _mm_shuffle_ps(xmm2_5, xmm2_5, 0xff) * xmm0_15 * xmm1_2
float xmm1_33

if (0 f<= xmm1_32)
    xmm1_33 = xmm1_32 + 0.5f
else
    xmm1_33 = xmm1_32 - 0.5f

float xmm2_9[0x4] = var_50.o
int32_t edx_3 = int.d(xmm1_33)
float xmm1_39 = xmm2_9[0] * xmm3 * xmm2_1 + _mm_shuffle_ps(xmm2_9, xmm2_9, 0x55) * xmm0_15 * xmm2_1
    + _mm_shuffle_ps(xmm2_9, xmm2_9, 0xaa) * xmm3 * xmm1_2
    + _mm_shuffle_ps(xmm2_9, xmm2_9, 0xff) * xmm0_15 * xmm1_2
float xmm1_40

if (0 f<= xmm1_39)
    xmm1_40 = xmm1_39 + 0.5f
else
    xmm1_40 = xmm1_39 - 0.5f

int32_t eax_24 = int.d(xmm1_40)

if (ecx_6 s< 0)
    ecx_6 = 0
else if (ecx_6 s> 0xff)
    ecx_6 = 0xff

if (ebx_3 s< 0)
    ebx_3 = 0
else if (ebx_3 s> 0xff)
    ebx_3 = 0xff

if (edx_3 s< 0)
    edx_3 = 0
else if (edx_3 s> 0xff)
    edx_3 = 0xff

if (eax_24 s< 0)
    eax_24 = 0
else if (eax_24 s> 0xff)
    eax_24 = 0xff

return (((((zx.d(eax_24.b) << 8) + zx.d(ecx_6.b)) << 8) + zx.d(ebx_3.b)) << 8) + zx.d(edx_3.b)
