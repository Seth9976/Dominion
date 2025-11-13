// 函数: sub_71fdf0
// 地址: 0x71fdf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_3
int32_t ecx
eax_3, ecx = sub_72d560(arg3)
int32_t* edx = arg2
float* eax_5

if (eax_3 == 0)
    int32_t var_44_2 = ecx
    int32_t* var_48_2 = arg7
    uint32_t edi_1 = sub_71fb30(eax_3, edx, arg3, arg6)
    
    if (edi_1 != 0)
        int32_t esi_1 = *arg6
        int32_t j_6 = *arg7
        int32_t eax_9 = *arg2
        int32_t j_7 = j_6
        void* eax_10 = sub_71f560(eax_9, esi_1, eax_9, j_6)
        
        if (eax_10 != 0)
            int32_t j_3 = j_6
            
            if ((j_6.b & 1) == 0)
                j_3 = j_6 - 1
            
            int32_t i_1 = esi_1 * eax_9
            int32_t j_4 = j_3
            int32_t i_2 = i_1
            
            if (i_1 s> 0)
                void* edi_2 = eax_10
                int32_t edx_3 = 0
                int32_t var_28_1 = 0
                void* var_20_1 = edi_2
                int32_t i
                
                do
                    int32_t j_5 = 0
                    
                    if (j_3 s> 0)
                        int32_t j_1 = j_3
                        char* esi_3 = edi_1 + edx_3
                        int32_t j_2 = j_1
                        int32_t j
                        
                        do
                            double xmm0_4 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*esi_3)) / 255f)
                            int32_t entry_ebx
                            _libm_sse2_pow_precise(arg5, arg4, entry_ebx, j_4.w, j_7)
                            edi_2 += 4
                            esi_3 = &esi_3[1]
                            *(edi_2 - 4) = fconvert.s(xmm0_4)
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        edx_3 = var_28_1
                        j_5 = j_2
                        j_6 = j_7
                        i_1 = i_2
                        edi_2 = var_20_1
                    
                    if (j_5 s< j_6)
                        int32_t ecx_11 = edx_3 + j_5
                        *(eax_10 + (ecx_11 << 2)) = _mm_cvtepi32_ps(zx.o(*(ecx_11 + edi_1))) / 255f
                    
                    j_3 = j_4
                    edx_3 += j_6
                    edi_2 += j_6 << 2
                    i = i_1
                    i_1 -= 1
                    var_28_1 = edx_3
                    var_20_1 = edi_2
                    i_2 = i_1
                while (i != 1)
            
            free(edi_1)
            CookieCheckFunction(eax_10)
            return eax_10
        
        free(edi_1)
    
    eax_5 = nullptr
else
    void var_14
    void* var_44 = &var_14
    int32_t var_48 = 0
    eax_5 = sub_72d900(&var_14, edx, arg3, arg6, arg7)
    
    if (eax_5 != 0 && data_147dee4 != 0)
        sub_71fa40(eax_5, *arg2, eax_5, *arg6, *arg7 << 2)
        CookieCheckFunction(eax_5)
        return eax_5

CookieCheckFunction(eax_5)
return eax_5
