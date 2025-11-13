// 函数: sub_631870
// 地址: 0x631870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_from_source@V?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA?AW4floating_point_parse_result@0@QAU__crt_locale_pointers@@AAV?$c_string_character_source@D@0@AAUfloating_point_string@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_7c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_14 = 0
char* arg_18
char* edx = arg_18

if (edx == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_80 = 0
int32_t var_84 = arg5
int32_t var_8_2 = 1
int32_t var_74[0x18]
sub_62eb40(sub_63d720(&arg_18, edx), arg2, &var_74, arg3, arg4)
var_8_2.b = 2
sub_62d320(&var_74, &arg_18, arg1, &var_74)
int32_t var_14_1 = 1
sub_6310c0(&var_74)
int32_t var_8_3 = 3

if (data_cf65bc != 0)
    char* eax_6 = arg_18
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&arg_18)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
