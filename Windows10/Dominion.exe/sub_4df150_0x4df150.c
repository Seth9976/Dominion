// 函数: sub_4df150
// 地址: 0x4df150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??wait_for_all@agent@Concurrency@@SAXIPAPAV34@PAW4agent_status@4@I@Z@XABI@std@@EAEPAV?$_Func_base@XABI@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg2

if (result != 0 && *result != 0)
    char* result_1 = result
    int32_t var_8_1 = 0
    char* ecx = &data_801800
    char* result_2
    char* eax_4 = *sub_63df30(&result_2, "(%s)")
    
    if (eax_4 != 0)
        ecx = eax_4
    
    result = sub_63d960(arg1, ecx)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
