// 函数: sub_68bd30
// 地址: 0x68bd30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76df9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg3
int32_t var_8_1 = 0
int32_t var_18 = 0

if (arg2 == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(arg3, arg2)
int32_t var_8_2 = 0
int32_t var_18_1 = 1

if (arg4 != 0)
    sub_63d960(arg3, arg4)

char* eax_5 = *arg3
char* const edi = &data_801800
void* edx = &data_801800

if (eax_5 != 0)
    edx = eax_5

int32_t var_8_3 = 1
char* var_14
sub_63d850(arg3, sub_68bb10(eax_5, edx, &var_14, &(*U"{[p\rnm")[1], &data_86d2b0))
int32_t var_8_4 = 2

if (data_cf65bc != 0)
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

var_8_4.b = 0
char* eax_9 = *arg3
void* edx_3 = &data_801800

if (eax_9 != 0)
    edx_3 = eax_9

int32_t var_8_5 = 3
sub_63d850(arg3, sub_68bb10(eax_9, edx_3, &var_14, U"{[p\rnm", &data_86d2cc))
int32_t var_8_6 = 4

if (data_cf65bc != 0)
    char* eax_11 = var_14
    
    if (eax_11 != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

var_8_6.b = 0
char* eax_13 = *arg3
char* edx_6 = &data_801800

if (eax_13 != 0)
    edx_6 = eax_13

sub_63dfa0(eax_13, edx_6, &var_14, &(*U"{[p\rnm")[3], &data_807454)
int32_t var_18_2 = 3
int32_t var_8_7 = 5
sub_63d850(arg3, &var_14)
int32_t var_8_8 = 6

if (data_cf65bc != 0)
    char* eax_14 = var_14
    
    if (eax_14 != 0 && *eax_14 != 0)
        char* eax_15 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)

var_8_8.b = 0
char* eax_16 = *arg3

if (eax_16 != 0)
    edi = eax_16

sub_63dfa0(eax_16, edi, &var_14, &data_808894, &data_807454)
int32_t var_18_3 = 7
int32_t var_8_9 = 7
sub_63d850(arg3, &var_14)
int32_t var_8_10 = 8

if (data_cf65bc != 0)
    char* eax_17 = var_14
    
    if (eax_17 != 0 && *eax_17 != 0)
        char* eax_18 = sub_63d4e0(&var_14)
        int32_t temp3_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)

var_8_10.b = 0
sub_63e470(arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
