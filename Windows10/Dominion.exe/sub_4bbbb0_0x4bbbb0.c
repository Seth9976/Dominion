// 函数: sub_4bbbb0
// 地址: 0x4bbbb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??initialize_source@?$source_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@IAEXPAVScheduler@4@PAVScheduleGroup@4@@Z@XPAV?$message@I@4@@std@@EAEPAV?$_Func_base@XPAV?$message@I@Concurrency@@@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = *(arg1 + 0x1d4)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x1d4)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x1d4) = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = *(arg1 + 0x1c4)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x1c4)
        int32_t temp1_1 = result[1]
        result[1] -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x1c4) = &data_801800

int32_t var_8_3 = 2

if (data_cf65bc != 0)
    result = *(arg1 + 0x1c0)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x1c0)
        int32_t temp2_1 = result[1]
        result[1] -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x1c0) = &data_801800

int32_t var_8_4 = 3

if (data_cf65bc != 0)
    result = *(arg1 + 0x1bc)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x1bc)
        int32_t temp3_1 = result[1]
        result[1] -= 1
        
        if (temp3_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x1bc) = &data_801800

int32_t var_8_5 = 4

if (data_cf65bc != 0)
    result = *(arg1 + 0x1b8)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x1b8)
        int32_t temp4_1 = result[1]
        result[1] -= 1
        
        if (temp4_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x1b8) = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
