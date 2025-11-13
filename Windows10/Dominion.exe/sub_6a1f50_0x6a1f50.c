// 函数: sub_6a1f50
// 地址: 0x6a1f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f5ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** result = arg1
char** result_1 = result
int32_t var_8_1 = 0
int32_t var_1c = 0
char* esi_1 = *data_147d094
char* var_20 = esi_1

if (esi_1 != 0 && *esi_1 != 0)
    arg1 = &var_20
    char* eax_3 = sub_63d4e0(arg1)
    *(eax_3 + 4) += 1

int32_t var_1c_1 = 2
int32_t* var_3c = arg1
int32_t var_8_2 = 1
int32_t* eax_4 = *(arg2 + 0x20)
var_3c = eax_4

if (eax_4 != 0 && *eax_4 != 0)
    char* eax_5 = sub_63d4e0(&var_3c)
    *(eax_5 + 4) += 1

char* var_14
sub_6c5250(&var_14)
var_8_2.b = 2
char* edi_1 = var_14
char* var_18 = edi_1

if (edi_1 != 0 && *edi_1 != 0)
    char* eax_6 = sub_63d4e0(&var_18)
    *(eax_6 + 4) += 1

var_8_2.b = 3
int32_t* ecx_3 = data_147d094
var_3c = &var_18
int32_t* ecx_4 = sub_63d850(ecx_3, var_3c)
var_8_2.b = 4

if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
    char* eax_7 = sub_63d4e0(&var_18)
    int32_t temp0_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    ecx_4 = *(eax_7 + 4)
    
    if (temp0_1 == 1)
        ecx_4 = sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

var_8_2.b = 2
char* arg_4
char* eax_8 = arg_4
var_3c = ecx_4
int32_t* eax_9 = *(eax_8 + 0x20)
var_3c = eax_9

if (eax_9 != 0 && *eax_9 != 0)
    char* eax_10 = sub_63d4e0(&var_3c)
    *(eax_10 + 4) += 1

sub_6a1cf0(result)
int32_t var_1c_2 = 3
arg_4 = esi_1

if (esi_1 != 0 && *esi_1 != 0)
    char* eax_11 = sub_63d4e0(&arg_4)
    *(eax_11 + 4) += 1

var_8_2.b = 5
int32_t* ecx_10 = data_147d094
var_3c = &arg_4
sub_63d850(ecx_10, var_3c)
var_8_2.b = 6

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_12 = sub_63d4e0(&arg_4)
    int32_t temp1_1 = *(eax_12 + 4)
    *(eax_12 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

var_8_2.b = 7

if (data_cf65bc != 0)
    char* eax_13 = var_14
    
    if (eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            var_14 = &data_801800

int32_t var_8_3 = 8

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_15 = sub_63d4e0(&var_20)
    int32_t temp3_1 = *(eax_15 + 4)
    *(eax_15 + 4) -= 1
    
    if (temp3_1 == 1)
        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
