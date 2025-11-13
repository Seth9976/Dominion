// 函数: ??2@YAPAXIABUnothrow_t@std@@@Z
// 地址: 0x7599c3
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$uninitialize@A6AXAAPAPA_W@_E@?$dual_state_global@PAPA_W@__crt_state_management@@QAEXA6AXAAPAPA_W@_E@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t var_8_1 = 0
int32_t result = operator new(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
