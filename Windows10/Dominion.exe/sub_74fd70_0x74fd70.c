// 函数: sub_74fd70
// 地址: 0x74fd70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
LRESULT eax_3
va_list ecx
int32_t edx
eax_3, ecx, edx = SendMessageA(*(data_19e2778 + 0x18), 0x199, arg1, 0)

if (eax_3 == 0xffffffff || eax_3 == 0)
    CookieCheckFunction(0xffffffff)
    return 0xffffffff

if (*(eax_3 + 0x14) != 0x63)
    data_1a9b02c = *eax_3
    data_1a9b030 = *(eax_3 + 4)
    char* edi_1 = *(eax_3 + 8)
    data_1a9b034 = edi_1
    data_1a9b038 = *(eax_3 + 0xc)
    int32_t eax_7 = *(eax_3 + 0x14)
    data_1a9b040 = eax_7
    int32_t eax_27
    
    switch (eax_7)
        case 0, 1, 2, 3, 7
            data_1a9b03c = *(eax_3 + 0x10)
            CookieCheckFunction(&data_1a9b02c)
            return &data_1a9b02c
        case 4
            data_1a9b03c = sub_74b3b0(*(eax_3 + 0x10))
            CookieCheckFunction(&data_1a9b02c)
            return &data_1a9b02c
        case 5
            int32_t var_60
            __builtin_memcpy(&var_60, 
                "\xd0\xaa\xa9\x01\xd4\xaa\xa9\x01\xd8\xaa\xa9\x01\xdc\xaa\xa9\x01\xe0\xaa\xa9\x01\xe4\x"
            "aa\xa9\x01\xe5\xaa\xa9\x01\xe6\xaa\xa9\x01\xe7\xaa\xa9\x01\xe8\xaa\xa9\x01\xe9\xaa\xa9"
            "01\xea\xaa\xa9\x01\xeb\xaa\xa9\x01\xec\xaa\xa9\x01\x0c\xab\xa9\x01", 
                0x3c)
            sub_64b6d0(eax_7, edx, ecx, *(eax_3 + 0x10), 
                "Height: %d Width: %d Escapement: %d Orientation:  %d Weight: %d Italic: %hhd Underline: "
            " StrikeOut: %hhd CharSet: %hhd OutPrecision: %hhd ClipPrecision: %hhd Quality: %hhd "
            "PitchAndFamily: %hhd FaceName: %32[^\r\n] Color: %d")
            data_1a9b03c = 0x1a9aad0
            CookieCheckFunction(&data_1a9b02c)
            return &data_1a9b02c
        case 6
            int32_t eax_14
            va_list ecx_10
            int32_t edx_1
            eax_14, ecx_10, edx_1 = memset(0x1a9a6c0, 0, 0x410)
            int32_t var_28_2 = 0x1a9a9cc
            char* var_2c_1 = &data_1a9a8c8
            int32_t var_30_1 = 0x1a9a7c4
            int32_t var_34_1 = 0x1a9a6c0
            sub_64b6d0(eax_14, edx_1, ecx_10, edi_1, 
                "Title: %256[^\r\n] Path: %256[^\r\n] Filter: %256[^\r\n] Default Extension: %3s")
            int32_t esi_1 = 0
            
            while (true)
                int32_t eax_16 = _mbscmp(&data_8901d4, esi_1 * 0x104 + 0x1a9a6c0)
                
                if (eax_16 == 0)
                    *(esi_1 * 0x104 + 0x1a9a6c0) = eax_16.b
                else if (esi_1 == 2)
                    char i = data_1a9a8c8
                    char* eax_17 = &data_1a9a8c8
                    
                    if (i != 0)
                        do
                            if (i == 9)
                                *eax_17 = 0
                            
                            i = eax_17[1]
                            eax_17 = &eax_17[1]
                        while (i != 0)
                        
                        esi_1 += 1
                        continue
                
                esi_1 += 1
                
                if (esi_1 u>= 4)
                    break
            
            data_1a9a594 = 0x1a9a6c0
            data_1a9a598 = 0x1a9a7c4
            data_1a9a59c = &data_1a9a8c8
            data_1a9a5a0 = 0x1a9a9cc
            data_1a9b03c = &data_1a9a594
            CookieCheckFunction(&data_1a9b02c)
            return &data_1a9b02c
        case 8
            int32_t eax_10 = _mbsicmp(&data_8901e0, *(eax_3 + 0x10))
            int32_t eax_11 = neg.d(eax_10)
            data_1a9b03c = sbb.d(eax_11, eax_11, eax_10 != 0) + 1
            CookieCheckFunction(&data_1a9b02c)
            return &data_1a9b02c
        case 9
            int32_t var_18 = 0
            int32_t var_c
            int32_t* var_28_4 = &var_c
            int32_t var_14 = 0
            int32_t var_10
            int32_t* var_2c_2 = &var_10
            var_10 = 0
            int32_t* var_30_2 = &var_14
            var_c = 0
            int32_t* var_34_2 = &var_18
            sub_64b6d0(&var_18, edx, ecx, *(eax_3 + 0x10), "%hhd.%hhd.%hhd.%hhd")
            data_1a9b03c = (((((var_18 << 8) + var_14) << 8) + var_10) << 8) + var_c
            CookieCheckFunction(&data_1a9b02c)
            return &data_1a9b02c
        case 0xa
            int128_t* var_28_5 = &data_19e3bd0
            int128_t* var_2c_3 = &data_19e3bd0:6
            int128_t* var_30_3 = &data_19e3bd0:2
            data_19e3bd0 = zx.o(0)
            sub_64b6d0(eax_7, edx, ecx, *(eax_3 + 0x10), "%hd/%hd/%hd")
            data_1a9b03c = &data_19e3bd0
            CookieCheckFunction(&data_1a9b02c)
            return &data_1a9b02c
        case 0xb
            data_19e3bd0 = zx.o(0)
            int32_t eax_26
            va_list ecx_17
            int32_t edx_2
            eax_26, ecx_17, edx_2 = memset(&data_1a9b150, 0, 0x104)
            void* var_28_6 = &data_1a9b150
            int128_t* var_2c_4 = &data_19e3bd0:0xc
            int128_t* var_30_4 = &data_19e3bd0:0xa
            int128_t* var_34_3 = &data_19e3bd0:8
            sub_64b6d0(eax_26, edx_2, ecx_17, *(eax_3 + 0x10), "%hd:%hd:%hd %2s")
            eax_27 = _mbsicmp(&data_890204, &data_1a9b150)
        label_750125:
            
            if (eax_27 == 0)
                eax_27.w = data_19e3bd0:8.w
                
                if (eax_27.w != 0xc)
                    eax_27.w += 0xc
                    data_19e3bd0:8.w = eax_27.w
            
            data_1a9b03c = &data_19e3bd0
        case 0xc
            data_19e3bd0 = zx.o(0)
            int32_t eax_28
            va_list ecx_18
            int32_t edx_3
            eax_28, ecx_18, edx_3 = memset(&data_1a9b150, 0, 0x104)
            void* var_28_7 = &data_1a9b150
            int128_t* var_2c_5 = &data_19e3bd0:0xc
            int128_t* var_30_5 = &data_19e3bd0:0xa
            int128_t* var_34_4 = &data_19e3bd0:8
            int128_t* var_38_2 = &data_19e3bd0
            int128_t* var_3c_4 = &data_19e3bd0:6
            int128_t* var_40_1 = &data_19e3bd0:2
            sub_64b6d0(eax_28, edx_3, ecx_18, *(eax_3 + 0x10), "%hd/%hd/%hd %hd:%hd:%hd %2s")
            eax_27 = _mbsicmp(&data_890204, &data_1a9b150)
            goto label_750125

CookieCheckFunction(&data_1a9b02c)
return &data_1a9b02c
