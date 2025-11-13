// 函数: sub_54a220
// 地址: 0x54a220
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
void var_c9c
__builtin_memcpy(&var_c9c, sub_5685f0(&var_1954, 0, 0x3e9, &var_1954, 2), 0xc84)
sub_561a00(&var_c9c, nullptr)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_50c6d5287db6526da5734c40e60a0663>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_50c6d5287db6526da5734c40e60a0663>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_50c6d5287db6526da5734c40e60a0663>,bool,enum CardID>::VTable
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

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(eax_7 + 1)
return eax_7 + 1
