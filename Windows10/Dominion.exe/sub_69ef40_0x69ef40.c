// 函数: sub_69ef40
// 地址: 0x69ef40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?construct_ptd@@YAXQAU__acrt_ptd@@QAPAU__crt_locale_data@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_24 = arg1
int32_t var_8_1 = 0
char* arg_4
char* eax_3 = arg_4
var_24 = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_24)
    *(eax_4 + 4) += 1

char* const var_14
sub_6a0010(&var_14)
var_24 = &var_14
void* eax_5 = sub_6a0140(var_24)
int32_t result

if (eax_5 == 0)
    result = 0
else
    result = *eax_5

var_8_1.b = 1

if (data_cf65bc != 0)
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            var_14 = &data_801800

int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_8 = arg_4
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&arg_4)
        int32_t temp1_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
