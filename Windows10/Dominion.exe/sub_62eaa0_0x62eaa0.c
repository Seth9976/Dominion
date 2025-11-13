// 函数: sub_62eaa0
// 地址: 0x62eaa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??wait_for_all@agent@Concurrency@@SAXIPAPAV34@PAW4agent_status@4@I@Z@XABI@std@@EAEPAV?$_Func_base@XABI@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *arg3
char* edx = &data_801800

if (eax_3 != 0)
    edx = eax_3

int32_t var_8_1 = 0
int32_t* result_1
int32_t* result = sub_63d850(arg3, sub_63dfa0(eax_3, edx, &result_1, "$LANG$", arg4))
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
