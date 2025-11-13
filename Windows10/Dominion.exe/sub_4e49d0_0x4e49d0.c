// 函数: sub_4e49d0
// 地址: 0x4e49d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7643cd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x4cc0)
int32_t __saved_ebp
char* var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_4cd0
void var_3340

if (*(ecx + 0xc) == 0)
    *(ecx + 0x28)
    *(ecx + 0x30)
    memcpy(&var_3340, sub_4deeb0(&var_4cd0), 0x1990)
    memcpy(arg2, &var_3340, 0x1990)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

sub_4e4830()
int32_t var_8_1 = 0
*(ecx + 0x30)
void var_19b0
memcpy(&var_19b0, 
    sub_4dec00(&var_4cd0, *(ecx + 0x28), 0x1990, var_18, arg1, ExceptionList, var_c, arg2))
memcpy(&var_3340, &var_19b0, 0x1990)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_6 = var_18
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

memcpy(arg2, &var_3340, 0x1990)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
