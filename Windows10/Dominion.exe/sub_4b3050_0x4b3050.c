// 函数: sub_4b3050
// 地址: 0x4b3050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@P6A_NABW4agent_status@Concurrency@@@Z_NABW412@@std@@EAEPAV?$_Func_base@_NABW4agent_status@Concurrency@@@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
`eh vector vbase constructor iterator'(&arg1[0xa], 4, 8, sub_63d770)
char* result = `eh vector vbase constructor iterator'(&arg1[2], 4, 8, sub_63d770)
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = arg1[1]
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&arg1[1])
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            arg1[1] = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = *arg1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            *arg1 = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
