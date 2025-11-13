// 函数: sub_6ef6d0
// 地址: 0x6ef6d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT eax_3 = sub_6ee740()
void* eax_4

if (eax_3 != 0)
    eax_4 = sub_6dd320(&data_8cc5f8, eax_3)

BOOL lpString_3

if (eax_3 == 0 || *(eax_4 + 0x10) != 1)
    lpString_3 = ShowWindow(GetDlgItem(data_147d470, 0x94), SW_HIDE)
else
    ShowWindow(GetDlgItem(data_147d470, 0x94), SW_SHOW)
    LRESULT eax_6 = sub_6ee740()
    int32_t var_2c_1
    char const* const ecx_1
    
    if (eax_6 == 0)
    label_6ef82c:
        char const* const var_28_5 = "EditorGetSelectedInt"
        var_2c_1 = 0x218
        ecx_1 = "EditorHasSelectedIntParam()"
    label_6ef845:
        sub_63b870(eax_6, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 
            var_2c_1, "EditorGetSelectedInt")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_6 = sub_6dd320(&data_8cc5f8, eax_6)
    
    if (*(eax_6 + 0x10) != 1)
        goto label_6ef82c
    
    LRESULT eax_7 = sub_6ee740()
    eax_6 = sub_6ee6b0()
    
    if (eax_6 == 0)
        char const* const var_28_1 = "EditorGetSelectedInt"
        var_2c_1 = 0x21c
        ecx_1 = "pEmitter"
        goto label_6ef845
    
    int32_t var_28_3 = sub_6dcf50(eax_6, eax_6, &data_8cc5f8, eax_7)
    BOOL lpString_2
    sub_63df30(&lpString_2, "%d")
    BOOL lpString_1 = lpString_2
    char* const lpString = &data_801800
    
    if (lpString_1 != 0)
        lpString = lpString_1
    
    lpString_3 = SetDlgItemTextA(data_147d470, 0x94, lpString)
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        lpString_3 = lpString_2
        
        if (lpString_3 != 0 && *lpString_3 != 0)
            lpString_3 = sub_63d4e0(&lpString_2)
            int32_t temp0_1 = *(lpString_3 + 4)
            *(lpString_3 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t* eax_9 = sub_64c080(lpString_3, *(lpString_3 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9

fsbase->NtTib.ExceptionList = ExceptionList
return lpString_3
