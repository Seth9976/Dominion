// 函数: sub_66a370
// 地址: 0x66a370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
float* eax_1 = __security_cookie ^ &__saved_ebp
float* var_8 = eax_1
int32_t* ecx = data_c27c20
char const* const var_118
int32_t var_114
char const* const var_110_1
char* ecx_1
char const* const edx_1

if (ecx != 0)
    if (ecx[1] == 0x22)
        void* eax_2 = sub_5af880(ecx)
        float xmm3_1 = data_c27c48
        uint32_t edi_1 = 0
        int128_t var_ac
        __builtin_memcpy(&var_ac, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x40)
        float xmm1_2 = *(eax_2 + 0x10) - 0f
        float xmm4_2 = *(eax_2 + 0x14) - 0f
        float var_1c_1 = xmm1_2
        float var_20_1 = xmm4_2
        int32_t var_38 = 0x41800000
        int32_t var_34_1 = 0x41800000
        
        while (true)
            float xmm0_5 = (xmm4_2 f* *(&var_ac:4 + (edi_1 << 3)) + 0f f- data_c27c50) * xmm3_1
            float var_30 = (xmm1_2 f* *(&var_ac + (edi_1 << 3)) + 0f f- data_c27c4c) * xmm3_1
            float var_2c_1 = xmm0_5
            float var_6c[0x4]
            eax_1 = sub_5af7f0(&var_6c, &var_38, &var_30, &var_6c)
            float xmm0_6[0x4] = *eax_1
            float xmm1_8 = _mm_shuffle_ps(xmm0_6, xmm0_6, 0xaa)
            float xmm2_1
            float xmm3_2
            
            if (not(xmm1_8 f< xmm0_6))
                xmm3_2 = xmm0_6[3]
                xmm2_1 = xmm0_6[1]
            
            if (xmm1_8 f< xmm0_6 || xmm3_2 < xmm2_1)
            label_66a7ca:
                var_110_1 = "RectContains"
                var_114 = 0xa4
            else
                if (not(arg1 f< xmm0_6) && not(arg2 f< xmm2_1) && not(xmm1_8 f< arg1)
                        && xmm3_2 f>= arg2)
                    CookieCheckFunction(edi_1)
                    return edi_1
                
                xmm3_1 = data_c27c48
                edi_1 += 1
                
                if (edi_1 s>= 8)
                    float xmm4_3 = data_c27c50
                    float xmm5_1 = data_c27c4c
                    int128_t var_dc
                    __builtin_memcpy(&var_dc, 
                        "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x"
                    "00\x03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00"
                    "00\x07\x00\x00\x00\x06\x00\x00\x00", 
                        0x30)
                    float xmm1_10 = (0f - xmm4_3) * xmm3_1
                    float xmm1_11 = *(eax_2 + 0x10)
                    float xmm0_8 = (0f - xmm5_1) * xmm3_1
                    
                    if (not(xmm1_11 < 0f))
                        float xmm0_9 = *(eax_2 + 0x14)
                        
                        if (not(xmm0_9 f< 0))
                            int32_t esi_2 = 0
                            void* edi_2 = &var_dc:4
                            int32_t ebx_1 = 2
                            float xmm0_11 = (xmm0_9 - xmm4_3) * xmm3_1
                            float xmm1_13 = (xmm1_11 - xmm5_1) * xmm3_1
                            int32_t var_40 = 0x41800000
                            int32_t var_3c_1 = 0x41800000
                            int32_t var_50 = 0x41800000
                            int32_t var_4c_1 = 0x41800000
                            
                            while (true)
                                int32_t eax_5 = *(edi_2 - 4)
                                float xmm0_16 =
                                    (var_20_1 f* *(&var_ac:4 + (eax_5 << 3)) + 0f - xmm4_3) * xmm3_1
                                float var_48 =
                                    (var_1c_1 f* *(&var_ac + (eax_5 << 3)) + 0f - xmm5_1) * xmm3_1
                                float var_44_1 = xmm0_16
                                float var_ec[0x4]
                                float xmm6_2[0x4] = *sub_5af7f0(&var_ec, &var_40, &var_48, &var_ec)
                                float xmm1_21 = var_1c_1 f* *(&var_ac + (ebx_1 << 3)) + 0f
                                float xmm0_19 = var_20_1 f* *(&var_ac:4 + (ebx_1 << 3)) + 0f
                                var_6c = xmm6_2
                                float xmm0_21 = (xmm0_19 f- data_c27c50) f* data_c27c48
                                float var_58 = (xmm1_21 f- data_c27c4c) f* data_c27c48
                                float var_54_1 = xmm0_21
                                float var_fc[0x4]
                                eax_1 = sub_5af7f0(&var_fc, &var_50, &var_58, &var_fc)
                                float xmm2_3 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0xaa)
                                int128_t xmm0_22 = *eax_1
                                
                                if (not(xmm2_3 f< xmm6_2))
                                    float xmm1_24 = var_6c[3]
                                    float xmm0_23 = var_6c[1]
                                    
                                    if (not(xmm1_24 < xmm0_23))
                                        float xmm3_3[0x4] = xmm0_22.d
                                        
                                        if (not(xmm3_3 f> xmm6_2))
                                            xmm6_2 = xmm3_3
                                        
                                        float xmm3_4 = xmm0_22:8.d
                                        
                                        if (not(xmm2_3 > xmm3_4))
                                            xmm2_3 = xmm3_4
                                        
                                        float xmm3_5 = xmm0_22:4.d
                                        
                                        if (not(xmm3_5 > xmm0_23))
                                            xmm0_23 = xmm3_5
                                        
                                        float xmm3_6 = xmm0_22:0xc.d
                                        
                                        if (not(xmm1_24 > xmm3_6))
                                            xmm1_24 = xmm3_6
                                        
                                        if (not(xmm0_8 f> xmm6_2))
                                            xmm6_2 = xmm1_13
                                        
                                        if (not(xmm1_10 > xmm0_23))
                                            xmm0_23 = xmm0_11
                                        
                                        if (not(xmm2_3 > xmm1_13))
                                            xmm2_3 = xmm0_8
                                        
                                        if (not(xmm1_24 > xmm0_11))
                                            xmm1_24 = xmm1_10
                                        
                                        if (xmm2_3 f< xmm6_2)
                                            goto label_66a7ca
                                        
                                        if (xmm1_24 < xmm0_23)
                                            goto label_66a7ca
                                        
                                        if (not(arg1 f< xmm6_2) && not(arg2 f< xmm0_23)
                                                && not(xmm2_3 f< arg1) && xmm1_24 f>= arg2)
                                            uint32_t eax_10 = *(&var_dc:8 + esi_2 * 0xc)
                                            CookieCheckFunction(eax_10)
                                            return eax_10
                                        
                                        esi_2 += 1
                                        edi_2 += 0xc
                                        
                                        if (esi_2 s>= 4)
                                            CookieCheckFunction(0xffffffff)
                                            return 0xffffffff
                                        
                                        ebx_1 = *edi_2
                                        xmm3_1 = data_c27c48
                                        xmm4_3 = data_c27c50
                                        xmm5_1 = data_c27c4c
                                        continue
                                
                                var_110_1 = "RectUnion"
                                var_114 = 0xdb
                                ecx_1 = "RectIsNormalized(r0)"
                                break
                            
                            break
                    
                    var_110_1 = "RectBottomRight"
                    var_114 = 0x12d
                else
                    xmm1_2 = var_1c_1
                    xmm4_2 = var_20_1
                    continue
            
            ecx_1 = "RectIsNormalized(r)"
            break
        
        var_118 = "C:\x\ax2017\Engine\Rect.cpp"
    else
        var_110_1 = "UI2DefGet"
        var_114 = 0xc17
        var_118 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx_1 = &data_801800
else
    var_110_1 = "UI2DefGet"
    var_114 = 0xc16
    var_118 = "C:\x\ax2017\Engine\UI2.cpp"
    edx_1 = "UI2DefGet on null pointer"
    ecx_1 = &data_874470

sub_63b870(eax_1, edx_1, ecx_1, var_118, var_114, var_110_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
