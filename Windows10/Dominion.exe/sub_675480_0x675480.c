// 函数: sub_675480
// 地址: 0x675480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d79e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
char* var_30 = arg1
int32_t var_1c = 0
char* eax_3 = *arg2
var_30 = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_30)
    *(eax_4 + 4) += 1

char* var_14
sub_63e330(&var_14)
int32_t var_8_1 = 1
char* const ecx_2 = &data_801800
char* eax_5 = var_14
var_30 = 0x2e

if (eax_5 != 0)
    ecx_2 = eax_5

int32_t eax_6 = strchr(ecx_2, var_30.b)
char* eax_7 = var_14

if (eax_6 != 0)
    char* edx
    
    if (eax_7 != 0)
        edx = eax_7
        
        if (edx == 0)
            var_30 = "XString::XString"
            sub_63b870(eax_7, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, var_30)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    else
        eax_7 = &data_801800
        edx = &data_801800
    
    char* const var_18 = &data_801800
    var_30 = eax_6 - eax_7
    sub_63db30(&var_18, edx, var_30)
    var_8_1.b = 3
    char* const esi_1 = var_18
    *arg1 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_9 = sub_63d4e0(arg1)
        *(eax_9 + 4) += 1
    
    int32_t var_1c_2 = 1
    var_8_1.b = 4
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_10 = sub_63d4e0(&var_18)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
    
    int32_t var_8_3 = 5
    
    if (data_cf65bc != 0)
        eax_7 = var_14
    label_6755bf:
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_11 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
else
    *arg1 = eax_7
    
    if (eax_7 != 0 && *eax_7 != eax_6.b)
        char* eax_8 = sub_63d4e0(arg1)
        *(eax_8 + 4) += 1
        eax_7 = var_14
    
    int32_t var_1c_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        goto label_6755bf

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
