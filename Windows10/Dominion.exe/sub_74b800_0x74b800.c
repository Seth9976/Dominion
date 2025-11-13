// 函数: sub_74b800
// 地址: 0x74b800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
HWND hWnd_1 = GetParent(GetParent(arg1))
GetClassNameA(arg1, &data_1a9b048, 0x104)
int32_t lParam_1 = _mbsicmp(&data_1a9b048, "Edit")
int32_t lParam = lParam_1
HWND hWnd
HWND hWnd_2
HANDLE ecx

if (lParam_1 != 0)
    ecx = GetPropA(hWnd_1, "lpInsData")
    hWnd = arg1
    data_19e2778 = ecx
    hWnd_2 = arg1
else
    data_19e2778 = GetPropA(GetParent(hWnd_1), "lpInsData")
    hWnd_2 = GetParent(arg1)
    ecx = data_19e2778
    hWnd = hWnd_2

if (arg2 == 2)
    SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
    RemovePropA(arg1, "Wprc")
    CookieCheckFunction(0)
    return 0

if (arg2 != 8)
    if (arg2 == 0x102 && arg3 == 0xd)
        if (*(ecx + 4) != 0 && SendMessageA(hWnd_2, 0x466, 0, &lParam) == 4)
            int32_t lParam_2 = lParam
            uint32_t var_130_7 = zx.d(lParam_2.b)
            uint32_t var_134_4 = zx.d((lParam_2 u>> 8).b)
            uint32_t var_138_2 = zx.d((lParam_2 u>> 0x10).b)
            uint32_t var_13c_4 = lParam_2 u>> 0x18
            char var_114[0x10c]
            sub_74afa0(&var_114, 0x104, "%d.%d.%d.%d")
            free(*(*(data_19e2778 + 4) + 0x10))
            char* const ebx_1 = &data_801800
            
            if (var_114[0] != 0)
                ebx_1 = &var_114
            
            char* const ecx_6 = ebx_1
            char i
            
            do
                i = *ecx_6
                ecx_6 = &ecx_6[1]
            while (i != 0)
            int32_t esi_1 = calloc(ecx_6 - &ecx_6[1] + 1, 1)
            
            if (esi_1 != 0)
                char* const ecx_8 = ebx_1
                int32_t eax_22
                
                do
                    eax_22.b = *ecx_8
                    ecx_8 = &ecx_8[1]
                while (eax_22.b != 0)
                memcpy(esi_1, ebx_1, ecx_8 - &ecx_8[1])
            else
                esi_1 = calloc(1, 1)
            
            *(*(data_19e2778 + 4) + 0x10) = esi_1
        
        ShowWindow(hWnd, SW_HIDE)
        SetFocus(*(data_19e2778 + 0x14))
        sub_750570()
        CookieCheckFunction(1)
        return 1
    
    if (lParam != 0)
        if (arg2 == 0xf)
            sub_74b450(hWnd_2, arg2, arg1, arg3, arg4)
            CookieCheckFunction(1)
            return 1
        
        if (arg2 == 0x111 && GetPropA(arg4, "Wprc") == 0)
            SetPropA(arg4, "Wprc", GetWindowLongA(arg4, 0xfffffffc))
            SetWindowLongA(arg4, 0xfffffffc, sub_74b800)
    else
        if (arg2 == 0x87)
            CookieCheckFunction(4)
            return 4
        
        if (arg2 == 0x20a)
            SendMessageA(arg1, 0x102, 0xd, 0)
        else if (arg2 == 0x102)
            if (arg3 == 9)
                HWND esi_2
                
                if (GetKeyState(0x10) s>= 0)
                    esi_2 = GetWindow(arg1, GW_HWNDPREV)
                    
                    if (esi_2 == 0)
                        SetFocus(*(data_19e2778 + 8))
                        *(data_19e2778 + 0x38) = esi_2
                        void* eax_33 = data_19e2778
                        
                        if (*(eax_33 + 0x38) == esi_2)
                            RedrawWindow(*(eax_33 + 0x14), esi_2, esi_2, 
                                RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                        
                        CookieCheckFunction(1)
                        return 1
                else
                    esi_2 = GetWindow(arg1, GW_HWNDNEXT)
                    
                    if (esi_2 == 0)
                        goto label_74bb30
                
                SendMessageA(esi_2, 0xb1, 0, 0xffffffff)
                SetFocus(esi_2)
                CookieCheckFunction(1)
                return 1
            
            if (arg3 == 0x1b)
                ShowWindow(hWnd_2, SW_HIDE)
            label_74bb30:
                SetFocus(*(data_19e2778 + 0x14))
                CookieCheckFunction(1)
                return 1
        else if (arg2 == 0x302)
            CookieCheckFunction(1)
            return 1
else if (lParam == 0 && hWnd != GetParent(arg3))
    SendMessageA(hWnd, 0x102, 0xd, 0)
    void* eax_9 = data_19e2778
    int32_t ecx_4
    
    if (arg3 == 0 || (*(eax_9 + 0x14) != arg3 && *(eax_9 + 0x1c) != arg3 && *(eax_9 + 0x20) != arg3
            && *(eax_9 + 0x10) != arg3 && *(eax_9 + 0xc) != arg3))
        ecx_4 = 0
    else
        ecx_4 = 1
    
    *(eax_9 + 0x38) = ecx_4
    void* eax_10 = data_19e2778
    
    if (*(eax_10 + 0x38) == 0)
        RedrawWindow(*(eax_10 + 0x14), nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)

LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
CookieCheckFunction(result)
return result
