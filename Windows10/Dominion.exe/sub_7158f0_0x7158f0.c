// 函数: sub_7158f0
// 地址: 0x7158f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = *(*(arg2 + 0x14) + (*(arg1 i+ 0x14) << 2))
void* result = esi[1]

if (*(result + 0x6c) != 0)
    int32_t* edi_1 = *(arg1 i+ 0x10)
    
    if (*edi_1 f<= arg3)
        int32_t edx = *(arg1 i+ 0xc)
        float xmm1_1
        float xmm3_1
        float xmm4_3
        float xmm5_3
        
        if (arg3 f< edi_1[edx - 5])
            void* eax_8 = sub_714a40(result, edx, edi_1, arg3, 5)
            int32_t xmm1_2 = (zx.o(0)).d
            float xmm5_4 = edi_1[eax_8 - 4]
            float xmm7_4 = edi_1[eax_8 - 3]
            int32_t edx_3 = *(arg1 i+ 8)
            float ecx_5 = eax_8 s/ 5 * 0x13
            float xmm3_2 = 1f - (arg3 f- edi_1[eax_8]) / (edi_1[eax_8 - 5] f- edi_1[eax_8])
            float xmm0_12 = *(edx_3 + (ecx_5 << 2) - 0x4c)
            float xmm2_8
            
            if (0f <= xmm3_2)
                xmm2_8 = _mm_min_ss(0x3f800000, xmm3_2)
            else
                xmm2_8 = (zx.o(0)).d
            
            xmm0_12 f- 0
            int32_t eax_12
            eax_12:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
                | (xmm0_12 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm0_12 - 1f
                eax_12:1.b = (xmm0_12 == 1f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_12, 1f) ? 1 : 0) << 2 | (xmm0_12 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    int32_t ecx_6 = ecx_5 - 0x12
                    float xmm3_3 = (zx.o(0)).d
                    int32_t ebx_1 = ecx_6
                    
                    if (ecx_6 s>= ecx_5)
                    label_715ad1:
                        xmm2_8 = (xmm2_8 - xmm3_3) * (1f f- *(edx_3 + (ecx_6 << 2) - 4))
                            / (1f - xmm3_3) f+ *(edx_3 + (ecx_6 << 2) - 4)
                    else
                        while (true)
                            xmm3_3 = *(edx_3 + (ecx_6 << 2))
                            
                            if (xmm3_3 >= xmm2_8)
                                float xmm4_7
                                
                                if (ecx_6 != ebx_1)
                                    xmm1_2 = *(edx_3 + (ecx_6 << 2) - 8)
                                    xmm4_7 = *(edx_3 + (ecx_6 << 2) - 4)
                                else
                                    xmm4_7 = (zx.o(0)).d
                                
                                xmm2_8 = (xmm2_8 f- xmm1_2) * (*(edx_3 + (ecx_6 << 2) + 4) - xmm4_7)
                                    / (xmm3_3 f- xmm1_2) + xmm4_7
                                break
                            
                            ecx_6 += 2
                            
                            if (ecx_6 s>= ecx_5)
                                goto label_715ad1
                else
                    xmm2_8 = (zx.o(0)).d
            
            xmm1_1 = (edi_1[eax_8 + 1] f- xmm5_4) * xmm2_8 + xmm5_4
            xmm3_1 = (edi_1[eax_8 + 2] f- xmm7_4) * xmm2_8 + xmm7_4
            xmm4_3 = (edi_1[eax_8 + 3] f- edi_1[eax_8 - 2]) * xmm2_8 f+ edi_1[eax_8 - 2]
            xmm5_3 = (edi_1[eax_8 + 4] f- edi_1[eax_8 - 1]) * xmm2_8 f+ edi_1[eax_8 - 1]
        else
            xmm1_1 = edi_1[edx - 4]
            xmm3_1 = edi_1[edx - 3]
            xmm4_3 = edi_1[edx - 2]
            xmm5_3 = edi_1[edx - 1]
        
        arg4 - 1f
        result:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2
            | (arg4 < 1f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (not(p_6))
            esi[2] = xmm1_1
            esi[3] = xmm3_1
            esi[4] = xmm4_3
            esi[5] = xmm5_3
            return sub_752330(&esi[2]) __tailcall
        
        if (arg5 == 0)
            void* ecx_8 = *esi
            esi[2] = *(ecx_8 + 0x10)
            esi[3] = *(ecx_8 + 0x14)
            esi[4] = *(ecx_8 + 0x18)
            esi[5] = *(ecx_8 + 0x1c)
        
        float xmm4_10 = (xmm4_3 f- esi[4]) * arg4 f+ esi[4]
        float xmm5_10 = (xmm5_3 f- esi[5]) * arg4 f+ esi[5]
        float xmm1_9 = (xmm1_1 f- esi[2]) * arg4 f+ esi[2]
        esi[3] = (xmm3_1 f- esi[3]) * arg4 f+ esi[3]
        esi[4] = xmm4_10
        esi[5] = xmm5_10
        esi[2] = xmm1_9
        return sub_752330(&esi[2]) __tailcall
    
    if (arg5 == 0)
        void* ecx_2 = *esi
        esi[2] = *(ecx_2 + 0x10)
        esi[3] = *(ecx_2 + 0x14)
        esi[4] = *(ecx_2 + 0x18)
        result = *(ecx_2 + 0x1c)
        esi[5] = result
    else
        result = arg5 - 1
        
        if (arg5 == 1)
            void* eax_4 = *esi
            float xmm0_2 = esi[3]
            float xmm6 = esi[4]
            float xmm4_1 = esi[5]
            float xmm7_3 = (*(eax_4 + 0x14) - xmm0_2) * arg4
            float xmm0_6 = (*(eax_4 + 0x10) f- esi[2]) * arg4 f+ esi[2]
            float xmm4_2 = xmm4_1 + (*(eax_4 + 0x1c) - xmm4_1) * arg4
            esi[4] = xmm6 + (*(eax_4 + 0x18) - xmm6) * arg4
            esi[2] = xmm0_6
            esi[5] = xmm4_2
            esi[3] = xmm0_2 + xmm7_3
            return sub_752330(&esi[2]) __tailcall

return result
