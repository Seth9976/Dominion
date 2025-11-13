// 函数: sub_694630
// 地址: 0x694630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ef2d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *(arg1 + 0xc)
char* const esi = &data_801800
char const* const _Str2 = 0x2e

if (eax_3 != 0)
    esi = eax_3

char* _Str1
char* _Str2_2
_Str1, _Str2_2 = strrchr(esi, _Str2.b)

if (_Str1 != 0)
    _Str2 = ".zip"
    int32_t eax_4
    eax_4, _Str2_2 = _stricmp(_Str1, _Str2)
    
    if (eax_4 == 0)
        _Str2 = _Str2_2
        sub_694600()
        noreturn

char* _Str2_1 = *(arg1 + 0xc)
_Str2 = _Str2_2
_Str2 = _Str2_1

if (_Str2_1 != 0 && *_Str2_1 != 0)
    char* eax_5 = sub_63d4e0(&_Str2)
    *(eax_5 + 4) += 1

void var_1c
sub_69e000(&var_1c, 2)
int32_t var_8_1 = 0
_Str2 = nullptr
*arg2 = 0
FILE* result_1
FILE* result

if (sub_69dec0(arg2).b != 0)
    int32_t var_8_3 = 2
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && result->_Placeholder.b != 0)
            result = sub_63d4e0(&result_1)
            
            if (result == 1)
                sub_64c080(result - 1, result + 0xf)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && result->_Placeholder.b != 0)
        result = sub_63d4e0(&result_1)
        
        if (result == 1)
            sub_64c080(result - 1, result + 0xf)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
