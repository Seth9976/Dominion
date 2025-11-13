// 函数: ?_Task_scheduler_callback@?A0x8feb9fe6@details@Concurrency@@YGXPAU_TP_CALLBACK_INSTANCE@@PAXPAU_TP_WORK@@@Z
// 地址: 0x4d4ac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?__ExceptionPtrCurrentException@@YAXPAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *arg1

while (i != 0)
    int32_t* i_1 = i
    i = i[1]
    result = sub_64c080(i_1, 0xc)

arg1[2] = 0
*arg1 = 0
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
