// 函数: sub_74d1b0
// 地址: 0x74d1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = *(data_19e2778 + 0x24)

if (arg4 s< esi - 5 || arg4 s> esi + 5)
    if (arg2 != 0)
        LRESULT eax_40 = SendMessageA(arg3, 0x199, 
            zx.d(SendMessageA(arg3, 0x1a9, 0, zx.d(arg5) << 0x10 | zx.d(arg4.w))), 0)
        
        if (eax_40 != 0xffffffff && eax_40 != 0 && *(eax_40 + 0x14) == 0x63)
            sub_74ce10(eax_40)
    
    uint32_t eax_41 = data_19e2778
    *(eax_41 + 0x40) = 0
    CookieCheckFunction(eax_41)
    return eax_41

SetCursor(LoadCursorA(nullptr, 0x7f84))
RECT rect_1
GetWindowRect(arg3, &rect_1)
rect_1.left += 0x10
rect_1.right -= 0xa
ClipCursor(&rect_1)
RECT rect
GetClientRect(arg3, &rect)
*(data_19e2778 + 0x40) = 1
*(data_19e2778 + 0x4c) = rect.top
*(data_19e2778 + 0x50) = rect.bottom
*(data_19e2778 + 0x44) = arg4
HDC eax_10 = GetDC(arg3)
int32_t bottom = rect.bottom
int32_t top = rect.top
int32_t rop2 = SetROP2(eax_10, R2_NOT)
MoveToEx(eax_10, arg4, top, nullptr)
LineTo(eax_10, arg4, bottom)
SetROP2(eax_10, rop2)
ReleaseDC(arg3, eax_10)
void* esi_3 = *(data_19e2778 + 4)

if (esi_3 != 0)
    uint8_t string[0x10c]
    memset(&string, 0, 0x104)
    int32_t eax_12 = *(esi_3 + 0x14) - 3
    
    if (eax_12 u> 0x60)
    label_74d405:
        GetWindowTextA(*(data_19e2778 + 0x1c), &string, 0x104)
        free(*(*(data_19e2778 + 4) + 0x10))
        char* const eax_29 = &data_801800
        
        if (string[0] != 0)
            eax_29 = &string
        
        char* ecx_8 = eax_29
        char* const var_13c_3 = eax_29
        
        do
            eax_29.b = *ecx_8
            ecx_8 = &ecx_8[1]
        while (eax_29.b != 0)
        
        int32_t esi_5 = calloc(ecx_8 - &ecx_8[1] + 1, 1)
        
        if (esi_5 != 0)
            char* const ecx_10 = var_13c_3
            int32_t eax_31
            
            do
                eax_31.b = *ecx_10
                ecx_10 = &ecx_10[1]
            while (eax_31.b != 0)
            memcpy(esi_5, var_13c_3, ecx_10 - &ecx_10[1])
        else
            esi_5 = calloc(1, 1)
        
        *(*(data_19e2778 + 4) + 0x10) = esi_5
        ShowWindow(*(data_19e2778 + 0x1c), SW_HIDE)
    else
        switch (eax_12)
            case 1, 2, 3, 4, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                    0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                    0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 
                    0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
                    0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 
                    0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f
                goto label_74d405
            case 5
                *(esi_3 + 8) = &data_88ff00
                HWND eax_14 = SetCapture(arg3)
                CookieCheckFunction(eax_14)
                return eax_14
            case 9
                GetWindowTextA(*(data_19e2778 + 0x20), &string, 0x104)
                free(*(*(data_19e2778 + 4) + 0x10))
                char* const eax_18 = &data_801800
                
                if (string[0] != 0)
                    eax_18 = &string
                
                char* ecx_4 = eax_18
                char* const var_13c_1 = eax_18
                
                do
                    eax_18.b = *ecx_4
                    ecx_4 = &ecx_4[1]
                while (eax_18.b != 0)
                
                int32_t esi_4 = calloc(ecx_4 - &ecx_4[1] + 1, 1)
                
                if (esi_4 != 0)
                    char* const ecx_6 = var_13c_1
                    void* eax_22
                    
                    do
                        eax_22.b = *ecx_6
                        ecx_6 = &ecx_6[1]
                    while (eax_22.b != 0)
                    memcpy(esi_4, var_13c_1, ecx_6 - &ecx_6[1])
                else
                    esi_4 = calloc(1, 1)
                
                *(*(data_19e2778 + 4) + 0x10) = esi_4
                ShowWindow(*(data_19e2778 + 0x20), SW_HIDE)
                goto label_74d405

HWND eax_36 = SetCapture(arg3)
CookieCheckFunction(eax_36)
return eax_36
