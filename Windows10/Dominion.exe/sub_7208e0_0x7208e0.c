// 函数: sub_7208e0
// 地址: 0x7208e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_5 = arg7

if (arg3 != 0)
    if (arg2 s>= 0 && arg6 s>= 0 && (arg6 == 0 || arg2 s<= divu.dp.d(0:0x7fffffff, arg6)))
        int32_t esi_1 = arg2 * arg6
        int32_t var_1c_1 = esi_1
        
        if (esi_1 s>= 0 && i_5 s>= 0 && (i_5 == 0 || esi_1 s<= divu.dp.d(0:0x7fffffff, i_5)))
            int32_t result_1 = malloc(esi_1 * i_5)
            int32_t result = result_1
            
            if (result_1 != 0)
                int32_t i_3 = i_5
                
                if ((i_5.b & 1) == 0)
                    i_3 = i_5 - 1
                
                if (esi_1 s> 0)
                    int64_t* edi_1 = arg3
                    void* edx_4 = nullptr
                    void* var_18_1 = nullptr
                    int64_t* var_10_1 = edi_1
                    result = result_1
                    
                    while (true)
                        int32_t i_4 = 0
                        
                        if (i_3 s> 0)
                            int32_t i_1 = i_3
                            char* esi_2 = edx_4 + result_1
                            int32_t i_2 = i_1
                            int32_t i
                            
                            do
                                double xmm0_2 = _mm_cvtps_pd(*edi_1)
                                int32_t entry_ebx
                                _libm_sse2_pow_precise(arg5, arg4, entry_ebx, i_2.w, var_1c_1)
                                edi_1 += 4
                                *esi_2 = (int.d(_mm_min_ss(0x437f0000, 
                                    _mm_max_ss(0, fconvert.s(xmm0_2) * 255f + 0.5f)))).b
                                esi_2 = &esi_2[1]
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            i_5 = arg7
                            esi_1 = var_1c_1
                            edx_4 = var_18_1
                            i_4 = i_2
                            edi_1 = var_10_1
                        
                        if (i_4 s< i_5)
                            void* ecx = edx_4 + i_4
                            *(ecx + result) = (int.d(_mm_min_ss(0x437f0000, 
                                _mm_max_ss(0, *(arg3 + (ecx << 2)) * 255f + 0.5f)))).b
                            edi_1 = var_10_1
                        
                        edx_4 += i_5
                        edi_1 += i_5 << 2
                        var_18_1 = edx_4
                        int32_t temp5_1 = esi_1
                        esi_1 -= 1
                        var_10_1 = edi_1
                        var_1c_1 = esi_1
                        
                        if (temp5_1 == 1)
                            break
                        
                        result_1 = result
                
                free(arg3)
                return result
    
    free(arg3)

return 0
