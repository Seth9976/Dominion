// 函数: sub_543860
// 地址: 0x543860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764e1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
void var_1954
uint32_t eax_4 = sub_5685f0(&var_1954, 0, 0x3ea, &var_1954, 2)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_15fc173a162ff2ce5952cd3cb602bf7c>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_15fc173a162ff2ce5952cd3cb602bf7c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c9c
__builtin_memcpy(&var_c9c, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_15fc173a162ff2ce5952cd3cb602bf7c>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_5 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_20_1 = &var_ca0
int32_t var_24_1 = 0
void var_4c
var_ca0 = &var_4c
int32_t var_28_1 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_5 = (*var_ca8)->vFunc_0(&var_4c)
    int32_t* var_28_2 = eax_5

var_8_1.b = 0
int32_t eax_7 = GSI1::OffForSym(eax_5, eax_2, &var_c9c)
int32_t var_8_2 = 0xffffffff
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_15fc173a162ff2ce5952cd3cb602bf7c>,bool,enum CardID>::VTable
    * const* ecx_2 = var_ca8
int32_t var_1c_1 = eax_7

if (ecx_2 != 0)
    eax_7, ecx_2 = (*ecx_2)->vFunc_4(ecx_2 != &var_ccc)
    int32_t var_ca8_1 = 0

int32_t var_20_3 = 7
uint32_t result
int32_t ecx_4
result, ecx_4 = sub_56a740(eax_7, 0x3ea, &var_c9c, ecx_2)

if (result != 0)
    int32_t var_20_4 = ecx_4
    result = sub_561e00(result, 0, 4, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
