// 函数: sub_7333e0
// 地址: 0x7333e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_NewCollection@_AsyncTaskCollection@details@Concurrency@@SAPAV123@PAV_CancellationTokenState@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *arg1

while (i != 0)
    int32_t* i_1 = i
    i = i[2]
    sub_4d6960(i_1)
    result = sub_64c080(i_1, 0x10)

arg1[2] = 0
*arg1 = 0
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
