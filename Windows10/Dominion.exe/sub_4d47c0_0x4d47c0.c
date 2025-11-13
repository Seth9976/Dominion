// 函数: sub_4d47c0
// 地址: 0x4d47c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?AddVirtualProcessorRoots@SchedulerProxy@details@Concurrency@@QAEXPAPAUIVirtualProcessorRoot@3@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_8_1 = 0
int32_t var_18 = 0
void* eax_4 = sub_68c730(arg2, sub_4c89a0(), arg1)

if (eax_4 == 0)
    eax_4 = sub_68c730(arg2, eax_4 + 1, arg1)

*arg1 = &data_801800
int32_t var_8_2 = 0
int32_t var_18_1 = 1

if (eax_4 != 0)
    sub_63d850(arg1, eax_4)
else
    char* var_30 = arg2
    int32_t var_8_3 = 1
    char* var_14
    sub_63d850(arg1, sub_63df30(&var_14, "*%s*"))
    int32_t var_8_4 = 2
    
    if (data_cf65bc != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
