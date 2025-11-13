// 函数: sub_696930
// 地址: 0x696930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f07d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_3c = 0x2e
int32_t _Str1
char* ecx
_Str1, ecx = strrchr(arg3, var_3c.b)

if (_Str1 != 0)
    var_3c = ".zip"
    _Str1, ecx = _stricmp(_Str1, var_3c)
    
    if (_Str1 == 0)
        sub_696900()
        noreturn

var_3c = ecx

if (arg3 == 0)
    sub_63b870(_Str1, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&var_3c, arg3)
void var_24
sub_69e000(&var_24, 2)
int32_t var_8_1 = 0
var_3c = nullptr
int64_t var_1c = 0
FILE* eax_3 = sub_69dec0(&var_1c)
FILE* var_20

if (eax_3.b == 0)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_20
        
        if (eax_3 != 0 && eax_3->_Placeholder.b != 0)
            eax_3 = sub_63d4e0(&var_20)
            
            if (eax_3 == 1)
                sub_64c080(eax_3 - 1, eax_3 + 0xf)
    
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

var_3c = arg4
int32_t ebx
ebx.b = sub_696560(eax_3, arg2, &var_1c, var_3c.b)
var_3c = var_1c.d
fclose(var_3c)
int32_t var_8_3 = 2
char* eax_5

if (data_cf65bc != 0)
    eax_5 = var_20
    
    if (eax_5 != 0 && *eax_5 != 0)
        eax_5 = sub_63d4e0(&var_20)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

eax_5.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
