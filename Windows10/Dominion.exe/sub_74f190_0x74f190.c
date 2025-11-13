// 函数: sub_74f190
// 地址: 0x74f190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
LRESULT result = data_19e2778
HWND hWnd = *(arg2 + 0x14)
WPARAM wParam = *(arg2 + 8)

if (hWnd == *(result + 0x14) && wParam != 0xffffffff && (*(arg2 + 0xc) & 1) != 0)
    result = SendMessageA(hWnd, 0x199, wParam, 0)
    LRESULT result_1 = result
    LRESULT result_2 = result_1
    
    if (result_1 != 0xffffffff && result_1 != 0)
        void* esi_1 = data_19e2778
        uint128_t lprc_7 = *(arg2 + 0x1c)
        RECT lprc_4
        lprc_4.left = lprc_7.d
        lprc_4.top = lprc_7:4.d
        lprc_4.right = lprc_7:8.d
        lprc_4.bottom = lprc_7:0xc.d
        int32_t left = lprc_4.left
        
        if (*(esi_1 + 0x24) == 0)
            int32_t eax_4
            int32_t edx
            edx:eax_4 = sx.q(_mm_bsrli_si128(lprc_7, 8) - left)
            *(esi_1 + 0x24) = (eax_4 - edx) s>> 1
            esi_1 = data_19e2778
        
        RECT lprc_5
        lprc_5.left = lprc_7.d
        lprc_5.top = lprc_7:4.d
        lprc_5.right = lprc_7:8.d
        lprc_5.bottom = lprc_7:0xc.d
        lprc_5.left = left + 0x10
        RECT xmm0_3
        xmm0_3.left = lprc_5.left
        xmm0_3.top = lprc_5.top
        xmm0_3.right = lprc_5.right
        xmm0_3.bottom = lprc_5.bottom
        RECT lprc
        lprc.left = lprc_7.d
        lprc.top = lprc_7:4.d
        lprc.right = lprc_7:8.d
        lprc.bottom = lprc_7:0xc.d
        lprc.right = left + 0x10
        RECT lprc_3
        lprc_3.left = xmm0_3.left
        lprc_3.top = xmm0_3.top
        lprc_3.right = xmm0_3.right
        lprc_3.bottom = xmm0_3.bottom
        lprc_3.right = *(esi_1 + 0x24)
        uint128_t lprc_2 = lprc_7
        int32_t ecx
        ecx.b = *(result_1 + 0x14) != 0x63
        int32_t eax_10 = *(esi_1 + 0x24) + ecx
        lprc_2.d = eax_10
        int32_t ecx_1 = *(result_1 + 0x14)
        
        if (ecx_1 == 4 || ecx_1 == 8)
            eax_10 += 0x14
        
        HDC hDC = *(arg2 + 0x18)
        uint128_t lprc_1 = lprc_7
        lprc_2:8.d = eax_10
        lprc_1.d = eax_10
        FillRect(hDC, &lprc, GetStockObject(HOLLOW_BRUSH))
        HGDIOBJ ho
        void lptm
        RECT var_124
        LOGFONTA var_200
        
        if (*(result_1 + 0x14) != 0x63)
        label_74f560:
            SetBkMode(*(arg2 + 0x18), 1)
            void* nIndex
            
            if (wParam != SendMessageA(*(arg2 + 0x14), 0x188, 0, 0))
                nIndex = 5
            else
                int32_t ecx_5
                ecx_5.b = *(data_19e2778 + 0x38) == 0
                nIndex = (ecx_5 << 1) + 0xd
            
            FillRect(*(arg2 + 0x18), &lprc_3, GetSysColorBrush(nIndex))
            lprc_4.left = lprc_3.left + 3
            lprc_4.top = lprc_3.top + 3
            lprc_4.right = lprc_3.right - 3
            lprc_4.bottom = lprc_3.bottom + 3
            GetObjectA(SendMessageA(*(arg2 + 0x14), 0x31, 0, 0), 0x3c, &var_200)
            lptm:0xc.d = 0x190
            HFONT h_1 = CreateFontIndirectA(&var_200)
            ho = SelectObject(*(arg2 + 0x18), h_1)
            void* nIndex_1
            
            if (wParam != SendMessageA(*(arg2 + 0x14), 0x188, 0, 0))
                nIndex_1 = 8
            else
                int32_t ecx_6
                ecx_6.b = *(data_19e2778 + 0x38) == 0
                nIndex_1 = (ecx_6 << 2) + 0xe
            
            SetTextColor(*(arg2 + 0x18), GetSysColor(nIndex_1))
            uint8_t* lpchText_2 = *(result_1 + 4)
            char* lpchText_5 = lpchText_2
            char i
            
            do
                i = *lpchText_5
                lpchText_5 = &lpchText_5[1]
            while (i != 0)
            DrawTextA(*(arg2 + 0x18), lpchText_2, lpchText_5 - &lpchText_5[1], &lprc_4, 
                DT_NOCLIP | DT_SINGLELINE)
            HDC esi_11 = *(arg2 + 0x18)
            uint32_t eax_51 = GetSysColor(COLOR_BTNFACE)
            sub_74b280(eax_51, &lprc_3, esi_11, 6, eax_51)
        else
            var_124.left = lprc.left + 4
            var_124.top = lprc.top + 4
            var_124.right = lprc.left + 0xd
            var_124.bottom = lprc.top + 0xd
            FillRect(*(arg2 + 0x18), &var_124, GetSysColorBrush(COLOR_WINDOW))
            FrameRect(*(arg2 + 0x18), &var_124, GetStockObject(BLACK_BRUSH))
            int32_t left_1 = var_124.left
            int32_t top = var_124.top
            double xmm1_4 =
                _mm_cvtepi32_pd(zx.q(var_124.right - left_1)) * 0.5 + _mm_cvtepi32_pd(zx.q(left_1))
            double xmm0_7 = _mm_cvtepi32_pd(zx.q(top))
            int32_t x = int.d(xmm1_4)
            int32_t y = int.d(_mm_cvtepi32_pd(zx.q(var_124.bottom - top)) * 0.5 + xmm0_7)
            InflateRect(&var_124, 0xfffffffe, 0xfffffffe)
            int32_t right = var_124.right
            HDC hdc = *(arg2 + 0x18)
            MoveToEx(hdc, var_124.left, y, nullptr)
            LineTo(hdc, right, y)
            result_1 = result_2
            
            if (*(result_1 + 0x18) != 0)
                HDC hdc_1 = *(arg2 + 0x18)
                int32_t bottom = var_124.bottom
                MoveToEx(hdc_1, x, var_124.top, nullptr)
                LineTo(hdc_1, x, bottom)
                result_1 = result_2
            
            if (*(result_1 + 0x14) != 0x63)
                goto label_74f560
            
            FillRect(*(arg2 + 0x18), &lprc_5, GetStockObject(HOLLOW_BRUSH))
            
            if (wParam == SendMessageA(*(arg2 + 0x14), 0x188, 0, 0) && *(data_19e2778 + 0x38) != 0)
                InflateRect(&lprc_5, 0xfffffffe, 0xfffffffe)
                FrameRect(*(arg2 + 0x18), &lprc_5, GetSysColorBrush(COLOR_BTNSHADOW))
                InflateRect(&lprc_5, 2, 2)
            
            var_124.left = lprc_5.left + 6
            var_124.top = lprc_5.top + 3
            var_124.right = lprc_5.right - 6
            var_124.bottom = lprc_5.bottom + 3
            GetObjectA(SendMessageA(*(arg2 + 0x14), 0x31, 0, 0), 0x3c, &var_200)
            lptm:0xc.d = 0x2bc
            HFONT h = CreateFontIndirectA(&var_200)
            ho = SelectObject(*(arg2 + 0x18), h)
            SetTextColor(*(arg2 + 0x18), GetSysColor(COLOR_BTNTEXT))
            uint8_t* lpchText_1 = *result_1
            char* lpchText_4 = lpchText_1
            char i_1
            
            do
                i_1 = *lpchText_4
                lpchText_4 = &lpchText_4[1]
            while (i_1 != 0)
            DrawTextA(*(arg2 + 0x18), lpchText_1, lpchText_4 - &lpchText_4[1], &var_124, 
                DT_NOCLIP | DT_SINGLELINE)
        DeleteObject(ho)
        
        if (*(result_1 + 0x14) != 0x63)
            FillRect(*(arg2 + 0x18), &lprc_2, GetSysColorBrush(COLOR_WINDOW))
            uint128_t lprc_6 = lprc_2
            var_124.left = lprc_6.d
            var_124.top = lprc_6:4.d
            var_124.right = lprc_6:8.d
            var_124.bottom = lprc_6:0xc.d
            var_124.top += 3
            var_124.bottom = var_124.top + 0x12
            var_124.left = lprc_6 + 2
            var_124.right = lprc_6 + 0x11
            int32_t eax_57 = *(result_1 + 0x14)
            
            if (eax_57 == 4)
                uint32_t color_1 = sub_74b3b0(*(result_1 + 0x10))
                HDC hDC_1 = *(arg2 + 0x18)
                HBRUSH eax_58 = CreateSolidBrush(color_1)
                FillRect(hDC_1, &var_124, eax_58)
                DeleteObject(eax_58)
                FrameRect(*(arg2 + 0x18), &var_124, GetStockObject(BLACK_BRUSH))
                result_1 = result_2
            else if (eax_57 == 8)
                if (_mbsicmp(*(result_1 + 8), &data_8901e0) == 0)
                    FillRect(*(arg2 + 0x18), &lprc_2, GetSysColorBrush(COLOR_HIGHLIGHT))
                
                enum DFCS_STATE param3 = DFCS_CAPTIONCLOSE
                
                if (_mbsicmp(*(result_1 + 0x10), &data_8901e0) == 0)
                    param3 = DFCS_CHECKED
                
                DrawFrameControl(*(arg2 + 0x18), &var_124, DFC_BUTTON, param3)
                
                if ((GetWindowLongA(*(arg2 + 0x14), 0xffffffeb) & 1) != 0)
                    FrameRect(*(arg2 + 0x18), &var_124, GetSysColorBrush(COLOR_BTNFACE))
                    InflateRect(&var_124, 0xffffffff, 0xffffffff)
                    FrameRect(*(arg2 + 0x18), &var_124, GetSysColorBrush(COLOR_WINDOW))
        
        HDC esi_18 = *(arg2 + 0x18)
        uint32_t eax_66 = GetSysColor(COLOR_BTNFACE)
        sub_74b280(eax_66, &lprc_2, esi_18, 2, eax_66)
        
        if (*(result_1 + 0x14) != 0x63)
            FillRect(*(arg2 + 0x18), &lprc_1, GetSysColorBrush(COLOR_WINDOW))
        
        if (*(result_1 + 0x14) != 8)
            SetBkMode(*(arg2 + 0x18), 1)
            
            if (*(result_1 + 0x14) != 5)
                SetTextColor(*(arg2 + 0x18), GetSysColor(COLOR_WINDOWTEXT))
                uint8_t* lpchText_3 = *(result_1 + 0x10)
                char* lpchText_6 = lpchText_3
                int32_t xmm1_12[0x4] = _mm_add_epi32(data_891420, lprc_1)
                lprc_4.left = xmm1_12[0]
                lprc_4.top = xmm1_12[1]
                lprc_4.right = xmm1_12[2]
                lprc_4.bottom = xmm1_12[3]
                char i_2
                
                do
                    i_2 = *lpchText_6
                    lpchText_6 = &lpchText_6[1]
                while (i_2 != 0)
                DrawTextA(*(arg2 + 0x18), lpchText_3, lpchText_6 - &lpchText_6[1], &lprc_4, 
                    DT_NOCLIP | DT_SINGLELINE)
            else
                void lpchText
                va_list ecx_13
                int32_t edx_5
                ecx_13, edx_5 = memset(&lpchText, 0, 0x104)
                COLORREF color
                int32_t* var_220_32 = &color
                var_1a8
                void* var_224_30 = &var_1a8
                var_1a9
                void* var_228_28 = &var_1a9
                var_1aa
                void* var_22c_12 = &var_1aa
                var_1ab
                void* var_230_3 = &var_1ab
                var_1ac
                void* var_234_1 = &var_1ac
                var_1ad
                void* var_238_1 = &var_1ad
                var_1ae
                void* var_23c_1 = &var_1ae
                var_1af
                void* var_240_1 = &var_1af
                var_1b0
                void* var_244_1 = &var_1b0
                var_1b4
                void* var_248_1 = &var_1b4
                var_1b8
                void* var_24c_1 = &var_1b8
                var_1bc
                void* var_250_1 = &var_1bc
                var_1c0
                void* var_254_1 = &var_1c0
                LOGFONTA lplf
                LOGFONTA* var_258_1 = &lplf
                sub_64b6d0(&lplf, edx_5, ecx_13, *(result_1 + 0x10), 
                    "Height: %d Width: %d Escapement: %d Orientation:  %d Weight: %d Italic: %hhd "
                "Underline: %hhd StrikeOut: %hhd CharSet: %hhd OutPrecision: %hhd ClipPrecision: "
                " Quality: %hhd PitchAndFamily: %hhd FaceName: %32[^\r\n] Color: %d")
                int32_t nDenominator = GetDeviceCaps(*(arg2 + 0x18), 0x5a)
                int32_t esi_21 = neg.d(MulDiv(lplf.lfHeight, 0x48, nDenominator))
                
                if (esi_21 s> 0)
                    if (GetTextMetricsA(*(arg2 + 0x18), &lptm) != 0)
                        lplf.lfHeight = lptm.d + 2
                    
                    HFONT h_2 = CreateFontIndirectA(&lplf)
                    HGDIOBJ h_3 = SelectObject(*(arg2 + 0x18), h_2)
                    SetTextColor(*(arg2 + 0x18), color)
                    int32_t var_220_38 = esi_21
                    void* var_224_35 = &var_1a8
                    sub_74afa0(&lpchText, 0x104, "%s %d")
                    void* ecx_14 = &lpchText
                    int32_t xmm1_10[0x4] = _mm_add_epi32(data_891420, lprc_1)
                    lprc_4.left = xmm1_10[0]
                    lprc_4.top = xmm1_10[1]
                    lprc_4.right = xmm1_10[2]
                    lprc_4.bottom = xmm1_10[3]
                    char i_3
                    
                    do
                        i_3 = *ecx_14
                        ecx_14 += 1
                    while (i_3 != 0)
                    void var_113
                    DrawTextA(*(arg2 + 0x18), &lpchText, ecx_14 - &var_113, &lprc_4, 
                        DT_NOCLIP | DT_SINGLELINE)
                    DeleteObject(SelectObject(*(arg2 + 0x18), h_3))
        
        HDC esi_24 = *(arg2 + 0x18)
        uint32_t eax_75 = GetSysColor(COLOR_BTNFACE)
        result = sub_74b280(eax_75, &lprc_1, esi_24, 2, eax_75)

CookieCheckFunction(result)
return result
