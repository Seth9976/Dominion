// 函数: sub_673810
// 地址: 0x673810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
float* var_8 = __security_cookie ^ &__saved_ebp
float* eax_1

if (data_c27c24 != 0)
    int32_t var_34
    sub_63c270(&var_34)
    eax_1 = data_c27c18
    void* ebx_1 = eax_1 - 1
    
    if (ebx_1 s>= 0)
        void* edi_3 = (ebx_1 << 4) + &data_c23c18
        void* temp0_1
        
        do
            int32_t* esi_1 = *edi_3
            
            if (*(esi_1 + 0x11) == 0 && *(esi_1 + 0x12) == 0 && *(esi_1 + 5) == 0)
                void* edx_1 = esi_1[0x5c6]
                
                if (edx_1 != 0)
                    eax_1 = sub_6655e0(edx_1)
                
                if (edx_1 == 0 || eax_1.b == 0)
                    char const* const var_70
                    int32_t var_6c
                    char const* const var_68_3
                    char* ecx_7
                    
                    if (esi_1[1].b == 0 && *esi_1 == 0)
                        var_68_3 = "UI2IsOverAnyItem"
                        var_6c = 0x4a7c
                        var_70 = "C:\x\ax2017\Engine\UI2.cpp"
                        ecx_7 = "el.updated || el.lastUpdate"
                    label_673a19:
                        sub_63b870(eax_1, &data_801800, ecx_7, var_70, var_6c, var_68_3)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    if (edx_1 != 0)
                        eax_1 = sub_665a30(edx_1)
                    
                    if (edx_1 == 0 || eax_1.b != 0)
                        float var_28
                        sub_67d460(&esi_1[0x155], *(data_147abe8 + 0x2c), &var_28)
                        float xmm1_2 = esi_1[0x5b3] f- 0f
                        float var_20
                        float var_3c_1 = xmm1_2 * var_20 + 0f
                        float xmm1_6 = esi_1[0x5b4] f- 0f
                        float var_1c
                        float var_38_1 = xmm1_6 * var_1c + 0f
                        float var_24
                        float var_40_1 = xmm1_6 * var_24 + 0f
                        float var_18[0x4] = (xmm1_2 * var_28 + 0f).o
                        float var_54[0x4]
                        eax_1 = sub_655430(&var_54, &var_18, &esi_1[0x588], &var_54)
                        float xmm2_2[0x4] = *eax_1
                        float xmm0_8[0x4] = *eax_1
                        float xmm4_2 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
                        var_18 = xmm0_8
                        var_18 = xmm2_2
                        float xmm0_9
                        float xmm1_9
                        
                        if (not(xmm4_2 f< xmm2_2))
                            xmm1_9 = var_18[3]
                            xmm0_9 = var_18[1]
                        
                        if (xmm4_2 f< xmm2_2 || xmm1_9 < xmm0_9)
                            var_68_3 = "RectContains"
                            var_6c = 0xa4
                            var_70 = "C:\x\ax2017\Engine\Rect.cpp"
                            ecx_7 = "RectIsNormalized(r)"
                            goto label_673a19
                        
                        int32_t xmm3_1 = var_34
                        int32_t var_30
                        
                        if (not(xmm3_1 f< xmm2_2) && not(var_30 f< xmm0_9) && not(xmm4_2 f< xmm3_1)
                                && not(xmm1_9 f< var_30))
                            float xmm0_10 = esi_1[0x5a0]
                            xmm0_10 f- 0
                            eax_1:1.b = (xmm0_10 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
                                | (xmm0_10 < 0f ? 1 : 0)
                            bool p_2 = unimplemented  {test ah, 0x44}
                            
                            if (p_2)
                                *arg1 = esi_1[0x632]
                                uint32_t eax_4
                                eax_4.b = 1
                                CookieCheckFunction(eax_4)
                                return eax_4
            
            edi_3 -= 0x10
            temp0_1 = ebx_1
            ebx_1 -= 1
        while (temp0_1 - 1 s>= 0)

eax_1.b = 0
CookieCheckFunction(eax_1)
return eax_1
