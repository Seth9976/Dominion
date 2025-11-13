// 函数: sub_4e5920
// 地址: 0x4e5920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1_TaskCollection@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* result_2
sub_63d850(arg2, sub_4dfb20(&result_2, arg1))
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* result_4 = result_2
    
    if (result_4 != 0 && *result_4 != 0)
        char* eax_4 = sub_63d4e0(&result_2)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
char* result_3
sub_4e5370(arg1 + 0x118, arg1 + 0x580, &result_3, arg1 + 0x118)
int32_t var_8_4 = 2
char* result_5 = result_3
int32_t* result
char** ecx_7

if (result_5 == 0 || *result_5 == 0)
    char* eax_7 = *arg2
    char* const ecx_8 = &data_801800
    
    if (eax_7 != 0)
        ecx_8 = eax_7
    
    char* const var_30_3 = ecx_8
    var_8_4.b = 5
    char* result_1
    result = sub_63d850(arg2, sub_63df30(&result_1, "-k %s"))
    var_8_4.b = 6
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            ecx_7 = &result_1
        label_4e5a5c:
            result = sub_63d4e0(ecx_7)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_64c080(result, result[3] + 0x10)
else
    char* ecx_5 = *arg2
    char* const edx_4 = &data_801800
    char* result_6 = result_5
    
    if (ecx_5 != 0)
        edx_4 = ecx_5
    
    char* const var_34_1 = edx_4
    var_8_4.b = 3
    result = sub_63d850(arg2, sub_63df30(&result_2, "-k %s -x %s"))
    var_8_4.b = 4
    
    if (data_cf65bc != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            ecx_7 = &result_2
            goto label_4e5a5c
int32_t var_8_5 = 7

if (data_cf65bc != 0)
    result = result_3
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_3)
        int32_t temp1_1 = result[1]
        result[1] -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
