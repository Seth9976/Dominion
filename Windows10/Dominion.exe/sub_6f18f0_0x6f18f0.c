// 函数: sub_6f18f0
// 地址: 0x6f18f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* result = __security_cookie ^ &__saved_ebp
int32_t* result_1 = result

if (data_147d488 == 0)
    result = sub_6ee800()
    
    if (result != 0)
        int32_t edi_1 = data_147d474
        
        if (edi_1 s>= 0 && edi_1 s< result[2])
            int32_t edi_2 = edi_1 << 4
            float* edi_3 = edi_2 + *result
            
            if (edi_2 != neg.d(*result))
                void* eax_1 = sub_6ee800()
                void string_3
                GetDlgItemTextA(data_147d470, 0x81, &string_3, 0x50)
                void string
                GetDlgItemTextA(data_147d470, 0x82, &string, 0x50)
                void string_2
                GetDlgItemTextA(data_147d470, 0x83, &string_2, 0x50)
                void string_1
                va_list ecx_1
                int32_t edx_1
                ecx_1, edx_1 = GetDlgItemTextA(data_147d470, 0x96, &string_1, 0x50)
                float* var_168_1 = edi_3
                va_list ecx_2
                int32_t edx_2
                ecx_2, edx_2 = sub_64b6d0(&string_3, edx_1, ecx_1, &string_3, "%f")
                void* var_168_2 = &edi_3[2]
                va_list ecx_3
                int32_t edx_3
                ecx_3, edx_3 = sub_64b6d0(&string_2, edx_2, ecx_2, &string_2, "%f")
                void* var_168_3 = eax_1 + 0x10
                va_list ecx_4
                int32_t edx_4
                ecx_4, edx_4 = sub_64b6d0(&string_1, edx_3, ecx_3, &string_1, "%f")
                float var_150 = 0f
                int32_t* var_168_4 = &var_150
                
                if (sub_64b6d0(&string, edx_4, ecx_4, &string, "%f") == 1)
                    edi_3[1] = var_150 + *edi_3
                
                sub_6f1540()
                sub_6ee970(&data_147d484, &data_147d480)
                HWND hWnd = GetDlgItem(data_147d470, 0x91)
                LRESULT wParam = SendMessageA(hWnd, 0x147, 0, 0)
                int32_t var_16c_6
                char* ecx_5
                
                if (wParam == 0xffffffff)
                    char const* const var_168_5 = "EditorNodeDataChanged"
                    var_16c_6 = 0x7ec
                    ecx_5 = "curveIndex != CB_ERR"
                label_6f1b35:
                    sub_63b870(wParam, &data_801800, ecx_5, 
                        "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_16c_6, 
                        "EditorNodeDataChanged")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                edi_3[3] = SendMessageA(hWnd, 0x150, wParam, 0)
                HWND hWnd_1 = GetDlgItem(data_147d470, 0x90)
                wParam = SendMessageA(hWnd_1, 0x147, 0, 0)
                
                if (wParam == 0xffffffff)
                    char const* const var_168_6 = "EditorNodeDataChanged"
                    var_16c_6 = 0x7f1
                    ecx_5 = "distributionIndex != CB_ERR"
                    goto label_6f1b35
                
                *(eax_1 + 0xc) = SendMessageA(hWnd_1, 0x150, wParam, 0)
                uint32_t eax_11
                eax_11.b = IsDlgButtonChecked(data_147d470, 0x97) != 0
                *(eax_1 + 0x14) = eax_11.b
                uint32_t eax_12
                eax_12.b = IsDlgButtonChecked(data_147d470, 0x98) != 0
                *(eax_1 + 0x15) = eax_12.b
                result = sub_6ee530(InvalidateRect(data_147d470, nullptr, 0))

CookieCheckFunction(result)
return result
