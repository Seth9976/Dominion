// 函数: sub_676e70
// 地址: 0x676e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d857
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg2
int32_t var_24 = 0
char* const ebx = &data_801800
char* edx = &data_801800
char* arg_4
char* eax_4 = *(arg_4 + 0x20)

if (eax_4 != 0)
    edx = eax_4

sub_69feb0(&arg_4, edx)
int32_t var_8_1 = 1

while (true)
    char* eax_5 = arg_4
    char* const ecx_1 = &data_801800
    
    if (eax_5 != 0)
        ecx_1 = eax_5
    
    void* eax_6 = strchr(ecx_1, 0x2f)
    
    if (eax_6 == 0)
        break
    
    sub_63d8d0(&arg_4, eax_6 + 1)

uint8_t* arg_8
uint8_t* esi = arg_8
void* eax_8 = strchr(esi, 0x5f)

if (eax_8 != 0)
    esi = eax_8 + 1
    arg_8 = esi

int32_t eax_9 = strstr(esi, &data_876758)
uint8_t* ecx_3 = arg_8
uint8_t* edi = &ecx_3[3]

if (ecx_3 != eax_9)
    edi = ecx_3

int32_t eax_10 = strstr(edi, &data_876774)
uint8_t* edx_1 = &edi[3]

if (edi != eax_10)
    edx_1 = edi

if (edx_1 == 0)
    sub_63b870(eax_10, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* var_20
sub_63d720(&var_20, edx_1)
var_8_1.b = 2
sub_63e470(&var_20)
char* var_1c
sub_63d720(&var_1c, U"_-")
var_8_1.b = 3
char* eax_11 = var_18

if (eax_11 == 0)
    sub_63b870(eax_11, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&var_18, eax_11)
var_8_1.b = 4
var_8_1.b = 5
var_8_1.b = 7
char* const var_14
char* eax_14 = *sub_63dde0(sub_63dde0(&var_18, &var_14, &arg_4), &arg_8, &var_1c)
*arg1 = eax_14

if (eax_14 != 0 && *eax_14 != 0)
    char* eax_15 = sub_63d4e0(arg1)
    *(eax_15 + 4) += 1

char* esi_1 = var_20
int32_t var_24_1 = 8

if (esi_1 != 0)
    ebx = esi_1

sub_63d960(arg1, ebx)
int32_t var_8_2 = 6
int32_t var_24_2 = 1
var_8_2.b = 8

if (data_cf65bc != 0)
    uint8_t* eax_16 = arg_8
    
    if (eax_16 != 0 && *eax_16 != 0)
        char* eax_17 = sub_63d4e0(&arg_8)
        int32_t temp0_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
            arg_8 = &data_801800

var_8_2.b = 9

if (data_cf65bc != 0)
    char* eax_18 = var_14
    
    if (eax_18 != 0 && *eax_18 != 0)
        char* eax_19 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
            var_14 = &data_801800

var_8_2.b = 0xa

if (data_cf65bc != 0)
    char* eax_20 = var_18
    
    if (eax_20 != 0 && *eax_20 != 0)
        char* eax_21 = sub_63d4e0(&var_18)
        int32_t temp2_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)

var_8_2.b = 0xb

if (data_cf65bc != 0)
    char* eax_22 = var_1c
    
    if (eax_22 != 0 && *eax_22 != 0)
        char* eax_23 = sub_63d4e0(&var_1c)
        int32_t temp3_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)

var_8_2.b = 0xc

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_24 = sub_63d4e0(&var_20)
    int32_t temp4_1 = *(eax_24 + 4)
    *(eax_24 + 4) -= 1
    
    if (temp4_1 == 1)
        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)

int32_t var_8_3 = 0xd

if (data_cf65bc != 0)
    char* eax_25 = arg_4
    
    if (eax_25 != 0 && *eax_25 != 0)
        char* eax_26 = sub_63d4e0(&arg_4)
        int32_t temp5_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
