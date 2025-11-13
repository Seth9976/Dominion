// 函数: sub_597890
// 地址: 0x597890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?RemoveCore@SchedulerProxy@details@Concurrency@@QAEXPAUSchedulerNode@23@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
int32_t var_8_1 = 0
char* eax_3 = arg3
int32_t esi = 0

while (*eax_3 != 0)
    eax_3 = sub_5a0db0(eax_3)
    esi += 1
    
    if (esi s>= 1)
        break

char* const result_1 = &data_801800
int32_t var_1c_1 = 1
sub_63da70(&result_1, arg3, eax_3 - arg3)
int32_t ecx_3 = sub_63d850(arg2, &result_1)
int32_t var_1c_2 = 0
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* const result_3 = result_1
    
    if (result_3 != 0 && *result_3 != 0)
        char* eax_5 = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        ecx_3 = *(eax_5 + 4)
        
        if (temp0_1 == 1)
            ecx_3 = sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

int32_t var_34_2 = ecx_3
int32_t var_8_3 = 0xffffffff
char* result_2
sub_597760(&result_2, arg3)
int32_t var_8_4 = 2
char* const result_8 = &data_801800
char* result_4 = result_2

if (result_4 != 0)
    if (*result_4 == 0)
        goto label_5979a6
    
    char* eax_6 = sub_63d4e0(&result_2)
    int32_t eax_8
    
    if (*(eax_6 + 8) == 1)
        char* result_5 = result_2
        char* const result_7 = &data_801800
        
        if (result_5 != 0)
            result_7 = result_5
        
        eax_8 = isdigit(sx.d(*result_7))
    
    if (*(eax_6 + 8) != 1 || eax_8 == 0)
        result_4 = result_2
    label_5979a6:
        
        if (result_4 != 0 && result_4 != &data_801800)
            if (data_cf65bc != 0 && *result_4 != 0)
                char* eax_9 = sub_63d4e0(&result_2)
                int32_t temp2_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            
            result_4 = &data_801800
            result_2 = &data_801800
    else
        result_4 = result_2

var_8_4.b = 3
char* result_6 = *arg2
result_1 = result_6

if (result_6 != 0 && *result_6 != 0)
    char* eax_10 = sub_63d4e0(&result_1)
    *(eax_10 + 4) += 1
    result_4 = result_2

int32_t var_1c_3 = 2

if (result_4 != 0)
    result_8 = result_4

sub_63d960(&result_1, result_8)
char* result = sub_63d850(arg4, &result_1)
var_8_4.b = 4

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_5 = 5

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
