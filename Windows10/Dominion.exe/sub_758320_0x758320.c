// 函数: sub_758320
// 地址: 0x758320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?process_whitespace@?$input_processor@DV?$console_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void*** eax_3 = operator new(0x7a0)
void*** var_14_1 = eax_3
int32_t var_8_1 = 0
void*** result = sub_757710(eax_3, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
