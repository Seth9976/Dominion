// 函数: sub_4d6880
// 地址: 0x4d6880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$call@IV?$function@$$A6AXABI@Z@std@@@Concurrency@@QAE@ABV?$function@$$A6AXABI@Z@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = *(arg1 + 0x20)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0x20)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, &result[3][2])
            *(arg1 + 0x20) = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
