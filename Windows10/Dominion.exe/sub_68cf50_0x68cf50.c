// 函数: sub_68cf50
// 地址: 0x68cf50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e13d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *arg3
char* const esi = &data_801800
char* const ecx = &data_801800

if (eax_3 != 0)
    ecx = eax_3

int32_t eax_4 = sub_63e960(ecx)
char* ecx_1 = *arg3
char* const edx = &data_801800

if (ecx_1 != 0)
    edx = ecx_1

char* var_18
sub_63e9e0(eax_4, edx, &var_18, eax_4 - 3, 1)
int32_t var_8_1 = 0
sub_63d850(arg2, &var_18)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_5 = var_18
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
char* eax_7 = *arg3
char* edx_3 = &data_801800

if (eax_7 != 0)
    edx_3 = eax_7

sub_63e9e0(eax_4 - 2, edx_3, &var_18, eax_4 - 2, 1)
int32_t var_8_4 = 2
sub_63d850(arg4, &var_18)
int32_t var_8_5 = 3

if (data_cf65bc != 0)
    char* eax_9 = var_18
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(&var_18)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff
char* eax_11 = *arg3
char* edx_6 = &data_801800

if (eax_11 != 0)
    edx_6 = eax_11

char* const var_14
sub_63e9e0(eax_4 - 1, edx_6, &var_14, eax_4 - 1, 1)
int32_t var_8_7 = 4
sub_63d850(arg5, &var_14)
int32_t var_8_8 = 5

if (data_cf65bc != 0)
    char* eax_14 = var_14
    
    if (eax_14 != 0 && *eax_14 != 0)
        char* eax_15 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            var_14 = &data_801800

char* const ecx_15 = &data_801800
int32_t var_8_9 = 0xffffffff
char* eax_17 = *arg2

if (eax_17 != 0)
    ecx_15 = eax_17

if (sub_68cd20(ecx_15) != 0)
    char* eax_19 = *arg4
    char* const ecx_16 = &data_801800
    
    if (eax_19 != 0)
        ecx_16 = eax_19
    
    if (sub_68cd20(ecx_16) != 0)
        char* eax_20 = *arg5
        
        if (eax_20 != 0)
            esi = eax_20
        
        bool result = sub_68cd20(esi) == 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
