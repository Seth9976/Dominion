// 函数: sub_63e330
// 地址: 0x63e330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$basic_iostream@DU?$char_traits@D@std@@@std@@QAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg1
int32_t var_14 = 0
int32_t var_8_1 = 1
char* const edx = &data_801800
char* arg_4
char* eax_3 = arg_4

if (eax_3 != 0)
    edx = eax_3

void* eax_4 = strrchr(edx, 0x2f)
char* eax_6

if (eax_4 != 0)
label_63e3da:
    
    if (eax_4 == 0xffffffff)
        sub_63b870(eax_4, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_63d720(arg1, eax_4 + 1)
    int32_t var_14_2 = 1
    int32_t var_8_3 = 3
    
    if (data_cf65bc != 0)
        eax_6 = arg_4
    label_63e3ff:
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_8 = sub_63d4e0(&arg_4)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
else
    char* eax_5 = arg_4
    char* const ecx = &data_801800
    
    if (eax_5 != 0)
        ecx = eax_5
    
    eax_4 = strrchr(ecx, 0x5c)
    
    if (eax_4 != 0)
        goto label_63e3da
    
    eax_6 = arg_4
    *arg1 = eax_6
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(arg1)
        *(eax_7 + 4) += 1
        eax_6 = arg_4
    
    int32_t var_14_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        goto label_63e3ff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
