// 函数: sub_718c10
// 地址: 0x718c10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = *(arg2 + 0x28)
int32_t* esi = *(eax_1 + (*(arg1 + 0x14) << 2))

if (esi[8] != 0)
    int32_t* edi_1 = *(arg1 + 0x10)
    
    if (*edi_1 f<= arg3)
        int32_t edx_1 = *(arg1 + 0xc)
        float xmm3_1
        float xmm4_1
        float xmm5_1
        float xmm6_1
        
        if (arg3 f< edi_1[edx_1 - 5])
            void* eax_8 = sub_714a40(eax_1, edx_1, edi_1, arg3, 5)
            int32_t xmm1_1 = (zx.o(0)).d
            float xmm5_2 = edi_1[eax_8 - 4]
            float xmm6_2 = edi_1[eax_8 - 3]
            float xmm7_1 = edi_1[eax_8 - 2]
            int32_t edx_4 = *(arg1 + 8)
            void* ecx_4 = eax_8 s/ 5 * 0x13
            float xmm3_2 = 1f - (arg3 f- edi_1[eax_8]) / (edi_1[eax_8 - 5] f- edi_1[eax_8])
            float xmm0_20 = *(edx_4 + (ecx_4 << 2) - 0x4c)
            float xmm2_5
            
            if (0f <= xmm3_2)
                xmm2_5 = _mm_min_ss(0x3f800000, xmm3_2)
            else
                xmm2_5 = (zx.o(0)).d
            
            xmm0_20 f- 0
            int32_t eax_12
            eax_12:1.b = (xmm0_20 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_20, 0f) ? 1 : 0) << 2
                | (xmm0_20 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm0_20 - 1f
                eax_12:1.b = (xmm0_20 == 1f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_20, 1f) ? 1 : 0) << 2 | (xmm0_20 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    void* ecx_5 = ecx_4 - 0x12
                    float xmm3_3 = (zx.o(0)).d
                    void* ebx_1 = ecx_5
                    
                    if (ecx_5 s>= ecx_4)
                    label_718dde:
                        xmm2_5 = (xmm2_5 - xmm3_3) * (1f f- *(edx_4 + (ecx_5 << 2) - 4))
                            / (1f - xmm3_3) f+ *(edx_4 + (ecx_5 << 2) - 4)
                    else
                        while (true)
                            xmm3_3 = *(edx_4 + (ecx_5 << 2))
                            
                            if (xmm3_3 >= xmm2_5)
                                float xmm4_9
                                
                                if (ecx_5 != ebx_1)
                                    xmm1_1 = *(edx_4 + (ecx_5 << 2) - 8)
                                    xmm4_9 = *(edx_4 + (ecx_5 << 2) - 4)
                                else
                                    xmm4_9 = (zx.o(0)).d
                                
                                xmm2_5 = (xmm2_5 f- xmm1_1) * (*(edx_4 + (ecx_5 << 2) + 4) - xmm4_9)
                                    / (xmm3_3 f- xmm1_1) + xmm4_9
                                break
                            
                            ecx_5 += 2
                            
                            if (ecx_5 s>= ecx_4)
                                goto label_718dde
                else
                    xmm2_5 = (zx.o(0)).d
            
            eax_1 = eax_8
            xmm3_1 = (edi_1[eax_1 + 1] f- xmm5_2) * xmm2_5 + xmm5_2
            xmm4_1 = (edi_1[eax_1 + 2] f- xmm6_2) * xmm2_5 + xmm6_2
            xmm5_1 = (edi_1[eax_1 + 3] f- xmm7_1) * xmm2_5 + xmm7_1
            xmm6_1 = (edi_1[eax_1 + 4] f- edi_1[eax_1 - 1]) * xmm2_5 f+ edi_1[eax_1 - 1]
        else
            xmm3_1 = edi_1[edx_1 - 4]
            xmm4_1 = edi_1[edx_1 - 3]
            xmm5_1 = edi_1[edx_1 - 2]
            xmm6_1 = edi_1[edx_1 - 1]
        
        if (arg5 == 0)
            void* eax_14 = *esi
            esi[4] = (xmm3_1 f- *(eax_14 + 0x18)) * arg4 f+ *(eax_14 + 0x18)
            esi[5] = (xmm4_1 f- *(eax_14 + 0x1c)) * arg4 f+ *(eax_14 + 0x1c)
            esi[6] = (xmm5_1 f- *(eax_14 + 0x20)) * arg4 f+ *(eax_14 + 0x20)
            esi[7] = (xmm6_1 f- *(eax_14 + 0x24)) * arg4 f+ *(eax_14 + 0x24)
            return eax_14
        
        float xmm4_12 = (xmm4_1 f- esi[5]) * arg4 f+ esi[5]
        float xmm6_10 = (xmm6_1 f- esi[7]) * arg4
        float xmm5_11 = (xmm5_1 f- esi[6]) * arg4 f+ esi[6]
        esi[4] = (xmm3_1 f- esi[4]) * arg4 f+ esi[4]
        float xmm6_11 = xmm6_10 f+ esi[7]
        esi[5] = xmm4_12
        esi[6] = xmm5_11
        esi[7] = xmm6_11
    else
        void* ecx_1 = *esi
        
        if (arg5 == 0)
            esi[4] = *(ecx_1 + 0x18)
            esi[5] = *(ecx_1 + 0x1c)
            esi[6] = *(ecx_1 + 0x20)
            int32_t eax_7 = *(ecx_1 + 0x24)
            esi[7] = eax_7
            return eax_7
        
        eax_1 = arg5 - 1
        
        if (arg5 == 1)
            esi[4] = (*(ecx_1 + 0x18) f- esi[4]) * arg4 f+ esi[4]
            esi[5] = (*(ecx_1 + 0x1c) f- esi[5]) * arg4 f+ esi[5]
            esi[6] = (*(ecx_1 + 0x20) f- esi[6]) * arg4 f+ esi[6]
            esi[7] = (*(ecx_1 + 0x24) f- esi[7]) * arg4 f+ esi[7]

return eax_1
