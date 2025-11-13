// 函数: sub_7150f0
// 地址: 0x7150f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax_1 = *(arg2 + 8)
int32_t edi = arg5
int32_t* esi = eax_1[*(arg1 i+ 0x14)]

if (esi[0x1b] != 0)
    eax_1 = *(arg1 i+ 0x10)
    
    if (*eax_1 f<= arg3)
        int32_t edx_1 = *(arg1 i+ 0xc)
        float xmm0_10
        float xmm1_1
        
        if (arg3 f< eax_1[edx_1 - 3])
            void* eax_5 = sub_714a40(eax_1, edx_1, eax_1, arg3, 3)
            int32_t eax_6 = *(arg1 i+ 0x10)
            float xmm6_1 = *(eax_6 + (eax_5 << 2) - 4)
            float xmm7_1 = *(eax_6 + (eax_5 << 2) - 8)
            int32_t ecx_4 = eax_5 s/ 3 * 0x13
            float xmm1_2 = 1f - (arg3 f- *(eax_6 + (eax_5 << 2)))
                / (*(eax_6 + (eax_5 << 2) - 0xc) f- *(eax_6 + (eax_5 << 2)))
            int32_t edx_4 = *(arg1 i+ 8)
            float xmm0_13 = *(edx_4 + (ecx_4 << 2) - 0x4c)
            float xmm2_4
            
            if (0f <= xmm1_2)
                xmm2_4 = _mm_min_ss(0x3f800000, xmm1_2)
            else
                xmm2_4 = (zx.o(0)).d
            
            xmm0_13 f- 0
            float eax_11
            eax_11:1.b = (xmm0_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2
                | (xmm0_13 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm0_13 - 1f
                eax_11:1.b = (xmm0_13 == 1f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_13, 1f) ? 1 : 0) << 2 | (xmm0_13 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    int32_t ecx_5 = ecx_4 - 0x12
                    int32_t var_c_1 = ecx_5
                    float xmm5_1 = (zx.o(0)).d
                    
                    if (ecx_5 s>= ecx_4)
                    label_715273:
                        xmm2_4 = (xmm2_4 - xmm5_1) * (1f f- *(edx_4 + (ecx_5 << 2) - 4))
                            / (1f - xmm5_1) f+ *(edx_4 + (ecx_5 << 2) - 4)
                    else
                        while (true)
                            xmm5_1 = *(edx_4 + (ecx_5 << 2))
                            
                            if (xmm5_1 >= xmm2_4)
                                float xmm1_9
                                float xmm6_2
                                
                                if (ecx_5 != var_c_1)
                                    xmm1_9 = *(edx_4 + (ecx_5 << 2) - 8)
                                    xmm6_2 = *(edx_4 + (ecx_5 << 2) - 4)
                                else
                                    xmm1_9 = (zx.o(0)).d
                                    xmm6_2 = (zx.o(0)).d
                                
                                xmm2_4 = (xmm2_4 - xmm1_9) * (*(edx_4 + (ecx_5 << 2) + 4) - xmm6_2)
                                    / (xmm5_1 - xmm1_9) + xmm6_2
                                break
                            
                            ecx_5 += 2
                            
                            if (ecx_5 s>= ecx_4)
                                goto label_715273
                else
                    xmm2_4 = (zx.o(0)).d
            
            eax_1 = *(arg1 i+ 0x10)
            edi = arg5
            xmm1_1 = (eax_1[eax_5 + 1] f- xmm7_1) * xmm2_4 + xmm7_1
            xmm0_10 = (eax_1[eax_5 + 2] f- xmm6_1) * xmm2_4 + xmm6_1
        else
            xmm1_1 = eax_1[edx_1 - 2]
            xmm0_10 = eax_1[edx_1 - 1]
        
        void* ecx_6 = *esi
        arg4 - 1f
        uint32_t xmm0_19[0x4] = xmm0_10 f* *(ecx_6 + 0x20)
        uint32_t xmm1_6[0x4] = xmm1_1 f* *(ecx_6 + 0x1c)
        eax_1:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2
            | (arg4 < 1f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (not(p_6))
            if (edi != 3)
                esi[8] = xmm1_6
                esi[9] = xmm0_19
                return eax_1
            
            esi[8] = xmm1_6 f- *(ecx_6 + 0x1c) f+ esi[8]
            esi[9] = xmm0_19 f- *(ecx_6 + 0x20) f+ esi[9]
            return eax_1
        
        if (edi u<= 3)
            float xmm5_5
            int128_t xmm6_7
            float xmm7_6
            float xmm6_3
            
            if (arg6 != 1)
                switch (edi)
                    case 0
                        int128_t xmm6_6 = *(ecx_6 + 0x1c)
                        
                        if (not(0 f<= xmm6_6))
                            xmm6_6 ^= data_8937c0.o
                        
                        xmm5_5 = -1f
                        float xmm7_5
                        
                        if (not(0f f<= xmm1_6))
                            xmm7_5 = -1f
                        else if (xmm1_6 f<= 0)
                            xmm7_5 = (zx.o(0)).d
                        else
                            xmm7_5 = 1f
                        
                        xmm7_6 = xmm7_5 f* xmm6_6
                        xmm6_7 = *(ecx_6 + 0x20)
                    label_7154f7:
                        
                        if (not(0 f<= xmm6_7))
                            xmm6_7 ^= data_8937c0.o
                        
                        if (not(0 f> xmm0_19))
                            if (xmm0_19 f<= 0)
                                xmm5_5 = (zx.o(0)).d
                            else
                                xmm5_5 = 1f
                        
                        float xmm5_6 = xmm5_5 f* xmm6_7
                        esi[8] = (xmm1_6 f- xmm7_6) * arg4 + xmm7_6
                        esi[9] = (xmm0_19 f- xmm5_6) * arg4 + xmm5_6
                    case 1, 2
                        int128_t xmm6_8 = esi[8]
                        
                        if (not(0 f<= xmm6_8))
                            xmm6_8 ^= data_8937c0.o
                        
                        xmm5_5 = -1f
                        
                        if (not(0f f<= xmm1_6))
                            xmm7_6 = -1f f* xmm6_8
                            xmm6_7 = esi[9]
                        else if (xmm1_6 f<= 0)
                            xmm7_6 = 0f f* xmm6_8
                            xmm6_7 = esi[9]
                        else
                            xmm7_6 = 1f f* xmm6_8
                            xmm6_7 = esi[9]
                        
                        goto label_7154f7
                    case 3
                        float xmm6_9 = -1f
                        
                        if (not(0f f<= xmm1_6))
                            arg1 = -1f
                        else if (xmm1_6 f<= 0)
                            arg1 = 0f
                        else
                            arg1 = 1f
                        
                        if (not(0 f> xmm0_19))
                            if (xmm0_19 f<= 0)
                                xmm6_9 = (zx.o(0)).d
                            else
                                xmm6_9 = 1f
                        
                        int128_t xmm5_7 = esi[8]
                        
                        if (not(0f f<= xmm5_7))
                            xmm5_7 ^= 0x80000000
                        
                        int128_t xmm4_1 = *(ecx_6 + 0x1c)
                        
                        if (not(0 f<= xmm4_1))
                            xmm4_1 ^= 0x80000000
                        
                        int128_t xmm4_3 = esi[9]
                        esi[8] = (xmm1_6 f- xmm4_1 f* arg1) * arg4 + xmm5_7 f* arg1
                        
                        if (not(0f f<= xmm4_3))
                            xmm4_3 ^= 0x80000000
                        
                        int128_t xmm1_31 = *(ecx_6 + 0x20)
                        
                        if (not(0 f<= xmm1_31))
                            xmm1_31 ^= 0x80000000
                        
                        esi[9] = (xmm0_19 f- xmm1_31 f* xmm6_9) * arg4 + xmm4_3 f* xmm6_9
            else
                switch (edi)
                    case 0
                        float xmm7_2 = *(ecx_6 + 0x1c)
                        xmm6_3 = *(ecx_6 + 0x20)
                        
                        if (not(0f <= xmm7_2))
                            arg1 = -1f
                        else if (xmm7_2 f<= 0)
                            arg1 = 0f
                        else
                            arg1 = 1f
                        
                        esi[8] =
                            (__andps_xmmxud_memxud(xmm1_6, data_8937a0.o) * arg1 - xmm7_2) * arg4
                            + xmm7_2
                        
                        if (0f > xmm6_3)
                            esi[9] = (__andps_xmmxud_memxud(xmm0_19, data_8937a0.o) * -1f - xmm6_3)
                                * arg4 + xmm6_3
                            return eax_1
                        
                        if (not(xmm6_3 f<= 0))
                            esi[9] =
                                (__andps_xmmxud_memxud(xmm0_19, data_8937a0.o) * 1f - xmm6_3) * arg4
                                + xmm6_3
                            return eax_1
                        
                    label_7153b8:
                        esi[9] = (__andps_xmmxud_memxud(xmm0_19, data_8937a0.o) * (zx.o(0)).d
                            - xmm6_3) * arg4 + xmm6_3
                    case 1, 2
                        float xmm7_3 = esi[8]
                        xmm6_3 = esi[9]
                        
                        if (not(0f <= xmm7_3))
                            arg1 = -1f
                        else if (xmm7_3 f<= 0)
                            arg1 = 0f
                        else
                            arg1 = 1f
                        
                        esi[8] =
                            (__andps_xmmxud_memxud(xmm1_6, data_8937a0.o) * arg1 - xmm7_3) * arg4
                            + xmm7_3
                        
                        if (0f > xmm6_3)
                            esi[9] = (__andps_xmmxud_memxud(xmm0_19, data_8937a0.o) * -1f - xmm6_3)
                                * arg4 + xmm6_3
                            return eax_1
                        
                        if (xmm6_3 f<= 0)
                            goto label_7153b8
                        
                        esi[9] =
                            (__andps_xmmxud_memxud(xmm0_19, data_8937a0.o) * 1f - xmm6_3) * arg4
                            + xmm6_3
                    case 3
                        float xmm6_4 = esi[8]
                        float xmm7_4 = esi[9]
                        float xmm5_4 = -1f
                        float xmm6_5
                        
                        if (not(0f <= xmm6_4))
                            xmm6_5 = -1f
                        else if (xmm6_4 f<= 0)
                            xmm6_5 = (zx.o(0)).d
                        else
                            xmm6_5 = 1f
                        
                        esi[8] = (__andps_xmmxud_memxud(xmm1_6, data_8937a0.o) * xmm6_5 f-
                            *(ecx_6 + 0x1c)) * arg4 f+ esi[8]
                        
                        if (not(0f > xmm7_4))
                            if (xmm7_4 f<= 0)
                                xmm5_4 = (zx.o(0)).d
                            else
                                xmm5_4 = 1f
                        
                        esi[9] = (__andps_xmmxud_memxud(xmm0_19, data_8937a0.o) * xmm5_4 f-
                            *(ecx_6 + 0x20)) * arg4 + xmm7_4
    else
        if (edi == 0)
            void* ecx_1 = *esi
            esi[8] = *(ecx_1 + 0x1c)
            int32_t eax_4 = *(ecx_1 + 0x20)
            esi[9] = eax_4
            return eax_4
        
        if (edi == 1)
            void* eax_2 = *esi
            esi[8] = (*(eax_2 + 0x1c) f- esi[8]) * arg4 f+ esi[8]
            esi[9] = (*(eax_2 + 0x20) f- esi[9]) * arg4 f+ esi[9]
            return eax_2

return eax_1
