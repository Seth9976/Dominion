// 函数: sub_4d4980
// 地址: 0x4d4980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?CancelStealers@ContextBase@details@Concurrency@@QAEXPAV_TaskCollectionBase@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
int32_t* result_1 = result
int32_t var_8_1 = 0
int32_t var_14 = 0
sub_4d47c0(arg3, arg2)
int32_t var_8_2 = 0
char* const edi = &data_801800
char* const ecx = &data_801800
char* const edx = &data_801800
int32_t var_14_1 = 1
int32_t* arg_8
char* eax_4 = *arg_8

if (eax_4 != 0)
    ecx = eax_4

char* eax_5 = *result

if (eax_5 != 0)
    edx = eax_5

int32_t var_8_3 = 1
sub_63d850(result, sub_63dfa0(eax_5, edx, &arg_8, arg4, ecx))
int32_t var_8_4 = 2

if (data_cf65bc != 0)
    int32_t* eax_7 = arg_8
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&arg_8)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

char* const ecx_5 = &data_801800
var_8_4.b = 0
char* eax_10 = *arg6

if (eax_10 != 0)
    ecx_5 = eax_10

char* eax_11 = *result

if (eax_11 != 0)
    edi = eax_11

int32_t var_8_5 = 3
sub_63d850(result, sub_63dfa0(eax_11, edi, &arg_8, arg5, ecx_5))
int32_t var_8_6 = 4

if (data_cf65bc != 0)
    int32_t* eax_13 = arg_8
    
    if (eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_63d4e0(&arg_8)
        int32_t temp1_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
