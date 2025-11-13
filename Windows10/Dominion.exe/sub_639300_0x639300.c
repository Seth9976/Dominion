// 函数: sub_639300
// 地址: 0x639300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_main@@YAHXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = arg2
int32_t eax_3 = *arg1
char* ebx = arg1[1]
int32_t var_2c = eax_3
char* var_28 = ebx

if (ebx != 0 && *ebx != 0)
    char* eax_5 = sub_63d4e0(&var_28)
    arg2 = result_1
    *(eax_5 + 4) += 1

int32_t edi = arg1[2]
int32_t var_24 = edi
int32_t var_8_1 = 0
*arg1 = *arg2
sub_63d850(&arg1[1], &arg2[1])
arg1[2] = result_1[2]
*result_1 = eax_3
sub_63d850(&arg2[1], &var_28)
int32_t* result = result_1
result[2] = edi
int32_t var_8_2 = 1

if (data_cf65bc != 0 && ebx != 0 && *ebx != 0)
    result = sub_63d4e0(&var_28)
    int32_t temp0_1 = result[1]
    result[1] -= 1
    
    if (temp0_1 == 1)
        result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
