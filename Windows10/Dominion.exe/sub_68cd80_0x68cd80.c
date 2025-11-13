// 函数: sub_68cd80
// 地址: 0x68cd80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e0f5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg1
char* result_1
int32_t* result_3 = result_1
char* eax_3 = *result_3
char* var_14

if (eax_3 == 0 || *eax_3 == 0)
    var_14 = nullptr
else
    var_14 = *(sub_63d4e0(result_3) + 8)

char* eax_6 = *arg1
char* const esi_1 = &data_801800

if (eax_6 != 0)
    esi_1 = eax_6

int32_t eax_7 = sub_63e960(esi_1)
char* ecx_2 = var_14
void* eax_8 = eax_7 - ecx_2
sub_63e9e0(eax_8, esi_1, &result_1, eax_8, ecx_2)
int32_t var_8_1 = 0
char* const ecx_4 = &data_801800
char* eax_9 = *result_3
char* const result_2 = &data_801800

if (eax_9 != 0)
    ecx_4 = eax_9

char* result = result_1

if (result != 0)
    result_2 = result

int32_t ecx_6
char* const ebx

while (true)
    ebx.b = *result_2
    char temp0_1 = *ecx_4
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_6 = 0
            break
        
        ebx.b = result_2[1]
        char temp1_1 = ecx_4[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            result_2 = &result_2[2]
            ecx_4 = &ecx_4[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_6 = 0
            break
    
    ecx_6 = sbb.d(ecx_4, ecx_4, c_1) | 1
    break

bool cond:1_1

if (ecx_6 == 0)
    char* eax_10 = *var_18
    int32_t esi_2
    
    if (eax_10 == 0 || *eax_10 == ecx_6.b)
        esi_2 = 0
    else
        esi_2 = *(sub_63d4e0(var_18) + 8)
    
    char* eax_12 = *result_3
    int32_t ecx_9
    
    if (eax_12 == 0 || *eax_12 == 0)
        ecx_9 = 0
    else
        ecx_9 = *(sub_63d4e0(result_3) + 8)
    
    char* eax_14 = *var_18
    char* const edi = &data_801800
    char* const edx_1 = &data_801800
    
    if (eax_14 != 0)
        edx_1 = eax_14
    
    var_8_1.b = 1
    sub_63d850(arg2, sub_63e9e0(eax_14, edx_1, &var_14, esi_2 - ecx_9 - 1, 1))
    var_8_1.b = 2
    
    if (data_cf65bc != 0)
        char* eax_16 = var_14
        
        if (eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_63d4e0(&var_14)
            int32_t temp3_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
    
    var_8_1.b = 0
    char* eax_18 = *arg2
    
    if (eax_18 != 0)
        edi = eax_18
    
    cond:1_1 = sub_68cd20(edi) == 0
    result = result_1

if (ecx_6 != 0 || cond:1_1)
    ebx.b = 0
else
    ebx.b = 1

int32_t var_8_2 = 3

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
