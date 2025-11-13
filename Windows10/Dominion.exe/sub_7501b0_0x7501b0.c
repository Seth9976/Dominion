// 函数: sub_7501b0
// 地址: 0x7501b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (*(arg2 + 0x14) != 0x63)
    LRESULT result_1 = 0xffffffff
    void var_114
    memset(&var_114, 0, 0x104)
    char* const edi_1 = &data_801800
    LRESULT lParam = SendMessageA(*(data_19e2778 + 0x18), 0x199, arg1, 0)
    
    if (lParam == 0xffffffff || lParam == 0)
    label_75046a:
        LRESULT result = result_1
        CookieCheckFunction(result)
        return result
    
    int32_t eax_3 = *(arg2 + 0x14)
    
    switch (eax_3)
        case 0, 1, 2, 3, 7
            edi_1 = *(arg2 + 0x10)
        case 4
            uint32_t ecx = zx.d(*(arg2 + 0x10))
            uint32_t var_130_1 = zx.d(*(arg2 + 0x12))
            uint32_t var_134_2 = ecx u>> 8
            uint32_t var_138_2 = zx.d(ecx.b)
            eax_3 = sub_74afa0(&var_114, 0x104, "%d,%d,%d")
            edi_1 = &var_114
        case 5
            eax_3 = sub_74cb60(*(arg2 + 0x10))
            edi_1 = &data_1a9a490
        case 6
            sub_74cbe0(*(arg2 + 0x10))
            *(arg2 + 8) = &data_1a9ac18
            eax_3 = *(arg2 + 0x10)
            edi_1 = *(eax_3 + 4)
        case 8
            edi_1 = &data_8901e0
            eax_3 = &data_88ff00
            
            if (*(arg2 + 0x10) == 0)
                edi_1 = &data_88ff00
        case 9
            int32_t ecx_3 = *(arg2 + 0x10)
            uint32_t var_130_2 = zx.d(ecx_3.b)
            uint32_t var_134_3 = zx.d((ecx_3 u>> 8).b)
            uint32_t var_138_3 = zx.d((ecx_3 u>> 0x10).b)
            uint32_t var_13c_2 = ecx_3 u>> 0x18
            eax_3 = sub_74afa0(&var_114, 0x104, "%d.%d.%d.%d")
            edi_1 = &var_114
        case 0xa
            eax_3 = GetDateFormatA(0x400, 1, *(arg2 + 0x10), nullptr, &var_114, 0x104)
            edi_1 = &var_114
        case 0xb
            eax_3 = GetTimeFormatA(0x400, 0, *(arg2 + 0x10), "hh':'mm':'ss tt", &var_114, 0x104)
            edi_1 = &var_114
        case 0xc
            GetDateFormatA(0x400, 1, *(arg2 + 0x10), nullptr, &var_114, 0x104)
            void* edi_2 = &result_1:3
            char i
            
            do
                i = *(edi_2 + 1)
                edi_2 += 1
            while (i != 0)
            
            void* ecx_5 = &var_114
            *edi_2 = 0x20
            
            do
                i = *ecx_5
                ecx_5 += 1
            while (i != 0)
            
            void var_113
            int32_t ecx_6 = ecx_5 - &var_113
            eax_3 = GetTimeFormatA(0x400, 0, *(arg2 + 0x10), "hh':'mm':'ss tt", &var_114 + ecx_6, 
                0x104 - ecx_6)
            edi_1 = &var_114
    
    int32_t* lParam_1 =
        sub_74afe0(eax_3, *(arg2 + 4), *lParam, edi_1, *(arg2 + 8), *(arg2 + 0xc), *(arg2 + 0x14))
    
    if (SendMessageA(*(data_19e2778 + 0x18), 0x19a, arg1, lParam_1) != 0xffffffff)
        WPARAM wParam = SendMessageA(*(data_19e2778 + 0x14), 0x18f, 0, lParam)
        
        if (wParam != 0xffffffff)
            LRESULT result_2 = SendMessageA(*(data_19e2778 + 0x14), 0x19a, wParam, lParam_1)
            HWND hWnd = *(data_19e2778 + 0x14)
            result_1 = result_2
            RedrawWindow(hWnd, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
            
            if (result_2 != 0xffffffff)
                void* eax_21 = data_19e2778
                
                if (lParam == *(eax_21 + 4))
                    *(eax_21 + 4) = lParam_1
                
                free(*lParam)
                free(*(lParam + 4))
                
                if (*(lParam + 0x14) != 8)
                    free(*(lParam + 0x10))
                    free(*(lParam + 8))
                
                free(*(lParam + 0xc))
                free(lParam)
                goto label_75046a

CookieCheckFunction(0xffffffff)
return 0xffffffff
