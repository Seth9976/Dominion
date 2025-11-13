// 函数: sub_718870
// 地址: 0x718870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax_1 = *(arg2 + 0x20)
int32_t* esi = *(eax_1 + (*(arg1 + 0x14) << 2))

if (esi[9] != 0)
    int32_t* edi_1 = *(arg1 + 0x10)
    
    if (*edi_1 f<= arg3)
        int32_t edx_1 = *(arg1 + 0xc)
        
        if (arg3 f< edi_1[edx_1 - 6])
            void* eax_12 = sub_714a40(eax_1, edx_1, edi_1, arg3, 6)
            float xmm6_1 = edi_1[eax_12 - 5]
            float xmm7_1 = edi_1[eax_12 - 4]
            void* ecx_8 = eax_12 s/ 6 * 0x13
            int32_t edx_4 = *(arg1 + 8)
            float xmm0_29 = *(edx_4 + (ecx_8 << 2) - 0x4c)
            float xmm1_1 = 1f - (arg3 f- edi_1[eax_12]) / (edi_1[eax_12 - 6] f- edi_1[eax_12])
            float xmm3_1
            
            if (0 f<= xmm1_1)
                xmm3_1 = _mm_min_ss(0x3f800000, xmm1_1)
            else
                xmm3_1 = (zx.o(0)).d
            
            xmm0_29 f- 0
            eax_1:1.b = (xmm0_29 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_29, 0f) ? 1 : 0) << 2
                | (xmm0_29 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                xmm0_29 - 1f
                eax_1:1.b = (xmm0_29 == 1f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_29, 1f) ? 1 : 0) << 2 | (xmm0_29 < 1f ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (p_8)
                    eax_1 = ecx_8
                    void* ecx_9 = ecx_8 - 0x12
                    arg1 = ecx_9
                    float xmm2_4 = (zx.o(0)).d
                    
                    if (ecx_9 s>= eax_1)
                    label_718abe:
                        xmm3_1 = (xmm3_1 - xmm2_4) * (1f f- *(edx_4 + (ecx_9 << 2) - 4))
                            / (1f - xmm2_4) f+ *(edx_4 + (ecx_9 << 2) - 4)
                    else
                        while (true)
                            xmm2_4 = *(edx_4 + (ecx_9 << 2))
                            
                            if (xmm2_4 >= xmm3_1)
                                float xmm1_9
                                float xmm5_2
                                
                                if (ecx_9 != arg1)
                                    xmm1_9 = *(edx_4 + (ecx_9 << 2) - 8)
                                    xmm5_2 = *(edx_4 + (ecx_9 << 2) - 4)
                                else
                                    xmm1_9 = (zx.o(0)).d
                                    xmm5_2 = (zx.o(0)).d
                                
                                xmm3_1 = (xmm3_1 - xmm1_9) * (*(edx_4 + (ecx_9 << 2) + 4) - xmm5_2)
                                    / (xmm2_4 - xmm1_9) + xmm5_2
                                break
                            
                            ecx_9 += 2
                            
                            if (ecx_9 s>= eax_1)
                                goto label_718abe
                else
                    xmm3_1 = (zx.o(0)).d
            
            float xmm1_5 = (edi_1[eax_12 + 1] f- xmm6_1) * xmm3_1 + xmm6_1
            
            if (arg5 == 0)
                void* ecx_10 = *esi
                esi[7] = (xmm1_5 f- *(ecx_10 + 0x28)) * arg4 f+ *(ecx_10 + 0x28)
                esi[8] = ((edi_1[eax_12 + 2] f- xmm7_1) * xmm3_1 + xmm7_1 f- *(ecx_10 + 0x2c))
                    * arg4 f+ *(ecx_10 + 0x2c)
                
                if (arg6 != 1)
                    goto label_718bc1
                
                esi[4] = *(ecx_10 + 0x18)
                int32_t eax_17 = *(ecx_10 + 0x1c)
                esi[5] = eax_17
                esi[6] = *(ecx_10 + 0x20)
                return eax_17
            
            esi[7] = (xmm1_5 f- esi[7]) * arg4 f+ esi[7]
            esi[8] = ((edi_1[eax_12 + 2] f- xmm7_1) * xmm3_1 + xmm7_1 f- esi[8]) * arg4 f+ esi[8]
            
            if (arg6 == 0)
            label_718bc1:
                esi[4] = int.d(fconvert.t(edi_1[eax_12 - 3]))
                edi_1[eax_12 - 2] f- 0
                int32_t ecx_12 = 0
                bool p_9 = unimplemented  {test ah, 0x44}
                
                if (p_9)
                    ecx_12 = 1
                
                esi[5] = ecx_12
                float xmm0_48 = edi_1[eax_12 - 1]
                xmm0_48 f- 0
                eax_1:1.b = (xmm0_48 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_48, 0f) ? 1 : 0) << 2 | (xmm0_48 < 0f ? 1 : 0)
                int32_t ecx_13 = 0
                bool p_11 = unimplemented  {test ah, 0x44}
                
                if (p_11)
                    ecx_13 = 1
                
                esi[6] = ecx_13
        else
            float xmm0_10 = edi_1[edx_1 - 5]
            
            if (arg5 == 0)
                void* ecx_3 = *esi
                esi[7] = (xmm0_10 f- *(ecx_3 + 0x28)) * arg4 f+ *(ecx_3 + 0x28)
                esi[8] = (edi_1[edx_1 - 4] f- *(ecx_3 + 0x2c)) * arg4 f+ *(ecx_3 + 0x2c)
                
                if (arg6 != 1)
                    goto label_7189bd
                
                esi[4] = *(ecx_3 + 0x18)
                int32_t eax_10 = *(ecx_3 + 0x1c)
                esi[5] = eax_10
                esi[6] = *(ecx_3 + 0x20)
                return eax_10
            
            esi[7] = (xmm0_10 f- esi[7]) * arg4 f+ esi[7]
            esi[8] = (edi_1[edx_1 - 4] f- esi[8]) * arg4 f+ esi[8]
            
            if (arg6 == 0)
            label_7189bd:
                esi[4] = int.d(fconvert.t(edi_1[edx_1 - 3]))
                float xmm0_25 = edi_1[edx_1 - 2]
                xmm0_25 f- 0
                int32_t eax_11
                eax_11:1.b = (xmm0_25 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_25, 0f) ? 1 : 0) << 2 | (xmm0_25 < 0f ? 1 : 0)
                int32_t ecx_5 = 0
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    ecx_5 = 1
                
                esi[5] = ecx_5
                float xmm0_26 = edi_1[edx_1 - 1]
                xmm0_26 f- 0
                eax_11:1.b = (xmm0_26 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_26, 0f) ? 1 : 0) << 2 | (xmm0_26 < 0f ? 1 : 0)
                int32_t ecx_6 = 0
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    ecx_6 = 1
                
                esi[6] = ecx_6
                return eax_11
    else
        void* ecx_2
        
        if (arg5 == 0)
            ecx_2 = *esi
            esi[7] = *(ecx_2 + 0x28)
            esi[8] = *(ecx_2 + 0x2c)
        label_7188f8:
            esi[4] = *(ecx_2 + 0x18)
            esi[5] = *(ecx_2 + 0x1c)
            int32_t eax_8 = *(ecx_2 + 0x20)
            esi[6] = eax_8
            return eax_8
        
        eax_1 = arg5 - 1
        
        if (arg5 == 1)
            ecx_2 = *esi
            esi[7] = (*(ecx_2 + 0x28) f- esi[7]) * arg4 f+ esi[7]
            esi[8] = (*(ecx_2 + 0x2c) f- esi[8]) * arg4 f+ esi[8]
            goto label_7188f8

return eax_1
