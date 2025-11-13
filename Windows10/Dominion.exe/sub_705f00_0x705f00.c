// 函数: sub_705f00
// 地址: 0x705f00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lock_and_call@V<lambda_d51eb34c9f7d53dbc39f6b791b6a3e42>@@@@YAXW4__acrt_lock_id@@$$QAV<lambda_d51eb34c9f7d53dbc39f6b791b6a3e42>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_2c = arg1
int32_t var_8_1 = 0
char* result_1
char* result_2
sub_705410(sub_705410(sub_63b5f0("Compiling opengl shader %s"), arg1, &result_1, 0), arg1, 
    &result_2, 1)
var_8_1.b = 1
char* result_3 = result_1
int32_t ecx_3

if (result_3 == 0 || *result_3 == 0)
    ecx_3 = 0
else
    ecx_3 = *(sub_63d4e0(&result_1) + 8)

*(arg2 + 0x30) = ecx_3 + 1
int32_t eax_6 = sub_687730(ecx_3 + 1)
char* result_5 = result_1
char* const result_8 = &data_801800
*(arg2 + 0x38) = eax_6
char* result_7 = &data_801800

if (result_5 != 0)
    result_7 = result_5

memcpy(eax_6, result_7, *(arg2 + 0x30))
char* result_4 = result_2
int32_t ecx_6

if (result_4 == 0 || *result_4 == 0)
    ecx_6 = 0
else
    ecx_6 = *(sub_63d4e0(&result_2) + 8)

*(arg2 + 0x40) = ecx_6 + 1
int32_t eax_8 = sub_687730(ecx_6 + 1)
char* result_6 = result_2
*(arg2 + 0x48) = eax_8

if (result_6 != 0)
    result_8 = result_6

memcpy(eax_8, result_8, *(arg2 + 0x40))
var_8_1.b = 2
char* result

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_2 = &data_801800

int32_t var_8_2 = 3

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
