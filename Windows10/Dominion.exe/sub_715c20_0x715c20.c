// 函数: sub_715c20
// 地址: 0x715c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = *(*(arg2 i+ 0x14) + (*(arg1 + 0x14) << 2))
int32_t* eax_2 = edi[1]

if (eax_2[0x1b] != 0)
    int32_t* esi_1 = *(arg1 + 0x10)
    
    if (*esi_1 f<= arg3)
        int32_t edx_3 = *(arg1 + 0xc)
        float xmm0_13
        float xmm1_1
        float xmm3_5
        float xmm4_7
        float xmm5_5
        float xmm6_5
        float xmm7_3
        
        if (arg3 f< esi_1[edx_3 - 8])
            float eax_14 = sub_714a40(eax_2, edx_3, esi_1, arg3, 8)
            float xmm5_6 = esi_1[eax_14 - 7]
            float xmm6_6 = esi_1[eax_14 - 6]
            float xmm7_4 = esi_1[eax_14 - 5]
            int32_t eax_15
            int32_t edx_4
            edx_4:eax_15 = sx.q(eax_14)
            int32_t edx_6 = *(arg1 + 8)
            void* ecx_6 = ((eax_15 + (edx_4 & 7)) s>> 3) * 0x13
            float xmm3_6 = 1f - (arg3 f- esi_1[eax_14]) / (esi_1[eax_14 - 8] f- esi_1[eax_14])
            float xmm1_2 = *(edx_6 + (ecx_6 << 2) - 0x4c)
            float xmm2_10
            
            if (0f <= xmm3_6)
                xmm2_10 = _mm_min_ss(0x3f800000, xmm3_6)
            else
                xmm2_10 = (zx.o(0)).d
            
            xmm1_2 f- 0
            int32_t eax_17
            eax_17:1.b = (xmm1_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2
                | (xmm1_2 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm1_2 - 1f
                eax_17:1.b = (xmm1_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 1f) ? 1 : 0) << 2
                    | (xmm1_2 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    void* ecx_7 = ecx_6 - 0x12
                    float xmm3_7 = (zx.o(0)).d
                    void* ebx_1 = ecx_7
                    
                    if (ecx_7 s>= ecx_6)
                    label_715ea1:
                        xmm2_10 = (xmm2_10 - xmm3_7) * (1f f- *(edx_6 + (ecx_7 << 2) - 4))
                            / (1f - xmm3_7) f+ *(edx_6 + (ecx_7 << 2) - 4)
                    else
                        while (true)
                            xmm3_7 = *(edx_6 + (ecx_7 << 2))
                            
                            if (xmm3_7 >= xmm2_10)
                                float xmm1_6
                                int32_t xmm4_11
                                
                                if (ecx_7 != ebx_1)
                                    xmm1_6 = *(edx_6 + (ecx_7 << 2) - 8)
                                    xmm4_11 = *(edx_6 + (ecx_7 << 2) - 4)
                                else
                                    xmm1_6 = (zx.o(0)).d
                                    xmm4_11 = (zx.o(0)).d
                                
                                xmm2_10 = (xmm2_10 - xmm1_6)
                                    * (*(edx_6 + (ecx_7 << 2) + 4) f- xmm4_11)
                                    / (xmm3_7 - xmm1_6) f+ xmm4_11
                                break
                            
                            ecx_7 += 2
                            
                            if (ecx_7 s>= ecx_6)
                                goto label_715ea1
                else
                    xmm2_10 = (zx.o(0)).d
            
            eax_2 = eax_14
            xmm1_1 = (esi_1[eax_2 + 1] f- xmm5_6) * xmm2_10 + xmm5_6
            xmm3_5 = (esi_1[eax_2 + 2] f- xmm6_6) * xmm2_10 + xmm6_6
            xmm4_7 = (esi_1[eax_2 + 3] f- xmm7_4) * xmm2_10 + xmm7_4
            xmm0_13 = (esi_1[eax_2 + 7] f- esi_1[eax_2 - 1]) * xmm2_10 f+ esi_1[eax_2 - 1]
            xmm5_5 = (esi_1[&eax_2[1]] f- esi_1[&eax_2[-1]]) * xmm2_10 f+ esi_1[&eax_2[-1]]
            xmm6_5 = (esi_1[eax_2 + 5] f- esi_1[eax_2 - 3]) * xmm2_10 f+ esi_1[eax_2 - 3]
            xmm7_3 = (esi_1[eax_2 + 6] f- esi_1[eax_2 - 2]) * xmm2_10 f+ esi_1[eax_2 - 2]
        else
            xmm1_1 = esi_1[edx_3 - 7]
            xmm3_5 = esi_1[edx_3 - 6]
            xmm4_7 = esi_1[edx_3 - 5]
            xmm5_5 = esi_1[edx_3 - 4]
            xmm6_5 = esi_1[edx_3 - 3]
            xmm7_3 = esi_1[edx_3 - 2]
            xmm0_13 = esi_1[edx_3 - 1]
        
        arg4 - 1f
        eax_2:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2
            | (arg4 < 1f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (not(p_6))
            edi[2] = xmm1_1
            edi[3] = xmm3_5
            edi[4] = xmm4_7
            edi[5] = xmm5_5
            sub_752330(&edi[2])
            float* ecx_9 = edi[6]
            *ecx_9 = xmm6_5
            ecx_9[1] = xmm7_3
            ecx_9[2] = xmm0_13
            ecx_9[3] = 0x3f800000
            sub_752330(ecx_9)
            return eax_2
        
        int32_t* esi_3 = edi[6]
        float* eax_19 = &edi[4]
        void* ecx_10 = &edi[5]
        float* edi_1
        
        if (arg5 != 0)
            edi_1 = &esi_3[1]
        else
            void* ecx_11 = *edi
            edi_1 = &esi_3[1]
            edi[2] = *(ecx_11 + 0x10)
            edi[3] = *(ecx_11 + 0x14)
            edi[4] = *(ecx_11 + 0x18)
            edi[5] = *(ecx_11 + 0x1c)
            int32_t* ecx_12 = *(ecx_11 + 0x20)
            *esi_3 = *ecx_12
            *edi_1 = ecx_12[1]
            esi_3[2] = ecx_12[2]
            ecx_10 = &edi[5]
            esi_3[3] = ecx_12[3]
            eax_19 = &edi[4]
        
        float xmm1_9 = (xmm1_1 f- edi[2]) * arg4 f+ edi[2]
        float xmm4_13 = (xmm4_7 - *eax_19) * arg4
        float xmm3_14 = (xmm3_5 f- edi[3]) * arg4 f+ edi[3]
        *ecx_10 = (xmm5_5 f- *ecx_10) * arg4 f+ *ecx_10
        float xmm4_14 = xmm4_13 + *eax_19
        edi[2] = xmm1_9
        edi[3] = xmm3_14
        *eax_19 = xmm4_14
        sub_752330(&edi[2])
        float* eax_28 = &esi_3[2]
        float xmm1_13 = (xmm0_13 - *eax_28) * arg4 + *eax_28
        float xmm7_10 = (xmm7_3 - *edi_1) * arg4 + *edi_1
        *esi_3 = (xmm6_5 f- *esi_3) * arg4 f+ *esi_3
        *eax_28 = xmm1_13
        eax_2 = &esi_3[3]
        *edi_1 = xmm7_10
        *eax_2 = *eax_2 + 0f
        sub_752330(esi_3)
    else
        if (arg5 == 0)
            void* ecx_3 = *edi
            int32_t* edx_2 = edi[6]
            edi[2] = *(ecx_3 + 0x10)
            edi[3] = *(ecx_3 + 0x14)
            edi[4] = *(ecx_3 + 0x18)
            edi[5] = *(ecx_3 + 0x1c)
            int32_t* ecx_4 = *(ecx_3 + 0x20)
            *edx_2 = *ecx_4
            edx_2[1] = ecx_4[1]
            edx_2[2] = ecx_4[2]
            int32_t eax_13 = ecx_4[3]
            edx_2[3] = eax_13
            return eax_13
        
        eax_2 = arg5 - 1
        
        if (arg5 == 1)
            void* eax_5 = *edi
            float xmm7_1 = edi[3]
            float xmm5_1 = edi[4]
            float xmm3_1 = edi[5]
            int32_t* edx_1 = *(eax_5 + 0x20)
            float* esi_2 = edi[6]
            float xmm5_2 = xmm5_1 + (*(eax_5 + 0x18) - xmm5_1) * arg4
            float xmm0_4 = *(eax_5 + 0x10) f- edi[2]
            float xmm3_2 = xmm3_1 + (*(eax_5 + 0x1c) - xmm3_1) * arg4
            edi[3] = xmm7_1 + (*(eax_5 + 0x14) - xmm7_1) * arg4
            edi[4] = xmm5_2
            edi[5] = xmm3_2
            edi[2] = xmm0_4 * arg4 f+ edi[2]
            sub_752330(&edi[2])
            float xmm5_3 = esi_2[1]
            float xmm3_3 = esi_2[2]
            float xmm2_7 = (edx_1[2] f- xmm3_3) * arg4
            float xmm4_6 = (edx_1[1] f- xmm5_3) * arg4
            *esi_2 = (*edx_1 - *esi_2) * arg4 + *esi_2
            float xmm0_12 = esi_2[3] + 0f
            esi_2[2] = xmm3_3 + xmm2_7
            esi_2[3] = xmm0_12
            esi_2[1] = xmm5_3 + xmm4_6
            sub_752330(esi_2)
            return eax_5

return eax_2
