// 函数: sub_707070
// 地址: 0x707070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$call@IV?$function@$$A6AXABI@Z@std@@@Concurrency@@QAE@ABV?$function@$$A6AXABI@Z@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1

if (eax_3 != 0)
    _aligned_free(eax_3)

sub_7078c0(&arg1[0x47])
*arg1 = 0
int32_t var_8_1 = 0
int32_t result = sub_7078c0(&arg1[0x47])
fsbase->NtTib.ExceptionList = ExceptionList
return result
