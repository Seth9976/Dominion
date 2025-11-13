// 函数: sub_4adae0
// 地址: 0x4adae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int64_t* eax_2 = arg4
*eax_2 = 0
eax_2[1].d = 0
*(eax_2 + 4) = 0xffffffff

if (*(arg3 + 0xbfc) != 0)
    if (*(arg3 + 0x258) != 0)
    label_4adb89:
        int32_t i = 0
        
        if (*(arg3 + 0xbbc) s> 0)
            do
                int32_t eax_3 = *(arg3 + (i << 2))
                int32_t var_78 = eax_3
                
                if (eax_3 != 0)
                    uint32_t eax_4 = sub_64e7a0(eax_3)
                    int32_t var_6c_1 = 0
                    int32_t var_68_1 = *(eax_4 + 0x16cc)
                    int32_t var_64_1 = *(eax_4 + 0x16d0)
                    int128_t var_30 = 0.o
                    float var_50[0x4]
                    eax_2 = sub_655430(&var_50, &var_30, eax_4 + 0x1620, &var_50)
                    bool cond:0_1 = *(arg3 + 0x258) != 1
                    var_30 = *eax_2
                    
                    if (not(cond:0_1))
                        eax_2 = sub_66b2b0(eax_2, "itemCard", var_78, 0)
                        int128_t xmm0_7
                        
                        if (eax_2 != 0)
                            uint32_t eax_6 = sub_64e7a0(eax_2)
                            int32_t var_5c_1 = 0
                            int32_t var_58_1 = *(eax_6 + 0x16cc)
                            int32_t var_54_1 = *(eax_6 + 0x16d0)
                            var_30 = 0.o
                            float var_40[0x4]
                            eax_2 = sub_655430(&var_40, &var_30, eax_6 + 0x1620, &var_40)
                            xmm0_7 = *eax_2
                        else
                            xmm0_7 = data_7ff520
                        
                        var_30 = xmm0_7
                    
                    int32_t xmm1_2 = var_30:8.d
                    int32_t xmm0_11 = var_30.d
                    
                    if (xmm1_2 f< xmm0_11)
                        goto label_4add37
                    
                    int32_t xmm2_2 = var_30:0xc.d
                    int32_t xmm3_2 = var_30:4.d
                    
                    if (xmm2_2 f< xmm3_2)
                        goto label_4add37
                    
                    int32_t xmm4_2 = *arg2
                    
                    if (not(xmm4_2 f< xmm0_11))
                        int32_t xmm0_12 = arg2[1]
                        
                        if (not(xmm0_12 f< xmm3_2) && not(xmm1_2 f< xmm4_2) && xmm2_2 f>= xmm0_12)
                            int32_t ecx_7 = var_78
                            *arg4 = arg3
                            arg4[1] = i
                            arg4[2] = *(sub_64e7a0(ecx_7) + 0x1694)
                            CookieCheckFunction(arg4)
                            return arg4
                
                i += 1
            while (i s< *(arg3 + 0xbbc))
            
            eax_2 = arg4
    else
        int32_t xmm0_1 = *(arg3 + 0xbc4)
        int32_t xmm2_1 = *(arg3 + 0xbcc)
        int32_t xmm3_1
        int32_t xmm4_1
        
        if (not(xmm2_1 f< xmm0_1))
            xmm4_1 = *(arg3 + 0xbc8)
            xmm3_1 = *(arg3 + 0xbd0)
        
        if (xmm2_1 f< xmm0_1 || xmm3_1 f< xmm4_1)
        label_4add37:
            sub_63b870(eax_2, &data_801800, "RectIsNormalized(r)", "C:\x\ax2017\Engine\Rect.cpp", 
                0xa4, "RectContains")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t xmm1_1 = *arg2
        
        if (not(xmm1_1 f< xmm0_1))
            int32_t xmm0_2 = arg2[1]
            
            if (not(xmm0_2 f< xmm4_1) && not(xmm2_1 f< xmm1_1) && not(xmm3_1 f< xmm0_2))
                goto label_4adb89

CookieCheckFunction(eax_2)
return eax_2
