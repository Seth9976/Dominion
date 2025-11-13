// 函数: sub_69e000
// 地址: 0x69e000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
int32_t var_8_1 = 1
arg1[1] = &data_801800
int32_t var_14_1 = 1
*arg1 = arg2
char* arg_4
sub_63d850(&arg1[1], &arg_4)
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_3 = arg_4
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
