// 函数: sub_6a1bf0
// 地址: 0x6a1bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@_WV?$console_output_adapter@_W@__crt_stdio_output@@V?$standard_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@_WW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
char* var_2c = arg1
int32_t var_8_1 = 1
char* arg_4
char* eax_3 = arg_4
var_2c = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_2c)
    *(eax_4 + 4) += 1

char* const var_14
sub_6a17e0(&var_14)
var_8_1.b = 2
char* const edx = &data_801800
char* const eax_5 = var_14

if (eax_5 != 0)
    edx = eax_5

sub_6c4050(arg1, edx)
int32_t var_18_1 = 1
var_8_1.b = 3

if (data_cf65bc != 0)
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            var_14 = &data_801800

int32_t var_8_2 = 4

if (data_cf65bc != 0)
    char* eax_8 = arg_4
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&arg_4)
        int32_t temp1_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
