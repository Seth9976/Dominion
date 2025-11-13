// 函数: sub_6f4fb0
// 地址: 0x6f4fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771ffd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c
int32_t* var_44 = &var_1c
int64_t var_24
void* var_48 = &var_24:4
int64_t* var_4c = &var_24
char const* const var_50 = " %f %f %f"
int32_t var_54 = *arg2
int32_t eax_4 = sub_64b6d0(&var_24, arg2, arg3)

if (eax_4 == 3)
    int32_t eax_5 = var_1c
    *arg3 = var_24
    arg3[1].d = eax_5
else if (eax_4 == 1)
    int32_t xmm0_2 = var_24.d
    *arg3 = xmm0_2
    *(arg3 + 4) = xmm0_2
    arg3[1].d = xmm0_2

var_48.q = _mm_cvtps_pd(arg3[1].d)
var_50.q = _mm_cvtps_pd(*(arg3 + 4))
int64_t var_58_1 = _mm_cvtps_pd(*arg3)
char const* const var_5c = "%g %g %g"
char* var_28
sub_63df30(&var_28, "%g %g %g")
int32_t var_8_1 = 0
sub_63d850(arg4, &var_28)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_6 = var_28
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_28)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

char* result = *arg4
char* const result_1 = &data_801800

if (result != 0)
    result_1 = result

*arg2 = result_1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
