// 函数: sub_6e9790
// 地址: 0x6e9790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const result_1 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edi = arg1[1]
uint32_t ecx = arg1[3]
int32_t* result
int32_t edx
edx:result = sx.q(edi - ecx)
int32_t ebx_1 = result ^ edx
int32_t ebx_2 = ebx_1 - edx

if (ebx_1 != edx)
    result_1 = &data_801800
    
    if (edi s>= ecx)
        edi = ecx
    
    int32_t var_8_1 = 0
    char* const ecx_1 = &data_801800
    char* eax_5 = *arg1
    
    if (eax_5 != 0)
        ecx_1 = eax_5
    
    sub_63db30(&result_1, ecx_1, edi)
    char* eax_6 = *arg1
    int32_t ecx_4
    
    if (eax_6 == 0 || *eax_6 == 0)
        ecx_4 = 0
    else
        ecx_4 = *(sub_63d4e0(arg1) + 8)
    
    char* eax_8 = *arg1
    char* const edx_1 = &data_801800
    
    if (eax_8 != 0)
        edx_1 = eax_8
    
    sub_63db30(&result_1, &edx_1[edi + ebx_2], ecx_4 - edi - ebx_2)
    result = sub_63d850(arg1, &result_1)
    arg1[1] = edi
    arg1[3] = edi
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
