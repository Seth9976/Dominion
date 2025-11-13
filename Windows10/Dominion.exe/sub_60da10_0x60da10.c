// 函数: sub_60da10
// 地址: 0x60da10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
void* eax_4 = sub_68caf0(&ExceptionList, nullptr, arg2, arg4)

if (eax_4 != 0)
    char* eax_9 = *eax_4
    *arg3 = eax_9
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(arg3)
        *(eax_10 + 4) += 1
else
    char* var_30_1 = arg2
    char* var_14
    sub_63df30(&var_14, "*%s*")
    int32_t var_8_1 = 0
    char* eax_5 = var_14
    *arg3 = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(arg3)
        *(eax_6 + 4) += 1
        eax_5 = var_14
    
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
