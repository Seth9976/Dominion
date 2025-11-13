// 函数: sub_64cba0
// 地址: 0x64cba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??initialize_source@?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@IAEXPAVScheduler@4@PAVScheduleGroup@4@@Z@XPAV?$message@I@4@@std@@EAEPAV?$_Func_base@XPAV?$message@I@Concurrency@@@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
sub_64cc20(&arg1[1], &arg2[1])
int32_t var_8_1 = 0
sub_64cc20(&arg1[6], &arg2[6])
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
