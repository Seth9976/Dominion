// 函数: sub_71b6c0
// 地址: 0x71b6c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = *(arg1 + 0x40)
int32_t esi = *(arg1 + 0x90)
int32_t edi = arg2
int32_t var_2c = edi
int32_t edx_1 = esi * ebx
int32_t edx_2 = *(arg1 + 0x78) + (edx_1 << 2)
int32_t eax_1 = *(arg1 + 0x64)
int32_t* var_8 = *(arg1 + 0x68)
int32_t eax_3 = *(arg1 + 0x80)
int32_t eax_5 = *(arg1 + 4) + (esi << 1)
int32_t var_18 = eax_5

if (ebx - 1 u> 3)
    int32_t ebx_13 = 0
    int32_t var_38_2 = 0
    
    if (eax_5 s> 0)
        int32_t esi_8 = ebx
        int32_t ecx_13 = eax_1
        int32_t var_24_2 = neg.d(edx_1)
        void* var_1c_2 = edx_2 + ((2 - edx_1) << 2)
        
        do
            int32_t eax_45 = *(ecx_13 + (ebx_13 << 3))
            int32_t ebx_14 = *(ecx_13 + (ebx_13 << 3) + 4)
            
            if (eax_45 s<= ebx_14)
                int32_t ecx_15 = eax_45 * esi_8
                int32_t* var_20_2 = var_8
                int32_t* eax_46 = var_20_2
                int32_t i_4 = ebx_14 - eax_45 + 1
                int32_t var_2c_2 = ecx_15
                void* var_28_2 = edi + 8 + (ecx_15 << 2)
                int32_t i
                
                do
                    float xmm1_10 = *eax_46
                    int32_t ebx_17 = 0
                    
                    if (esi_8 s>= 4)
                        void* eax_47 = var_28_2
                        void* ecx_16 = var_1c_2
                        int32_t j_2 = ((esi_8 - 4) u>> 2) + 1
                        ebx_17 = j_2 << 2
                        int32_t j
                        
                        do
                            *(eax_47 - 8) = xmm1_10 f* *(ecx_16 - 8) f+ *(eax_47 - 8)
                            *(eax_47 - 4) = xmm1_10 f* *(ecx_16 - 4) f+ *(eax_47 - 4)
                            *eax_47 = xmm1_10 f* *ecx_16 f+ *eax_47
                            float xmm0_44 = xmm1_10 f* *(ecx_16 + 4)
                            ecx_16 += 0x10
                            *(eax_47 + 4) = xmm0_44 f+ *(eax_47 + 4)
                            eax_47 += 0x10
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        esi_8 = ebx
                        ecx_15 = var_2c_2
                        eax_46 = var_20_2
                    
                    if (ebx_17 s< esi_8)
                        float* ecx_17 = edi + ((ecx_15 + ebx_17) << 2)
                        int32_t j_3 = esi_8 - ebx_17
                        float* eax_51 = edx_2 + ((var_24_2 + ebx_17) << 2)
                        int32_t j_1
                        
                        do
                            float xmm0_47 = xmm1_10 * *eax_51
                            eax_51 = &eax_51[1]
                            *ecx_17 = xmm0_47 + *ecx_17
                            ecx_17 = &ecx_17[1]
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                        esi_8 = ebx
                        ecx_15 = var_2c_2
                        eax_46 = var_20_2
                    
                    eax_46 = &eax_46[1]
                    var_28_2 += esi_8 << 2
                    ecx_15 += esi_8
                    i = i_4
                    i_4 -= 1
                    var_20_2 = eax_46
                    var_2c_2 = ecx_15
                while (i != 1)
                ecx_13 = eax_1
            
            var_1c_2 += esi_8 << 2
            ebx_13 = var_38_2 + 1
            eax_5 = eax_3 << 2
            var_24_2 += esi_8
            var_8 += eax_5
            var_38_2 = ebx_13
        while (ebx_13 s< var_18)
else
    switch (ebx)
        case 1
            int32_t ecx = 0
            int32_t var_28_1 = 0
            
            if (eax_5 s> 0)
                int32_t eax_7 = eax_3 << 2
                float* ebx_3 = edx_2 - (esi << 2)
                int32_t var_2c_1 = 0
                float* var_20_1 = ebx_3
                int32_t esi_2 = neg.d(esi) << 2
                void* var_30_1 = &var_8[2]
                int32_t var_14_1 = esi_2
                
                do
                    int32_t ecx_1 = *(eax_1 + (ecx << 3))
                    int32_t var_1c_1 = ecx_1
                    int32_t eax_13 = *(eax_1 + (var_28_1 << 3) + 4)
                    int32_t edx_4 = edx_2
                    
                    if (ecx_1 s<= eax_13)
                        if (eax_13 - ecx_1 + 1 s< 4)
                        label_71b80a:
                            void* eax_21 = &var_8[var_2c_1 - var_1c_1 + ecx_1]
                            ebx_3 = var_20_1
                            
                            do
                                float xmm0_13 = *eax_21
                                eax_21 += 4
                                *(edi + (ecx_1 << 2)) =
                                    xmm0_13 f* *(esi_2 + edx_4) f+ *(edi + (ecx_1 << 2))
                                ecx_1 += 1
                            while (ecx_1 s<= eax_13)
                        else
                            void* esi_3 = var_30_1
                            void* eax_17 = edi + ((ecx_1 + 2) << 2)
                            int32_t i_7 = ((eax_13 - ecx_1 - 3) u>> 2) + 1
                            ecx_1 += i_7 << 2
                            int32_t i_1
                            
                            do
                                *(eax_17 - 8) = *(esi_3 - 8) * *var_20_1 f+ *(eax_17 - 8)
                                *(eax_17 - 4) = *(esi_3 - 4) * *var_20_1 f+ *(eax_17 - 4)
                                *eax_17 = *esi_3 * *var_20_1 f+ *eax_17
                                float xmm0_10 = *(esi_3 + 4)
                                esi_3 += 0x10
                                *(eax_17 + 4) = xmm0_10 * *var_20_1 f+ *(eax_17 + 4)
                                eax_17 += 0x10
                                i_1 = i_7
                                i_7 -= 1
                            while (i_1 != 1)
                            edx_4 = edx_2
                            esi_2 = var_14_1
                            
                            if (ecx_1 s<= eax_13)
                                goto label_71b80a
                            
                            ebx_3 = var_20_1
                    
                    ebx_3 = &ebx_3[1]
                    ecx = var_28_1 + 1
                    var_2c_1 += eax_3
                    esi_2 += 4
                    var_30_1 += eax_7
                    var_28_1 = ecx
                    var_20_1 = ebx_3
                    var_14_1 = esi_2
                while (ecx s< var_18)
                
                return eax_7
        case 2
            int32_t esi_4 = 0
            
            if (eax_5 s> 0)
                int32_t ecx_3 = eax_3
                float* edx_6 = edx_2 - (esi << 3)
                
                do
                    int32_t eax_26 = *(eax_1 + (esi_4 << 3))
                    int32_t ebx_10 = *(eax_1 + (esi_4 << 3) + 4)
                    
                    if (eax_26 s<= ebx_10)
                        int32_t* ecx_4 = var_8
                        
                        do
                            float xmm1_1 = *ecx_4
                            ecx_4 = &ecx_4[1]
                            *(edi + (eax_26 << 3)) = xmm1_1 * *edx_6 f+ *(edi + (eax_26 << 3))
                            *(edi + (eax_26 << 3) + 4) =
                                xmm1_1 * edx_6[1] f+ *(edi + (eax_26 << 3) + 4)
                            eax_26 += 1
                        while (eax_26 s<= ebx_10)
                        
                        ecx_3 = eax_3
                    
                    esi_4 += 1
                    var_8 = &var_8[ecx_3]
                    edx_6 = &edx_6[2]
                while (esi_4 s< var_18)
                
                return ecx_3 << 2
        case 3
            int32_t ebx_11 = 0
            
            if (eax_5 s> 0)
                int32_t* esi_5 = var_8
                float* edx_8 = edx_2 - esi * 0xc + 8
                
                do
                    int32_t eax_30 = *(eax_1 + (ebx_11 << 3))
                    int32_t ecx_6 = *(eax_1 + (ebx_11 << 3) + 4)
                    
                    if (eax_30 s<= ecx_6)
                        void* eax_33 = edi + ((eax_30 * 3 + 2) << 2)
                        edi = var_2c
                        int32_t i_5 = ecx_6 - *(eax_1 + (ebx_11 << 3)) + 1
                        int32_t i_2
                        
                        do
                            float xmm1_4 = *esi_5
                            esi_5 = &esi_5[1]
                            *(eax_33 - 8) = xmm1_4 * edx_8[-2] f+ *(eax_33 - 8)
                            *(eax_33 - 4) = xmm1_4 * edx_8[-1] f+ *(eax_33 - 4)
                            *eax_33 = xmm1_4 * *edx_8 f+ *eax_33
                            eax_33 += 0xc
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                        esi_5 = var_8
                    
                    ebx_11 += 1
                    edx_8 = &edx_8[3]
                    esi_5 = &esi_5[eax_3]
                    var_8 = esi_5
                while (ebx_11 s< var_18)
                
                return eax_3 << 2
        case 4
            int32_t ebx_12 = 0
            
            if (eax_5 s> 0)
                int32_t* esi_7 = var_8
                float* edx_10 = edx_2 - (esi << 4) + 8
                
                do
                    int32_t eax_35 = *(eax_1 + (ebx_12 << 3))
                    int32_t ecx_10 = *(eax_1 + (ebx_12 << 3) + 4)
                    
                    if (eax_35 s<= ecx_10)
                        void* eax_37 = (eax_35 << 4) + edi + 8
                        edi = var_2c
                        int32_t i_6 = ecx_10 - *(eax_1 + (ebx_12 << 3)) + 1
                        int32_t i_3
                        
                        do
                            float xmm1_7 = *esi_7
                            esi_7 = &esi_7[1]
                            *(eax_37 - 8) = xmm1_7 * edx_10[-2] f+ *(eax_37 - 8)
                            *(eax_37 - 4) = xmm1_7 * edx_10[-1] f+ *(eax_37 - 4)
                            *eax_37 = xmm1_7 * *edx_10 f+ *eax_37
                            *(eax_37 + 4) = xmm1_7 * edx_10[1] f+ *(eax_37 + 4)
                            eax_37 += 0x10
                            i_3 = i_6
                            i_6 -= 1
                        while (i_3 != 1)
                        esi_7 = var_8
                    
                    ebx_12 += 1
                    edx_10 = &edx_10[4]
                    esi_7 = &esi_7[eax_3]
                    var_8 = esi_7
                while (ebx_12 s< var_18)
                
                return eax_3 << 2

return eax_5
