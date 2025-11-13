// 函数: sub_6f0d00
// 地址: 0x6f0d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771e2d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ac = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_6ee800()
int32_t* result_1 = result

if (result != 0)
    int32_t var_8c
    GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_8c)
    ScreenToClient(data_147d470, &var_8c)
    POINT point_1
    ScreenToClient(data_147d470, &point_1)
    SelectObject(arg1, GetStockObject(BLACK_PEN))
    SelectObject(arg1, GetStockObject(DC_BRUSH))
    SetDCBrushColor(arg1, 0xdcdcdc)
    int32_t top
    Rectangle(arg1, var_8c, top, point_1.x, point_1.y)
    int32_t var_9c
    GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_9c)
    ScreenToClient(data_147d470, &var_9c)
    POINT point
    ScreenToClient(data_147d470, &point)
    int32_t eax_8 = var_9c + 0x16
    float xmm0_2 = data_147d480 f- data_147d484
    int32_t bottom = point.y - 0x14
    int32_t eax_10 = point.x - 8
    int32_t var_98
    int32_t edi_2 = bottom - (var_98 + 0xa)
    SelectObject(arg1, GetStockObject(DC_PEN))
    SelectObject(arg1, GetStockObject(DC_BRUSH))
    SetDCBrushColor(arg1, 0xf0f0f0)
    SetDCPenColor(arg1, 0xc0c0c0)
    HDC hdc = arg1
    Rectangle(hdc, eax_8, var_98 + 0xa, eax_10, bottom)
    SetBkMode(hdc, 1)
    SelectObject(hdc, GetStockObject(ANSI_VAR_FONT))
    int32_t x = var_8c + 4
    int32_t ebx_2 = (edi_2 - 1) * 5
    int32_t i = 0
    int32_t i_2 = 0
    int32_t var_4c_1 = ebx_2
    char* const lpString_1
    
    do
        sub_6ef1a0(&lpString_1, _mm_cvtepi32_ps(zx.o(i)) * xmm0_2 / 5f f+ data_147d484)
        int32_t var_8_1 = 0
        char* const lpString = lpString_1
        int32_t y_7 = ebx_2 s/ 5 + var_98 + 0xa
        int32_t c
        
        if (lpString == 0)
            lpString = &data_801800
            c = 0
        else if (*lpString == 0)
            c = 0
        else
            c = *(sub_63d4e0(&lpString_1) + 8)
        
        TextOutA(hdc, x, y_7 - 6, lpString, c)
        MoveToEx(hdc, eax_8, y_7, nullptr)
        LineTo(hdc, eax_10, y_7)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* lpString_2 = lpString_1
            
            if (lpString_2 != 0 && *lpString_2 != 0)
                char* eax_18 = sub_63d4e0(&lpString_1)
                int32_t temp0_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                    lpString_1 = &data_801800
        
        i = i_2 + 1
        ebx_2 = var_4c_1 + 1 - edi_2
        int32_t var_8_3 = 0xffffffff
        i_2 = i
        var_4c_1 = ebx_2
    while (i s< 6)
    
    SetDCPenColor(hdc, 0)
    SetDCBrushColor(hdc, "-c expansion:%d, %s")
    int32_t* result_2 = result_1
    int32_t edx_5 = 0
    int32_t var_48_2 = 0
    result = result_2[2]
    
    if (result s>= 0)
        do
            int32_t esi_2 = 0xa
            int32_t var_58_2 = 0xa
            int32_t var_5c_2
            int32_t ecx_7
            
            if (edx_5 == 0 || edx_5 == result)
                ecx_7 = edx_5 << 4
            label_6f1027:
                esi_2 = 2
                var_5c_2 = ecx_7
                var_58_2 = 2
            else
                ecx_7 = edx_5 << 4
                var_5c_2 = ecx_7
                int32_t eax_20 = *(*result_2 + ecx_7 + 0xc)
                
                if (eax_20 == 1 || eax_20 == 0)
                    goto label_6f1027
            
            int32_t edi_6 = 1
            float y_2 = _mm_cvtepi32_ps(zx.o(esi_2 - 1))
            int32_t var_78_2 = 1
            point_1.y = y_2
            
            do
                int32_t* eax_23 = *result_2
                float lpString_4
                float var_4c_2
                int32_t esi_3
                float lpString_3
                float xmm3_1
                float xmm4_1
                int32_t xmm5_1
                float xmm6_1
                
                if (edx_5 != 0)
                    lpString_3 = *(ecx_7 + eax_23 - 0xc)
                    xmm3_1 = *(ecx_7 + eax_23 - 0x10)
                    xmm5_1 = *(ecx_7 + eax_23 - 8)
                    lpString_4 = lpString_3
                    
                    if (edx_5 != result_2[2])
                        xmm6_1 = *(ecx_7 + eax_23)
                        lpString_3 = *(ecx_7 + eax_23 + 4)
                        xmm4_1 = *(ecx_7 + eax_23 + 8)
                        esi_3 = *(ecx_7 + eax_23 + 0xc)
                        var_4c_2 = xmm6_1
                    else
                        xmm4_1 = 1f
                        xmm6_1 = xmm3_1
                        var_4c_2 = xmm3_1
                        esi_3 = 1
                else
                    xmm3_1 = *(eax_23 + ecx_7)
                    esi_3 = edx_5 + 1
                    lpString_3 = *(eax_23 + ecx_7 + 4)
                    xmm6_1 = xmm3_1
                    xmm4_1 = *(eax_23 + ecx_7 + 8)
                    xmm5_1 = (zx.o(0)).d
                    lpString_4 = lpString_3
                    var_4c_2 = xmm6_1
                
                lpString_1 = lpString_3
                float xmm4_2 = xmm4_1 f- xmm5_1
                float xmm0_5 = _mm_cvtepi32_ps(zx.o(edi_6 - 1)) / y_2
                float xmm1_8 = _mm_cvtepi32_ps(zx.o(edi_6)) / y_2
                float xmm2_4 = xmm0_5 * xmm4_2 f+ xmm5_1
                float xmm1_10 = xmm1_8 * xmm4_2 f+ xmm5_1
                float xmm0_6 = sub_4ae110(esi_3, xmm0_5, xmm3_1, xmm6_1)
                float xmm0_8 = sub_4ae110(esi_3, xmm0_5, lpString_4, lpString_1)
                float xmm0_10 = sub_4ae110(esi_3, xmm1_8, xmm3_1, var_4c_2)
                float xmm0_12 = sub_4ae110(esi_3, xmm1_8, lpString_4, lpString_1)
                int32_t x_1
                int32_t y_3
                x_1, y_3 = sub_6eeb10(xmm2_4, xmm0_6)
                int32_t x_2
                int32_t y_4
                x_2, y_4 = sub_6eeb10(xmm2_4, xmm0_8)
                int32_t x_3
                int32_t y_5
                x_3, y_5 = sub_6eeb10(xmm1_10, xmm0_10)
                int32_t x_4
                int32_t y_6
                x_4, y_6 = sub_6eeb10(xmm1_10, xmm0_12)
                MoveToEx(arg1, x_1, y_3, nullptr)
                hdc = arg1
                LineTo(hdc, x_3, y_5)
                MoveToEx(hdc, x_2, y_4, nullptr)
                LineTo(hdc, x_4, y_6)
                y_2 = point_1.y
                edi_6 = var_78_2 + 1
                ecx_7 = var_5c_2
                edx_5 = var_48_2
                result_2 = result_1
                var_78_2 = edi_6
            while (edi_6 s< var_58_2)
            
            result = result_2[2]
            edx_5 += 1
            var_48_2 = edx_5
        while (edx_5 s<= result)
    
    int32_t i_1 = 0
    int32_t i_3 = 0
    
    if (result s> 0)
        do
            edx_5.b = 1
            int32_t y_10
            int32_t edx_6
            y_10, edx_6 = sub_6eebe0(i_1, edx_5.b)
            point_1.y = edx_6
            int32_t y_8
            int32_t y
            COLORREF color
            
            if (data_147d478 != i_3 || data_147d47c == 0)
                point_1.y = y_10
                
                if (data_147d474 != i_3)
                    color = "-c expansion:%d, %s"
                    goto label_6f1286
                
                SetDCBrushColor(hdc, 0xc8)
                y_8 = y_10
                y = point_1.y
            else
                color = 0x6464ff
            label_6f1286:
                SetDCBrushColor(hdc, color)
                y_8 = y_10
                y = y_8
            int32_t y_9 = y_8
            POINT apt
            apt.x = y_8 - 4
            apt.y = edx_6 - 4
            int32_t var_30_1 = edx_6 - 8
            int32_t var_2c_1 = y_8 + 4
            int32_t var_28_1 = edx_6 - 4
            int32_t var_24_1 = y_8 + 4
            int32_t var_20_1 = edx_6 + 4
            int32_t var_1c_1 = y - 4
            int32_t var_18_1 = edx_6 + 4
            Polygon(hdc, &apt, 5)
            int32_t eax_34
            int32_t edx_8
            eax_34, edx_8 = sub_6eebe0(i_3, 0)
            point_1.y = edx_8
            COLORREF color_1
            
            if (data_147d478 == i_3 && data_147d47c == 0)
                color_1 = 0x6464ff
            else if (data_147d474 != i_3)
                color_1 = "-c expansion:%d, %s"
            else
                color_1 = 0xc8
            
            SetDCBrushColor(hdc, color_1)
            int32_t y_1 = point_1.y
            result, edx_5 = Rectangle(hdc, eax_34 - 4, y_1 - 4, eax_34 + 5, y_1 + 5)
            i_1 = i_3 + 1
            i_3 = i_1
        while (i_1 s< result_2[2])

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
