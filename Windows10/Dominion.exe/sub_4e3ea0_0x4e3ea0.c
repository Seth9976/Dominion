// 函数: sub_4e3ea0
// 地址: 0x4e3ea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??initialize_target@?$target_block@V?$multi_link_registry@V?$ISource@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@IAEXPAVScheduler@4@PAVScheduleGroup@4@@Z@XPAV?$message@I@4@@std@@EAEPAV?$_Func_base@XPAV?$message@I@Concurrency@@@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = arg1[2]
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&arg1[2])
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, &result[3][2])
            arg1[2] = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = arg1[1]
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&arg1[1])
        int32_t temp1_1 = result[1]
        result[1] -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, &result[3][2])
            arg1[1] = &data_801800

int32_t var_8_3 = 2

if (data_cf65bc != 0)
    result = *arg1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1)
        int32_t temp2_1 = result[1]
        result[1] -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *arg1 = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
