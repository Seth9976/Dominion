// 函数: sub_5c8740
// 地址: 0x5c8740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg4
int32_t* result = arg3
int32_t var_10 = arg2

if (arg2 s< esi)
    int64_t* ecx = result[1]
    int32_t** eax = *result
    int64_t* var_38_1 = ecx
    
    do
        int32_t ecx_1 = *(*(ecx + 4) + 8)
        int32_t xmm4_1
        
        if (ecx_1 != 0)
            int32_t* eax_2 = (*ecx):4.d
            int32_t ebx_1 = *eax_2
            int32_t edi_1 = eax_2[1]
            float xmm4_2 = *(ebx_1 + (arg2 << 2))
            void* ebx_2 = 1
            xmm4_1 = xmm4_2 * xmm4_2
            
            if (ecx_1 s> 1)
                if (ecx_1 - 1 s>= 4)
                    int32_t* edx_2 = ebx_1 + (((edi_1 << 2) + var_10) << 2)
                    int32_t* esi_3 = ebx_1 + ((edi_1 * 3 + var_10) << 2)
                    float* edi_2 = ebx_1 + ((var_10 + (edi_1 << 1)) << 2)
                    int32_t i_2 = ((ecx_1 - 5) u>> 2) + 1
                    float* eax_17 = ebx_1 + ((edi_1 + arg2) << 2)
                    int32_t i
                    
                    do
                        float xmm3_1 = *eax_17
                        eax_17 = &eax_17[edi_1 * 4]
                        float xmm0_2 = *edi_2
                        edi_2 = &edi_2[edi_1 * 4]
                        float xmm1_1 = *esi_3
                        esi_3 = &esi_3[edi_1 * 4]
                        float xmm2_1 = *edx_2
                        edx_2 = &edx_2[edi_1 * 4]
                        i = i_2
                        i_2 -= 1
                        xmm4_1 = xmm4_1 f+ xmm3_1 * xmm3_1 + xmm0_2 * xmm0_2 + xmm1_1 * xmm1_1
                            + xmm2_1 * xmm2_1
                    while (i != 1)
                    arg2 = var_10
                    ebx_2 = ((((ecx_1 - 5) u>> 2) + 1) << 2) + 1
                
                if (ebx_2 s< ecx_1)
                    void* i_3 = ecx_1 - ebx_2
                    float* eax_19 = ebx_1 + ((edi_1 * ebx_2 + arg2) << 2)
                    void* i_1
                    
                    do
                        float xmm0_4 = *eax_19
                        eax_19 = &eax_19[edi_1]
                        xmm4_1 = xmm4_1 f+ xmm0_4 * xmm0_4
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                esi = arg4
        else
            xmm4_1 = (zx.o(0)).d
        
        ecx = var_38_1
        result = *eax
        result[arg2] = xmm4_1
        arg2 += 1
        var_10 = arg2
    while (arg2 s< esi)

return result
