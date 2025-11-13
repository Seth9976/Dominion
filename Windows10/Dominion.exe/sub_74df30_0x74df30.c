// 函数: sub_74df30
// 地址: 0x74df30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
WPARAM var_40 = arg2
int32_t var_58 = 0
int32_t eax_3
HWND var_78

if (*(data_19e2778 + 4) == 0)
label_74e0eb:
    uint32_t Msg_1 = 0x100
    var_78 = arg3
    eax_3 = CallWindowProcA(GetPropA(arg3, "Wprc"), var_78, Msg_1, arg2, 
        zx.d(arg5) << 0x10 | zx.d(arg4))
else
    RECT var_3c
    RECT* lParam_1 = &var_3c
    LPARAM lParam = 0
    WPARAM wParam = 0
    var_78 = 0x188
    __builtin_memset(&var_3c, 0, 0x10)
    WPARAM wParam_11 = SendMessageA(arg3, var_78, wParam, lParam)
    uint32_t Msg = 0x198
    var_78 = arg3
    SendMessageA(var_78, Msg, wParam_11, lParam_1)
    HINSTANCE* esi_1 = data_19e2778
    eax_3 = var_40
    int32_t* ecx = esi_1[1]
    
    if (ecx[5] == 0x63)
        if (eax_3 != 0x27)
            if (eax_3 == 0x25 && ecx[6] == 0)
                goto label_74dfb1
        else if (ecx[6] != 0)
        label_74dfb1:
            sub_74ce10(ecx)
            esi_1 = data_19e2778
            eax_3 = var_40
            var_58 = 1
    
    struct HINSTANCE__* _Str1 = esi_1[1]
    
    if (_Str1 != 8)
        goto label_74e023
    
    if (eax_3 == 0x20 || eax_3 == 0xd)
        eax_3 = _mbsicmp(_Str1, &data_8901e0)
        
        if (eax_3 == 0)
            void* const ecx_3 = &data_88ff00
            
            if (_mbsicmp(*(*(data_19e2778 + 4) + 0x10), &data_8901e0) != 0)
                ecx_3 = &data_8901e0
            
            enum REDRAW_WINDOW_FLAGS flags_1 = RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW
            HRGN hrgnUpdate_1 = nullptr
            *(*(data_19e2778 + 4) + 0x10) = ecx_3
            RECT* lprcUpdate_1 = &var_3c
            var_78 = arg3
            RedrawWindow(var_78, lprcUpdate_1, hrgnUpdate_1, flags_1)
            eax_3 = sub_750570()
        
        goto label_74e0cf
    
    if (eax_3 != 0x1b)
        eax_3 -= 0x25
        
        if (eax_3 u> 3)
            goto label_74e023
        
        eax_3 = _mbsicmp(_Str1, &data_8901e0)
        
        if (eax_3 != 0)
            esi_1 = data_19e2778
        label_74e023:
            arg2 = var_40
            
            if (arg2 != 9)
                if (arg2 == 0x21)
                    WPARAM wParam_9 = 0x24
                    uint32_t Msg_13 = 0x100
                    var_78 = arg3
                    LRESULT eax_70 =
                        SendMessageA(var_78, Msg_13, wParam_9, zx.d(arg5) << 0x10 | zx.d(arg4))
                    CookieCheckFunction(eax_70)
                    return eax_70
                
                if (arg2 != 0x22)
                    goto label_74e0d2
                
                WPARAM wParam_10 = 0x23
                uint32_t Msg_14 = 0x100
                var_78 = arg3
                LRESULT eax_72 =
                    SendMessageA(var_78, Msg_14, wParam_10, zx.d(arg5) << 0x10 | zx.d(arg4))
                CookieCheckFunction(eax_72)
                return eax_72
            
            struct HINSTANCE__* ecx_1 = esi_1[9]
            void* __offset(HINSTANCE__, 0x15) ecx_2
            
            if (esi_1[1] != 4)
                ecx_2 = &ecx_1->unused + 1
            else
                ecx_2 = ecx_1 + 0x15
            
            var_3c.left = ecx_2
            struct HINSTANCE__* lpString = esi_1[1]
            struct HINSTANCE__ lpString_1 = lpString
            struct INITCOMMONCONTROLSEX picce
            
            switch (lpString_1)
                case 0, 4
                    int128_t xmm0
                    xmm0.d = var_3c.left
                    xmm0:4.d = var_3c.top
                    xmm0:8.d = var_3c.right
                    xmm0:0xc.d = var_3c.bottom
                    var_78.o = xmm0
                    eax_3 = sub_74db10(&var_78, lpString, arg3, var_78)
                    goto label_74e0cf
                case 1, 2
                    uint128_t xmm0_1
                    xmm0_1.d = var_3c.left
                    xmm0_1:4.d = var_3c.top
                    xmm0_1:8.d = var_3c.right
                    xmm0_1:0xc.d = var_3c.bottom
                    picce.dwICC = _mm_bsrli_si128(xmm0_1, 4) + 1
                    
                    if (lpString_1 != 1)
                        if (esi_1[7] == 0)
                            esi_1[7] = sub_74cac0(xmm0_1:0xc.d + 0x64, arg3, *esi_1, 0x7d9, 1)
                            esi_1 = data_19e2778
                    else if (esi_1[7] == 0)
                        esi_1[7] = sub_74cac0(xmm0_1:0xc.d + 0x64, arg3, *esi_1, 0x7d8, 0)
                        esi_1 = data_19e2778
                    
                    struct HINSTANCE__* hWnd = esi_1[7]
                    LPARAM lParam_2 = 0
                    WPARAM wParam_1 = 0
                    uint32_t Msg_2 = 0x14b
                    var_78 = hWnd
                    SendMessageA(var_78, Msg_2, wParam_1, lParam_2)
                    enum INITCOMMONCONTROLSEX_ICC dwICC_1 = picce.dwICC
                    int32_t X_2 = xmm0_1.d
                    BOOL bRepaint = 1
                    var_78 = dwICC_1
                    MoveWindow(hWnd, X_2, var_78, xmm0_1:8.d - X_2, xmm0_1:0xc.d + 0x64 - dwICC_1, 
                        bRepaint)
                    struct HINSTANCE__ lParam_9 = lpString
                    
                    if (*lParam_9 != 0)
                        LRESULT eax_26
                        
                        do
                            WPARAM wParam_2 = 0
                            uint32_t Msg_3 = 0x158
                            var_78 = hWnd
                            
                            if (SendMessageA(var_78, Msg_3, wParam_2, lParam_9) == 0xffffffff)
                                WPARAM wParam_3 = 0
                                uint32_t Msg_4 = 0x143
                                var_78 = hWnd
                                SendMessageA(var_78, Msg_4, wParam_3, lParam_9)
                            
                            char* lParam_10 = lParam_9
                            
                            do
                                eax_26.b = *lParam_10
                                lParam_10 = &lParam_10[1]
                            while (eax_26.b != 0)
                            
                            lParam_9 = lParam_9 + 1 + lParam_10 - &lParam_10[1]
                        while (*lParam_9 != eax_26.b)
                    
                    ShowWindow(hWnd, SW_SHOW)
                    SetFocus(hWnd)
                    LPARAM lParam_3 = lpString
                    WPARAM wParam_4 = 0
                    uint32_t Msg_5 = 0x158
                    var_78 = hWnd
                    WPARAM wParam_12 = SendMessageA(var_78, Msg_5, wParam_4, lParam_3)
                    LPARAM lParam_4 = 0
                    
                    if (wParam_12 == 0xffffffff)
                        WPARAM wParam_5 = 0
                        uint32_t Msg_7 = 0x14e
                        var_78 = hWnd
                        SendMessageA(var_78, Msg_7, wParam_5, lParam_4)
                        SetWindowTextA(hWnd, lpString)
                        LPARAM lParam_5 = 0xffff0000
                        WPARAM wParam_6 = 0
                        uint32_t Msg_8 = 0x142
                        var_78 = hWnd
                        eax_3 = SendMessageA(var_78, Msg_8, wParam_6, lParam_5)
                    else
                        uint32_t Msg_6 = 0x14e
                        var_78 = hWnd
                        eax_3 = SendMessageA(var_78, Msg_6, wParam_12, lParam_4)
                    
                    goto label_74e0cf
                case 3, 0x63
                    eax_3 = SetFocus(esi_1[2])
                    goto label_74e0cf
                case 8
                    if (GetKeyState(0x10) s>= 0)
                        bool cond:5_1 = _mbsicmp(*(*(data_19e2778 + 4) + 8), &data_8901e0) != 0
                        void* eax_55 = *(data_19e2778 + 4)
                        
                        if (cond:5_1)
                            *(eax_55 + 8) = &data_8901e0
                        else
                            *(eax_55 + 8) = &data_88ff00
                            SetFocus(*(data_19e2778 + 8))
                    else
                        WPARAM wParam_8 = 0x1b
                        uint32_t Msg_11 = 0x100
                        var_78 = arg3
                        SendMessageA(var_78, Msg_11, wParam_8, zx.d(arg5) << 0x10 | zx.d(arg4))
                    
                    goto label_74dfe5
                case 9
                    uint128_t xmm0_3
                    xmm0_3.d = var_3c.left
                    xmm0_3:4.d = var_3c.top
                    xmm0_3:8.d = var_3c.right
                    xmm0_3:0xc.d = var_3c.bottom
                    int32_t eax_27 = xmm0_3:0xc.d
                    int32_t ecx_12 = xmm0_3:8.d
                    HWND edx_3 = _mm_bsrli_si128(xmm0_3, 4) + 1
                    
                    if (esi_1[7] == 0)
                        struct HINSTANCE__* hInstance_1 = *esi_1
                        picce.dwSize = 8
                        picce.dwICC = 0x800
                        HWND hWnd_1
                        
                        if (InitCommonControlsEx(&picce) != 0)
                            int32_t lpParam = 0
                            HMENU hMenu = 0x7d5
                            var_78 = arg3
                            hWnd_1 = CreateWindowExA(WS_EX_LEFT, "SysIPAddress32", nullptr, 
                                WS_CHILD, 0x80000000, 0x80000000, xmm0_3:8.d - xmm0_3.d, 
                                xmm0_3:0xc.d - edx_3, var_78, hMenu, hInstance_1, lpParam)
                            
                            if (hWnd_1 != 0)
                                LPARAM lParam_6 = 0
                                HGDIOBJ wParam_13 = GetStockObject(DEFAULT_GUI_FONT)
                                uint32_t Msg_9 = 0x30
                                var_78 = hWnd_1
                                SendMessageA(var_78, Msg_9, wParam_13, lParam_6)
                                SetPropA(hWnd_1, "Wprc", GetWindowLongA(hWnd_1, 0xfffffffc))
                                SetWindowLongA(hWnd_1, 0xfffffffc, sub_74b800)
                        else
                            hWnd_1 = nullptr
                        
                        ecx_12 = xmm0_3:8.d
                        *(data_19e2778 + 0x1c) = hWnd_1
                        esi_1 = data_19e2778
                        eax_27 = xmm0_3:0xc.d
                    
                    BOOL bRepaint_1 = 1
                    int32_t X_1 = xmm0_3.d
                    var_78 = edx_3
                    va_list ecx_14
                    int32_t edx_4
                    ecx_14, edx_4 =
                        MoveWindow(esi_1[7], X_1, var_78, ecx_12 - X_1, eax_27 - edx_3, bRepaint_1)
                    int32_t var_1c = 0
                    int32_t var_10
                    int32_t* var_6c_16 = &var_10
                    int32_t var_18 = 0
                    int32_t var_14
                    int32_t* var_70_18 = &var_14
                    var_14 = 0
                    int32_t* var_74_5 = &var_18
                    var_10 = 0
                    var_78 = &var_1c
                    sub_64b6d0(lpString, edx_4, ecx_14, lpString, "%hhu.%hhu.%hhu.%hhu")
                    LPARAM lParam_8 = (((((var_1c << 8) + var_18) << 8) + var_14) << 8) + var_10
                    WPARAM wParam_7 = 0
                    uint32_t Msg_10 = 0x465
                    var_78 = *(data_19e2778 + 0x1c)
                    SendMessageA(var_78, Msg_10, wParam_7, lParam_8)
                case 0xa, 0xb, 0xc
                    int128_t xmm0_5
                    xmm0_5.d = var_3c.left
                    xmm0_5:4.d = var_3c.top
                    xmm0_5:8.d = var_3c.right
                    xmm0_5:0xc.d = var_3c.bottom
                    var_78.o = xmm0_5
                    eax_3 = sub_74dc30(&var_78, lpString, arg3, var_78)
                    goto label_74e0cf
                default
                    uint128_t xmm0_6
                    xmm0_6.d = var_3c.left
                    xmm0_6:4.d = var_3c.top
                    xmm0_6:8.d = var_3c.right
                    xmm0_6:0xc.d = var_3c.bottom
                    int32_t xmm0_7 = _mm_bsrli_si128(xmm0_6, 8)
                    int32_t X
                    int32_t var_44_2
                    
                    if (xmm0_7 - ecx_2 s<= 0x13)
                        var_44_2 = xmm0_6:8.d
                        X = xmm0_6.d
                    else
                        X = xmm0_7 - 0x13
                        var_44_2 = xmm0_6:8.d - 2
                    
                    HWND edx_8 = xmm0_6:4.d + 2
                    enum INITCOMMONCONTROLSEX_ICC dwICC = xmm0_6:0xc.d - 2
                    picce.dwICC = dwICC
                    
                    if (esi_1[7] == 0)
                        int32_t lpParam_1 = 0
                        struct HINSTANCE__* hInstance = *esi_1
                        HMENU hMenu_1 = 0x7d4
                        var_78 = arg3
                        HWND eax_63 = CreateWindowExA(WS_EX_LEFT, "Button", &data_875290, 
                            0x50000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, var_78, 
                            hMenu_1, hInstance, lpParam_1)
                        
                        if (eax_63 != 0)
                            SetWindowTheme(eax_63, &data_88ff34, &data_88ff34)
                            LPARAM lParam_7 = 0
                            HGDIOBJ wParam_14 = GetStockObject(DEFAULT_GUI_FONT)
                            uint32_t Msg_12 = 0x30
                            var_78 = eax_63
                            SendMessageA(var_78, Msg_12, wParam_14, lParam_7)
                            SetPropA(eax_63, "Wprc", GetWindowLongA(eax_63, 0xfffffffc))
                            SetWindowLongA(eax_63, 0xfffffffc, sub_74bc90)
                        
                        *(data_19e2778 + 0x1c) = eax_63
                        esi_1 = data_19e2778
                        dwICC = picce.dwICC
                    
                    BOOL bRepaint_2 = 1
                    var_78 = edx_8
                    MoveWindow(esi_1[7], X, var_78, var_44_2 - X, dwICC - edx_8, bRepaint_2)
            
            ShowWindow(*(data_19e2778 + 0x1c), SW_SHOW)
            eax_3 = SetFocus(*(data_19e2778 + 0x1c))
            goto label_74e0cf
    else
    label_74dfe5:
        enum REDRAW_WINDOW_FLAGS flags = RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW
        HRGN hrgnUpdate = nullptr
        RECT* lprcUpdate = &var_3c
        var_78 = arg3
        eax_3 = RedrawWindow(var_78, lprcUpdate, hrgnUpdate, flags)
    label_74e0cf:
        arg2 = var_40
    label_74e0d2:
        
        if (var_58 == 0)
            goto label_74e0eb
CookieCheckFunction(eax_3)
return eax_3
