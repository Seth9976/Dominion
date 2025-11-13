// 函数: sub_6e4a60
// 地址: 0x6e4a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$call@IV?$function@$$A6AXABI@Z@std@@@Concurrency@@QAE@ABV?$function@$$A6AXABI@Z@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = `eh vector vbase constructor iterator'(arg1 + 0x10, 0xc, 4, sub_4ab280)
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    result = *(arg1 + 0xc)
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1 + 0xc)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            *(arg1 + 0xc) = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
