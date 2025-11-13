// 函数: sub_59dcf0
// 地址: 0x59dcf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$__execute_onexit_table
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_18 = 0
int32_t var_8_1 = 1
char* const edi = &data_801800
char* arg_4
char* eax_3 = arg_4

if (eax_3 != 0)
    edi = eax_3

arg1.b = *edi

while (arg1.b == 0x7b)
    eax_3, arg1 = strchr(edi, 0x7d)
    arg1.b = eax_3[1]
    edi = &eax_3[1]

if (arg1.b u>= 0x80)
    eax_3.b = arg1.b
    eax_3.b &= 0xe0
    
    if (eax_3.b != 0xc0)
        eax_3.b = arg1.b
        eax_3.b &= 0xf0
        
        if (eax_3.b != 0xe0)
            arg1.b &= 0xf8
            
            if (arg1.b != 0xf0)
                sub_63b870(eax_3, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                    "C:\x\ax2017\Engine\Xutf8.cpp", 0x21c, "Xutf8_peek_next")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn

char* const var_14 = edi
char c = sub_5a0d00(&var_14)
char* eax_4 = sub_5a0db0(edi)
int32_t eax_5 = toupper(c)
*result = &data_801800
int32_t var_18_1 = 1
sub_63dcd0(result, eax_5)
sub_63d960(result, eax_4)
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_6 = arg_4
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
