// 函数: sub_6a3280
// 地址: 0x6a3280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f6fd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *(arg2 + 4)
char* var_38 = arg1
var_38 = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_38)
    *(eax_4 + 4) += 1

char* result_1
sub_6a17e0(&result_1)
int32_t var_8_1 = 0
char* const result_2 = &data_801800
char* result_3 = result_1
char* const result_6 = &data_801800

if (result_3 != 0)
    result_6 = result_3

char* result
void* ebx

if (sub_69fce0(result_6) != 0)
label_6a3453:
    result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t edx_6 = *(*(arg2 + 0x10) + 0x20)
    int32_t ecx_15
    
    if (edx_6 != 0)
        ecx_15 = sub_69f030(result_2, edx_6)
        result = result_1
    else if (*result_2 != edx_6.b)
        if (edx_6 == 0)
            edx_6 = sub_6b7ef0(result_2)
        
        ecx_15 = sub_69f030(result_2, edx_6)
        result = result_1
    else
        ecx_15 = 0
    
    *arg1 = ecx_15
    ebx.b = 1
else
    uint8_t* result_4 = result_1
    uint8_t* result_7 = &data_801800
    
    if (result_4 != 0)
        result_7 = result_4
    
    char* var_18
    sub_6c85b0(&var_18, result_7)
    var_8_1.b = 1
    int32_t eax_9
    int32_t esi_1
    
    if (*(*(arg2 + 0x10) + 0x20) != 0)
        char* eax_7 = var_18
        char* const ecx_3 = &data_801800
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        esi_1 = *(*(arg2 + 0x10) + 0x20)
        eax_9 = sub_6b7ef0(ecx_3)
    
    if (*(*(arg2 + 0x10) + 0x20) == 0 || eax_9 == esi_1)
        var_38 = &var_18
        sub_63d850(&result_1, var_38)
    label_6a3418:
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            char* eax_19 = var_18
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_63d4e0(&var_18)
                int32_t temp0_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
        
        var_8_1.b = 0
        goto label_6a3453
    
    char* result_5 = result_1
    char* const result_9 = &data_801800
    
    if (result_5 != 0)
        result_9 = result_5
    
    if (*result_9 == 0)
        goto label_6a33b6
    
    var_38 = 0x5c
    int32_t eax_10 = strchr(result_9, var_38.b)
    int32_t eax_11
    
    if (eax_10 == 0)
        var_38 = 0x2f
        eax_11 = strchr(result_9, var_38.b)
    
    int32_t eax_12
    
    if (eax_10 != 0 || eax_11 != 0)
        eax_12 = sub_6b7ef0(result_9)
    
    if ((eax_10 != 0 || eax_11 != 0) && eax_12 == 0)
        result_5 = result_1
    label_6a33b6:
        char* result_8 = &data_801800
        
        if (result_5 != 0)
            result_8 = result_5
        
        void* eax_15 = *(arg2 + 0x10)
        var_38 = *(eax_15 + 0x20)
        char* var_1c
        var_38 = sub_69fd50(eax_15, result_8, &var_1c, var_38)
        var_8_1.b = 2
        sub_63d850(&result_1, var_38)
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            char* eax_17 = var_1c
            
            if (eax_17 != 0 && *eax_17 != 0)
                char* eax_18 = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        
        goto label_6a3418
    
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* eax_13 = var_18
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&var_18)
            int32_t temp3_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
    
    result = result_1
    ebx.b = 0

int32_t var_8_2 = 6

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp1_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
