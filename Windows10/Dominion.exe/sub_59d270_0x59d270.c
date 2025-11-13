// 函数: sub_59d270
// 地址: 0x59d270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1ResourceManager@details@Concurrency@@AAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_24 = arg3
char* const var_40 = nullptr
int32_t var_44 = 1
int32_t var_48 = arg5
int32_t var_20 = 0
char* var_14
int32_t edx = sub_59aae0(&ExceptionList, arg2, &var_14, nullptr, arg4.b, 0x1e)
int32_t var_8_1 = 1
char* ecx_1 = *(arg4 + 0x1c)
char* eax_4

if (ecx_1 != 0xffffffff)
    var_40 = ecx_1
    var_40 = ecx_1
    var_8_1.b = 3
    char* const ecx_4 = &data_801800
    char* var_1c
    char* eax_8 = *sub_599ce0(&var_40, edx, &var_1c, var_40)
    
    if (eax_8 != 0)
        ecx_4 = eax_8
    
    var_40 = ecx_4
    char* const var_18
    sub_63df30(&var_18, "(+%s)")
    var_8_1.b = 6
    
    if (data_cf65bc != 0)
        char* eax_9 = var_1c
        
        if (eax_9 != 0 && *eax_9 != 0)
            char* eax_10 = sub_63d4e0(&var_1c)
            int32_t temp0_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                var_1c = &data_801800
    
    var_8_1.b = 5
    var_40 = &var_18
    sub_599090(&var_14, arg2, arg3, 1, "[entry]", &var_14, "[help]")
    int32_t var_20_2 = 1
    var_8_1.b = 7
    
    if (data_cf65bc != 0)
        char* eax_12 = var_18
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_63d4e0(&var_18)
            int32_t temp1_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                var_18 = &data_801800
    
    int32_t var_8_3 = 8
    
    if (data_cf65bc != 0)
        eax_4 = var_14
    label_59d3f0:
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_14 = sub_63d4e0(&var_14)
            int32_t temp2_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
else
    eax_4 = var_14
    *arg3 = eax_4
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(arg3)
        *(eax_5 + 4) += 1
        eax_4 = var_14
    
    int32_t var_20_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        goto label_59d3f0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
