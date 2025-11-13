// 函数: sub_6fdb00
// 地址: 0x6fdb00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result_6 = data_147ded0

if (result_6 != 0)
    int32_t eax_3 = *(result_6 + 4)
    
    if (eax_3 == 0x22 || eax_3 == 0x1d || eax_3 == 0x19 || eax_3 == 0x1b || eax_3 == 0x1e
            || eax_3 == 0x20)
        *(result_6 + 0x1c) -= 1

uint32_t result_5 = arg1[8]
data_147ded0 = arg1
uint32_t result_4 = result_6
result_4 = result_5

if (result_5 != 0 && *result_5 != 0)
    char* eax_4 = sub_63d4e0(&result_4)
    *(eax_4 + 4) += 1

char* result_1
sub_6c5250(&result_1)
int32_t var_8_1 = 0
char* const result_3 = &data_801800
char* result_2 = result_1

if (result_2 != 0)
    result_3 = result_2

result_4 = result_3
_chdir(result_4)
sub_6c9590()
char* result = arg1[1]

if (result == 0x22 || result == 0x1d || result == 0x19 || result == 0x1b || result == 0x1e
        || result == 0x20)
    if (*arg1 == 0)
        result_4 = 1
        result = sub_69f4a0(result, 0, arg1, result_4.b)
    
    arg1[7] += 1

if (data_147dec8 != 0)
    result_4 = 0x9c
    data_147df8c = 2
    result = memset(&data_147def0, 0, result_4)
    int32_t xmm0_1 = data_8c4634
    data_147df0c = 0x43c80000
    data_147df10 = 0x44160000
    data_147df44 = 0x3f800000
    data_147df48 = arg1
    data_147df84 = xmm0_1

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
