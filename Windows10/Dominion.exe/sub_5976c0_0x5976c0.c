// 函数: sub_5976c0
// 地址: 0x5976c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?CurrentSubscriptionLevel@ResourceManager@details@Concurrency@@QAEIII@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg3
int32_t esi = 0
int32_t var_8_1 = 0
char* eax_3 = arg2
int32_t var_18 = 0

if (arg4 s> 0)
    while (*eax_3 != 0)
        eax_3 = sub_5a0db0(eax_3)
        esi += 1
        
        if (esi s>= arg4)
            break

*arg3 = &data_801800
int32_t var_8_2 = 0
int32_t var_18_1 = 1
sub_63da70(arg3, arg2, eax_3 - arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
