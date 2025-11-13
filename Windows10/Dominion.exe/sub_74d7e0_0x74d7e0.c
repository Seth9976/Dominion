// 函数: sub_74d7e0
// 地址: 0x74d7e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* edx = data_19e2778
HWND hWnd_2 = arg3
HWND hWnd = hWnd_2
uint32_t result

if (*(edx + 0x40) == 0)
    int32_t ecx_1 = *(edx + 0x24)
    result = ecx_1 - 5
    
    if (arg2 s>= result)
        result = ecx_1 + 5
        
        if (arg2 s<= result)
            result = SetCursor(LoadCursorA(nullptr, 0x7f84))
            edx = data_19e2778
else
    HDC eax_2 = GetDC(hWnd_2)
    void* ecx = data_19e2778
    int32_t x = *(ecx + 0x44)
    int32_t y = *(ecx + 0x50)
    int32_t y_2 = *(ecx + 0x4c)
    int32_t rop2 = SetROP2(eax_2, R2_NOT)
    MoveToEx(eax_2, x, y_2, nullptr)
    LineTo(eax_2, x, y)
    SetROP2(eax_2, rop2)
    void* eax_3 = data_19e2778
    int32_t y_1 = *(eax_3 + 0x50)
    int32_t y_3 = *(eax_3 + 0x4c)
    int32_t rop2_1 = SetROP2(eax_2, R2_NOT)
    MoveToEx(eax_2, arg2, y_3, nullptr)
    LineTo(eax_2, arg2, y_1)
    SetROP2(eax_2, rop2_1)
    hWnd_2 = hWnd
    ReleaseDC(hWnd_2, eax_2)
    result = data_19e2778
    *(result + 0x44) = arg2
    edx = data_19e2778

HWND hWnd_1 = *(edx + 0xc)

if (hWnd_1 != 0)
    void var_5c
    memset(&var_5c, 0, 0x50)
    int32_t lParam = 0x2c
    uint8_t _Str1[0x50]
    uint8_t (* var_f4_1)[0x50] = &_Str1
    SendMessageA(hWnd_1, 0x40e, 0, &lParam)
    void* ecx_2 = data_19e2778
    LRESULT eax_6
    
    if (arg2 s>= *(ecx_2 + 0x24) + 5 && *(ecx_2 + 0x40) == 0)
        int32_t edx_2
        eax_6, edx_2 = SendMessageA(hWnd_2, 0x199, 
            zx.d(SendMessageA(hWnd_2, 0x1a9, 0, zx.d(arg4) << 0x10 | zx.d(arg2.w))), 0)
        
        if (eax_6 != 0xffffffff && eax_6 != 0)
            int32_t ecx_6 = *(eax_6 + 0x14)
            
            if (ecx_6 == 5)
                void var_b0
                void* var_138_10 = &var_b0
                void var_d0
                void* var_13c_12 = &var_d0
                void var_d1
                void* var_140_7 = &var_d1
                void var_d2
                void* var_144_6 = &var_d2
                void var_d3
                void* var_148_1 = &var_d3
                void var_d4
                void* var_14c_1 = &var_d4
                void var_d5
                void* var_150_1 = &var_d5
                void var_d6
                void* var_154_1 = &var_d6
                void var_d7
                void* var_158_1 = &var_d7
                void var_d8
                void* var_15c_1 = &var_d8
                void var_dc
                void* var_160_1 = &var_dc
                void var_e0
                void* var_164_1 = &var_e0
                void var_e4
                void* var_168_1 = &var_e4
                void var_e8
                void* var_16c_1 = &var_e8
                int32_t nNumber
                int32_t* var_170_1 = &nNumber
                sub_64b6d0(eax_6, edx_2, &nNumber, *(eax_6 + 0x10), 
                    "Height: %d Width: %d Escapement: %d Orientation:  %d Weight: %d Italic: %hhd "
                "Underline: %hhd StrikeOut: %hhd CharSet: %hhd OutPrecision: %hhd ClipPrecision: "
                " Quality: %hhd PitchAndFamily: %hhd FaceName: %32[^\r\n] Color: %d")
                HDC eax_10 = GetDC(hWnd_2)
                int32_t nDenominator = GetDeviceCaps(eax_10, 0x5a)
                int32_t esi_4 = neg.d(MulDiv(nNumber, 0x48, nDenominator))
                ReleaseDC(hWnd, eax_10)
                int32_t var_138_14 = esi_4
                void* var_13c_15 = &var_d0
                sub_74afa0(&var_5c, 0x50, "%s %d")
            else if (ecx_6 != 8)
                _mbsnbcpy(&var_5c, *(eax_6 + 0x10), 0x4f)
    
    char* ecx_8 = &var_5c
    
    do
        eax_6.b = *ecx_8
        ecx_8 = &ecx_8[1]
    while (eax_6.b != 0)
    
    void var_5b
    result = _mbsnbcmp(&_Str1, &var_5c, ecx_8 - &var_5b)
    
    if (result != 0)
        memset(&_Str1, 0, 0x4f)
        _mbsnbcpy(&_Str1, &var_5c, 0x4f)
        result = SendMessageA(*(data_19e2778 + 0xc), 0x40c, 0, &lParam)

CookieCheckFunction(result)
return result
