// 函数: sub_48a4d0
// 地址: 0x48a4d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_CallInContext@_ContextCallback@details@Concurrency@@QBEXV?$function@$$A6AXXZ@std@@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
data_b809fc = sub_64c020(0x2000)
data_b80a04 = 0x400
data_b80a00 = 0
__builtin_memset(&data_b80a08, 0, 0x28)
int32_t i_1 = 6
void* eax_4 = &data_b80a80
int32_t i

do
    *eax_4 = 0
    eax_4 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t result = _atexit(sub_773bc0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
