// 函数: sub_4ab300
// 地址: 0x4ab300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$_Greedy_node@W4agent_status@Concurrency@@@Concurrency@@QAE@PAV?$ISource@W4agent_status@Concurrency@@@1@IPAV?$ITarget@I@1@ABV?$function@$$A6A_NABW4agent_status@Concurrency@@@Z@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(&arg1[9], 0xc, 0xf, sub_4ab1f0)
int32_t var_8_2 = 1
sub_4ac220(&arg1[3])
int32_t var_8_3 = 2
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4ac120(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
