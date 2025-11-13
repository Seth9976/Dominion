// 函数: sub_6a7580
// 地址: 0x6a7580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f886
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg1
int32_t var_14 = 0
int32_t var_8_1 = 1
char* const edx = &data_801800
char* arg_4
char* eax_3 = arg_4

if (eax_3 != 0)
    edx = eax_3

void* i = strchr(edx, 0x2f)

if (i == 0)
label_6a7631:
    sub_63d720(arg1, &data_801800)
    int32_t var_14_2 = 1
    int32_t var_8_3 = 2
else
    void* i_1
    
    do
        i_1 = i
        i = strchr(i + 1, 0x2f)
    while (i != 0)
    
    if (i_1 == 0)
        goto label_6a7631
    
    char* eax_5 = arg_4
    char* const ecx
    
    if (eax_5 != 0)
        ecx = eax_5
        
        if (ecx == 0)
            sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    else
        eax_5 = &data_801800
        ecx = &data_801800
    
    *arg1 = &data_801800
    sub_63db30(arg1, ecx, i_1 - eax_5)
    int32_t var_14_1 = 1
    int32_t var_8_2 = 3

if (data_cf65bc != 0)
    char* eax_6 = arg_4
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
