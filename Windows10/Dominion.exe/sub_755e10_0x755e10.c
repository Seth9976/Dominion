// 函数: sub_755e10
// 地址: 0x755e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_28 = esi
float xmm0 = arg1[4]
void* ebx = arg1[3]
float xmm0_1 = arg1[5]
float xmm0_2 = arg1[6]
float xmm0_3 = arg1[7]
double* eax
int32_t edx

if (*(ebx + 0x4c) == 0)
    eax, edx = sub_710b10(ebx, esi)

int32_t i = 0
int32_t i_1 = 0

if (arg1[1] s<= 0)
    return 

do
    int32_t* esi_1 = *(arg1[2] + (i << 2))
    void* eax_1
    
    if (esi_1[0x13] == 0)
        eax_1, edx = sub_710b10(esi_1, esi_1)
    
    float xmm4_1 = esi_1[0xe]
    xmm0 f- 0
    float var_c_1 = xmm4_1
    eax_1:1.b =
        (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm2_3 = *(ebx + 0x38) - xmm4_1 f+ *(*arg1 + 0x28)
        var_c_1 = (xmm2_3 - _mm_cvtepi32_ps(zx.o((0x4000
            - int.d(16384.499999999996 - _mm_cvtps_pd(xmm2_3 / 360f))) * 0x168))) * xmm0 + xmm4_1
    
    float xmm6_1 = esi_1[0xc]
    float xmm7_1 = esi_1[0xd]
    xmm0_1 f- 0
    eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        eax_1 = *arg1
        xmm6_1 = xmm6_1 + (*(ebx + 0x30) - xmm6_1 f+ *(eax_1 + 0x2c)) * xmm0_1
        xmm7_1 = xmm7_1 + (*(ebx + 0x34) - xmm7_1 f+ *(eax_1 + 0x30)) * xmm0_1
    
    float xmm4_2[0x2] = esi_1[0xf]
    float xmm5_2[0x2] = esi_1[0x10]
    xmm0_2 f- 0
    eax_1:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
        | (xmm0_2 < 0f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        int64_t xmm2_7 = 0x3ee4f8b588e368f1
        
        if (not(_mm_cvtps_pd(xmm4_2) f<= xmm2_7))
            xmm4_2 = ((*(ebx + 0x3c) f- xmm4_2 f+ *(*arg1 + 0x34)) * xmm0_2 f+ xmm4_2) f/ xmm4_2
        
        if (not(_mm_cvtps_pd(xmm5_2) f<= xmm2_7))
            xmm5_2 = ((*(ebx + 0x40) f- xmm5_2 f+ *(*arg1 + 0x38)) * xmm0_2 f+ xmm5_2) f/ xmm5_2
    
    float xmm0_31 = esi_1[0x12]
    xmm0_3 f- 0
    eax_1:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
        | (xmm0_3 < 0f ? 1 : 0)
    bool p_8 = unimplemented  {test ah, 0x44}
    
    if (p_8)
        float xmm2_10 = *(ebx + 0x48) - xmm0_31 f+ *(*arg1 + 0x3c)
        eax_1 = (0x4000 - int.d(16384.499999999996 - _mm_cvtps_pd(xmm2_10 / 360f))) * 0x168
        esi_1[0xb] = (xmm2_10 - _mm_cvtepi32_ps(zx.o(eax_1))) * xmm0_3 f+ esi_1[0xb]
    
    eax, edx = sub_710240(eax_1, edx, esi_1, esi_1, arg1, xmm6_1, xmm7_1, var_c_1, xmm4_2, xmm5_2, 
        esi_1[0x11], xmm0_31)
    i = i_1 + 1
    i_1 = i
while (i s< arg1[1])
