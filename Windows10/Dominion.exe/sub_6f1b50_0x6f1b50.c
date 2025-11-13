// 函数: sub_6f1b50
// 地址: 0x6f1b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
HWND hWnd = GetDlgItem(arg1, 0x85)
LRESULT eax_4 = SendMessageA(GetDlgItem(data_147d470, 0x7b), 0x188, 0, 0)
int32_t ebx = 0

if (eax_4 != 0xffffffff)
    ebx = eax_4 + 1

int32_t* var_424 = sub_6ee6b0()
int32_t lParam[0x101]
SendMessageA(hWnd, 0x191, 0x100, &lParam)
LRESULT eax_6
char* ecx_1
eax_6, ecx_1 = SendMessageA(hWnd, 0x190, 0, 0)
int32_t edi_1 = 0

if (eax_6 s> 0)
    do
        int32_t* eax_7 = lParam[edi_1]
        
        if (eax_7 u> 0x79)
            sub_63b870(eax_7, &data_801800, 
                "paramToolIndex >= 0 && paramToolIndex < gParticleParamToolDataCount", 
                "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x828, "EditorPickDialogOk")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t edx_1 = *((eax_7 << 3) + &data_8cc228)
        
        if (edx_1 != 0x70)
            int32_t* eax_8 = var_424
            ecx_1 = nullptr
            int32_t esi_1 = *eax_8
            
            if (esi_1 s> 0)
                int32_t* eax_9 = eax_8[2]
                
                do
                    if (*eax_9 == edx_1)
                        goto label_6f1c8b
                    
                    ecx_1 = &ecx_1[1]
                    eax_9 = &eax_9[4]
                while (ecx_1 s< esi_1)
            
            int32_t* eax_11
            int32_t edx_2
            
            if (*(sub_6dd320(&data_8cc5f8, edx_1) + 0x10) != 8)
                int32_t* var_420_1
                var_420_1.q = 0
                int32_t var_41c
                edx_2 = var_41c
                eax_11 = var_420_1
            else
                edx_2:eax_11 = 0x801800
            
            int32_t* esi_2 = var_424
            ecx_1 = sub_6dcc50(eax_11, esi_2, &data_8cc5f8, *((eax_7 << 3) + &data_8cc228), eax_11, 
                edx_2)
            int32_t eax_13 = *esi_2 - 1
            
            if (ebx != eax_13)
                int32_t* eax_14 = sub_69dd00(data_1777544, 8)
                ecx_1 = sub_6fb950(eax_14, eax_14, esi_2, eax_13, ebx)
            
            ebx += 1
        
    label_6f1c8b:
        edi_1 += 1
    while (edi_1 s< eax_6)

void* eax_15 = data_147ded0

if (eax_15 != 0)
    int32_t eax_16 = *(eax_15 + 4)
    
    if (eax_16 == 0x19)
        ecx_1 = sub_6f0170(0xffffffff, ebx - 1)
    else if (eax_16 == 0x1b)
        ecx_1 = sub_6f0970(0xffffffff)

data_147d474 = 0
sub_6ee530(ecx_1)
BOOL result = EndDialog(arg1, 1)
CookieCheckFunction(result)
return result
