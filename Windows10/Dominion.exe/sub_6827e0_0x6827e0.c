// 函数: sub_6827e0
// 地址: 0x6827e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_147b06c
int32_t* edx = arg5
int32_t* var_58 = arg3
int32_t* var_5c = edx
int32_t eax_3
float var_4c
float var_2c

if (*(eax_2 + 0x167) == 0)
    void* eax_7 = data_147abe4
    float xmm2_5 = *(eax_7 + 0x24)
    float xmm3_7 = *(eax_7 + 0x20)
    float xmm0_16 = xmm2_5 + arg2[1]
    float xmm1_12 = xmm3_7 + *arg2
    float xmm2_6 = xmm2_5 + arg2[3]
    float xmm3_8 = xmm3_7 + arg2[2]
    float var_28_2 = xmm0_16
    float var_20_2 = xmm0_16
    int32_t xmm0_17 = arg4[1]
    var_2c = xmm1_12
    float var_1c_2 = xmm1_12
    int32_t xmm1_13 = arg4[2]
    float var_18_2 = xmm2_6
    float var_10_2 = xmm2_6
    float xmm2_7 = *arg4
    int32_t var_48_2 = xmm0_17
    int32_t var_40_2 = xmm0_17
    int32_t xmm0_18 = arg4[3]
    float var_24_2 = xmm3_8
    float var_14_2 = xmm3_8
    var_4c = xmm2_7
    int32_t var_44_2 = xmm1_13
    float var_3c_2 = xmm2_7
    int32_t var_38_2 = xmm0_18
    int32_t var_34_2 = xmm1_13
    int32_t var_30_2 = xmm0_18
    eax_3 = sub_6867a0(arg4, &var_4c, &var_2c, edx, 0, arg3, arg6)
else
    float xmm1_3 = (arg2[2] - *arg2) * 6.5f f/ *(eax_2 + 0x16c)
    float xmm1_4
    
    if (0 f<= xmm1_3)
        xmm1_4 = xmm1_3 + 0.5f
    else
        xmm1_4 = xmm1_3 - 0.5f
    
    eax_3 = int.d(xmm1_4)
    int32_t edi_1 = 1
    
    if (eax_3 s> 1)
        edi_1 = eax_3
    
    int32_t ebx_1 = 0
    
    if (edi_1 s> 0)
        float xmm3_2 = _mm_cvtepi32_ps(zx.o(edi_1))
        float var_54 = xmm3_2
        uint32_t eax_6
        
        do
            float xmm5_2 = _mm_cvtepi32_ps(zx.o(ebx_1))
            void* eax_4 = data_147abe4
            float xmm1_5 = *arg2
            float xmm4_2 = xmm5_2 / xmm3_2
            float xmm5_4 = (xmm5_2 + 1f) / xmm3_2
            float xmm0_2 = arg2[2] - xmm1_5
            float xmm2_3 = xmm4_2 * xmm0_2 + xmm1_5
            float xmm3_5 = xmm5_4 * xmm0_2 + xmm1_5
            float xmm1_6 = arg2[1]
            var_4c = xmm2_3 f+ *(eax_4 + 0x20)
            float var_48_1 = xmm1_6 f+ *(eax_4 + 0x24)
            float var_44_1 = xmm3_5 f+ *(eax_4 + 0x20)
            float var_40_1 = xmm1_6 f+ *(eax_4 + 0x24)
            float xmm1_8 = arg2[3]
            float var_3c_1 = xmm2_3 f+ *(eax_4 + 0x20)
            float var_38_1 = xmm1_8 f+ *(eax_4 + 0x24)
            float var_34_1 = xmm3_5 f+ *(eax_4 + 0x20)
            float var_30_1 = xmm1_8 f+ *(eax_4 + 0x24)
            float xmm1_10 = *arg4
            float xmm0_12 = arg4[2] f- xmm1_10
            int32_t xmm0_13 = arg4[1]
            float xmm4_4 = xmm4_2 * xmm0_12 + xmm1_10
            int32_t var_28_1 = xmm0_13
            float xmm5_6 = xmm5_4 * xmm0_12 + xmm1_10
            int32_t var_20_1 = xmm0_13
            int32_t xmm0_14 = arg4[3]
            int32_t var_18_1 = xmm0_14
            var_2c = xmm4_4
            float var_1c_1 = xmm4_4
            float var_24_1 = xmm5_6
            float var_14_1 = xmm5_6
            int32_t var_10_1 = xmm0_14
            eax_6 = sub_6867a0(arg4, &var_2c, &var_4c, edx, 0, arg3, arg6)
            xmm3_2 = var_54
            ebx_1 += 1
            arg3 = var_58
            edx = var_5c
        while (ebx_1 s< edi_1)
        
        CookieCheckFunction(eax_6)
        return eax_6
CookieCheckFunction(eax_3)
return eax_3
