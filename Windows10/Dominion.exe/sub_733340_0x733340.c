// 函数: sub_733340
// 地址: 0x733340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$uninitialize@A6AXAAPAPAD@_E@?$dual_state_global@PAPAD@__crt_state_management@@QAEXA6AXAAPAPAD@_E@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg3
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 1
char* var_24 = arg3
int32_t* ecx = &var_24
int32_t var_8_1 = 0
char* arg_c
char* eax_3 = arg_c
var_24 = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(ecx)
    *(eax_3 + 4) += 1

int32_t ebx
ebx.b = sub_732f20(eax_3, arg4, ecx.b).b
int32_t var_8_2 = 1
char* result

if (data_cf65bc != 0)
    char* ecx_1 = arg_c
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        result = sub_63d4e0(&arg_c)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
