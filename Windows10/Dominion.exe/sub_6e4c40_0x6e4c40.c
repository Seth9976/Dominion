// 函数: sub_6e4c40
// 地址: 0x6e4c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7711e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
int32_t var_28
sub_6e1d60(&var_28, arg2)
int32_t var_8_1 = 1
int32_t eax_3 = var_28
void* var_24
char* var_20
char* eax_5

if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
    int32_t edi_1 = 1
    
    if (_strnicmp(*(var_24 + 4), "linear", *(var_24 + 8)) != 0
            && _strnicmp(*(var_24 + 4), "wave", *(var_24 + 8)) == 0)
        edi_1 = 0x18
    
    void* eax_11 = sub_6e17c0(*arg2)
    int32_t var_14_2 = 1
    *eax_11 = 0xc
    *(eax_11 + 4) = edi_1
    arg1[2] = &data_801800
    *arg1 = 3
    arg1[1] = eax_11
    int32_t var_8_3 = 3
    
    if (data_cf65bc != 0)
        eax_5 = var_20
    label_6e4d53:
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_12 = sub_63d4e0(&var_20)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
else
    *arg1 = eax_3
    arg1[1] = var_24
    eax_5 = var_20
    arg1[2] = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&arg1[2])
        *(eax_6 + 4) += 1
        eax_5 = var_20
    
    int32_t var_14_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        goto label_6e4d53
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
