// 函数: sub_4abee0
// 地址: 0x4abee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$propagator_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@I@Concurrency@@@2@V?$ordered_message_processor@I@2@@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_cc8d50 == 0)
    data_cc8d50 = 0

sub_4ab4a0(&var_14:3)
int32_t var_8_1 = 0
sub_4b3380()
int32_t var_8_2 = 0xffffffff
sub_4ab510()
sub_4ab5b0(&var_14:3)
sub_4ab620()
int32_t result = SteamAPI_RunCallbacks(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
