// 函数: sub_4db420
// 地址: 0x4db420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0UMSFreeThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@PAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1

if (*esi != 0)
    sub_4db480(arg1)
    result = sub_64c080(*esi, (esi[1] << 2) + 4)
    *esi = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
