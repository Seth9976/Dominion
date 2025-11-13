// 函数: sub_55af40
// 地址: 0x55af40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76587b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x1938)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1948
int32_t eax_4 = sub_568780(&var_1948, edx, 0x44d, &var_1948)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_1e1ed30e853cdfe4e362fa8492d1fc9e>,bool,enum CardID>::VTable
    * const var_cc4 = &std::_Func_impl_no_alloc<class <lambda_1e1ed30e853cdfe4e362fa8492d1fc9e>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c98
__builtin_memcpy(&var_c98, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_1e1ed30e853cdfe4e362fa8492d1fc9e>,bool,enum CardID>::VTable
    * const* var_ca0 = &var_cc4
void* var_c9c
int32_t* eax_5 = &var_c9c
int32_t var_8_1 = 0
int32_t* var_20_1 = &var_c9c
int32_t var_24 = 0
void var_4c
var_c9c = &var_4c
int32_t var_28 = 0
var_8_1.b = 2

if (var_ca0 != 0)
    eax_5 = (*var_ca0)->vFunc_0(&var_4c)
    int32_t* var_28_1 = eax_5

var_8_1.b = 0
uint32_t edi = GSI1::OffForSym(eax_5, arg2, &var_c98)

if (var_ca0 != 0)
    (*var_ca0)->vFunc_4(var_ca0 != &var_cc4)

uint32_t result
result.b = edi s> 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
