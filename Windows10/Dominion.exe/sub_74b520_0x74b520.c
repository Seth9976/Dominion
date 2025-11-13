// 函数: sub_74b520
// 地址: 0x74b520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
HANDLE eax_4 = GetPropA(GetParent(GetParent(arg1)), "lpInsData")
data_19e2778 = eax_4

if (arg2 == 2)
    SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
    RemovePropA(arg1, "Wprc")
    CookieCheckFunction(0)
    return 0

if (arg2 != 8)
    if (arg2 == 0xf)
        sub_74b450(eax_4, arg2, arg1, arg3, arg4)
        CookieCheckFunction(1)
        return 1
    
    if (arg2 == 0x20a)
        SendMessageA(arg1, 0x102, 0xd, 0)
    else if (arg2 != 0x102)
        if (arg2 == 0x100)
            if (arg3 == 9)
                if (GetKeyState(0x10) s>= 0)
                    SetFocus(*(data_19e2778 + 8))
                    CookieCheckFunction(1)
                    return 1
                
                SendMessageA(arg1, 0x102, 0xd, 0)
                CookieCheckFunction(1)
                return 1
            
            if (arg3 == 0x1b)
                ShowWindow(arg1, SW_HIDE)
                SetFocus(*(data_19e2778 + 0x14))
                CookieCheckFunction(0)
                return 0
    else if (arg3 == 0xd)
        if (*(eax_4 + 4) != 0)
            uint8_t string[0x104]
            GetWindowTextA(arg1, &string, 0x104)
            free(*(*(data_19e2778 + 4) + 0x10))
            char* const eax_11 = &data_801800
            
            if (string[0] != 0)
                eax_11 = &string
            
            char* ecx_9 = eax_11
            char* const var_110_1 = eax_11
            
            do
                eax_11.b = *ecx_9
                ecx_9 = &ecx_9[1]
            while (eax_11.b != 0)
            
            int32_t esi_1 = calloc(ecx_9 - &ecx_9[1] + 1, 1)
            
            if (esi_1 != 0)
                char* const ecx_11 = var_110_1
                int32_t eax_13
                
                do
                    eax_13.b = *ecx_11
                    ecx_11 = &ecx_11[1]
                while (eax_13.b != 0)
                memcpy(esi_1, var_110_1, ecx_11 - &ecx_11[1])
            else
                esi_1 = calloc(1, 1)
            
            *(*(data_19e2778 + 4) + 0x10) = esi_1
        
        ShowWindow(arg1, SW_HIDE)
        SetFocus(*(data_19e2778 + 0x14))
        sub_750570()
        CookieCheckFunction(1)
        return 1
else
    SendMessageA(arg1, 0x102, 0xd, 0)
    void* eax_6 = data_19e2778
    int32_t ecx_3
    
    if (arg3 == 0 || (*(eax_6 + 0x14) != arg3 && *(eax_6 + 0x1c) != arg3 && *(eax_6 + 0x20) != arg3
            && *(eax_6 + 0x10) != arg3 && *(eax_6 + 0xc) != arg3))
        ecx_3 = 0
    else
        ecx_3 = 1
    
    *(eax_6 + 0x38) = ecx_3
    void* eax_7 = data_19e2778
    
    if (*(eax_7 + 0x38) == 0)
        RedrawWindow(*(eax_7 + 0x14), nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)

LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
CookieCheckFunction(result)
return result
