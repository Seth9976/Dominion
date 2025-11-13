// 函数: sub_6ef470
// 地址: 0x6ef470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT eax_3 = sub_6ee740()

if (eax_3 != 0x4a && eax_3 != 5 && eax_3 != 8 && eax_3 != 9 && eax_3 != 0xa && eax_3 != 0xb
        && eax_3 != 0x4c)
    ShowWindow(GetDlgItem(data_147d470, 0x87), SW_HIDE)
    BOOL eax_6 = ShowWindow(GetDlgItem(data_147d470, 0x88), SW_HIDE)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

ShowWindow(GetDlgItem(data_147d470, 0x87), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x88), SW_SHOW)
void* eax_9 = sub_6ee7a0()
BOOL lpString_3

if (eax_9 == 0)
    lpString_3 = SetDlgItemTextA(data_147d470, 0x87, &data_801800)
else
    BOOL lpString_2
    sub_6ef360(&lpString_2, eax_9)
    BOOL lpString_1 = lpString_2
    char* const lpString = &data_801800
    
    if (lpString_1 != 0)
        lpString = lpString_1
    
    lpString_3 = SetDlgItemTextA(data_147d470, 0x87, lpString)
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        lpString_3 = lpString_2
        
        if (lpString_3 != 0 && *lpString_3 != 0)
            lpString_3 = sub_63d4e0(&lpString_2)
            int32_t temp0_1 = *(lpString_3 + 4)
            *(lpString_3 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t* eax_10 = sub_64c080(lpString_3, *(lpString_3 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10

fsbase->NtTib.ExceptionList = ExceptionList
return lpString_3
