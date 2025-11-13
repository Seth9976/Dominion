// 函数: sub_71b360
// 地址: 0x71b360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg1 + 0x14)
int32_t ebx = *(arg1 + 0x40)
int32_t edx = *(arg1 + 0x78) + ((*(arg1 + 0x90) * ebx) << 2)
int32_t eax_2 = *(arg1 + 0x64)
float* var_10 = *(arg1 + 0x68)
int32_t result = *(arg1 + 0x80)
int32_t ecx = 0
int32_t var_24 = 0

if (eax s> 0)
    float* esi_3 = arg2
    int32_t result_1 = 0
    float* var_2c_1 = esi_3
    float* var_1c_1 = &esi_3[1]
    result = 0
    
    do
        int32_t ecx_1 = *(eax_2 + (ecx << 3))
        int32_t edi_2 = *(eax_2 + (var_24 << 3) + 4)
        int32_t ebx_2 = ebx
        
        if (ebx - 1 u<= 3)
            switch (ebx_2)
                case 1
                    if (ecx_1 s<= edi_2)
                        float* eax_6 = var_10
                        float xmm1_1 = *esi_3
                        
                        do
                            float xmm0_1 = *eax_6
                            eax_6 = &eax_6[1]
                            float xmm0_2 = xmm0_1 f* *(edx + (ecx_1 << 2))
                            ecx_1 += 1
                            xmm1_1 = xmm1_1 + xmm0_2
                            *esi_3 = xmm1_1
                        while (ecx_1 s<= edi_2)
                        
                        result = result_1
                case 2
                    if (ecx_1 s<= edi_2)
                        float* eax_7 = var_10
                        float xmm2_1 = *esi_3
                        float xmm3_1 = *var_1c_1
                        
                        do
                            float xmm1_2 = *eax_7
                            eax_7 = &eax_7[1]
                            xmm2_1 = xmm2_1 + xmm1_2 f* *(edx + (ecx_1 << 3))
                            *esi_3 = xmm2_1
                            float xmm1_3 = xmm1_2 f* *(edx + (ecx_1 << 3) + 4)
                            ecx_1 += 1
                            xmm3_1 = xmm3_1 + xmm1_3
                            *var_1c_1 = xmm3_1
                            ebx_2 = ebx
                        while (ecx_1 s<= edi_2)
                        
                        result = result_1
                case 3
                    if (ecx_1 s<= edi_2)
                        float xmm2_2 = *esi_3
                        float xmm3_2 = esi_3[1]
                        float xmm4_1 = esi_3[2]
                        void* eax_10 = edx + ((ecx_1 + ((ecx_1 + 1) << 1)) << 2)
                        float* edx_5 = var_10
                        int32_t i_3 = edi_2 - ecx_1 + 1
                        int32_t i
                        
                        do
                            float xmm1_4 = *edx_5
                            edx_5 = &edx_5[1]
                            xmm2_2 = xmm2_2 + xmm1_4 f* *(eax_10 - 8)
                            *esi_3 = xmm2_2
                            xmm3_2 = xmm3_2 + xmm1_4 f* *(eax_10 - 4)
                            esi_3[1] = xmm3_2
                            float xmm1_5 = xmm1_4 f* *eax_10
                            eax_10 += 0xc
                            xmm4_1 = xmm4_1 + xmm1_5
                            esi_3[2] = xmm4_1
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                        result = result_1
                case 4
                    if (ecx_1 s<= edi_2)
                        int32_t* edx_6 = var_10
                        float* eax_13 = (ecx_1 << 4) + edx + 8
                        ebx_2 = ebx
                        int32_t i_4 = edi_2 - ecx_1 + 1
                        int32_t i_1
                        
                        do
                            float xmm1_6 = *edx_6
                            edx_6 = &edx_6[1]
                            *esi_3 = xmm1_6 * eax_13[-2] + *esi_3
                            esi_3[1] = xmm1_6 * eax_13[-1] + esi_3[1]
                            esi_3[2] = xmm1_6 * *eax_13 + esi_3[2]
                            float xmm1_7 = xmm1_6 * eax_13[1]
                            eax_13 = &eax_13[4]
                            esi_3[3] = xmm1_7 + esi_3[3]
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                        result = result_1
        else if (ecx_1 s<= edi_2)
            float* ebx_7 = var_10
            int32_t edx_8 = ecx_1 * ebx_2
            int32_t var_20_1 = edx_8
            void* eax_16 = edx + (edx_8 << 2) + 8
            int32_t i_5 = edi_2 - ecx_1 + 1
            void* var_18_1 = eax_16
            int32_t i_2
            
            do
                float xmm1_9 = *ebx_7
                int32_t ebx_9 = 0
                
                if (ebx_2 s>= 4)
                    int32_t j_2 = ((ebx_2 - 4) u>> 2) + 1
                    void* eax_18 = &arg2[2 + result_1]
                    void* ecx_4 = var_18_1
                    ebx_9 = j_2 << 2
                    int32_t j
                    
                    do
                        *(eax_18 - 8) = xmm1_9 f* *(ecx_4 - 8) f+ *(eax_18 - 8)
                        *(eax_18 - 4) = xmm1_9 f* *(ecx_4 - 4) f+ *(eax_18 - 4)
                        *eax_18 = xmm1_9 f* *ecx_4 f+ *eax_18
                        float xmm0_28 = xmm1_9 f* *(ecx_4 + 4)
                        ecx_4 += 0x10
                        *(eax_18 + 4) = xmm0_28 f+ *(eax_18 + 4)
                        eax_18 += 0x10
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    edx_8 = var_20_1
                    eax_16 = var_18_1
                
                if (ebx_9 s< ebx_2)
                    float* ecx_6 = &arg2[result_1 + ebx_9]
                    float* eax_22 = edx + ((edx_8 + ebx_9) << 2)
                    int32_t j_3 = ebx_2 - ebx_9
                    int32_t j_1
                    
                    do
                        float xmm0_31 = xmm1_9 * *eax_22
                        eax_22 = &eax_22[1]
                        *ecx_6 = xmm0_31 + *ecx_6
                        ecx_6 = &ecx_6[1]
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    edx_8 = var_20_1
                    eax_16 = var_18_1
                
                ebx_7 = &ebx_7[1]
                edx_8 += ebx_2
                eax_16 += ebx_2 << 2
                var_20_1 = edx_8
                var_18_1 = eax_16
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            esi_3 = var_2c_1
            ebx_2 = ebx
            result = result_1
        
        esi_3 = &esi_3[ebx_2]
        ecx = var_24 + 1
        result += ebx_2
        var_10 = &var_10[result]
        var_24 = ecx
        result_1 = result
        var_2c_1 = esi_3
        var_1c_1 = &var_1c_1[ebx_2]
    while (ecx s< eax)

return result
