// 函数: sub_4d58c0
// 地址: 0x4d58c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_Getcat@?$moneypunct@D$00@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg2
int32_t eax_3 = *arg1
int32_t var_54 = eax_3
int32_t eax_4 = arg1[1]
int32_t var_50 = eax_4
char* result_1 = arg1[2]
char* result_3 = result_1

if (result_1 != 0 && *result_1 != 0)
    char* eax_6 = sub_63d4e0(&result_3)
    arg2 = var_14
    *(eax_6 + 4) += 1

int32_t eax_7 = arg1[3]
int32_t edi = arg1[6]
int32_t ebx = arg1[7]
int32_t var_48 = eax_7
char* result_2 = arg1[4]
char* result_4 = result_2
int32_t var_3c = edi
int32_t var_38 = ebx
int32_t var_8_1 = 0
*arg1 = *arg2
arg1[1] = arg2[1]
sub_63d850(&arg1[2], &arg2[2])
arg1[3] = var_14[3]
arg1[4] = var_14[4]
int32_t edx_1 = var_14[7]
arg1[6] = var_14[6]
arg1[7] = edx_1
*var_14 = eax_3
var_14[1] = eax_4
sub_63d850(&arg2[2], &result_3)
var_14[3] = eax_7
char* result = result_2
var_14[4] = result
var_14[6] = edi
var_14[7] = ebx
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_3)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
