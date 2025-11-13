// 函数: sub_60dd30
// 地址: 0x60dd30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b016
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg3
int32_t var_18 = 0
int32_t var_34 = arg2[4]
char* var_14
sub_63df30(&var_14, "dom_expansion_name_%s")
int32_t var_8_1 = 1
char* const edx = &data_801800
char* eax_3 = var_14
int32_t var_34_1 = *arg2

if (eax_3 != 0)
    edx = eax_3

sub_60db00(eax_3, edx, arg3, arg4)
int32_t var_18_1 = 1
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_4 = var_14
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
