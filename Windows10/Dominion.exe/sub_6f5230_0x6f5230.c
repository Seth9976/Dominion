// 函数: sub_6f5230
// 地址: 0x6f5230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18
int32_t* var_2c = &var_18
bool cond:0 = sub_64b6d0(&var_18, arg2, arg3, *arg2, "%d") == 0
int32_t eax_5 = var_18

if (not(cond:0))
    *arg3 = eax_5

int32_t var_2c_1 = eax_5
char* var_14
sub_63df30(&var_14, "%d")
int32_t var_8_1 = 0
sub_63d850(arg4, &var_14)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

char* result = *arg4
char* result_1 = &data_801800

if (result != 0)
    result_1 = result

*arg2 = result_1
fsbase->NtTib.ExceptionList = ExceptionList
return result
