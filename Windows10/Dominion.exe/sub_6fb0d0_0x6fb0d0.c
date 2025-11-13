// 函数: sub_6fb0d0
// 地址: 0x6fb0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14
char* ecx_1 = sub_6c85b0(&var_14, arg1)
int32_t var_8_1 = 0
char* eax_3 = var_14
int32_t result

if (eax_3 == 0 || *eax_3 == 0)
    result = 0
else
    char* var_30 = ecx_1
    int32_t* ecx_2 = &var_30
    var_30 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_63d4e0(ecx_2)
        *(eax_4 + 4) += 1
    
    result = sub_69ef40(ecx_2)
    eax_3 = var_14
    
    if (result == 0)
        char* const esi = &data_801800
        char* ecx_3 = &data_801800
        
        if (eax_3 != 0)
            ecx_3 = eax_3
        
        int32_t eax_6
        char* ecx_4
        eax_6, ecx_4 = sub_6b7ef0(ecx_3)
        var_30 = ecx_4
        char* ecx_5 = var_14
        var_30 = ecx_5
        
        if (ecx_5 != 0 && *ecx_5 != 0)
            char* eax_7 = sub_63d4e0(&var_30)
            *(eax_7 + 4) += 1
        
        sub_69faf0(eax_6, 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0)
            esi = eax_8
        
        result = sub_69f030(esi, eax_6)
        eax_3 = var_14

int32_t var_8_2 = 1

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_10 = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
