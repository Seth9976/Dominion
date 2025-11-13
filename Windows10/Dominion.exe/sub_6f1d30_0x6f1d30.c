// 函数: sub_6f1d30
// 地址: 0x6f1d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg2 u<= 0x2c)
    if (arg2 == 0x2c)
        int32_t eax_45
        int32_t edx_4
        edx_4:eax_45 = muls.dp.d(0x2aaaaaab, data_147d4b0 * 0xd)
        int32_t edx_5 = edx_4 s>> 4
        *(arg4 + 0x10) = (edx_5 u>> 0x1f) + edx_5
        CookieCheckFunction(1)
        return 1
    
    if (arg2 == 5)
        RECT rect
        GetClientRect(arg1, &rect)
        int32_t eax_23 = data_147d48c - data_147d494 - rect.left + rect.right
        int32_t eax_27 = data_147d490 - rect.top - data_147d498 + rect.bottom
        HWND hWnd = GetDlgItem(arg1, 1)
        HWND hWnd_1 = GetDlgItem(arg1, 2)
        HWND hWnd_2 = GetDlgItem(arg1, 0x85)
        int32_t X_3
        GetWindowRect(hWnd, &X_3)
        int32_t X_4
        GetWindowRect(hWnd_1, &X_4)
        int32_t X_5
        GetWindowRect(hWnd_2, &X_5)
        ScreenToClient(arg1, &X_3)
        POINT point
        ScreenToClient(arg1, &point)
        ScreenToClient(arg1, &X_4)
        POINT point_1
        ScreenToClient(arg1, &point_1)
        ScreenToClient(arg1, &X_5)
        POINT point_2
        ScreenToClient(arg1, &point_2)
        int32_t X = X_3
        int32_t var_5c
        MoveWindow(hWnd, X, eax_27 + var_5c, point.x - X, point.y - var_5c, 1)
        int32_t X_1 = X_4
        int32_t var_4c
        MoveWindow(hWnd_1, X_1, var_4c + eax_27, point_1.x - X_1, point_1.y - var_4c, 1)
        int32_t X_2 = X_5
        int32_t Y
        MoveWindow(hWnd_2, X_2, Y, point_2.x - X_2 + eax_23, point_2.y - Y + eax_27, 1)
        int128_t xmm0
        xmm0.d = rect.left
        xmm0:4.d = rect.top
        xmm0:8.d = rect.right
        xmm0:0xc.d = rect.bottom
        data_147d48c.o = xmm0
        CookieCheckFunction(0)
        return 0
    
    if (arg2 == 0x24)
        *(arg4 + 0x1c) = 0x12c
        CookieCheckFunction(1)
        return 1
    
    if (arg2 == 0x2b && *(arg4 + 8) != 0xffffffff)
        int32_t* eax_3 = sub_6ee6b0()
        int32_t ecx_1 = *(arg4 + 0xc)
        
        if (ecx_1 == 1 || ecx_1 == 2)
            LRESULT eax_5 = SendMessageA(*(arg4 + 0x14), 0x199, *(arg4 + 8), 0)
            
            if (eax_5 u> 0x79)
                sub_63b870(eax_5, &data_801800, 
                    "paramToolIndex >= 0 && paramToolIndex < gParticleParamToolDataCount", 
                    "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x894, "PickDialogWndProc")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t i = *((eax_5 << 3) + &data_8cc228)
            void* var_74_1
            int32_t x
            
            if (i != 0x70)
                int32_t ecx_8 = 0
                int32_t edx_1 = *eax_3
                
                if (edx_1 s<= 0)
                label_6f1e73:
                    HDC hdc = *(arg4 + 0x18)
                    var_74_1 = arg4 + 0x18
                    
                    if ((*(arg4 + 0x10) & 1) == 0)
                        SetTextColor(hdc, GetSysColor(COLOR_WINDOWTEXT))
                        SetBkColor(*(arg4 + 0x18), &data_ffffff)
                        var_74_1 = arg4 + 0x18
                    else
                        SetTextColor(hdc, GetSysColor(COLOR_HIGHLIGHTTEXT))
                        SetBkColor(*var_74_1, GetSysColor(COLOR_HIGHLIGHT))
                else
                    int32_t* eax_10 = eax_3[2]
                    
                    while (*eax_10 != i)
                        ecx_8 += 1
                        eax_10 = &eax_10[4]
                        
                        if (ecx_8 s>= edx_1)
                            goto label_6f1e73
                    
                    var_74_1 = arg4 + 0x18
                    SetTextColor(*(arg4 + 0x18), GetSysColor(COLOR_GRAYTEXT))
                    SetBkColor(*(arg4 + 0x18), &data_ffffff)
                
                x = 0xc
            else
                HBRUSH eax_6 = CreateSolidBrush(0xe6e6e6)
                var_74_1 = arg4 + 0x18
                FillRect(*(arg4 + 0x18), arg4 + 0x1c, eax_6)
                DeleteObject(eax_6)
                SetBkColor(*(arg4 + 0x18), 0xe6e6e6)
                SetTextColor(*(arg4 + 0x18), GetSysColor(COLOR_WINDOWTEXT))
                x = 6
            
            uint8_t* lpString = (&data_8cc22c)[eax_5 * 2]
            char* lpString_1 = lpString
            void* eax_18
            
            do
                eax_18.b = *lpString_1
                lpString_1 = &lpString_1[1]
            while (eax_18.b != 0)
            TextOutA(*var_74_1, x, *(arg4 + 0x20), lpString, lpString_1 - &lpString_1[1])
        else if (ecx_1 == 4)
            DrawFocusRect(*(arg4 + 0x18), arg4 + 0x1c)
            CookieCheckFunction(1)
            return 1
        
        CookieCheckFunction(1)
        return 1
else if (arg2 == 0x110)
    SetDlgItemTextA(arg1, 0x86, "Pick parameters:")
    SetWindowTextA(arg1, "Add parameters")
    HWND hWnd_3 = GetDlgItem(arg1, 0x85)
    
    for (LPARAM lParam = 0; lParam s< 0x7a; lParam += 1)
        SendMessageA(hWnd_3, 0x19a, SendMessageA(hWnd_3, 0x180, 0, (&data_8cc22c)[lParam * 2]), 
            lParam)
    
    GetClientRect(arg1, &data_147d48c)
else if (arg2 == 0x111)
    uint32_t eax_52 = arg3 u>> 0x10
    uint32_t edx_6 = zx.d(arg3.w)
    
    if (eax_52 == 0)
        if (edx_6 == 1)
            goto label_6f2151
        
        if (edx_6 == 2)
            EndDialog(arg1, arg3)
            CookieCheckFunction(0)
            return 0
    else if (eax_52 == 2)
    label_6f2151:
        sub_6f1b50(arg1)
        CookieCheckFunction(0)
        return 0

CookieCheckFunction(0)
return 0
