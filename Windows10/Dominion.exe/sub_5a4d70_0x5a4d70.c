// 函数: sub_5a4d70
// 地址: 0x5a4d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1 + 0x14
float xmm1 = -10000f
int32_t i_1 = 0x800
float var_c = 10000f
float xmm4_4
int32_t i

do
    int32_t xmm3_1 = *(result - 0xc)
    result += 0x60
    int32_t xmm4_1 = *(result - 0x60)
    int32_t xmm5_1 = *(result - 0x54)
    int32_t xmm0_2 = _mm_max_ss(xmm3_1, xmm1)
    int32_t xmm6_1 = *(result - 0x48)
    int32_t xmm7_1 = *(result - 0x3c)
    int32_t xmm3_2 = __minss_xmmss_memss(xmm3_1, var_c)
    int32_t xmm1_2 = _mm_max_ss(xmm4_1, xmm0_2)
    int32_t xmm4_2 = _mm_min_ss(xmm4_1, xmm3_2)
    int32_t xmm0_4 = _mm_max_ss(xmm5_1, xmm1_2)
    int32_t xmm5_2 = _mm_min_ss(xmm5_1, xmm4_2)
    int32_t xmm4_3 = *(result - 0x18)
    int32_t xmm1_4 = _mm_max_ss(xmm6_1, xmm0_4)
    int32_t xmm6_2 = _mm_min_ss(xmm6_1, xmm5_2)
    int32_t xmm0_6 = _mm_max_ss(xmm7_1, xmm1_4)
    int32_t xmm1_5 = *(result - 0x30)
    int32_t xmm7_2 = _mm_min_ss(xmm7_1, xmm6_2)
    int32_t xmm1_6 = _mm_max_ss(xmm1_5, xmm0_6)
    int32_t xmm0_8 = _mm_max_ss(*(result - 0x24), xmm1_6)
    float xmm1_8 = _mm_max_ss(*(result - 0x18), xmm0_8)
    int32_t xmm0_10 = _mm_min_ss(*(result - 0x30), xmm7_2)
    xmm4_4 = _mm_min_ss(xmm4_3, _mm_min_ss(*(result - 0x24), xmm0_10))
    xmm1 = xmm1_8
    var_c = xmm4_4
    i = i_1
    i_1 -= 1
while (i != 1)
xmm4_4 - xmm1
result:1.b = (xmm4_4 == xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, xmm1) ? 1 : 0) << 2
    | (xmm4_4 < xmm1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t var_1c
char* ecx

if (p_1)
    float xmm2_1 = xmm1 - xmm4_4
    float* esi_1 = arg1 + 8
    int32_t edi_1 = 0
    float var_8_2 = xmm2_1
    
    while (true)
        float xmm0_13 = (*esi_1 - xmm4_4) / xmm2_1
        float xmm0_14
        
        if (not(0 f< xmm0_13))
            xmm0_14 = -1f
        else if (xmm0_13 < 1f)
            result, xmm0_14 = sub_4ae110(1, xmm0_13, -1f, 1f)
            xmm2_1 = var_8_2
            xmm4_4 = var_c
        else
            xmm0_14 = 1f
        
        *esi_1 = xmm0_14
        
        if (1f < xmm0_14)
            char const* const var_18_2 = "ApplyNormalize"
            var_1c = 0x398
            ecx = "pts[i].z <= 1.0f"
            break
        
        if (xmm0_14 < -1f)
            char const* const var_18_1 = "ApplyNormalize"
            var_1c = 0x399
            ecx = "pts[i].z >= -1.0f"
            break
        
        edi_1 += 1
        esi_1 = &esi_1[3]
        
        if (edi_1 s>= 0x4000)
            return result
else
    char const* const var_18 = "ApplyNormalize"
    var_1c = 0x393
    ecx = "hMin != hMax"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", var_1c, 
    "ApplyNormalize")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
