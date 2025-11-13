// 函数: sub_4ab380
// 地址: 0x4ab380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$call@IV?$function@$$A6AXABI@Z@std@@@Concurrency@@QAE@ABV?$function@$$A6AXABI@Z@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(arg1 + 0xaa4, 0x18, 0x14, sub_4ab410)
`eh vector vbase constructor iterator'(arg1 + 0x140, 0x14, 0x78, sub_4ab410)
`eh vector vbase constructor iterator'(arg1 + 0x4c, 0xc, 0x14, sub_4ab1f0)
sub_4ac080(arg1 + 0x3c)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4ac080(arg1 + 0x30)
fsbase->NtTib.ExceptionList = ExceptionList
return result
