// 函数: sub_5c5d80
// 地址: 0x5c5d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7698a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_40 = arg3
int32_t esi = *(arg2[6] + 4)
int32_t var_28 = *arg2
int32_t var_24 = esi
int32_t edx = *(arg3[3] + 4)
int32_t var_30 = *arg3
int32_t var_2c = edx
int32_t var_40_1 = *arg5
void* result = sub_5c7590(&var_30, arg3[2], arg3[1], &var_30, &var_28, *arg4, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
