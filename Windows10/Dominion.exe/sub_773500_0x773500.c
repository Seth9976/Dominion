// 函数: sub_773500
// 地址: 0x773500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1_UShinit@std@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(0x8db3e8, 0xc, 0x14, sub_4ab1f0)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4ab380(0x8da748)
fsbase->NtTib.ExceptionList = ExceptionList
return result
