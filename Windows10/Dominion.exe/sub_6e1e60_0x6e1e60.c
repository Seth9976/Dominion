// 函数: sub_6e1e60
// 地址: 0x6e1e60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_77119e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const ebx = arg2
char* const var_14 = ebx
int32_t* var_1c = arg3
int32_t var_18 = 0
char* i_1 = *(ebx + 4)

if (i_1 != 0)
    char* i
    
    do
        if (arg4(zx.d(*i_1), eax_2) == 0)
            break
        
        i = i_1
        i_1 = &i_1[1]
    while (i != 0xffffffff)
    ebx = var_14

char* eax_5 = *(ebx + 4)

if (i_1 == eax_5)
    *arg3 = data_cb2f14
    arg3[1] = data_cb2f18
    void* eax_8 = data_cb2f1c
    arg3[2] = eax_8
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&arg3[2])
        *(eax_9 + 4) += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

if (eax_5 == 0)
    sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

var_14 = &data_801800
sub_63db30(&var_14, eax_5, i_1 - eax_5)
int32_t var_8_1 = 1
int32_t var_2c
sub_6e19e0(&var_2c, &var_14)
var_8_1.b = 2
int32_t eax_11 = var_2c
*(ebx + 4) = i_1
*arg3 = eax_11
int32_t var_28
arg3[1] = var_28
char* var_24
char* eax_13 = var_24
arg3[2] = eax_13

if (eax_13 != 0 && *eax_13 != 0)
    char* eax_14 = sub_63d4e0(&arg3[2])
    *(eax_14 + 4) += 1
    eax_13 = var_24

int32_t var_18_1 = 1
var_8_1.b = 3

if (data_cf65bc != 0 && eax_13 != 0 && *eax_13 != 0)
    char* eax_15 = sub_63d4e0(&var_24)
    int32_t temp1_1 = *(eax_15 + 4)
    *(eax_15 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        var_24 = &data_801800

int32_t var_8_2 = 4

if (data_cf65bc != 0)
    char* const eax_16 = var_14
    
    if (eax_16 != 0 && *eax_16 != 0)
        char* eax_17 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
