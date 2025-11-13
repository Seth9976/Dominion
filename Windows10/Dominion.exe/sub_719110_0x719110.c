// 函数: sub_719110
// 地址: 0x719110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = *(arg2 + 0x30)
int32_t* esi = *(eax_1 + (*(arg1 + 0x14) << 2))

if (esi[0x1c] != 0)
    int32_t* edi_1 = *(arg1 + 0x10)
    
    if (*edi_1 f<= arg3)
        int32_t edx_1 = *(arg1 + 0xc)
        float xmm1_1
        
        if (arg3 f< edi_1[edx_1 - 2])
            void* eax_7 = sub_714a40(eax_1, edx_1, edi_1, arg3, 2)
            float xmm1_2 = (zx.o(0)).d
            float xmm5_1 = edi_1[eax_7 - 1]
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(eax_7)
            int32_t edx_3 = *(arg1 + 8)
            void* ecx_2 = ((eax_8 - edx_2) s>> 1) * 0x13
            float xmm3_1 = 1f - (arg3 f- edi_1[eax_7]) / (edi_1[eax_7 - 2] f- edi_1[eax_7])
            float xmm0_8 = *(edx_3 + (ecx_2 << 2) - 0x4c)
            float xmm2_4
            
            if (0f <= xmm3_1)
                xmm2_4 = _mm_min_ss(0x3f800000, xmm3_1)
            else
                xmm2_4 = (zx.o(0)).d
            
            xmm0_8 f- 0
            int32_t eax_10
            eax_10:1.b = (xmm0_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2
                | (xmm0_8 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm0_8 - 1f
                eax_10:1.b = (xmm0_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 1f) ? 1 : 0) << 2
                    | (xmm0_8 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    void* ecx_3 = ecx_2 - 0x12
                    float xmm3_2 = (zx.o(0)).d
                    void* ebx_1 = ecx_3
                    
                    if (ecx_3 s>= ecx_2)
                    label_71924a:
                        xmm2_4 = (xmm2_4 - xmm3_2) * (1f f- *(edx_3 + (ecx_3 << 2) - 4))
                            / (1f - xmm3_2) f+ *(edx_3 + (ecx_3 << 2) - 4)
                    else
                        while (true)
                            xmm3_2 = *(edx_3 + (ecx_3 << 2))
                            
                            if (xmm3_2 >= xmm2_4)
                                float xmm4_2
                                
                                if (ecx_3 != ebx_1)
                                    xmm1_2 = *(edx_3 + (ecx_3 << 2) - 8)
                                    xmm4_2 = *(edx_3 + (ecx_3 << 2) - 4)
                                else
                                    xmm4_2 = (zx.o(0)).d
                                
                                xmm2_4 = (xmm2_4 - xmm1_2) * (*(edx_3 + (ecx_3 << 2) + 4) - xmm4_2)
                                    / (xmm3_2 - xmm1_2) + xmm4_2
                                break
                            
                            ecx_3 += 2
                            
                            if (ecx_3 s>= ecx_2)
                                goto label_71924a
                else
                    xmm2_4 = (zx.o(0)).d
            
            eax_1 = eax_7
            xmm1_1 = (edi_1[eax_1 + 1] f- xmm5_1) * xmm2_4 + xmm5_1
        else
            xmm1_1 = edi_1[edx_1 - 1]
        
        if (arg5 == 0)
            void* eax_12 = *esi
            esi[5] = (xmm1_1 f- *(eax_12 + 0x2c)) * arg4 f+ *(eax_12 + 0x2c)
            return eax_12
        
        esi[5] = (xmm1_1 f- esi[5]) * arg4 f+ esi[5]
    else
        if (arg5 == 0)
            int32_t eax_6 = *(*esi + 0x2c)
            esi[5] = eax_6
            return eax_6
        
        eax_1 = arg5 - 1
        
        if (arg5 == 1)
            void* eax_4 = *esi
            esi[5] = (*(eax_4 + 0x2c) f- esi[5]) * arg4 f+ esi[5]
            return eax_4

return eax_1
