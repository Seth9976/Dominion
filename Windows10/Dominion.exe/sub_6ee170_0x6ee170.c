// 函数: sub_6ee170
// 地址: 0x6ee170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$call@IV?$function@$$A6AXABI@Z@std@@@Concurrency@@QAE@ABV?$function@$$A6AXABI@Z@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = `eh vector vbase constructor iterator'(&arg1[1], 8, 0x20, sub_4d6960)
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = *arg1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            *arg1 = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
