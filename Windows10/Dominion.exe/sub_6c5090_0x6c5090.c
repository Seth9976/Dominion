// 函数: sub_6c5090
// 地址: 0x6c5090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7702c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg1
int32_t var_1c = 0
int32_t var_8_1 = 1

if (data_8c4157 == 0)
    sub_63b870(&ExceptionList, &data_801800, "gCompilingMode", "C:\x\ax2017\Engine\DefLoad.cpp", 
        0x161, "AssetSideCarMakeFullPath")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* arg_4

if (arg2 == 3 || arg2 == 0x21 || arg2 == 0x15 || arg2 == 0xa || arg2 == 4 || arg2 == 2
        || arg2 == 0x25 || arg2 == 0x1c || arg2 == 0x24)
    char* var_18
    sub_63d720(&var_18, ".xml")
    var_8_1.b = 2
    var_8_1.b = 3
    char* edx = &data_801800
    char* const var_14
    char* eax_5 = *sub_63dde0(&arg_4, &var_14, &var_18)
    
    if (eax_5 != 0)
        edx = eax_5
    
    sub_6c4050(arg1, edx)
    int32_t var_1c_2 = 1
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                var_14 = &data_801800
    
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        char* eax_8 = var_18
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(&var_18)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t var_8_3 = 6
else
    sub_63d720(arg1, &data_801800)
    int32_t var_1c_1 = 1
    int32_t var_8_2 = 7

if (data_cf65bc != 0)
    char* eax_10 = arg_4
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(&arg_4)
        int32_t temp2_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
