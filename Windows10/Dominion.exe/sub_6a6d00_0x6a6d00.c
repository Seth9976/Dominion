// 函数: sub_6a6d00
// 地址: 0x6a6d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$common_chdir@D@@YAHQBD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_13c
memset(&var_13c, 0, 0x128)
int32_t var_8_1 = 0
int32_t edx
int32_t var_134 = edx
int32_t var_138 = 0
int32_t var_24 = 1
int32_t* result

if (sub_7076e0(&var_13c) == 0)
    result = nullptr
else
    result = sub_6a2fa0()
    sub_63d8d0(result, *arg1)
    int32_t eax_5 = var_138
    char* _Str1 = *arg1
    
    if (eax_5 != 3)
        goto label_6a6da7
    
    if (sub_7076e0(&var_13c) == 0)
        sub_6a3220(result)
        result = nullptr
    else
        eax_5 = var_138
    label_6a6da7:
        char* _Str2
        uint32_t _MaxCount
        
        if (eax_5 != 1)
            sub_6a3220(result)
            result = nullptr
        else if (_strnicmp(_Str1, _Str2, _MaxCount) != 0)
            sub_6a3220(result)
            result = nullptr
        else if (sub_7076e0(&var_13c) == 0)
            sub_6a3220(result)
            result = nullptr
        else if (sub_6a6c70(result, &var_13c) == 0)
            sub_6a3220(result)
            result = nullptr

int32_t var_8_2 = 1
int32_t eax_10 = var_13c

if (eax_10 != 0)
    _aligned_free(eax_10)

int32_t* i_1
int32_t* i = i_1

while (i != 0)
    int32_t* i_2 = i
    i = i[2]
    sub_64c080(i_2, 0x10)

int32_t var_18 = 0
i_1 = nullptr
int32_t var_1c = 0
var_13c = 0
var_8_2.b = 2
sub_7078c0(&i_1)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
