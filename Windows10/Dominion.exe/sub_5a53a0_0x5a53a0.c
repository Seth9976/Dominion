// 函数: sub_5a53a0
// 地址: 0x5a53a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float* ecx
void* edx
ecx, edx = __chkstk(0x10014)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
float xmm3 = *(edx + 8)
void* eax_2 = edx + 8
float xmm2 = xmm3
int32_t i = 0
void* edx_1 = eax_2
int32_t var_10010[0x3ffe]

do
    int32_t xmm1_1 = *edx_1
    edx_1 += 0xc
    var_10010[i] = xmm1_1
    i += 1
    xmm3 = _mm_min_ss(xmm1_1, xmm3)
    xmm2 = _mm_max_ss(xmm1_1, xmm2)
while (i s< 0x4000)

float var_10018 = 0f
char const* const var_10

if (not(0f < *ecx))
    int32_t ecx_1 = 0
    
    while (true)
        float xmm0_6 = (*eax_2 - xmm3 + 0.00999999978f) / (xmm2 - xmm3 + 0.00999999978f)
        *eax_2 = xmm0_6
        
        if (xmm0_6 <= 0f)
            break
        
        ecx_1 += 1
        eax_2 += 0xc
        
        if (ecx_1 s>= 0x4000)
            CookieCheckFunction(eax_2)
            return eax_2
    
    var_10 = "ApplySetSealevel"
    sub_63b870(eax_2, &data_801800, "points[i].z > 0.0f", 
        "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 0x425, var_10)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

var_10 = 0.d
sub_5ad4a0(eax_2, &var_10, &var_10010, 0x4000, var_10)
float xmm0_9 = sub_4d5cb0(*ecx * 16384f)
float xmm0_10

if (0 f<= xmm0_9)
    xmm0_10 = xmm0_9 + 0.5f
else
    xmm0_10 = xmm0_9 - 0.5f

int32_t eax_3 = int.d(xmm0_10)
void* ecx_5 = edx + 0x14
int32_t edx_3 = 0x800
float xmm0_11 = var_10010[eax_3]
char var_10014
var_10014.d = xmm0_11
float xmm0_14

while (true)
    float xmm7_2 = *(ecx_5 - 0xc) - xmm0_11
    float xmm6_2 = *ecx_5 - xmm0_11
    float xmm5_2 = *(ecx_5 + 0xc) - xmm0_11
    float xmm4_2 = *(ecx_5 + 0x18) - xmm0_11
    float xmm3_2 = *(ecx_5 + 0x24) - xmm0_11
    float xmm1_3 = *(ecx_5 + 0x3c)
    float xmm2_4 = *(ecx_5 + 0x30) - xmm0_11
    *(ecx_5 - 0xc) = xmm7_2
    float xmm1_4 = xmm1_3 - xmm0_11
    int32_t xmm7_3 = __maxss_xmmss_memss(xmm7_2, var_10018)
    float xmm0_13 = *(ecx_5 + 0x48) f- var_10010[eax_3]
    *ecx_5 = xmm6_2
    *(ecx_5 + 0xc) = xmm5_2
    int32_t xmm6_3 = _mm_max_ss(xmm6_2, xmm7_3)
    *(ecx_5 + 0x18) = xmm4_2
    *(ecx_5 + 0x24) = xmm3_2
    *(ecx_5 + 0x30) = xmm2_4
    *(ecx_5 + 0x3c) = xmm1_4
    *(ecx_5 + 0x48) = xmm0_13
    ecx_5 += 0x60
    xmm0_14 = _mm_max_ss(xmm0_13, 
        _mm_max_ss(xmm1_4, 
            _mm_max_ss(xmm2_4, _mm_max_ss(xmm3_2, _mm_max_ss(xmm4_2, _mm_max_ss(xmm5_2, xmm6_3))))))
    var_10018 = xmm0_14
    int32_t temp0_1 = edx_3
    edx_3 -= 1
    
    if (temp0_1 == 1)
        break
    
    xmm0_11 = var_10014.d

void* eax_4 = edx + 0x20
float xmm4_4[0x4] = 1f / xmm0_14
int32_t i_2 = 0x800
float xmm4_5[0x4] = _mm_shuffle_ps(xmm4_4, xmm4_4, 0)
int32_t i_1

do
    int64_t xmm2_6 = *(eax_4 + 0xc)
    eax_4 += 0x60
    float xmm3_7[0x4] = _mm_mul_ps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*(eax_4 - 0x78), *(eax_4 - 0x60)), 
            _mm_unpacklo_ps(*(eax_4 - 0x6c), xmm2_6)), 
        xmm4_5)
    *(eax_4 - 0x78) = xmm3_7
    float xmm3_8[0x4] = _mm_shuffle_ps(xmm3_7, xmm3_7, 0xe5)
    *(eax_4 - 0x6c) = xmm3_8
    float xmm1_8[0x4] = *(eax_4 - 0x3c)
    float xmm3_9[0x4] = _mm_unpackhi_ps(xmm3_8, xmm3_8)
    *(eax_4 - 0x60) = xmm3_9
    int64_t xmm0_16 = *(eax_4 - 0x30)
    *(eax_4 - 0x54) = _mm_unpackhi_ps(xmm3_9, xmm3_9)
    float xmm3_14[0x4] = _mm_mul_ps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*(eax_4 - 0x48), xmm0_16), 
            _mm_unpacklo_ps(xmm1_8, *(eax_4 - 0x24))), 
        xmm4_5)
    *(eax_4 - 0x48) = xmm3_14
    float xmm3_15[0x4] = _mm_shuffle_ps(xmm3_14, xmm3_14, 0xe5)
    *(eax_4 - 0x3c) = xmm3_15
    float xmm3_16[0x4] = _mm_unpackhi_ps(xmm3_15, xmm3_15)
    *(eax_4 - 0x30) = xmm3_16
    *(eax_4 - 0x24) = _mm_unpackhi_ps(xmm3_16, xmm3_16)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
CookieCheckFunction(eax_4)
return eax_4
