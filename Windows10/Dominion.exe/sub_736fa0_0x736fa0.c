// 函数: sub_736fa0
// 地址: 0x736fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$_Greedy_node@W4agent_status@Concurrency@@@Concurrency@@QAE@PAV?$ISource@W4agent_status@Concurrency@@@1@IPAV?$ITarget@I@1@ABV?$function@$$A6A_NABW4agent_status@Concurrency@@@Z@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_73a890(&arg1[6])
int32_t var_8_2 = 1
sub_7078c0(&arg1[3])
int32_t var_8_3 = 2
int32_t result = sub_73a850(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
