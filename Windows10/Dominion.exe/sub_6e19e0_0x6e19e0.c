// 函数: sub_6e19e0
// 地址: 0x6e19e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7710ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
arg1[2] = &data_801800
int32_t var_8_1 = 0
int32_t var_14_1 = 1
*arg1 = 4
sub_63d850(&arg1[2], arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
