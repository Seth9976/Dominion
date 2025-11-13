// 函数: sub_6532f0
// 地址: 0x6532f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@P6A_NABW4agent_status@Concurrency@@@Z_NABW412@@std@@EAEPAV?$_Func_base@_NABW4agent_status@Concurrency@@@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = *(arg1 + 0x1e0)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x1e0)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x1e0) = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = *(arg1 + 0x134)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x134)
        int32_t temp1_1 = result[1]
        result[1] -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x134) = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
