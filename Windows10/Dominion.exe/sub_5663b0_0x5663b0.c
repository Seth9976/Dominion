// 函数: sub_5663b0
// 地址: 0x5663b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7670bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* ecx
int32_t edx
ecx, edx = __chkstk(0x325c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1930 = 0x20
int32_t var_192c = 0
void var_25e4
int32_t eax_4 = sub_568780(&var_25e4, edx, 0x3ea, &var_25e4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_db07e3bb9dbb11a3c4944f9241e1992b>,bool,enum CardID>::VTable
    * const var_195c = &std::_Func_impl_no_alloc<class <lambda_db07e3bb9dbb11a3c4944f9241e1992b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t* var_1958 = &var_1930
void var_c9c
__builtin_memcpy(&var_c9c, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_db07e3bb9dbb11a3c4944f9241e1992b>,bool,enum CardID>::VTable
    * const* var_1938 = &var_195c
void* var_1928
int32_t* eax_5 = &var_1928
int32_t var_8_1 = 0
int32_t* var_24_1 = &var_1928
int32_t var_28 = 0
void var_50
var_1928 = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_1938 != 0)
    eax_5 = (*var_1938)->vFunc_0(&var_50)
    int32_t* var_2c_1 = eax_5

var_8_1.b = 0
int32_t var_8_2 = 0xffffffff
int32_t var_1c_1 = GSI1::OffForSym(eax_5, arg1, &var_c9c)

if (var_1938 != 0)
    (*var_1938)->vFunc_4(var_1938 != &var_195c)

void var_326c
uint32_t result_1
__builtin_memcpy(&result_1, 
    sub_563960(&var_326c, 0, &var_c9c, &var_326c, 1, 0x20, ecx, 0x11, 0, 0), 0xc84)
int32_t var_ca4
uint32_t result

if (var_ca4 == 0)
    result = 0
else
    void* eax_12 = sub_573400()
    int32_t var_24_4 = 0
    sub_579a20(eax_12, &result_1, *(eax_12 + 4), 0x3ea)
    
    result = var_ca4 == 0 ? 0 : result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
