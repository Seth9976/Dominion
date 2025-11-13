// 函数: sub_750aa0
// 地址: 0x750aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
WPARAM wParam_12 = arg3
HWND edi = arg4
char const* const lpString = "lpInsData"
HWND var_e8 = wParam_12
HWND var_e0 = edi
uint32_t Msg_3 = arg2
HANDLE ecx = GetPropA(arg1, lpString)
data_19e2778 = ecx
int32_t var_f4_16
int32_t eax_24
HWND ecx_7

if (Msg_3 u<= 0x18)
    if (Msg_3 == 0x18)
        if (wParam_12 == 0)
            SendMessageA(*(ecx + 0x1c), 0x102, 0xd, wParam_12)
            SendMessageA(*(data_19e2778 + 0x20), 0x102, 0xd, 0)
            wParam_12 = var_e8
        
        DefWindowProcA(arg1, 0x18, wParam_12, edi)
        CookieCheckFunction(0)
        return 0
    
    if (Msg_3 - 1 u> 6)
        goto label_751d9d
    
    switch (Msg_3)
        case 1
            HINSTANCE hInstance_4
            memset(&hInstance_4, 0, 0x5c)
            HINSTANCE hInstance_2 = edi
            hInstance_4 = hInstance_2
            int32_t lpParam = 0
            HMENU hMenu = 0x7d0
            enum WINDOW_STYLE dwStyle
            __builtin_memcpy(&dwStyle, 
                "\x11\x05\x30\x52\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80", 
                0x14)
            int32_t var_c8 = edi
            int128_t var_9c = zx.o(0)
            int32_t var_a4 = 0x50
            int32_t var_a0 = 0xffffffff
            int32_t X
            int32_t Y
            int32_t nWidth
            int32_t nHeight
            HWND eax_6 = CreateWindowExA(0x2200, "ListBox", nullptr, dwStyle, X, Y, nWidth, 
                nHeight, arg1, hMenu, hInstance_2, lpParam)
            var_e8 = eax_6
            
            if (eax_6 != 0)
                LPARAM lParam = 0
                HGDIOBJ wParam_2 = GetStockObject(DEFAULT_GUI_FONT)
                SendMessageA(var_e8, 0x30, wParam_2, lParam)
                int32_t hData = GetWindowLongA(var_e8, 0xfffffffc)
                SetPropA(var_e8, "Wprc", hData)
                SetWindowLongA(var_e8, 0xfffffffc, sub_7505f0)
                int32_t lpParam_1 = 0
                HINSTANCE hInstance = edi
                HWND eax_7 = var_e8
                HMENU hMenu_1 = 0x7d1
                enum WINDOW_STYLE dwStyle_1
                __builtin_memcpy(&dwStyle_1, 
                    "\x10\x00\x00\x40\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80", 
                    0x14)
                HWND var_bc_1 = eax_7
                int32_t X_1
                int32_t Y_1
                int32_t nWidth_1
                int32_t nHeight_1
                HWND eax_8 = CreateWindowExA(WS_EX_LEFT, "ListBox", nullptr, dwStyle_1, X_1, Y_1, 
                    nWidth_1, nHeight_1, arg1, hMenu_1, hInstance, lpParam_1)
                
                if (eax_8 != 0)
                    HWND var_b8 = eax_8
                    HANDLE hData_1 = malloc(0x5c)
                    __builtin_memcpy(hData_1, &hInstance_4, 0x5c)
                    BOOL eax_9 = SetPropA(arg1, "lpInsData", hData_1)
                    int32_t eax_10 = neg.d(eax_9)
                    CookieCheckFunction(neg.d(sbb.d(eax_10, eax_10, eax_9 != 0)) - 1)
                    return neg.d(sbb.d(eax_10, eax_10, eax_9 != 0)) - 1
            
            CookieCheckFunction(neg.d(sbb.d(0, 0, false)) - 1)
            return neg.d(sbb.d(0, 0, false)) - 1
        case 2
            if (ecx != 0)
                SendMessageA(*(ecx + 0x18), 0x184, 0, 0)
                DestroyWindow(*(data_19e2778 + 0x18))
                DestroyWindow(*(data_19e2778 + 0x14))
                void* eax_19 = data_19e2778
                HWND hWnd_3 = *(eax_19 + 0xc)
                
                if (hWnd_3 != 0)
                    DestroyWindow(hWnd_3)
                    eax_19 = data_19e2778
                
                HWND hWnd_4 = *(eax_19 + 0x10)
                
                if (hWnd_4 != 0)
                    DestroyWindow(hWnd_4)
                    eax_19 = data_19e2778
                
                HWND hWnd_5 = *(eax_19 + 0x1c)
                
                if (hWnd_5 != 0)
                    DestroyWindow(hWnd_5)
                    eax_19 = data_19e2778
                
                HWND hWnd_1 = *(eax_19 + 0x20)
                
                if (hWnd_1 != 0)
                    DestroyWindow(hWnd_1)
                
                HANDLE eax_20 = GetPropA(arg1, "lpInsData")
                
                if (eax_20 != 0)
                    free(eax_20)
                    RemovePropA(arg1, "lpInsData")
                    CookieCheckFunction(0)
                    return 0
            
            CookieCheckFunction(0)
            return 0
        case 3, 4, 6
            goto label_751d9d
        case 5
            ecx_7 = arg1
            var_f4_16 = sx.d((edi u>> 0x10).w)
            eax_24 = sx.d(edi.w)
        label_750d37:
            sub_74ef10(eax_24, Msg_3, ecx_7, eax_24, var_f4_16)
            CookieCheckFunction(0)
            return 0
        case 7
            SetFocus(*(ecx + 0x14))
            CookieCheckFunction(0)
            return 0
else
    RECT var_40
    
    if (Msg_3 u> 0x111)
        if (Msg_3 u<= 0x401)
            uint32_t Msg_1
            WPARAM wParam
            HWND lParam_7
            
            if (Msg_3 == 0x401)
                if (edi != 0)
                    if (edi->unused.b == 0)
                        goto label_751d9d
                    
                    HWND esi_18 = edi
                    char i
                    
                    do
                        sub_74f030(esi_18)
                        HWND ecx_79 = esi_18
                        
                        do
                            i = ecx_79->unused.b
                            ecx_79 = &ecx_79->unused + 1
                        while (i != 0)
                        
                        esi_18 = &esi_18->unused + 1 + ecx_79 - (&ecx_79->unused + 1)
                    while (esi_18->unused.b != i)
                    wParam_12 = var_e8
                    goto label_751d9a
                
                sub_74f030(nullptr)
            label_751d9a:
                Msg_3 = arg2
            label_751d9d:
                lParam_7 = edi
                wParam = wParam_12
                Msg_1 = Msg_3
            else
                if (Msg_3 - 0x134 u> 0xce)
                    goto label_751d9d
                
                switch (Msg_3)
                    case 0x134
                        uint32_t color_1 = GetSysColor(COLOR_BTNFACE)
                        uint32_t color_2 = GetSysColor(COLOR_MENUTEXT)
                        DeleteObject(data_1a9a5b4)
                        HBRUSH eax_51 = CreateSolidBrush(color_1)
                        HWND hdc_3 = var_e8
                        HDC hdc = hdc_3
                        data_1a9a5b4 = eax_51
                        SetTextColor(hdc, color_2)
                        SetBkColor(hdc_3, color_1)
                        uint32_t eax_52 = data_1a9a5b4
                        CookieCheckFunction(eax_52)
                        return eax_52
                    case 0x135, 0x136, 0x137, 0x139, 0x13a, 0x13b, 0x13c, 0x13d, 0x13e, 0x13f, 
                            0x140, 0x141, 0x142, 0x143, 0x144, 0x145, 0x146, 0x147, 0x148, 0x149, 
                            0x14a, 0x14b, 0x14c, 0x14d, 0x14e, 0x14f, 0x150, 0x151, 0x152, 0x153, 
                            0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 0x15a, 0x15b, 0x15c, 0x15d, 
                            0x15e, 0x15f, 0x160, 0x161, 0x162, 0x163, 0x164, 0x165, 0x166, 0x167, 
                            0x168, 0x169, 0x16a, 0x16b, 0x16c, 0x16d, 0x16e, 0x16f, 0x170, 0x171, 
                            0x172, 0x173, 0x174, 0x175, 0x176, 0x177, 0x178, 0x179, 0x17a, 0x17b, 
                            0x17c, 0x17d, 0x17e, 0x17f, 0x181, 0x183, 0x185, 0x189, 0x18a, 0x18c, 
                            0x18d, 0x18e, 0x18f, 0x190, 0x191, 0x192, 0x195, 0x196, 0x197, 0x19b, 
                            0x19c, 0x19d, 0x19e, 0x19f, 0x1a2, 0x1a3, 0x1a4, 0x1a5, 0x1a6, 0x1a7, 
                            0x1a8, 0x1a9, 0x1aa, 0x1ab, 0x1ac, 0x1ad, 0x1ae, 0x1af, 0x1b0, 0x1b1, 
                            0x1b2, 0x1b3, 0x1b4, 0x1b5, 0x1b6, 0x1b7, 0x1b8, 0x1b9, 0x1ba, 0x1bb, 
                            0x1bc, 0x1bd, 0x1be, 0x1bf, 0x1c0, 0x1c1, 0x1c2, 0x1c3, 0x1c4, 0x1c5, 
                            0x1c6, 0x1c7, 0x1c8, 0x1c9, 0x1ca, 0x1cb, 0x1cc, 0x1cd, 0x1ce, 0x1cf, 
                            0x1d0, 0x1d1, 0x1d2, 0x1d3, 0x1d4, 0x1d5, 0x1d6, 0x1d7, 0x1d8, 0x1d9, 
                            0x1da, 0x1db, 0x1dc, 0x1dd, 0x1de, 0x1df, 0x1e0, 0x1e1, 0x1e2, 0x1e3, 
                            0x1e4, 0x1e5, 0x1e6, 0x1e7, 0x1e8, 0x1e9, 0x1ea, 0x1eb, 0x1ec, 0x1ed, 
                            0x1ee, 0x1ef, 0x1f0, 0x1f1, 0x1f2, 0x1f3, 0x1f4, 0x1f5, 0x1f6, 0x1f7, 
                            0x1f8, 0x1f9, 0x1fa, 0x1fb, 0x1fc, 0x1fd, 0x1fe, 0x1ff
                        goto label_751d9d
                    case 0x138
                        if (*(ecx + 0x10) != 0)
                            RECT rect_1
                            GetClientRect(arg1, &rect_1)
                            void* ecx_30 = data_19e2778
                            var_40.left = 0
                            var_40.top = *(ecx_30 + 0x28) - 2
                            var_40.right = rect_1.right - rect_1.left
                            var_40.bottom = *(ecx_30 + 0x28)
                            HDC hDC = GetDC(arg1)
                            HBRUSH eax_59 = CreateSolidBrush(GetSysColor(COLOR_BTNFACE))
                            FillRect(hDC, &var_40, eax_59)
                            DeleteObject(eax_59)
                            ReleaseDC(arg1, hDC)
                            edi = var_e0
                            wParam_12 = var_e8
                        
                        lParam_7 = edi
                        wParam = wParam_12
                        Msg_1 = 0x138
                    case 0x180
                        LRESULT eax_88 = sub_74faa0(edi)
                        CookieCheckFunction(eax_88)
                        return eax_88
                    case 0x182
                        LRESULT lParam_9 = SendMessageA(*(ecx + 0x18), 0x199, wParam_12, 0)
                        
                        if (lParam_9 == 0xffffffff || lParam_9 == 0)
                            CookieCheckFunction(0xffffffff)
                            return 0xffffffff
                        
                        LRESULT wParam_4 = SendMessageA(*(data_19e2778 + 0x14), 0x18f, 0, lParam_9)
                        
                        if (wParam_4 != 0xffffffff)
                            SendMessageA(*(data_19e2778 + 0x14), 0x182, wParam_4, 0)
                        
                        LRESULT eax_92 = SendMessageA(*(data_19e2778 + 0x18), 0x182, wParam_12, 0)
                        CookieCheckFunction(eax_92)
                        return eax_92
                    case 0x184
                        SendMessageA(*(ecx + 0x18), 0x184, 0, 0)
                        void* eax_103 = data_19e2778
                        HWND hWnd_9 = *(eax_103 + 0x1c)
                        
                        if (hWnd_9 != 0)
                            DestroyWindow(hWnd_9)
                            *(data_19e2778 + 0x1c) = 0
                            eax_103 = data_19e2778
                        
                        HWND hWnd_10 = *(eax_103 + 0x20)
                        
                        if (hWnd_10 != 0)
                            DestroyWindow(hWnd_10)
                            *(data_19e2778 + 0x20) = 0
                            eax_103 = data_19e2778
                        
                        SendMessageA(*(eax_103 + 0x14), 0x184, 0, 0)
                        SetWindowTextA(*(data_19e2778 + 0x10), &data_801800)
                        goto label_751d9a
                    case 0x186
                        LRESULT lParam_12 = SendMessageA(*(ecx + 0x18), 0x199, wParam_12, 0)
                        
                        if (lParam_12 != 0xffffffff && lParam_12 != 0
                                && *(lParam_12 + 0x14) != 0x63)
                            LRESULT wParam_7 =
                                SendMessageA(*(data_19e2778 + 0x14), 0x18f, 0, lParam_12)
                            
                            if (wParam_7 != 0xffffffff)
                                LRESULT eax_109 =
                                    SendMessageA(*(data_19e2778 + 0x14), 0x186, wParam_7, 0)
                                HWND esi_16 = *(data_19e2778 + 0x14)
                                WPARAM wParam_8 = zx.d(GetDlgCtrlID(esi_16)) | 0x10000
                                SendMessageA(GetParent(*(data_19e2778 + 0x14)), 0x111, wParam_8, 
                                    esi_16)
                                
                                if (*(lParam_12 + 0x14) == 8)
                                    *(lParam_12 + 8) = &data_8901e0
                                
                                RedrawWindow(*(data_19e2778 + 0x14), nullptr, nullptr, 
                                    RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                                CookieCheckFunction(eax_109)
                                return eax_109
                        
                        CookieCheckFunction(0xffffffff)
                        return 0xffffffff
                    case 0x187
                        LRESULT lParam_11 = SendMessageA(*(ecx + 0x18), 0x199, wParam_12, 0)
                        
                        if (lParam_11 == 0xffffffff || lParam_11 == 0
                                || *(lParam_11 + 0x14) == 0x63)
                            CookieCheckFunction(0xffffffff)
                            return 0xffffffff
                        
                        LRESULT wParam_6 = SendMessageA(*(data_19e2778 + 0x14), 0x18f, 0, lParam_11)
                        
                        if (wParam_6 == 0xffffffff)
                            CookieCheckFunction(0)
                            return 0
                        
                        LRESULT eax_102 = SendMessageA(*(data_19e2778 + 0x14), 0x187, wParam_6, 0)
                        CookieCheckFunction(eax_102)
                        return eax_102
                    case 0x188
                        LRESULT wParam_5 = SendMessageA(*(ecx + 0x14), 0x188, 0, 0)
                        
                        if (wParam_5 != 0xffffffff)
                            LRESULT lParam_10 =
                                SendMessageA(*(data_19e2778 + 0x14), 0x199, wParam_5, 0)
                            
                            if (lParam_10 != 0xffffffff && lParam_10 != 0
                                    && *(lParam_10 + 0x14) != 0x63)
                                LRESULT eax_95 =
                                    SendMessageA(*(data_19e2778 + 0x18), 0x18f, 0, lParam_10)
                                CookieCheckFunction(eax_95)
                                return eax_95
                        
                        CookieCheckFunction(0xffffffff)
                        return 0xffffffff
                    case 0x18b
                        LRESULT eax_93 = SendMessageA(*(ecx + 0x18), 0x18b, 0, 0)
                        CookieCheckFunction(eax_93)
                        return eax_93
                    case 0x193
                        LRESULT eax_96 = SendMessageA(*(ecx + 0x14), 0x193, 0, 0)
                        CookieCheckFunction(eax_96)
                        return eax_96
                    case 0x194
                        SendMessageA(*(ecx + 0x14), 0x194, wParam_12, 0)
                        goto label_751d9a
                    case 0x198
                        LRESULT eax_99 = SendMessageA(*(ecx + 0x14), 0x198, wParam_12, edi)
                        CookieCheckFunction(eax_99)
                        return eax_99
                    case 0x199
                        uint32_t eax_97 = sub_74fd70(wParam_12)
                        CookieCheckFunction(eax_97)
                        return eax_97
                    case 0x19a
                        LRESULT eax_117 = sub_7501b0(wParam_12, edi)
                        CookieCheckFunction(eax_117)
                        return eax_117
                    case 0x1a0
                        if (0x14 u> edi.w)
                            CookieCheckFunction(0xffffffff)
                            return 0xffffffff
                        
                        LRESULT eax_118 = SendMessageA(*(ecx + 0x14), Msg_3, wParam_12, edi)
                        RedrawWindow(*(data_19e2778 + 0x14), nullptr, nullptr, 
                            RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                        CookieCheckFunction(eax_118)
                        return eax_118
                    case 0x1a1
                        LRESULT eax_98 = SendMessageA(*(ecx + 0x14), 0x1a1, wParam_12, 0)
                        CookieCheckFunction(eax_98)
                        return eax_98
                    case 0x200
                        int32_t esi_14 = *(ecx + 0x28)
                        int32_t edx_2 = sx.d((edi u>> 0x10).w)
                        PSTR lpCursorName
                        
                        if (edx_2 s< esi_14 - 5 || edx_2 s> esi_14 + 5)
                            if (*(ecx + 0x40) != 0)
                                HDC hdc_2 = GetDC(arg1)
                                COLORREF color = 0
                                int32_t cWidth = 3
                                enum PEN_STYLE iStyle = PS_COSMETIC
                                var_e8 = hdc_2
                                HGDIOBJ h_2 = SelectObject(hdc_2, CreatePen(iStyle, cWidth, color))
                                void* ecx_41 = data_19e2778
                                int32_t y = *(ecx_41 + 0x48)
                                int32_t x_6 = *(ecx_41 + 0x54)
                                int32_t x_2 = *(ecx_41 + 0x58)
                                int32_t rop2_5 = SetROP2(hdc_2, R2_NOT)
                                HWND hdc_4 = var_e8
                                MoveToEx(hdc_4, x_6, y, nullptr)
                                LineTo(hdc_4, x_2, y)
                                SetROP2(hdc_4, rop2_5)
                                enum R2_MODE rop2_2 = R2_NOT
                                HWND hdc_1 = var_e8
                                *(data_19e2778 + 0x48) = edx_2
                                void* eax_85 = data_19e2778
                                int32_t y_1 = *(eax_85 + 0x48)
                                int32_t x_7 = *(eax_85 + 0x54)
                                int32_t x_3 = *(eax_85 + 0x58)
                                int32_t rop2_6 = SetROP2(hdc_1, rop2_2)
                                HDC esi_15 = var_e8
                                MoveToEx(esi_15, x_7, y_1, nullptr)
                                LineTo(esi_15, x_3, y_1)
                                SetROP2(esi_15, rop2_6)
                                DeleteObject(SelectObject(esi_15, h_2))
                                ReleaseDC(arg1, esi_15)
                                CookieCheckFunction(0)
                                return 0
                            
                            lpCursorName = 0x7f00
                        else
                            lpCursorName = 0x7f85
                        
                        SetCursor(LoadCursorA(nullptr, lpCursorName))
                        CookieCheckFunction(0)
                        return 0
                    case 0x201
                        int32_t ecx_31 = *(ecx + 0x28)
                        int32_t edi_6 = sx.d((edi u>> 0x10).w)
                        
                        if (edi_6 s< ecx_31 - 5 || edi_6 s> ecx_31 + 5)
                            CookieCheckFunction(0)
                            return 0
                        
                        SetCursor(LoadCursorA(nullptr, 0x7f85))
                        GetWindowRect(arg1, &var_40)
                        var_40.top += 0xa
                        var_40.bottom -= 0xa
                        ClipCursor(&var_40)
                        *(data_19e2778 + 0x40) = 1
                        *(data_19e2778 + 0x54) = 0
                        *(data_19e2778 + 0x58) = var_40.right - var_40.left
                        *(data_19e2778 + 0x48) = edi_6
                        HDC eax_67 = GetDC(arg1)
                        HGDIOBJ h = SelectObject(eax_67, CreatePen(PS_COSMETIC, 3, 0))
                        void* ecx_34 = data_19e2778
                        enum R2_MODE rop2 = R2_NOT
                        int32_t x_4 = *(ecx_34 + 0x54)
                        var_e8 = *(ecx_34 + 0x48)
                        int32_t x = *(ecx_34 + 0x58)
                        int32_t rop2_3 = SetROP2(eax_67, rop2)
                        MoveToEx(eax_67, x_4, var_e8, nullptr)
                        LineTo(eax_67, x, var_e8)
                        SetROP2(eax_67, rop2_3)
                        DeleteObject(SelectObject(eax_67, h))
                        ReleaseDC(arg1, eax_67)
                        SetCapture(arg1)
                        CookieCheckFunction(0)
                        return 0
                    case 0x202
                        int32_t edi_10 = sx.d((edi u>> 0x10).w)
                        
                        if (*(ecx + 0x40) == 0)
                            CookieCheckFunction(0)
                            return 0
                        
                        *(ecx + 0x40) = 0
                        
                        if (arg1 == GetCapture())
                            ReleaseCapture()
                        
                        ClipCursor(nullptr)
                        *(data_19e2778 + 0x48) = edi_10
                        HDC eax_73 = GetDC(arg1)
                        HGDIOBJ h_1 = SelectObject(eax_73, CreatePen(PS_COSMETIC, 3, 0))
                        void* ecx_37 = data_19e2778
                        enum R2_MODE rop2_1 = R2_NOT
                        int32_t x_5 = *(ecx_37 + 0x54)
                        var_e8 = *(ecx_37 + 0x48)
                        int32_t x_1 = *(ecx_37 + 0x58)
                        int32_t rop2_4 = SetROP2(eax_73, rop2_1)
                        MoveToEx(eax_73, x_5, var_e8, nullptr)
                        LineTo(eax_73, x_1, var_e8)
                        SetROP2(eax_73, rop2_4)
                        DeleteObject(SelectObject(eax_73, h_1))
                        ReleaseDC(arg1, eax_73)
                        Msg_3 = GetClientRect(arg1, &var_40)
                        *(data_19e2778 + 0x2c) = var_40.bottom - var_40.top - edi_10
                        ecx_7 = arg1
                        var_f4_16 = var_40.bottom - var_40.top
                        eax_24 = var_40.right - var_40.left
                        goto label_750d37
            
            LRESULT eax_144 = DefWindowProcA(arg1, Msg_1, wParam, lParam_7)
            CookieCheckFunction(eax_144)
            return eax_144
        
        if (Msg_3 - 0x402 u> 3)
            goto label_751d9d
        
        switch (Msg_3)
            case 0x402
                if (edi == 0)
                    sub_74f0e0(nullptr)
                    goto label_751d9a
                
                if (edi->unused.b == 0)
                    goto label_751d9d
                
                char i_1
                
                do
                    sub_74f0e0(edi)
                    HWND ecx_86 = edi
                    
                    do
                        i_1 = ecx_86->unused.b
                        ecx_86 = &ecx_86->unused + 1
                    while (i_1 != 0)
                    
                    edi = &edi->unused + 1 + ecx_86 - (&ecx_86->unused + 1)
                while (edi->unused.b != i_1)
                edi = var_e0
                goto label_751d9a
            case 0x403
                if (wParam_12 == 0)
                    DestroyWindow(*(ecx + 0xc))
                    *(data_19e2778 + 0xc) = 0
                    goto label_751d9a
                
                if (*(ecx + 0xc) != 0)
                    goto label_751d9d
                
                HWND eax_124 = *(ecx + 0x14)
                HINSTANCE hInstance_3 = *ecx
                int32_t lpParam_2 = 0
                HMENU hMenu_2 = nullptr
                enum WINDOW_STYLE dwStyle_2
                __builtin_memcpy(&dwStyle_2, 
                    "\x03\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80", 
                    0x14)
                int32_t X_2
                int32_t Y_2
                int32_t nWidth_2
                int32_t nHeight_2
                HWND hWnd_2 = CreateWindowExA(WS_EX_TOPMOST, "tooltips_class32", nullptr, 
                    dwStyle_2, X_2, Y_2, nWidth_2, nHeight_2, eax_124, hMenu_2, hInstance_3, 
                    lpParam_2)
                var_e8 = hWnd_2
                int32_t lParam_8
                int32_t var_68
                RECT rect
                char* const var_48
                
                if (hWnd_2 != 0)
                    SetWindowPos(hWnd_2, 0xffffffff, 0, 0, 0, 0, 0x13)
                    LPARAM lParam_4 = 0
                    HGDIOBJ wParam_9 = GetStockObject(DEFAULT_GUI_FONT)
                    SendMessageA(var_e8, 0x30, wParam_9, lParam_4)
                    GetClientRect(eax_124, &var_40)
                    HWND var_64_1 = eax_124
                    HINSTANCE hInstance_5 = hInstance_3
                    rect.left = var_40.left
                    rect.top = var_40.top
                    rect.right = var_40.right
                    rect.bottom = var_40.bottom
                    int32_t* lParam_5 = &lParam_8
                    WPARAM wParam_1 = 0
                    uint32_t Msg_2 = 0x404
                    HWND hWnd = var_e8
                    lParam_8 = 0x2c
                    var_68 = 0x10
                    int32_t var_60_1 = 0
                    var_48 = &data_801800
                    SendMessageA(hWnd, Msg_2, wParam_1, lParam_5)
                else
                    var_e8 = hWnd_2
                
                *(data_19e2778 + 0xc) = var_e8
                void* eax_132 = data_19e2778
                
                if (*(eax_132 + 0xc) != 0)
                    lParam_8 = 0x2c
                    var_68.o = zx.o(0)
                    rect.top = 0
                    rect.right = 0
                    rect.bottom = 0
                    var_48.q = 0
                    int32_t var_64_2 = *(eax_132 + 0x14)
                    int32_t var_60_2 = 0
                    GetClientRect(arg1, &rect)
                    SendMessageA(*(data_19e2778 + 0xc), 0x406, 0, &lParam_8)
                    ShowWindow(*(data_19e2778 + 0xc), SW_SHOW)
                
                goto label_751d9a
            case 0x404
                if (wParam_12 == 0)
                    DestroyWindow(*(ecx + 0x10))
                    *(data_19e2778 + 0x10) = 0
                else
                    if (*(ecx + 0x10) == 0)
                        int32_t lpParam_3 = 0
                        HINSTANCE hInstance_1 = *ecx
                        HMENU hMenu_3 = 0x7d2
                        enum WINDOW_STYLE dwStyle_3
                        __builtin_memcpy(&dwStyle_3, 
                            "\x00\x00\x00\x40\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x00\x80\x00\x00\x"
                        "00\x80", 
                            0x14)
                        int32_t X_3
                        int32_t Y_3
                        int32_t nWidth_3
                        int32_t nHeight_3
                        HWND eax_137 = CreateWindowExA(WS_EX_CLIENTEDGE, "Static", nullptr, 
                            dwStyle_3, X_3, Y_3, nWidth_3, nHeight_3, arg1, hMenu_3, hInstance_1, 
                            lpParam_3)
                        var_e8 = eax_137
                        
                        if (eax_137 != 0)
                            LPARAM lParam_6 = 0
                            HGDIOBJ wParam_10 = GetStockObject(DEFAULT_GUI_FONT)
                            SendMessageA(var_e8, 0x30, wParam_10, lParam_6)
                        else
                            var_e8 = eax_137
                        
                        *(data_19e2778 + 0x10) = var_e8
                        ecx = data_19e2778
                    
                    ShowWindow(*(ecx + 0x10), SW_SHOW)
                
                int32_t edx_6 = GetClientRect(arg1, &var_40)
                int32_t eax_143 = var_40.right - var_40.left
                sub_74ef10(eax_143, edx_6, arg1, eax_143, var_40.bottom - var_40.top)
                goto label_751d9a
            case 0x405
                int32_t eax_121 = GetWindowLongA(*(ecx + 0x14), 0xffffffeb)
                int32_t dwNewLong = eax_121 | 1
                
                if (wParam_12 == 0)
                    dwNewLong = eax_121 & 0xfffffffe
                
                int32_t eax_123 = SetWindowLongA(*(data_19e2778 + 0x14), 0xffffffeb, dwNewLong)
                CookieCheckFunction(eax_123)
                return eax_123
    else
        if (Msg_3 == 0x111)
            if (*(ecx + 0x14) == edi)
                uint32_t esi_2 = wParam_12 u>> 0x10
                
                if (esi_2 == 1)
                    SetFocus(edi)
                    LRESULT eax_40 = SendMessageA(edi, 0x188, esi_2 - 1, esi_2 - 1)
                    void* ecx_22 = data_19e2778
                    LPARAM lParam_2 = 0
                    var_e8 = eax_40
                    LRESULT eax_41 = SendMessageA(edi, 0x199, *(ecx_22 + 0x30), lParam_2)
                    
                    if (eax_41 != 0xffffffff && eax_41 != 0 && *(eax_41 + 0x14) == 8
                            && var_e8 != *(data_19e2778 + 0x30)
                            && _mbsicmp(*(eax_41 + 8), &data_8901e0) == 0)
                        *(eax_41 + 8) = &data_88ff00
                    
                    HWND wParam_11 = var_e8
                    LRESULT eax_44 = SendMessageA(edi, 0x199, wParam_11, 0)
                    
                    if (eax_44 == 0xffffffff)
                        eax_44 = 0
                    
                    *(data_19e2778 + 4) = eax_44
                    void* eax_45 = data_19e2778
                    void* edx_1 = *(eax_45 + 4)
                    
                    if (edx_1 != 0)
                        HWND hWnd_6 = *(eax_45 + 0x10)
                        
                        if (hWnd_6 != 0)
                            SetWindowTextA(hWnd_6, *(edx_1 + 0xc))
                            eax_45 = data_19e2778
                        
                        HWND hWnd_7 = *(eax_45 + 0x1c)
                        
                        if (hWnd_7 != 0)
                            DestroyWindow(hWnd_7)
                            *(data_19e2778 + 0x1c) = 0
                            eax_45 = data_19e2778
                        
                        HWND hWnd_8 = *(eax_45 + 0x20)
                        
                        if (hWnd_8 != 0)
                            DestroyWindow(hWnd_8)
                            *(data_19e2778 + 0x20) = 0
                            eax_45 = data_19e2778
                        
                        WPARAM wParam_3 = *(eax_45 + 0x30)
                        
                        if (wParam_11 != wParam_3)
                            LPARAM lParam_3 = &var_40
                            uint32_t Msg = 0x198
                            __builtin_memset(&var_40, 0, 0x10)
                            SendMessageA(edi, Msg, wParam_3, lParam_3)
                            RedrawWindow(edi, &var_40, nullptr, 
                                RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                            SendMessageA(edi, 0x198, var_e8, &var_40)
                            RedrawWindow(edi, &var_40, nullptr, 
                                RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                            *(data_19e2778 + 0x30) = var_e8
                            CookieCheckFunction(0)
                            return 0
            
            CookieCheckFunction(0)
            return 0
        
        if (Msg_3 - 0x20 u> 0xd)
            goto label_751d9d
        
        switch (Msg_3 + &jump_table_751dc0[4])
            case &lookup_table_751df0
                void* eax_38 = *(ecx + 4)
                
                if (eax_38 == 0 || *(ecx + 0x40) == 0)
                    CookieCheckFunction(0)
                    return 0
                
                if (*(eax_38 + 0x14) == 8)
                    *(eax_38 + 8) = &data_8901e0
                    ecx = data_19e2778
                
                LPARAM lParam_1 = 0
                *(ecx + 0x40) = 0
                SendMessageA(*(data_19e2778 + 0x14), 0x100, 9, lParam_1)
                CookieCheckFunction(0)
                return 0
            case &lookup_table_751df0[1], &lookup_table_751df0[2], &lookup_table_751df0[3], 
                    &lookup_table_751df0[4], &lookup_table_751df0[5], &lookup_table_751df0[6], 
                    &lookup_table_751df0[7], &lookup_table_751df0[8], &lookup_table_751df0[9], 
                    &lookup_table_751df0[0xa]
                goto label_751d9d
            case &lookup_table_751df0[0xb]
                sub_74f190(ecx, edi)
                CookieCheckFunction(0)
                return 0
            case &lookup_table_751df0[0xc]
                MulDiv(0x14, GetDeviceCaps(GetDC(arg1), 0x5a), 0x60)
                CookieCheckFunction(0)
                return 0
            case &lookup_table_751df0[0xd]
                if (*(ecx + 0x18) == edi)
                    var_e8 = edi
                    free(edi->unused)
                    free(var_e8)
                    HWND eax_34 = var_e8
                    
                    if (eax_34 != 8)
                        free(eax_34)
                        free(var_e8)
                        eax_34 = var_e8
                    
                    free(eax_34)
                    free(var_e8)
                    ecx = data_19e2778
                
                if (*(ecx + 0x14) == edi)
                    int32_t* edi_2 = edi
                    
                    if (edi_2[5] == 0x63)
                        free(*edi_2)
                        free(edi_2[1])
                        
                        if (edi_2[5] != 8)
                            free(edi_2[4])
                            free(edi_2[2])
                        
                        free(edi_2[3])
                        free(edi_2)
                        CookieCheckFunction(0)
                        return 0
                
                CookieCheckFunction(0)
                return 0
