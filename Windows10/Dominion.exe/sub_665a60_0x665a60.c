// 函数: sub_665a60
// 地址: 0x665a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float eax_8

if (data_c28c58 != 1)
    eax_8 = sub_66bc70(arg1)
else
    int16_t eax_2 = GetKeyState(0x11)
    HWND eax_4
    
    if (eax_2 s< 0 && *(data_cf65b4 + 0x18) != 0)
        eax_4 = GetFocus()
    
    if (eax_2 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_4 == data_147b084 || eax_4 == 0))
        eax_8 = sub_66bc70(arg1)
    else
        int16_t eax_5 = GetKeyState(0x12)
        HWND eax_7
        
        if (eax_5 s< 0 && *(data_cf65b4 + 0x18) != 0)
            eax_7 = GetFocus()
        
        if (eax_5 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_7 == data_147b084 || eax_7 == 0))
            eax_8 = sub_66bc70(arg1)
        else
            int32_t var_20
            int32_t* ecx_1
            eax_8, ecx_1 = sub_63c270(&var_20)
            int32_t edi_1 = data_c27c58
            int32_t edi_2 = edi_1 - 1
            
            if (edi_1 - 1 s>= 0)
                int32_t temp1_1
                
                do
                    int32_t esi_1 = data_c27c20
                    int32_t* var_5c_1 = ecx_1
                    uint32_t eax_9 = sub_64e7a0(data_c27c24)
                    eax_8, ecx_1 = sub_665950(eax_9, esi_1, eax_9, edi_2)
                    float esi_2 = eax_8
                    
                    if (esi_2 == 0)
                        sub_63b870(eax_8, &data_801800, "result", "C:\x\ax2017\Engine\UI2.cpp", 
                            0x360b, "UI2ElementByIndex")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    if (*(esi_2 i+ 0x11) == 0 && *(esi_2 i+ 0x12) == 0)
                        void* ecx_4 = *(esi_2 i+ 0x1718)
                        
                        if (ecx_4 != 0)
                            eax_8, ecx_1 = sub_665a30(ecx_4)
                        
                        if (ecx_4 == 0 || eax_8.b != 0)
                            int32_t var_2c_1 = *(esi_2 i+ 0x16cc)
                            ecx_1 = esi_2 i+ 0x1620
                            int32_t var_28_1 = *(esi_2 i+ 0x16d0)
                            int32_t var_30_1 = 0
                            float var_18[0x4] = 0.o
                            float var_44[0x4]
                            eax_8 = sub_655430(&var_44, &var_18, ecx_1, &var_44)
                            float xmm2_1[0x4] = *eax_8
                            float xmm3_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
                            var_18 = xmm2_1
                            float xmm0_4
                            float xmm1_1
                            
                            if (not(xmm3_2 f< xmm2_1))
                                xmm1_1 = var_18[3]
                                xmm0_4 = var_18[1]
                            
                            if (xmm3_2 f< xmm2_1 || xmm1_1 < xmm0_4)
                                sub_63b870(eax_8, &data_801800, "RectIsNormalized(r)", 
                                    "C:\x\ax2017\Engine\Rect.cpp", 0xa4, "RectContains")
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            int32_t xmm4_1 = var_20
                            int32_t var_1c
                            
                            if (not(xmm4_1 f< xmm2_1) && not(var_1c f< xmm0_4)
                                    && not(xmm3_2 f< xmm4_1) && xmm1_1 f>= var_1c)
                                int32_t ecx_7 = *(esi_2 i+ 0x18c8)
                                
                                if (ecx_7 == 0)
                                    break
                                
                                data_c27c58 = *(sub_64e7a0(ecx_7) + 0x1604)
                                uint32_t eax_18 = memcpy(&(&data_c27c50)[data_ca9a6c * 0x407], 
                                    &data_c27c54, 0x1018)
                                CookieCheckFunction(eax_18)
                                return eax_18
                    
                    temp1_1 = edi_2
                    edi_2 -= 1
                while (temp1_1 - 1 s>= 0)
            
            if (arg1 != 0)
                eax_8 = sub_66bc70(arg1)
            else if (data_c28c60 == arg1.b && data_c28c62 == arg1.b)
                data_ca9a6c
                data_c28c58 = arg1
                uint32_t eax_13 = memcpy(&(&data_c27c50)[data_ca9a6c * 0x407], &data_c27c54, 0x1018)
                CookieCheckFunction(eax_13)
                return eax_13

CookieCheckFunction(eax_8)
return eax_8
