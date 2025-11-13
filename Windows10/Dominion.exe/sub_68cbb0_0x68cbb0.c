// 函数: sub_68cbb0
// 地址: 0x68cbb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e0b5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg2
char* eax_4 = *arg3
char* const result_2 = &data_801800
char* const edi = &data_801800

if (eax_4 != 0)
    edi = eax_4

void* eax_5 = sub_63e960(arg2)
void* eax_7 = sub_63e960(edi) - eax_5
char* result_1
sub_63e9e0(eax_7, edi, &result_1, eax_7, eax_5)
char* ecx_3 = var_18
int32_t var_8_1 = 0
char* result = result_1

if (result != 0)
    result_2 = result

int32_t ecx_5

while (true)
    char edx_1 = *result_2
    char temp0_1 = *ecx_3
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_5 = 0
            break
        
        edx_1 = result_2[1]
        char temp1_1 = ecx_3[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_2 = &result_2[2]
            ecx_3 = &ecx_3[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_5 = 0
            break
    
    ecx_5 = sbb.d(ecx_3, ecx_3, c_1) | 1
    break

if (ecx_5 != 0)
    result_2.b = 0
else
    char* const edi_2 = *arg3
    char* const ecx_6
    
    if (edi_2 != 0)
        ecx_6 = edi_2
    else
        ecx_6 = &data_801800
        edi_2 = &data_801800
    
    int32_t eax_8 = sub_63e960(ecx_6)
    int32_t eax_9 = sub_63e960(var_18)
    var_8_1.b = 1
    char* var_1c
    sub_63d850(arg4, sub_63e9e0(eax_9, edi_2, &var_1c, 0, eax_8 - eax_9))
    var_8_1.b = 2
    
    if (data_cf65bc != 0)
        char* eax_11 = var_1c
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(&var_1c)
            int32_t temp3_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
    
    result = result_1
    result_2.b = 1

int32_t var_8_2 = 3

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = result_2.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
