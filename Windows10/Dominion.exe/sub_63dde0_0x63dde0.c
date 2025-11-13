// 函数: sub_63dde0
// 地址: 0x63dde0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1?$propagator_block@V?$multi_link_registry@V?$ITarget@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@2@V?$ordered_message_processor@W4agent_status@Concurrency@@@2@@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_14_1 = 0
char* eax_3 = *arg1
*arg2 = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(arg2)
    *(eax_4 + 4) += 1

char* const edx = &data_801800
int32_t var_8_2 = 0
int32_t var_14_2 = 1
char* ecx_2 = *arg3

if (ecx_2 != 0)
    edx = ecx_2

sub_63d960(arg2, edx)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
