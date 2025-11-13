// 函数: sub_6f9500
// 地址: 0x6f9500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hWnd = data_147d470

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    data_147d470 = 0

if (data_147d46c != 0)
    int32_t* ebx_1 = data_147ded0
    int32_t* var_14 = ebx_1
    
    if (ebx_1 != 0)
        hWnd = ebx_1[1]
        
        if (hWnd == 0x1e)
            HWND eax_4 =
                CreateDialogParamA(GetModuleHandleA(nullptr), 0xaa, data_147d46c, sub_6f6590, 0)
            data_147d470 = eax_4
            HWND hWnd_1 = sub_7504d0(eax_4)
            HDC eax_5 = GetDC(nullptr)
            int32_t eax_6 = GetDeviceCaps(eax_5, 0x58)
            int32_t eax_7 = GetDeviceCaps(eax_5, 0x5a)
            ReleaseDC(nullptr, eax_5)
            MoveWindow(hWnd_1, eax_6 s/ 0x60, eax_7 * 0x15e s/ 0x60, eax_6 * 0x12c s/ 0x60, 
                eax_7 * 0x12c s/ 0x60, 1)
            ShowWindow(hWnd_1, SW_SHOW)
            sub_6f7f40()
            sub_6f6e30(data_147ded0)
            ShowWindow(data_147d470, SW_SHOW)
            hWnd = sub_6ee5c0()
        else if (hWnd == 0x20)
            HWND eax_22 =
                CreateDialogParamA(GetModuleHandleA(nullptr), 0xaa, data_147d46c, sub_6f6990, 0)
            data_147d470 = eax_22
            HWND hWnd_2 = sub_7504d0(eax_22)
            HDC eax_23 = GetDC(nullptr)
            int32_t eax_24 = GetDeviceCaps(eax_23, 0x58)
            int32_t eax_25 = GetDeviceCaps(eax_23, 0x5a)
            ReleaseDC(nullptr, eax_23)
            MoveWindow(hWnd_2, eax_24 s/ 0x60, eax_25 * 0x15e s/ 0x60, eax_24 * 0x12c s/ 0x60, 
                eax_25 * 0x12c s/ 0x60, 1)
            ShowWindow(hWnd_2, SW_SHOW)
            sub_6f7240()
            sub_6f6b00(data_147ded0)
            ShowWindow(data_147d470, SW_SHOW)
            hWnd = sub_6ee5c0()
        else if (hWnd != 0x1d && hWnd != 0x22 && (hWnd == 0x19 || hWnd == 0x1b))
            HWND hWnd_3 =
                CreateDialogParamA(GetModuleHandleA(nullptr), 0x75, data_147d46c, sub_6f3550, 0)
            data_147d470 = hWnd_3
            ShowWindow(hWnd_3, SW_SHOW)
            HWND hWnd_4 = GetDlgItem(data_147d470, 0x8c)
            SendMessageA(hWnd_4, 0x180, 0, "True")
            SendMessageA(hWnd_4, 0x180, 0, "False")
            HWND hWnd_5 = GetDlgItem(data_147d470, 0x91)
            char const* const lParam = "Constant"
            void* const esi_6 = &data_800ad8
            HWND hWnd_7 = hWnd_5
            
            do
                SendMessageA(hWnd_5, 0x151, SendMessageA(hWnd_5, 0x143, 0, lParam), *esi_6)
                lParam = *(esi_6 + 0xc)
                esi_6 += 8
            while (lParam != 0)
            
            HWND hWnd_6 = GetDlgItem(data_147d470, 0x90)
            char const* const lParam_1 = "Uniform"
            void* const esi_7 = &data_800b18
            HWND hWnd_8 = hWnd_6
            
            do
                SendMessageA(hWnd_6, 0x151, SendMessageA(hWnd_6, 0x143, 0, lParam_1), *esi_7)
                lParam_1 = *(esi_7 + 0xc)
                esi_7 += 8
            while (lParam_1 != 0)
            
            ebx_1 = var_14
            ebx_1[7] -= 1
            char* eax_46 = sub_69f4a0(sub_69ec60(ebx_1), 1, ebx_1, 1)
            char const* const var_38_6
            int32_t var_34_17
            char const* const var_30_8
            char* ecx_16
            
            if (eax_46.b == 0)
                var_30_8 = "AssetCatalogReloadAsWritable"
                var_34_17 = 0x149
                var_38_6 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
                ecx_16 = "result"
            label_6f9a11:
                sub_63b870(eax_46, &data_801800, ecx_16, var_38_6, var_34_17, var_30_8)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (*ebx_1 == 0)
                eax_46 = sub_69f4a0(eax_46, 0, ebx_1, 1)
            
            ebx_1[7] += 1
            
            if (ebx_1[1] == 0x19)
                int32_t* ecx_18 = data_147ded0
                char* var_18_3
                
                if (ecx_18 != 0 && ecx_18[1] == 0x19)
                    eax_46 = sub_5af880(ecx_18)
                    var_18_3 = eax_46
                
                if (ecx_18 == 0 || ecx_18[1] != 0x19 || eax_46 == 0)
                    var_30_8 = "MakeSureAllEmittersHaveNames"
                    var_34_17 = 0xd9d
                    var_38_6 = "C:\x\ax2017\Engine\Windows\EditorWindow.cpp"
                    ecx_16 = "pParticleDef"
                    goto label_6f9a11
                
                int32_t i = 0
                
                if (*(eax_46 + 8) s> 0)
                    int32_t ebx_6 = 0
                    
                    do
                        int32_t ecx_19 = 0
                        int32_t* esi_9 = *eax_46 + ebx_6
                        int32_t edx_19 = *esi_9
                        
                        if (edx_19 s<= 0)
                        label_6f990d:
                            sub_6f2c70(&var_14)
                            int32_t var_8_1 = 0
                            char* const ecx_21 = &data_801800
                            int32_t* eax_48 = var_14
                            
                            if (eax_48 != 0)
                                ecx_21 = eax_48
                            
                            char* const var_30_9 = ecx_21
                            sub_6dce10(eax_48, esi_9, &data_8cc5f8, 1)
                            int32_t var_8_2 = 1
                            
                            if (data_cf65bc != 0)
                                int32_t* eax_49 = var_14
                                
                                if (eax_49 != 0 && *eax_49 != 0)
                                    char* eax_50 = sub_63d4e0(&var_14)
                                    int32_t temp0_1 = *(eax_50 + 4)
                                    *(eax_50 + 4) -= 1
                                    
                                    if (temp0_1 == 1)
                                        sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
                                        var_14 = &data_801800
                            
                            int32_t var_8_3 = 0xffffffff
                        else
                            int32_t* eax_47 = esi_9[2]
                            
                            while (*eax_47 != 1)
                                ecx_19 += 1
                                eax_47 = &eax_47[4]
                                
                                if (ecx_19 s>= edx_19)
                                    goto label_6f990d
                        
                        eax_46 = var_18_3
                        i += 1
                        ebx_6 += 0x168
                    while (i s< *(eax_46 + 8))
            
            for (int32_t i_1 = 0; i_1 s< 0x100; i_1 += 1)
                *((i_1 << 3) + &data_147d4b4) = i_1
                *((i_1 << 3) + &data_147d4b8) = 0
            
            void* eax_51 = data_147ded0
            
            if (eax_51 != 0)
                int32_t eax_52 = *(eax_51 + 4)
                
                if (eax_52 == 0x19)
                    sub_6f0170(0xffffffff, 0xffffffff)
                else if (eax_52 == 0x1b)
                    sub_6f0970(0xffffffff)
            
            hWnd = sub_6ee5c0()

fsbase->NtTib.ExceptionList = ExceptionList
return hWnd
