// 函数: sub_5dfeb0
// 地址: 0x5dfeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$set_variable_in_other_environment@_W@@YA_NQB_W0@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
*arg1 = &data_801800
arg1[1] = &data_801800
arg1[3] = &data_801800
int32_t var_38 = 0
int32_t var_8_1 = 0
int32_t var_18_1 = 1
int32_t var_8_2 = 1
char* var_14
sub_63d850(arg1, sub_4e3fa0(&ExceptionList, arg2, &var_14, nullptr, arg1))
int32_t var_8_3 = 2

if (data_cf65bc != 0)
    char* eax_5 = var_14
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

var_8_3.b = 0
int32_t var_8_4 = 3
sub_63d850(&arg1[1], sub_5df320(&arg1[2], arg2, &var_14, &arg1[2]))
int32_t var_8_5 = 4

if (data_cf65bc != 0)
    char* eax_9 = var_14
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

var_8_5.b = 0
sub_5df190(arg2, &arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
