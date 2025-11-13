// 函数: sub_6c4050
// 地址: 0x6c4050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770116
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
*arg1 = &data_801800
int32_t var_8_1 = 0
int32_t var_18_1 = 1

if (strchr(arg2, 0x3a) != 0)
    sub_63d8d0(arg1, arg2)
else
    char* var_14
    int32_t var_8_3
    
    if (_strnicmp(arg2, "sys", 3) != 0)
        int32_t eax_6 = _strnicmp(arg2, "res", 3)
        int32_t eax_7
        
        if (eax_6 != 0)
            eax_7 = _strnicmp(arg2, "xbin", 4)
        
        if (eax_6 != 0 && eax_7 != 0)
            char* var_38_2 = arg2
            sub_63b5f0("Non standard asset path %s")
            char* var_40_4 = arg2
            char* var_44_2 = &data_147cf90
            int32_t var_8_4 = 5
            sub_63d850(arg1, sub_63df30(&var_14, "%s/%s"))
            var_8_3 = 6
            goto label_6c4190
        
        if (data_147cf90 != 0)
            char* var_3c_2 = &data_147cf90
            int32_t var_8_5 = 3
            sub_63d850(arg1, sub_63df30(&var_14, "%s/%s"))
            var_8_3 = 4
            goto label_6c4190
        
        sub_63d8d0(arg1, arg2)
    else
        char* var_38 = arg2
        int32_t var_3c_1 = 0x147d098
        int32_t var_8_2 = 1
        sub_63d850(arg1, sub_63df30(&var_14, "%s/%s"))
        var_8_3 = 2
    label_6c4190:
        
        if (data_cf65bc != 0)
            char* eax_10 = var_14
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
        
        var_8_3.b = 0

char* esi_1 = nullptr

while (true)
    char* eax_12 = *arg1
    int32_t eax_14
    
    if (eax_12 == 0 || *eax_12 == 0)
        eax_14 = 0
    else
        eax_14 = *(sub_63d4e0(arg1) + 8)
    
    if (esi_1 s>= eax_14)
        break
    
    char* eax_15 = *arg1
    char* const ecx_7 = &data_801800
    
    if (eax_15 != 0)
        ecx_7 = eax_15
    
    if (*(ecx_7 + esi_1) == 0x2f)
        sub_63dc00(arg1, esi_1, 0x5c)
    
    esi_1 = &esi_1[1]

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
