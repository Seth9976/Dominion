// 函数: sub_6b25f0
// 地址: 0x6b25f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$_Mpunct@G@std@@QAE@ABV_Locinfo@1@I_N1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_c
char* edx = arg_c
char* count = arg1

if (edx == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&count, edx)
sub_6a1bf0(&var_14)
char* eax_4 = var_14
char* const ebx = &data_801800
char* edx_1 = &data_801800

if (eax_4 != 0)
    edx_1 = eax_4

sub_6a2a20(&arg_c, edx_1)
char* eax_5 = arg_c
int32_t result

if (eax_5 == 0 || *eax_5 == 0)
    result = 1
else
    uint32_t count_1 = *(sub_63d4e0(&arg_c) + 8)
    int32_t eax_7 = sub_687730(count_1)
    char* ecx_5 = arg_c
    count = count_1
    
    if (ecx_5 != 0)
        ebx = ecx_5
    
    memcpy(eax_7, ebx, count)
    *arg3 = count_1
    *arg2 = eax_7
    result = 0
    eax_5 = arg_c

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    char* eax_10 = sub_63d4e0(&arg_c)
    int32_t temp1_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        arg_c = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_11 = var_14
    
    if (eax_11 != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
