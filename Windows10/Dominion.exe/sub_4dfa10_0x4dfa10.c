// 函数: sub_4dfa10
// 地址: 0x4dfa10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1
int32_t* result_2 = result_1
int32_t ecx = *arg2

if (ecx == *result_2)
    result = arg2[1]

if ((ecx != *result_2 || result != result_2[1]) && (ecx != 0 || arg2[1] != ecx))
    char* eax_3 = *arg3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_63d4e0(arg3)
        int32_t esi_1 = *(eax_4 + 8)
        sub_63d5e0(eax_4, esi_1 + 2, arg3, 1)
        int16_t* ecx_3 = *arg3
        *(ecx_3 + esi_1) = 0x202c
        *(ecx_3 + esi_1 + 2) = 0
    
    char* const esi_2 = &data_801800
    int32_t var_28_1 = arg2[1]
    char* const ecx_4 = &data_801800
    int32_t var_2c_1 = *arg2
    char* eax_6 = *arg4
    
    if (eax_6 != 0)
        ecx_4 = eax_6
    
    char* const var_30_1 = ecx_4
    int32_t var_8_1 = 0
    char* eax_8 = *sub_63df30(&result_1, "%s(%d,%d)")
    
    if (eax_8 != 0)
        esi_2 = eax_8
    
    result = sub_63d960(arg3, esi_2)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
return result
