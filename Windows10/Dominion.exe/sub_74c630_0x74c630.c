// 函数: sub_74c630
// 地址: 0x74c630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
HWND hWnd_4 = arg1
HWND hWnd_3 = GetParent(GetParent(hWnd_4))
GetClassNameA(hWnd_4, &data_1a9af28, 0x104)
int32_t eax_4 = _mbsicmp(&data_1a9af28, "Edit")
HWND hWnd

if (eax_4 != 0)
    char const* const var_3c_4 = "lpInsData"
    hWnd = hWnd_3
else
    char const* const var_3c_3 = "lpInsData"
    hWnd = GetParent(hWnd_3)

HANDLE eax_6 = GetPropA(hWnd, "lpInsData")
data_19e2778 = eax_6

if (arg2 == 2)
    SetWindowLongA(hWnd_4, 0xfffffffc, GetPropA(hWnd_4, "Wprc"))
    RemovePropA(hWnd_4, "Wprc")
    CookieCheckFunction(0)
    return 0

if (arg2 == 8)
    if (hWnd_4 != GetParent(arg3))
        SendMessageA(hWnd_4, 0x102, 0xd, 0)
        void* eax_9 = data_19e2778
        int32_t ecx_3
        
        if (arg3 == 0 || (*(eax_9 + 0x14) != arg3 && *(eax_9 + 0x1c) != arg3
                && *(eax_9 + 0x20) != arg3 && *(eax_9 + 0x10) != arg3 && *(eax_9 + 0xc) != arg3))
            ecx_3 = 0
        else
            ecx_3 = 1
        
        *(eax_9 + 0x38) = ecx_3
        void* eax_10 = data_19e2778
        
        if (*(eax_10 + 0x38) == 0)
            RedrawWindow(*(eax_10 + 0x14), nullptr, nullptr, 
                RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
else if (arg2 != 0xf)
    if (arg2 == 0x87)
        CookieCheckFunction(4)
        return 4
    
    if (arg2 == 0x111)
        if (GetPropA(arg4, "Wprc") == 0)
            GetClassNameA(arg4, &data_1a9af28, 0x104)
            
            if (_mbsicmp(&data_1a9af28, "Edit") == 0)
                SetPropA(arg4, "Wprc", GetWindowLongA(arg4, 0xfffffffc))
                SetWindowLongA(arg4, 0xfffffffc, sub_74c630)
    else if (arg2 == 0x102)
        if (arg3 == 0xd)
            if (*(eax_6 + 4) != 0)
                GetWindowTextA(hWnd_4, &data_1a9af28, 0x104)
                free(*(*(data_19e2778 + 4) + 0x10))
                char* const edi_2 = &data_801800
                
                if (data_1a9af28 != 0)
                    edi_2 = &data_1a9af28
                
                char* const ecx_12 = edi_2
                char i
                
                do
                    i = *ecx_12
                    ecx_12 = &ecx_12[1]
                while (i != 0)
                int32_t esi_1 = calloc(ecx_12 - &ecx_12[1] + 1, 1)
                
                if (esi_1 != 0)
                    char* const ecx_14 = edi_2
                    int32_t eax_21
                    
                    do
                        eax_21.b = *ecx_14
                        ecx_14 = &ecx_14[1]
                    while (eax_21.b != 0)
                    memcpy(esi_1, edi_2, ecx_14 - &ecx_14[1])
                else
                    esi_1 = calloc(1, 1)
                
                *(*(data_19e2778 + 4) + 0x10) = esi_1
            
            HWND hWnd_1 = hWnd_4
            
            if (eax_4 == 0)
                hWnd_1 = GetParent(hWnd_1)
            
            ShowWindow(hWnd_1, SW_HIDE)
            SetFocus(*(data_19e2778 + 0x14))
            sub_750570()
            CookieCheckFunction(1)
            return 1
        
        if (arg3 == 9)
            if (GetKeyState(0x10) s< 0)
                SendMessageA(hWnd_4, 0x102, 0xd, 0)
                CookieCheckFunction(&arg3[-2])
                return &arg3[-2]
            
            if (eax_4 == 0)
                hWnd_4 = GetParent(hWnd_4)
            
            ShowWindow(hWnd_4, SW_HIDE)
            SetFocus(*(data_19e2778 + 8))
            *(data_19e2778 + 0x38) = 0
            void* eax_32 = data_19e2778
            
            if (*(eax_32 + 0x38) == 0)
                RedrawWindow(*(eax_32 + 0x14), nullptr, nullptr, 
                    RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
            
            CookieCheckFunction(1)
            return 1
    else if (arg2 == 0x100 && arg3 == 0x1b)
        HWND hWnd_2 = hWnd_4
        
        if (eax_4 == 0)
            hWnd_2 = GetParent(hWnd_2)
        
        ShowWindow(hWnd_2, SW_HIDE)
        SetFocus(*(data_19e2778 + 0x14))
        CookieCheckFunction(0)
        return 0
else if (eax_4 != 0)
    CallWindowProcA(GetPropA(hWnd_4, "Wprc"), hWnd_4, arg2, arg3, arg4)
    HDC hDC = GetWindowDC(hWnd_4)
    int32_t rect
    GetClientRect(hWnd_4, &rect)
    uint32_t eax_13 = GetSysColor(COLOR_WINDOW)
    sub_74b280(eax_13, &rect, hDC, 3, eax_13)
    int32_t var_18
    int32_t var_18_1 = var_18 + 1
    rect += 1
    uint32_t eax_14 = GetSysColor(COLOR_WINDOW)
    sub_74b280(eax_14, &rect, hDC, 3, eax_14)
    ReleaseDC(hWnd_4, hDC)
    CookieCheckFunction(1)
    return 1

LRESULT result = CallWindowProcA(GetPropA(hWnd_4, "Wprc"), hWnd_4, arg2, arg3, arg4)
CookieCheckFunction(result)
return result
