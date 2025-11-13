// 函数: sub_4ce670
// 地址: 0x4ce670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
char* result_3 = result_1
char* esi = *(result_3 + 4)
sub_63d720(&result_1, "btnBack")
char* result = result_1
char* const result_2 = &data_801800

if (result != 0)
    result_2 = result

int32_t ecx_3

while (true)
    char edx_1 = *result_2
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = result_2[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_2 = &result_2[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(result_2, result_2, c_1) | 1
    break

int32_t ebx

if (ecx_3 == 0 || *(result_3 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = 0

if (ebx.b != 0)
    data_8db660 = 0xc

fsbase->NtTib.ExceptionList = ExceptionList
return result
