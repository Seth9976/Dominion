// 函数: sub_5a2040
// 地址: 0x5a2040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
void* const result = (*(arg1 + 0x40))(arg1 + 0x3c, arg2)

if (result != 0)
    float* eax_2 = *(arg2 + 4)
    void* edi_1 = arg2 + 4
    void* var_1c_1 = arg2 + 0x14
    void* var_18_1 = arg2 + 0xc
    int32_t i_1 = 2
    float xmm4_4 = (*(arg2 + 0x18) - eax_2[1]) * (*(arg2 + 0xc) - *eax_2)
        - (*(arg2 + 0x10) - eax_2[1]) * (*(arg2 + 0x14) - *eax_2)
    int32_t eax_3
    eax_3.b = xmm4_4 f<= 0
    int32_t eax_5 = 8
    
    if (xmm4_4 > 0f)
        eax_5 = 0
    
    int32_t* var_14_1 = arg2 + 8
    int32_t i
    
    do
        int32_t* eax_8 = sub_5a1410(arg1, 0x20)
        eax_8[1] = arg2
        *eax_8 = 0
        eax_8[2] = *var_14_1
        int32_t ecx_4 = *var_18_1
        *((eax_3 << 3) + 0xc + eax_8 + 4) = *(var_18_1 + 4)
        void* edx_3 = eax_8 - eax_5
        *((eax_3 << 3) + 0xc + eax_8) = ecx_4
        int32_t ecx_6 = *(var_1c_1 + 4)
        *(edx_3 + 0x14) = *var_1c_1
        *(edx_3 + 0x18) = ecx_6
        float* eax_13 = *edi_1
        float xmm0_8[0x2] = (eax_8[6] f+ eax_8[4]) * 0.5f - eax_13[1]
        int64_t var_28_1 = _mm_cvtps_pd(xmm0_8)
        unimplemented  {fld st0, qword [ebp-0x18]}
        int64_t var_28_2 = _mm_cvtps_pd((eax_8[5] f+ eax_8[3]) * 0.5f - *eax_13)
        unimplemented  {fld st0, qword [ebp-0x18]}
        _CIatan2()
        var_28_2:4.d = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
        unimplemented  {fstp dword [ebp-0x14], st0}
        int16_t top = top - 1
        float j = var_28_2:4.d
        
        if (not(0f <= xmm0_8))
            j = j + 6.28318548f
        
        eax_8[7] = j
        result = *edi_1
        void** ecx_7 = *(result + 0xc)
        
        if (ecx_7 == 0 || ecx_7[7] f>= j)
            *eax_8 = ecx_7
            *(result + 0xc) = eax_8
        label_5a228a:
            void** ecx_8 = *eax_8
            
            if (ecx_8 != 0)
                result.b = 1.1920929e-07f f> _mm_and_ps(eax_8[7] f- ecx_8[7], 0x7fffffff)
                
                if (result != 0)
                    result.b = 1.1920929e-07f f> _mm_and_ps(eax_8[4] f- ecx_8[4], 0x7fffffff)
                    
                    if (result != 0)
                        result.b = 1.1920929e-07f f> _mm_and_ps(eax_8[3] f- ecx_8[3], 0x7fffffff)
                        
                        if (result != 0)
                            result.b =
                                1.1920929e-07f f> _mm_and_ps(eax_8[6] f- ecx_8[6], 0x7fffffff)
                            
                            if (result != 0)
                                result.b =
                                    1.1920929e-07f f> _mm_and_ps(eax_8[5] f- ecx_8[5], 0x7fffffff)
                                
                                if (result != 0)
                                    result = *ecx_8
                                    *eax_8 = result
        else
            void* eax_14 = *ecx_7
            
            if (eax_14 != 0)
                while (not(j f<= *(eax_14 + 0x1c)))
                    ecx_7 = *ecx_7
                    eax_14 = *ecx_7
                    
                    if (eax_14 == 0)
                        break
            
            *eax_8 = *ecx_7
            *ecx_7 = eax_8
            result.b = 1.1920929e-07f f> _mm_and_ps(ecx_7[7] f- eax_8[7], 0x7fffffff)
            
            if (result == 0)
                goto label_5a228a
            
            result.b = 1.1920929e-07f f> _mm_and_ps(ecx_7[4] f- eax_8[4], 0x7fffffff)
            
            if (result == 0)
                goto label_5a228a
            
            result.b = 1.1920929e-07f f> _mm_and_ps(ecx_7[3] f- eax_8[3], 0x7fffffff)
            
            if (result == 0)
                goto label_5a228a
            
            result.b = 1.1920929e-07f f> _mm_and_ps(ecx_7[6] f- eax_8[6], 0x7fffffff)
            
            if (result == 0)
                goto label_5a228a
            
            result.b = 1.1920929e-07f f> _mm_and_ps(ecx_7[5] f- eax_8[5], 0x7fffffff)
            
            if (result == 0)
                goto label_5a228a
            
            result = *eax_8
            *ecx_7 = result
        
        var_14_1 -= 4
        edi_1 += 4
        var_18_1 += 8
        var_1c_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
