// 函数: sub_4df630
// 地址: 0x4df630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763f4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *arg2
char* const result_2 = arg4
char* const result_1 = result_2

if (ecx != 0 && *ecx != 0)
    char* eax_4 = sub_63d4e0(arg2)
    int32_t esi = *(eax_4 + 8)
    sub_63d5e0(eax_4, esi + 2, arg2, 1)
    int16_t* ecx_3 = *arg2
    *(ecx_3 + esi) = 0x202c
    *(ecx_3 + esi + 2) = 0
    result_2 = result_1

sub_63d960(arg2, *(sub_571b30(result_2, 0x17) + 0x58))
char* result

if (arg5 == 0 || *arg5 == 0)
    void* eax_9 = sub_571b30(result_2, 0x17)
    int32_t var_c94[0x320]
    result = sub_4df200(eax_9, arg3, eax_9, &var_c94)
    
    if (result != 0)
        result_1 = &data_801800
        int32_t esi_2 = 0
        int32_t var_8_3 = 2
        
        if (result s> 0)
            do
                sub_4df630(var_c94[esi_2], 0, 0, eax_2)
                esi_2 += 1
            while (esi_2 s< result)
        
        result = sub_4df150(arg2, &result_1)
        int32_t var_8_4 = 3
        
        if (data_cf65bc != 0)
            result = result_1
        label_4df7ea:
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
else
    result = &data_801800
    result_1 = &data_801800
    int32_t esi_1 = 0
    int32_t var_8_1 = 0
    
    if (arg6 s> 0)
        do
            int32_t eax_8 = arg5[esi_1]
            
            if (eax_8 == 0)
                break
            
            sub_4df630(eax_8, 0, 0, eax_2)
            esi_1 += 1
        while (esi_1 s< arg6)
        
        result = result_1
        
        if (result != 0 && *result != 0)
            sub_4df150(arg2, &result_1)
            result = result_1
    
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        goto label_4df7ea

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
