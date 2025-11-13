// 函数: sub_6f5170
// 地址: 0x6f5170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
sub_6c4220(&result_1, *arg2)
int32_t var_8_1 = 0
char* const result_2 = &data_801800
char* result_3 = result_1
char* const result_4 = &data_801800

if (result_3 != 0)
    result_4 = result_3

int32_t eax_3 = sub_6fb0d0(result_4)

if (eax_3 != 0)
    *arg3 = eax_3

sub_63d850(arg4, *arg3 + 0x20)
char* result = *arg4

if (result != 0)
    result_2 = result

*arg2 = result_2
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
