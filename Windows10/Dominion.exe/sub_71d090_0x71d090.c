// 函数: sub_71d090
// 地址: 0x71d090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_10 = *(arg1 + 0x14)
int32_t ebx = *(arg1 + 0x40)
int32_t esi = *(arg1 + 0xa4)
float* esi_1 = *(arg1 + 0x7c)
int32_t esi_3 = *(arg1 + 0x94) + arg2
int32_t edx = *(arg1 + 0xb4)
int32_t eax = *(arg1 + 0x6c)
uint32_t edx_2 = *(arg1 + 0xa0) u>> 2
int32_t edx_3 = *(eax + (esi_3 << 3))
int32_t* result = *(eax + (esi_3 << 3) + 4)
int32_t var_2c = edx_3
int32_t* result_2 = result

if (edx_3 s<= result)
    result = *(arg1 + 0x70) + ((esi_3 * *(arg1 + 0x84)) << 2)
    int32_t edi_2 = *(arg1 + 0xb0) - *(arg1 + 0xa8)
    float* esi_5 = esi_1
    int32_t* result_3 = result_2
    int32_t* result_1 = result
    int32_t var_14_1 = edi_2
    
    do
        float xmm1_1 = *result
        void* edx_7 = edx + ((mods.dp.d(sx.q(edi_2 + edx_3), esi) * edx_2) << 2)
        void* var_18_1 = edx_7
        
        if (ebx - 1 u<= 3)
            switch (ebx)
                case 1
                    int32_t i_11 = i_10
                    int32_t edi_3 = 0
                    
                    if (i_11 s>= 4)
                        void* eax_5 = edx_7 + 4
                        void* ecx = &esi_1[3]
                        int32_t i_7 = ((i_10 - 4) u>> 2) + 1
                        edi_3 = i_7 << 2
                        int32_t i
                        
                        do
                            *(eax_5 - 4) = xmm1_1 f* *(ecx - 0xc) f+ *(eax_5 - 4)
                            *eax_5 = xmm1_1 f* *(eax_5 + esi_1 - edx_7) f+ *eax_5
                            *(eax_5 + 4) = xmm1_1 f* *(ecx - 4) f+ *(eax_5 + 4)
                            float xmm0_11 = xmm1_1 f* *ecx
                            ecx += 0x10
                            *(eax_5 + 8) = xmm0_11 f+ *(eax_5 + 8)
                            eax_5 += 0x10
                            i = i_7
                            i_7 -= 1
                        while (i != 1)
                        edx_7 = var_18_1
                        esi_5 = esi_1
                        i_11 = i_10
                    
                    if (edi_3 s< i_11)
                        float* eax_6 = edx_7 + (edi_3 << 2)
                        int32_t i_6 = i_11 - edi_3
                        int32_t i_1
                        
                        do
                            *eax_6 = xmm1_1 f* *(eax_6 + esi_5 - var_18_1) + *eax_6
                            eax_6 = &eax_6[1]
                            i_1 = i_6
                            i_6 -= 1
                        while (i_1 != 1)
                    
                    result_3 = result_2
                    edi_2 = var_14_1
                case 2
                    int32_t ecx_1 = 0
                    
                    if (i_10 s<= 0)
                        result_3 = result_2
                    else
                        void* eax_7 = edx_7 + 4
                        
                        do
                            float xmm0_17 = xmm1_1 * esi_1[ecx_1 * 2]
                            ecx_1 += 1
                            *(eax_7 - 4) = xmm0_17 f+ *(eax_7 - 4)
                            *eax_7 = xmm1_1 f* *(esi_1 - var_18_1 + eax_7) f+ *eax_7
                            eax_7 += 8
                        while (ecx_1 s< i_10)
                        
                        esi_5 = esi_1
                        result_3 = result_2
                        edi_2 = var_14_1
                case 3
                    if (i_10 s> 0)
                        float* ecx_2 = esi_1
                        void* eax_8 = edx_7 + 4
                        float* esi_10 = ecx_2 - edx_7
                        int32_t i_8 = i_10
                        int32_t i_2
                        
                        do
                            *(eax_8 - 4) = xmm1_1 * *ecx_2 f+ *(eax_8 - 4)
                            *eax_8 = xmm1_1 f* *(esi_10 + eax_8) f+ *eax_8
                            float xmm0_29 = xmm1_1 * ecx_2[2]
                            ecx_2 = &ecx_2[3]
                            *(eax_8 + 4) = xmm0_29 f+ *(eax_8 + 4)
                            eax_8 += 0xc
                            i_2 = i_8
                            i_8 -= 1
                        while (i_2 != 1)
                        goto label_71d28e
                case 4
                    if (i_10 s> 0)
                        void* eax_10 = edx_7 + 4
                        float* ecx_3 = &esi_1[3]
                        int32_t i_9 = i_10
                        int32_t i_3
                        
                        do
                            *(eax_10 - 4) = xmm1_1 * ecx_3[-3] f+ *(eax_10 - 4)
                            *eax_10 = xmm1_1 f* *(esi_1 - edx_7 + eax_10) f+ *eax_10
                            *(eax_10 + 4) = xmm1_1 * ecx_3[-1] f+ *(eax_10 + 4)
                            float xmm0_41 = xmm1_1 * *ecx_3
                            ecx_3 = &ecx_3[4]
                            *(eax_10 + 8) = xmm0_41 f+ *(eax_10 + 8)
                            eax_10 += 0x10
                            i_3 = i_9
                            i_9 -= 1
                        while (i_3 != 1)
                        goto label_71d28e
                    
                    edi_2 = var_14_1
        else if (i_10 s<= 0)
            edi_2 = var_14_1
        else
            void* eax_11 = edx_7 + 4
            int32_t esi_13 = 0
            void* var_20_1 = eax_11
            void* ecx_5 = &esi_1[3]
            int32_t var_24_1 = 0
            void* var_1c_1 = ecx_5
            int32_t i_5 = i_10
            int32_t i_4
            
            do
                int32_t edi_7 = 0
                
                if (ebx s>= 4)
                    void* edx_16 = ecx_5
                    int32_t j_2 = ((ebx - 4) u>> 2) + 1
                    edi_7 = j_2 << 2
                    int32_t j
                    
                    do
                        *(eax_11 - 4) = xmm1_1 f* *(edx_16 - 0xc) f+ *(eax_11 - 4)
                        *eax_11 = xmm1_1 f* *(esi_1 - var_18_1 + eax_11) f+ *eax_11
                        *(eax_11 + 4) = xmm1_1 f* *(edx_16 - 4) f+ *(eax_11 + 4)
                        float xmm0_53 = xmm1_1 f* *edx_16
                        edx_16 += 0x10
                        *(eax_11 + 8) = xmm0_53 f+ *(eax_11 + 8)
                        eax_11 += 0x10
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    esi_13 = var_24_1
                    eax_11 = var_20_1
                    ecx_5 = var_1c_1
                    edx_7 = var_18_1
                
                if (edi_7 s< ebx)
                    void* eax_13 = edx_7 + ((esi_13 + edi_7) << 2)
                    int32_t j_3 = ebx - edi_7
                    int32_t j_1
                    
                    do
                        *eax_13 = xmm1_1 f* *(esi_1 - var_18_1 + eax_13) f+ *eax_13
                        eax_13 += 4
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    eax_11 = var_20_1
                    ecx_5 = var_1c_1
                
                int32_t edx_19 = ebx << 2
                esi_13 += ebx
                ecx_5 += edx_19
                var_24_1 = esi_13
                eax_11 += edx_19
                var_1c_1 = ecx_5
                i_4 = i_5
                i_5 -= 1
                edx_7 = var_18_1
                var_20_1 = eax_11
            while (i_4 != 1)
        label_71d28e:
            esi_5 = esi_1
            result_3 = result_2
            edi_2 = var_14_1
        
        edx_3 = var_2c + 1
        result = &result_1[1]
        var_2c = edx_3
        result_1 = result
    while (edx_3 s<= result_3)

return result
