// 函数: sub_715670
// 地址: 0x715670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = *(arg2 + 8)
int32_t* esi = *(eax_1 + (*(arg1 + 0x14) << 2))

if (esi[0x1b] != 0)
    int32_t edx_1 = *(arg1 + 0xc)
    int32_t* edi_1 = *(arg1 + 0x10)
    
    if (*edi_1 f<= arg3)
        float xmm2_2
        float xmm3_1
        
        if (arg3 f< edi_1[edx_1 - 3])
            void* eax_7 = sub_714a40(eax_1, edx_1, edi_1, arg3, 3)
            float xmm1_1 = (zx.o(0)).d
            float xmm6_1 = edi_1[eax_7 - 2]
            float xmm7_1 = edi_1[eax_7 - 1]
            int32_t edx_3 = *(arg1 + 8)
            void* ecx_4 = eax_7 s/ 3 * 0x13
            float xmm0_12 = *(edx_3 + (ecx_4 << 2) - 0x4c)
            float xmm5_1 = 1f - (arg3 f- edi_1[eax_7]) / (edi_1[eax_7 - 3] f- edi_1[eax_7])
            float xmm4_1
            
            if (0 f<= xmm5_1)
                xmm4_1 = _mm_min_ss(0x3f800000, xmm5_1)
            else
                xmm4_1 = (zx.o(0)).d
            
            xmm0_12 f- 0
            int32_t eax_11
            eax_11:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
                | (xmm0_12 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm0_12 - 1f
                eax_11:1.b = (xmm0_12 == 1f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_12, 1f) ? 1 : 0) << 2 | (xmm0_12 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    void* ecx_5 = ecx_4 - 0x12
                    float xmm2_5 = (zx.o(0)).d
                    void* ebx_1 = ecx_5
                    
                    if (ecx_5 s>= ecx_4)
                    label_7157da:
                        xmm4_1 = (xmm4_1 - xmm2_5) * (1f f- *(edx_3 + (ecx_5 << 2) - 4))
                            / (1f - xmm2_5) f+ *(edx_3 + (ecx_5 << 2) - 4)
                    else
                        while (true)
                            xmm2_5 = *(edx_3 + (ecx_5 << 2))
                            
                            if (xmm2_5 >= xmm4_1)
                                float xmm3_6
                                
                                if (ecx_5 != ebx_1)
                                    xmm1_1 = *(edx_3 + (ecx_5 << 2) - 8)
                                    xmm3_6 = *(edx_3 + (ecx_5 << 2) - 4)
                                else
                                    xmm3_6 = (zx.o(0)).d
                                
                                xmm4_1 = (xmm4_1 - xmm1_1) * (*(edx_3 + (ecx_5 << 2) + 4) - xmm3_6)
                                    / (xmm2_5 - xmm1_1) + xmm3_6
                                break
                            
                            ecx_5 += 2
                            
                            if (ecx_5 s>= ecx_4)
                                goto label_7157da
                else
                    xmm4_1 = (zx.o(0)).d
            
            xmm2_2 = (edi_1[eax_7 + 1] f- xmm6_1) * xmm4_1 + xmm6_1
            xmm3_1 = (edi_1[eax_7 + 2] f- xmm7_1) * xmm4_1 + xmm7_1
        else
            xmm2_2 = edi_1[edx_1 - 2]
            xmm3_1 = edi_1[edx_1 - 1]
        
        eax_1 = arg5
        
        switch (eax_1)
            case 0
                void* eax_14 = *esi
                esi[0xa] = xmm2_2 * arg4 f+ *(eax_14 + 0x24)
                esi[0xb] = xmm3_1 * arg4 f+ *(eax_14 + 0x28)
                return eax_14
            case 1, 2
                void* eax_15 = *esi
                esi[0xa] = (xmm2_2 f+ *(eax_15 + 0x24) f- esi[0xa]) * arg4 f+ esi[0xa]
                esi[0xb] = (xmm3_1 f+ *(eax_15 + 0x28) f- esi[0xb]) * arg4 f+ esi[0xb]
                return eax_15
            case 3
                float xmm3_14 = xmm3_1 * arg4 f+ esi[0xb]
                esi[0xa] = xmm2_2 * arg4 f+ esi[0xa]
                esi[0xb] = xmm3_14
    else
        if (arg5 == 0)
            void* ecx_1 = *esi
            esi[0xa] = *(ecx_1 + 0x24)
            int32_t eax_6 = *(ecx_1 + 0x28)
            esi[0xb] = eax_6
            return eax_6
        
        eax_1 = arg5 - 1
        
        if (arg5 == 1)
            void* eax_4 = *esi
            esi[0xa] = (*(eax_4 + 0x24) f- esi[0xa]) * arg4 f+ esi[0xa]
            esi[0xb] = (*(eax_4 + 0x28) f- esi[0xb]) * arg4 f+ esi[0xb]
            return eax_4

return eax_1
