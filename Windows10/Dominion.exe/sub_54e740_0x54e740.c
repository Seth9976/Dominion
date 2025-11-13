// 函数: sub_54e740
// 地址: 0x54e740
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
void var_1954
uint32_t eax_3 = sub_5678e0(arg1, &var_1954, 4, 0, 0, 0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_af3a70c9e61a5025d423afe390af5ee0>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_af3a70c9e61a5025d423afe390af5ee0>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c9c
__builtin_memcpy(&var_c9c, eax_3, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_af3a70c9e61a5025d423afe390af5ee0>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_4 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_20_1 = &var_ca0
int32_t var_24_1 = 0
void var_4c
var_ca0 = &var_4c
int32_t var_28_1 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_4 = (*var_ca8)->vFunc_0(&var_4c)
    int32_t* var_28_2 = eax_4

var_8_1.b = 0
int32_t eax_6 = GSI1::OffForSym(eax_4, eax_2, &var_c9c)
int32_t var_8_2 = 0xffffffff

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)
    int32_t var_ca8_1 = 0

uint32_t result = sub_570120(0xb, eax_6, arg2, ExceptionList)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
