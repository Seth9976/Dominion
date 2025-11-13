// 函数: sub_693050
// 地址: 0x693050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0VirtualProcessorRoot@details@Concurrency@@QAE@PAVSchedulerProxy@12@PAUSchedulerNode@12@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char arg_4

if (arg_4 == 0)
    char* ecx_5 = *arg2
    char* const eax_8 = &data_801800
    
    if (ecx_5 != 0)
        eax_8 = ecx_5
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

int32_t* var_24 = arg2
char* const esi = &data_801800
char* eax_4 = *sub_691e10(&arg_4, arg1)

if (eax_4 != 0)
    esi = eax_4

int32_t var_8_1 = 0

if (data_cf65bc != 0)
    char* eax_5 = arg_4.d
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return esi
