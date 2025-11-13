// 函数: sub_6f4ec0
// 地址: 0x6f4ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771fcd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
int32_t var_1c
int32_t* var_34 = &var_1c
int32_t var_20
int32_t* var_38 = &var_20

if (sub_64b6d0(&var_20, arg2, arg3, *arg2, " %f %f") != 0)
    int32_t ecx = var_1c
    *esi = var_20
    esi[1] = ecx

var_38.q = _mm_cvtps_pd(esi[1])
char* var_40
var_40.q = _mm_cvtps_pd(*esi)
char* var_18
sub_63df30(&var_18, "%g %g")
int32_t var_8_1 = 0
sub_63d850(arg4, &var_18)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_6 = var_18
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

char* result = *arg4
char* result_1 = &data_801800

if (result != 0)
    result_1 = result

*arg2 = result_1
fsbase->NtTib.ExceptionList = ExceptionList
return result
