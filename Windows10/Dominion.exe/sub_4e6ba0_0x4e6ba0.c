// 函数: sub_4e6ba0
// 地址: 0x4e6ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Schedule@_TaskCollection@details@Concurrency@@QAEXPAV_UnrealizedChore@23@PAVlocation@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg3
int32_t var_8_1 = 0
int32_t var_18 = 0
void* eax_4 = sub_68c730(arg2, sub_4c89a0(), arg3)
void* edi = eax_4

if (edi == 0)
    edi = sub_68c730(arg2, eax_4 + 1, arg3)

*arg3 = &data_801800
int32_t var_8_2 = 0
int32_t var_18_1 = 1
char* var_14

if (edi != 0)
    uint32_t eax_7 = sub_4c89a0()
    sub_63d850(arg3, edi)
    char* eax_8 = sub_693100(arg4, 2, arg5)
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* ecx_5 = *arg3
        char* edx_3 = &data_801800
        char* var_38_4 = ecx_5
        
        if (ecx_5 != 0)
            edx_3 = ecx_5
        
        int32_t var_8_5 = 3
        sub_63d850(arg3, sub_598720(eax_8, eax_7, &var_14, eax_8, arg4, edx_3))
        int32_t var_8_6 = 4
        goto label_4e6ca0
else
    char* var_38 = arg2
    int32_t var_8_3 = 1
    sub_63d850(arg3, sub_63df30(&var_14, "*%s*"))
    int32_t var_8_4 = 2
label_4e6ca0:
    
    if (data_cf65bc != 0)
        char* eax_10 = var_14
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
