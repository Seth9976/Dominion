// 函数: sub_66c7f0
// 地址: 0x66c7f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d455
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg1
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

do
    eax_3.b = *esi
    esi = &esi[1]
while (eax_3.b != 0)

if (esi - &esi[1] != 6)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

if (arg1 == 0)
    sub_63b870(eax_3, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_14 = &data_801800
sub_63db30(&var_14, arg1, 2)
int32_t var_8_1 = 0

if (arg1 == 0xfffffffe)
    sub_63b870(&arg1[2], &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_1c = &data_801800
int32_t eax_5 = sub_63db30(&var_1c, &arg1[2], 2)
var_8_1.b = 1

if (arg1 == 0xfffffffc)
    sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_18 = &data_801800
int32_t edx = sub_63db30(&var_18, &arg1[4], 2)
char* const eax_6 = var_14
char* const ebx = &data_801800
char* const ecx_6 = &data_801800

if (eax_6 != 0)
    ecx_6 = eax_6

char var_20
char* var_40 = &var_20
char* eax_8
int32_t edx_1
eax_8, edx_1 = sub_64b6d0(&var_20, edx, ecx_6, ecx_6, "%x")
char* const edi_2 = var_1c
char* const esi_2 = var_18

if (eax_8 == 0)
    ebx.b = 0
else
    char var_28
    char* var_40_1 = &var_28
    char* const eax_9 = &data_801800
    
    if (edi_2 != 0)
        eax_9 = edi_2
    
    va_list ecx_8
    int32_t edx_2
    eax_8, ecx_8, edx_2 = sub_64b6d0(eax_9, edx_1, &var_28, eax_9, "%x")
    
    if (eax_8 == 0)
        ebx.b = 0
    else
        char var_2c
        char* var_40_2 = &var_2c
        
        if (esi_2 != 0)
            ebx = esi_2
        
        if (sub_64b6d0(&var_2c, edx_2, ecx_8, ebx, "%x") == 0)
            ebx.b = 0
        else
            ebx.b = 1
            eax_8.b = var_20
            *arg2 = eax_8.b
            eax_8.b = var_28
            arg2[1] = eax_8.b
            eax_8.b = var_2c
            arg2[2] = eax_8.b
            arg2[3] = 0xff

var_8_1.b = 2

if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
    eax_8 = sub_63d4e0(&var_18)
    int32_t temp1_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

var_8_1.b = 3

if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
    eax_8 = sub_63d4e0(&var_1c)
    int32_t temp2_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

int32_t var_8_2 = 4

if (data_cf65bc != 0)
    eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        eax_8 = sub_63d4e0(&var_14)
        int32_t temp3_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

eax_8.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
