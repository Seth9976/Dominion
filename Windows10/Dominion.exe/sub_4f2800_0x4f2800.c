// 函数: sub_4f2800
// 地址: 0x4f2800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
float* result = __security_cookie ^ &__saved_ebp
float* result_2 = result
void* esi = arg1
void* var_38 = esi

if (*(esi + 0xe0) == 0)
    int32_t edx_1 = 0
    int32_t var_28_1 = 0
    int32_t ebx_2
    int32_t edi_3
    
    if (*(esi + 0xd4) s<= 0)
        edi_3 = 0x270f
        ebx_2 = 1
    else
        int32_t eax_1 = 0
        int32_t var_24_1 = 0
        int32_t i_3
        
        do
            int32_t* edi_2 = *(esi + 0xd0) + eax_1
            
            if (edi_2[0xe] != 0)
                int32_t ebx_1 = edi_2[2]
                int32_t ecx = 0
                int32_t edx_2 = 0
                
                if (ebx_1 s> 0)
                    int32_t eax_2 = *edi_2
                    
                    do
                        int32_t eax_4 = *(*(eax_2 + (edx_2 << 2)) + 0xdc)
                        
                        if (eax_4 == 0)
                            ecx = 0
                            break
                        
                        if (eax_4 s<= ecx)
                            eax_4 = ecx
                        
                        edx_2 += 1
                        ecx = eax_4
                        eax_2 = *edi_2
                    while (edx_2 s< ebx_1)
                    
                    eax_1 = var_24_1
                
                edx_1 = var_28_1
                edi_2[0x13] = ecx
            
            i_3 = *(esi + 0xd4)
            edx_1 += 1
            eax_1 += 0x54
            var_28_1 = edx_1
            var_24_1 = eax_1
        while (edx_1 s< i_3)
        
        edi_3 = 0x270f
        ebx_2 = 1
        
        if (i_3 s> 0)
            void* eax_6 = *(esi + 0xd0) + 0x4c
            int32_t i
            
            do
                int32_t edx_3
                
                if (*(eax_6 - 0x14) != 0)
                    edx_3 = *eax_6
                
                if (*(eax_6 - 0x14) == 0 || edx_3 s<= 0)
                    ebx_2 = 0
                else if (edx_3 s< edi_3)
                    edi_3 = edx_3
                
                eax_6 += 0x54
                i = i_3
                i_3 -= 1
            while (i != 1)
    
    int32_t eax_7 = edi_3 + 1
    
    if (edi_3 s>= 0x270f)
        eax_7 = 0
    
    *(esi + 0xdc) = eax_7
    
    if (*(esi + 0xb8) != *(esi + 0xb4) && ebx_2 == 0)
        *(esi + 0xdc) = 0
    
    int32_t i_4 = *(esi + 0xd4)
    result = nullptr
    float* result_1 = nullptr
    
    if (i_4 s> 0)
        int32_t edx_4 = 0
        int32_t var_2c_1 = 0
        
        do
            int32_t* ecx_2 = *(esi + 0xd0) + edx_4
            
            if (ecx_2[0xe] != 0)
                int32_t i_5 = ecx_2[2]
                int128_t var_20
                __builtin_memset(&var_20, 0, 0x18)
                int32_t ebx_3 = 0
                float xmm4_1 = 0f
                float xmm5_1 = 0f
                float xmm6_1 = 0f
                float xmm7_1 = 0f
                float xmm2_1 = 0f
                float xmm3_1 = 0f
                
                if (i_5 s> 0)
                    int32_t ebx_4 = ecx_2[0xd]
                    void* edx_5 = *ecx_2
                    void* eax_10 = ebx_4 - edx_5
                    int32_t esi_1 = 0
                    void* ebx_5 = ebx_4 - edx_5
                    void* var_30_1 = eax_10
                    int32_t i_1
                    
                    do
                        void* eax_11 = *edx_5
                        float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(edx_5 + eax_10)))
                        esi_1 += *(edx_5 + ebx_5)
                        edx_5 += 4
                        xmm7_1 = xmm7_1 + xmm1_2 f* *(eax_11 + 0x94)
                        xmm6_1 = xmm6_1 + xmm1_2 f* *(eax_11 + 0x98)
                        xmm5_1 = xmm5_1 + xmm1_2 f* *(eax_11 + 0x9c)
                        xmm4_1 = xmm4_1 + xmm1_2 f* *(eax_11 + 0xa0)
                        xmm3_1 = xmm3_1 + xmm1_2 f* *(eax_11 + 0xa4)
                        xmm2_1 = xmm2_1 + xmm1_2 f* *(eax_11 + 0xa8)
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    result = result_1
                    edx_4 = var_2c_1
                    esi = var_38
                    ebx_3 = esi_1
                
                float xmm0_12 = _mm_cvtepi32_ps(zx.o(ebx_3))
                ecx_2[7] = xmm7_1 / xmm0_12
                ecx_2[8] = xmm6_1 / xmm0_12
                ecx_2[9] = xmm5_1 / xmm0_12
                ecx_2[0xa] = xmm4_1 / xmm0_12
                ecx_2[0xb] = xmm3_1 / xmm0_12
                ecx_2[0xc] = xmm2_1 / xmm0_12
            
            i_4 = *(esi + 0xd4)
            result += 1
            edx_4 += 0x54
            result_1 = result
            var_2c_1 = edx_4
        while (result s< i_4)
    
    float xmm2_3 = *(esi + 0x7c)
    int32_t edi_4 = 1
    float xmm3_3 = *(esi + 0x80)
    float xmm4_3 = *(esi + 0x84)
    float xmm5_3 = *(esi + 0x88)
    float xmm6_3 = *(esi + 0x8c)
    float xmm7_3 = *(esi + 0x90)
    
    if (i_4 s> 0)
        result = *(esi + 0xd0) + 0x1c
        int32_t i_2
        
        do
            int32_t edx_6 = result[7]
            
            if (edx_6 != 0)
                edi_4 += edx_6
                float xmm1_4 = float.s(edx_6)
                xmm2_3 = xmm2_3 + xmm1_4 * *result
                xmm3_3 = xmm3_3 + xmm1_4 * result[1]
                xmm4_3 = xmm4_3 + xmm1_4 * result[2]
                xmm5_3 = xmm5_3 + xmm1_4 * result[3]
                xmm6_3 = xmm6_3 + xmm1_4 * result[4]
                xmm7_3 = xmm7_3 + xmm1_4 * result[5]
            
            result = &result[0x15]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    float xmm0_24 = _mm_cvtepi32_ps(zx.o(edi_4))
    *(esi + 0x94) = xmm2_3 / xmm0_24
    *(esi + 0x98) = xmm3_3 / xmm0_24
    *(esi + 0x9c) = xmm4_3 / xmm0_24
    *(esi + 0xa0) = xmm5_3 / xmm0_24
    *(esi + 0xa4) = xmm6_3 / xmm0_24
    *(esi + 0xa8) = xmm7_3 / xmm0_24

CookieCheckFunction(result)
return result
