// 函数: sub_714b80
// 地址: 0x714b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = *(arg2 + 8)
int32_t* esi = *(eax_1 + (*(arg1 + 0x14) << 2))

if (esi[0x1b] != 0)
    int32_t* edi_1 = *(arg1 + 0x10)
    float xmm2_3
    
    if (*edi_1 f<= arg3)
        int32_t edx_1 = *(arg1 + 0xc)
        
        if (arg3 f< edi_1[edx_1 - 2])
            int32_t eax_10 = sub_714a40(eax_1, edx_1, edi_1, arg3, 2)
            void* ecx_3 = &edi_1[eax_10]
            int32_t edx_2 = *(arg1 + 8)
            float xmm1_3 = (zx.o(0)).d
            float xmm6_1 = *(ecx_3 - 4)
            int32_t edi_2 = (eax_10 s>> 1) * 0x13
            float xmm0_9 = *(edx_2 + ((edi_2 - 0x13) << 2))
            float xmm5_1 = 1f - (arg3 f- edi_1[eax_10]) / (edi_1[eax_10 - 2] f- *ecx_3)
            float xmm3_1
            
            if (0 f<= xmm5_1)
                xmm3_1 = _mm_min_ss(0x3f800000, xmm5_1)
            else
                xmm3_1 = (zx.o(0)).d
            
            xmm0_9 f- 0
            int32_t eax_11
            eax_11:1.b = (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2
                | (xmm0_9 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm0_9 - 1f
                eax_11:1.b = (xmm0_9 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 1f) ? 1 : 0) << 2
                    | (xmm0_9 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    int32_t ecx_5 = edi_2 - 0x12
                    float xmm2_9 = (zx.o(0)).d
                    int32_t eax_12 = ecx_5
                    
                    if (ecx_5 s>= edi_2)
                    label_714d0e:
                        xmm3_1 = (xmm3_1 - xmm2_9) * (1f f- *(edx_2 + (ecx_5 << 2) - 4))
                            / (1f - xmm2_9) f+ *(edx_2 + (ecx_5 << 2) - 4)
                    else
                        while (true)
                            xmm2_9 = *(edx_2 + (ecx_5 << 2))
                            
                            if (xmm2_9 >= xmm3_1)
                                float xmm4_3
                                
                                if (ecx_5 != eax_12)
                                    xmm1_3 = *(edx_2 + (ecx_5 << 2) - 8)
                                    xmm4_3 = *(edx_2 + (ecx_5 << 2) - 4)
                                else
                                    xmm4_3 = (zx.o(0)).d
                                
                                xmm3_1 = (xmm3_1 - xmm1_3) * (*(edx_2 + (ecx_5 << 2) + 4) - xmm4_3)
                                    / (xmm2_9 - xmm1_3) + xmm4_3
                                break
                            
                            ecx_5 += 2
                            
                            if (ecx_5 s>= edi_2)
                                goto label_714d0e
                else
                    xmm3_1 = (zx.o(0)).d
            
            double xmm4_2 = 16384.499999999996
            float xmm2_11 = *(ecx_3 + 4) - xmm6_1
            eax_1 = arg5
            xmm2_3 = (xmm2_11 - _mm_cvtepi32_ps(zx.o((0x4000
                - int.d(xmm4_2 - _mm_cvtps_pd(xmm2_11 / 360f))) * 0x168))) * xmm3_1 + xmm6_1
            
            if (eax_1 u<= 3)
                switch (eax_1)
                    case 0
                        int32_t xmm0_22[0x4] =
                            zx.o((0x4000 - int.d(xmm4_2 - _mm_cvtps_pd(xmm2_3 / 360f))) * 0x168)
                        void* eax_18 = *esi
                        esi[7] = (xmm2_3 - _mm_cvtepi32_ps(xmm0_22)) * arg4 f+ *(eax_18 + 0x18)
                        return eax_18
                    case 1, 2
                        xmm2_3 = xmm2_3 + *(*esi + 0x18) f- esi[7]
                        eax_1 = (0x4000 - int.d(xmm4_2 - _mm_cvtps_pd(xmm2_3 / 360f))) * 0x168
                    case 3
                        eax_1 = (0x4000 - int.d(xmm4_2 - _mm_cvtps_pd(xmm2_3 / 360f))) * 0x168
                
                esi[7] = (xmm2_3 - _mm_cvtepi32_ps(zx.o(eax_1))) * arg4 f+ esi[7]
        else
            eax_1 = arg5
            float xmm2_4 = edi_1[edx_1 - 1]
            
            switch (eax_1)
                case 0
                    void* eax_8 = *esi
                    esi[7] = xmm2_4 * arg4 f+ *(eax_8 + 0x18)
                    return eax_8
                case 1, 2
                    xmm2_3 = xmm2_4 + *(*esi + 0x18) f- esi[7]
                    goto label_714bf2
                case 3
                    esi[7] = xmm2_4 * arg4 f+ esi[7]
    else
        if (arg5 == 0)
            int32_t eax_7 = *(*esi + 0x18)
            esi[7] = eax_7
            return eax_7
        
        eax_1 = arg5 - 1
        
        if (arg5 == 1)
            xmm2_3 = *(*esi + 0x18) f- esi[7]
        label_714bf2:
            eax_1 = (0x4000 - int.d(16384.499999999996 - _mm_cvtps_pd(xmm2_3 / 360f))) * 0x168
            esi[7] = (xmm2_3 - _mm_cvtepi32_ps(zx.o(eax_1))) * arg4 f+ esi[7]

return eax_1
