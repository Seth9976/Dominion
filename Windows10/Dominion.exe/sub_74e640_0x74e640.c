// 函数: sub_74e640
// 地址: 0x74e640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
LRESULT hWnd = arg4

if (arg2 == 0x7d4)
    int32_t* edi_1 = data_19e2778
    void* esi_1 = edi_1[1]
    
    if (esi_1 != 0)
        void param0_1
        void lpbi
        OPENFILENAMEA param0_2
        char _Str2_3
        char* const ecx_24
        char* const esi_5
        int32_t edi_6
        
        switch (*(esi_1 + 0x14) - 4)
            case 0
                lpbi:0x1c.d = 0
                lpbi:0x14.q = 0
                param0_1.d = 0x24
                lpbi.d = arg3
                lpbi:4.d = *edi_1
                lpbi:8.d = sub_74b3b0(*(esi_1 + 0x10))
                lpbi:0xc.d = 0xcb4450
                lpbi:0x10.d = 3
                
                if (ChooseColorA(&param0_1) != 0)
                    uint32_t var_6f8_2 = zx.d((lpbi:8.d u>> 0x10).b)
                    uint32_t var_6fc_1 = zx.d(lpbi:8.w) u>> 8
                    uint32_t var_700_1 = zx.d(lpbi:8.b)
                    sub_74afa0(&_Str2_3, 0x104, "%d,%d,%d")
                    free(*(*(data_19e2778 + 4) + 0x10))
                    char* edi_2 = &data_801800
                    
                    if (_Str2_3 != 0)
                        edi_2 = &_Str2_3
                    
                    char* ecx_1 = edi_2
                    char i
                    
                    do
                        i = *ecx_1
                        ecx_1 = &ecx_1[1]
                    while (i != 0)
                    int32_t esi_2 = calloc(ecx_1 - &ecx_1[1] + 1, 1)
                    
                    if (esi_2 != 0)
                        char* ecx_3 = edi_2
                        int32_t eax_16
                        
                        do
                            eax_16.b = *ecx_3
                            ecx_3 = &ecx_3[1]
                        while (eax_16.b != 0)
                        memcpy(esi_2, edi_2, ecx_3 - &ecx_3[1])
                        *(*(data_19e2778 + 4) + 0x10) = esi_2
                    else
                        *(*(data_19e2778 + 4) + 0x10) = calloc(1, 1)
            case 1
                CHOOSEFONTA param0
                param0.hDC = 0
                var_638
                void* var_6f8_28 = &var_638
                param0.iPointSize = 0
                var_658
                void* var_6fc_23 = &var_658
                lpbi:8.d = 0
                var_659
                void* var_700_12 = &var_659
                var_65a
                void* var_704_3 = &var_65a
                param0_1:4.q = 0
                var_65c
                void* var_708_3 = &var_65c:1
                lpbi:0x10.q = 0
                void* var_70c_3 = &var_65c
                lpbi:0x18.q = 0
                var_65d
                void* var_710_3 = &var_65d
                var_65e
                void* var_714_2 = &var_65e
                var_660
                void* var_718_2 = &var_660:1
                void* var_71c_2 = &var_660
                var_664
                void* var_720_1 = &var_664
                var_668
                void* var_724_1 = &var_668
                var_66c
                void* var_728_1 = &var_66c
                var_670
                void* var_72c_1 = &var_670
                var_674
                void* var_730_1 = &var_674
                sub_64b6d0(&var_674, arg2, arg3, *(esi_1 + 0x10), 
                    "Height: %d Width: %d Escapement: %d Orientation:  %d Weight: %d Italic: %hhd "
                "Underline: %hhd StrikeOut: %hhd CharSet: %hhd OutPrecision: %hhd ClipPrecision: "
                " Quality: %hhd PitchAndFamily: %hhd FaceName: %32[^\r\n] Color: %d")
                param0.hwndOwner = arg3
                param0.lStructSize = 0x3c
                lpbi:0xc.d = *data_19e2778
                param0.lpLogFont = &var_674
                param0_1.d = param0_2.FlagsEx
                param0.Flags = 0x141
                
                if (ChooseFontA(&param0) != 0)
                    param0_2.FlagsEx = param0_1.d
                    free(*(*(data_19e2778 + 4) + 0x10))
                    sub_74cb60(&var_674)
                    esi_5 = &data_1a9a490
                    
                    if (data_1a9a490 == 0)
                        esi_5 = &data_801800
                    
                    char* const ecx_22 = esi_5
                    char i_1
                    
                    do
                        i_1 = *ecx_22
                        ecx_22 = &ecx_22[1]
                    while (i_1 != 0)
                    edi_6 = calloc(ecx_22 - &ecx_22[1] + 1, 1)
                    
                    if (edi_6 == 0)
                        *(*(data_19e2778 + 4) + 0x10) = calloc(1, 1)
                    else
                        ecx_24 = esi_5
                        int32_t eax_69
                        
                        do
                            eax_69.b = *ecx_24
                            ecx_24 = &ecx_24[1]
                        while (eax_69.b != 0)
                        memcpy(edi_6, esi_5, ecx_24 - &ecx_24[1])
                        *(*(data_19e2778 + 4) + 0x10) = edi_6
            case 2
                uint8_t _Str2[0x108]
                memset(&_Str2, 0, 0x104)
                void var_534
                memset(&var_534, 0, 0x104)
                uint8_t _Str2_2
                memset(&_Str2_2, 0, 0x104)
                uint8_t _Str2_1[0x108]
                memset(&_Str2_1, 0, 0x104)
                memset(&_Str2_3, 0, 0x104)
                va_list ecx_5
                int32_t edx_2
                ecx_5, edx_2 = memset(&param0_2, 0, 0x58)
                param0_2.hwndOwner = arg3
                param0_2.lStructSize = 0x58
                param0_2.hInstance = *edi_1
                char* var_6f8_12 = &_Str2_3
                uint8_t (* var_6fc_11)[0x108] = &_Str2_1
                uint8_t* var_700_9 = &_Str2_2
                uint8_t (* var_704_2)[0x108] = &_Str2
                sub_64b6d0(&_Str2, edx_2, ecx_5, *(esi_1 + 8), 
                    "Title: %32[^\r\n] Path: %256[^\r\n] Filter: %256[^\r\n] Default Extension: %32[^\r"
                "]")
                uint8_t (* ecx_6)[0x108] = &_Str2
                
                if (_mbscmp(&data_8901d4, &_Str2) == 0)
                    ecx_6 = "Select file"
                
                param0_2.lpstrTitle = ecx_6
                
                if (_mbscmp(&data_8901d4, &_Str2_2) != 0)
                    char* ecx_7 = &_Str2_2
                    int32_t eax_26
                    
                    do
                        eax_26.b = *ecx_7
                        ecx_7 = &ecx_7[1]
                    while (eax_26.b != 0)
                    void var_21b
                    int32_t __saved_ebp
                    void* eax_27 = &__saved_ebp + ecx_7 - &var_21b - 0x219
                    int32_t ecx_8
                    ecx_8.b = *eax_27
                    
                    while (ecx_8.b != 0)
                        if (ecx_8.b == 0x5c)
                            *eax_27 = 0
                            break
                        
                        ecx_8.b = *(eax_27 - 1)
                        eax_27 -= 1
                    
                    param0_2.lpstrInitialDir = &_Str2_2
                
                if (_mbscmp(&data_8901d4, &_Str2_1) == 0)
                    param0_2.lpstrFilter = "All Files (*.*)"
                else
                    uint8_t i_2 = _Str2_1[0]
                    uint8_t (* eax_29)[0x108] = &_Str2_1
                    
                    while (i_2 != 0)
                        if (i_2 == 9)
                            *eax_29 = 0
                        
                        i_2 = (*eax_29)[1]
                        eax_29 = &(*eax_29)[1]
                    
                    param0_2.lpstrFilter = &_Str2_1
                
                int32_t eax_30 = _mbscmp(&data_8901d4, &_Str2_3)
                param0_2.nMaxFile = 0x104
                param0_2.Flags = 0x81804
                param0_2.lpstrFile = &var_534
                char* ecx_9 = &_Str2_3
                
                if (eax_30 == 0)
                    ecx_9 = &data_876758
                
                param0_2.lpstrDefExt = ecx_9
                bool cond:4_1 = GetOpenFileNameA(&param0_2) == 0
                lpbi:0x10.d = param0_2.lpstrTitle
                lpbi:0x18.d = param0_2.lpstrFilter
                lpbi:0x1c.d = param0_2.lpstrDefExt
                int32_t var_6f8_16 = *(*(data_19e2778 + 4) + 0x10)
                var_6ac
                char* ecx_15
                char* esi_4
                int32_t edi_4
                
                if (cond:4_1)
                    lpbi:0x14.d = &data_801800
                    free(var_6f8_16)
                    int32_t ecx_16 = calloc(1, 1)
                    
                    if (ecx_16 == 0)
                        ecx_16 = calloc(1, 1)
                    
                    *(*(data_19e2778 + 4) + 0x10) = ecx_16
                    free(*(*(data_19e2778 + 4) + 8))
                    sub_74cbe0(&var_6ac)
                    esi_4 = &data_1a9ac18
                    
                    if (data_1a9ac18 == 0)
                        esi_4 = &data_801800
                    
                    char* ecx_18 = esi_4
                    char i_3
                    
                    do
                        i_3 = *ecx_18
                        ecx_18 = &ecx_18[1]
                    while (i_3 != 0)
                    edi_4 = calloc(ecx_18 - &ecx_18[1] + 1, 1)
                    
                    if (edi_4 != 0)
                        ecx_15 = esi_4
                        int32_t eax_53
                        
                        do
                            eax_53.b = *ecx_15
                            ecx_15 = &ecx_15[1]
                        while (eax_53.b != 0)
                        memcpy(edi_4, esi_4, ecx_15 - &ecx_15[1])
                        *(*(data_19e2778 + 4) + 8) = edi_4
                    else
                        *(*(data_19e2778 + 4) + 8) = calloc(1, 1)
                else
                    CHAR* lpstrFile = param0_2.lpstrFile
                    lpbi:0x14.d = lpstrFile
                    free(var_6f8_16)
                    
                    if (lpstrFile == 0 || *lpstrFile == 0)
                        lpstrFile = &data_801800
                    
                    CHAR* lpstrFile_1 = lpstrFile
                    char i_4
                    
                    do
                        i_4 = *lpstrFile_1
                        lpstrFile_1 = &lpstrFile_1[1]
                    while (i_4 != 0)
                    int32_t edi_3 = calloc(lpstrFile_1 - &lpstrFile_1[1] + 1, 1)
                    
                    if (edi_3 != 0)
                        CHAR* lpstrFile_2 = lpstrFile
                        int32_t eax_38
                        
                        do
                            eax_38.b = *lpstrFile_2
                            lpstrFile_2 = &lpstrFile_2[1]
                        while (eax_38.b != 0)
                        memcpy(edi_3, lpstrFile, lpstrFile_2 - &lpstrFile_2[1])
                    else
                        edi_3 = calloc(1, 1)
                    
                    *(*(data_19e2778 + 4) + 0x10) = edi_3
                    free(*(*(data_19e2778 + 4) + 8))
                    sub_74cbe0(&var_6ac)
                    esi_4 = &data_1a9ac18
                    
                    if (data_1a9ac18 == 0)
                        esi_4 = &data_801800
                    
                    char* ecx_13 = esi_4
                    char i_5
                    
                    do
                        i_5 = *ecx_13
                        ecx_13 = &ecx_13[1]
                    while (i_5 != 0)
                    edi_4 = calloc(ecx_13 - &ecx_13[1] + 1, 1)
                    
                    if (edi_4 == 0)
                        *(*(data_19e2778 + 4) + 8) = calloc(1, 1)
                    else
                        ecx_15 = esi_4
                        int32_t eax_45
                        
                        do
                            eax_45.b = *ecx_15
                            ecx_15 = &ecx_15[1]
                        while (eax_45.b != 0)
                        memcpy(edi_4, esi_4, ecx_15 - &ecx_15[1])
                        *(*(data_19e2778 + 4) + 8) = edi_4
            case 3
                int32_t esi_6 = *(esi_1 + 0x10)
                struct IMalloc ppMalloc
                
                if (SHGetMalloc(&ppMalloc) s>= 0)
                    lpbi.d = arg3
                    lpbi:0x1c.d = 0
                    void var_634
                    __builtin_memset(&var_634, 0, 0x208)
                    lpbi:8.d = 0
                    struct IShellFolder var_694
                    struct IShellFolder* ppshf = &var_694
                    lpbi:0xc.d = &data_801800
                    int32_t var_698 = 0
                    
                    if (SHGetDesktopFolder(ppshf) s>= 0)
                        struct IShellFolder eax_73 = var_694
                        void var_6e4
                        void var_6e0
                        (*(*eax_73 + 0xc))(eax_73, 0, 0, &var_634, &var_6e4, &var_698, &var_6e0)
                        struct IShellFolder eax_74 = var_694
                        (*(*eax_74 + 8))(eax_74)
                    
                    lpbi:4.d = var_698
                    lpbi:0x10.d = 5
                    lpbi:0x14.d = sub_74cd20
                    lpbi:0x18.d = esi_6
                    struct ITEMIDLIST* pidl = SHBrowseForFolderA(&lpbi)
                    
                    if (pidl == 0)
                        memset(&data_1a9ab10, 0, 0x104)
                    else
                        SHGetPathFromIDListA(pidl, &data_1a9ab10)
                    
                    struct IMalloc ppMalloc_1 = ppMalloc
                    (*(*ppMalloc_1 + 0x14))(ppMalloc_1, pidl)
                    struct IMalloc ppMalloc_2 = ppMalloc
                    (*(*ppMalloc_2 + 8))(ppMalloc_2)
                
                free(*(*(data_19e2778 + 4) + 0x10))
                esi_5 = &data_801800
                
                if (data_1a9ab10 != 0)
                    esi_5 = &data_1a9ab10
                
                char* const ecx_29 = esi_5
                char i_6
                
                do
                    i_6 = *ecx_29
                    ecx_29 = &ecx_29[1]
                while (i_6 != 0)
                edi_6 = calloc(ecx_29 - &ecx_29[1] + 1, 1)
                
                if (edi_6 != 0)
                    ecx_24 = esi_5
                    int32_t eax_79
                    
                    do
                        eax_79.b = *ecx_24
                        ecx_24 = &ecx_24[1]
                    while (eax_79.b != 0)
                    memcpy(edi_6, esi_5, ecx_24 - &ecx_24[1])
                    *(*(data_19e2778 + 4) + 0x10) = edi_6
                else
                    *(*(data_19e2778 + 4) + 0x10) = calloc(1, 1)
        
        ShowWindow(hWnd, SW_HIDE)
        SetFocus(arg3)
        RedrawWindow(arg3, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
        hWnd = sub_750570()

CookieCheckFunction(hWnd)
return hWnd
