// 函数: sub_74be50
// 地址: 0x74be50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
WPARAM wParam_2 = arg3
HANDLE esi = GetPropA(GetParent(GetParent(arg1)), "lpInsData")
data_19e2778 = esi

if (arg2 != 2)
    WPARAM wParam_1
    
    if (arg2 != 8)
        int32_t var_130
        int32_t var_124
        
        if (arg2 == 0xf)
            WPARAM wParam = wParam_2
            
            if (*(esi + 0x34) == 0)
                CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, 0xf, wParam, arg4)
                HDC hDC = GetWindowDC(arg1)
                GetClientRect(arg1, &var_130)
                uint32_t eax_10 = GetSysColor(COLOR_WINDOW)
                sub_74b280(eax_10, &var_130, hDC, 3, eax_10)
                int32_t var_12c
                int32_t var_12c_1 = var_12c + 1
                var_130 += 1
                var_124 += 2
                uint32_t eax_11 = GetSysColor(COLOR_WINDOW)
                sub_74b280(eax_11, &var_130, hDC, 0xf, eax_11)
                ReleaseDC(arg1, hDC)
                CookieCheckFunction(1)
                return 1
            
            sub_74b450(arg2, arg2, arg1, wParam, arg4)
            CookieCheckFunction(1)
            return 1
        
        if (arg2 == 0x20a)
            SendMessageA(arg1, 0x102, 0xd, 0)
        label_74c557:
            wParam_1 = wParam_2
        label_74c571:
            LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, wParam_1, arg4)
            CookieCheckFunction(result)
            return result
        
        if (arg2 == 0x87)
            CookieCheckFunction(4)
            return 4
        
        if (arg2 != 0x102)
            if (arg2 != 0x100)
                goto label_74c557
            
            wParam_1 = wParam_2
            
            if (wParam_1 != 0x1b)
                goto label_74c571
            
            void* ecx_38 = *(esi + 4)
            
            if (ecx_38 == 0)
                goto label_74c571
            
            int32_t ecx_39 = *(ecx_38 + 0x14)
            
            if (ecx_39 == 0xa || ecx_39 == 0xb)
                ShowWindow(*(esi + 0x1c), SW_HIDE)
                goto label_74c557
            
            if (ecx_39 != 0xc)
                goto label_74c571
            
            ShowWindow(*(esi + 0x1c), ecx_39 - 0xc)
            ShowWindow(*(data_19e2778 + 0x20), SW_HIDE)
            goto label_74c557
        
        wParam_1 = wParam_2
        
        if (wParam_1 != 0xd)
            if (wParam_1 == 9)
                void* ecx_28 = *(esi + 4)
                
                if (ecx_28 != 0)
                    if (*(ecx_28 + 0x14) != 0xc)
                        if (GetKeyState(0x10) s>= 0)
                        label_74c4da:
                            SendMessageA(arg1, 0x102, 0xd, 0)
                            SetFocus(*(data_19e2778 + 8))
                            CookieCheckFunction(1)
                            return 1
                    else
                        HWND eax_44 = GetFocus()
                        void* ecx_29 = data_19e2778
                        
                        if (*(ecx_29 + 0x1c) != eax_44)
                            if (*(ecx_29 + 0x20) != eax_44)
                                CookieCheckFunction(1)
                                return 1
                            
                            if (GetKeyState(0x10) s>= 0)
                                goto label_74c4da
                            
                            SetFocus(*(data_19e2778 + 0x1c))
                            CookieCheckFunction(1)
                            return 1
                        
                        if (GetKeyState(0x10) s>= 0)
                            SetFocus(*(data_19e2778 + 0x20))
                            CookieCheckFunction(1)
                            return 1
                    
                    SendMessageA(arg1, 0x102, 0xd, 0)
                    CookieCheckFunction(1)
                    return 1
            
            goto label_74c571
        
        void* eax_12 = *(esi + 4)
        
        if (eax_12 != 0)
            int32_t eax_13 = *(eax_12 + 0x14)
            uint8_t var_120
            char* const ecx_22
            char* const edx_8
            int32_t esi_2
            void* edi_4
            
            if (eax_13 == 0xa)
                var_130.o = zx.o(0)
                memset(&var_120, 0, 0x104)
                SendMessageA(*(esi + 0x1c), 0x1001, 0, &var_130)
                GetDateFormatA(0x400, 1, &var_130, nullptr, &var_120, 0x104)
                free(*(*(data_19e2778 + 4) + 0x10))
                char* eax_37 = &data_801800
                
                if (var_120 != 0)
                    eax_37 = &var_120
                
                char* ecx_23 = eax_37
                char* var_134_3 = eax_37
                
                do
                    eax_37.b = *ecx_23
                    ecx_23 = &ecx_23[1]
                while (eax_37.b != 0)
                
                esi_2 = calloc(ecx_23 - &ecx_23[1] + 1, 1)
                
                if (esi_2 != 0)
                    edx_8 = var_134_3
                    ecx_22 = edx_8
                    edi_4 = &ecx_22[1]
                    int32_t eax_39
                    
                    do
                        eax_39.b = *ecx_22
                        ecx_22 = &ecx_22[1]
                    while (eax_39.b != 0)
                label_74c3a2:
                    memcpy(esi_2, edx_8, ecx_22 - edi_4)
                else
                label_74c389:
                    esi_2 = calloc(1, 1)
                
                *(*(data_19e2778 + 4) + 0x10) = esi_2
                ShowWindow(*(data_19e2778 + 0x1c), SW_HIDE)
                esi = data_19e2778
            else
                if (eax_13 == 0xb)
                    var_130.o = zx.o(0)
                    memset(&var_120, 0, 0x104)
                    SendMessageA(*(esi + 0x1c), 0x1001, 0, &var_130)
                    GetTimeFormatA(0x400, 0, &var_130, "hh':'mm':'ss tt", &var_120, 0x104)
                    free(*(*(data_19e2778 + 4) + 0x10))
                    char* const eax_32 = &data_801800
                    
                    if (var_120 != 0)
                        eax_32 = &var_120
                    
                    char* ecx_20 = eax_32
                    char* const var_134_2 = eax_32
                    
                    do
                        eax_32.b = *ecx_20
                        ecx_20 = &ecx_20[1]
                    while (eax_32.b != 0)
                    
                    esi_2 = calloc(ecx_20 - &ecx_20[1] + 1, 1)
                    
                    if (esi_2 == 0)
                        goto label_74c389
                    
                    edx_8 = var_134_2
                    ecx_22 = edx_8
                    edi_4 = &ecx_22[1]
                    int32_t eax_34
                    
                    do
                        eax_34.b = *ecx_22
                        ecx_22 = &ecx_22[1]
                    while (eax_34.b != 0)
                    goto label_74c3a2
                
                if (eax_13 == 0xc)
                    var_130.o = zx.o(0)
                    memset(&var_120, eax_13 - 0xc, 0x104)
                    SendMessageA(*(esi + 0x1c), 0x1001, 0, &var_130)
                    GetDateFormatA(0x400, 1, &var_130, nullptr, &var_120, 0x104)
                    void* edi_2 = &var_124:3
                    char i
                    
                    do
                        i = *(edi_2 + 1)
                        edi_2 += 1
                    while (i != 0)
                    *edi_2 = 0x20
                    SendMessageA(*(data_19e2778 + 0x20), 0x1001, 0, &var_130)
                    uint8_t* ecx_14 = &var_120
                    uint8_t i_1
                    
                    do
                        i_1 = *ecx_14
                        ecx_14 = &ecx_14[1]
                    while (i_1 != 0)
                    void var_11f
                    int32_t ecx_15 = ecx_14 - &var_11f
                    GetTimeFormatA(0x400, 0, &var_130, "hh':'mm':'ss tt", &(&var_120)[ecx_15], 
                        0x104 - ecx_15)
                    free(*(*(data_19e2778 + 4) + 0x10))
                    char* const eax_22 = &data_801800
                    
                    if (var_120 != 0)
                        eax_22 = &var_120
                    
                    char* ecx_16 = eax_22
                    char* const var_134_1 = eax_22
                    
                    do
                        eax_22.b = *ecx_16
                        ecx_16 = &ecx_16[1]
                    while (eax_22.b != 0)
                    
                    int32_t esi_1 = calloc(ecx_16 - &ecx_16[1] + 1, 1)
                    
                    if (esi_1 != 0)
                        char* const ecx_18 = var_134_1
                        int32_t eax_24
                        
                        do
                            eax_24.b = *ecx_18
                            ecx_18 = &ecx_18[1]
                        while (eax_24.b != 0)
                        memcpy(esi_1, var_134_1, ecx_18 - &ecx_18[1])
                    else
                        esi_1 = calloc(1, 1)
                    
                    *(*(data_19e2778 + 4) + 0x10) = esi_1
                    ShowWindow(*(data_19e2778 + 0x1c), SW_HIDE)
                    ShowWindow(*(data_19e2778 + 0x20), SW_HIDE)
                    esi = data_19e2778
        
        SetFocus(*(esi + 0x14))
        sub_750570()
        CookieCheckFunction(1)
        return 1
    
    void* eax_8 = *(esi + 4)
    
    if (eax_8 == 0 || *(eax_8 + 0x14) != 0xc)
        goto label_74bf16
    
    WPARAM wParam_3 = wParam_2
    
    if (*(esi + 0x1c) != wParam_3)
        HWND hWnd = *(esi + 0x20)
        
        if (hWnd != wParam_3)
            ShowWindow(hWnd, SW_HIDE)
        label_74bf16:
            SendMessageA(arg1, 0x102, 0xd, 0)
            wParam_1 = wParam_2
            void* ecx_3 = data_19e2778
            int32_t edx_1
            
            if (wParam_1 == 0 || (*(ecx_3 + 0x14) != wParam_1 && *(ecx_3 + 0x1c) != wParam_1
                    && *(ecx_3 + 0x20) != wParam_1 && *(ecx_3 + 0x10) != wParam_1
                    && *(ecx_3 + 0xc) != wParam_1))
                edx_1 = 0
            else
                edx_1 = 1
            
            *(ecx_3 + 0x38) = edx_1
            void* ecx_4 = data_19e2778
            
            if (*(ecx_4 + 0x38) != 0)
                goto label_74c571
            
            RedrawWindow(*(ecx_4 + 0x14), nullptr, nullptr, 
                RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
            goto label_74c557
else
    SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
    RemovePropA(arg1, "Wprc")

CookieCheckFunction(0)
return 0
