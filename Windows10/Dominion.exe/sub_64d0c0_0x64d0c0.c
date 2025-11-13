// 函数: sub_64d0c0
// 地址: 0x64d0c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0_TaskCollection@details@Concurrency@@AAE@PAV012@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28)(void* arg1) = sub_64ca90
int32_t var_8_1 = 0
int32_t var_18 = 0
`eh vector constructor iterator'(&arg1[2], 0x34, 2, sub_64ca70)
int32_t var_8_2 = 0
arg1[1] = 0
*arg1 = 4
arg1[4] = arg2
int32_t var_18_1 = 1
sub_63d850(&arg1[8], &arg1[3])
arg1[9] = arg1[4]
arg1[9] = arg1[4]
*(arg1 + 0x24) = *(arg1 + 0x10)
*(arg1 + 0x24) = *(arg1 + 0x10)
arg1[0xb] = arg1[6]
int32_t ecx_1 = arg1[5]
arg1[9] = arg1[4]
arg1[0xa] = ecx_1
arg1[9] = arg1[4]
arg1[9] = arg1[4]
arg1[0x1c] = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
