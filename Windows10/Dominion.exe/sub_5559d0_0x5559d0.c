// 函数: sub_5559d0
// 地址: 0x5559d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766b8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ce4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5624a0(sub_56b800(), 0x3e9)
sub_566800(arg1)
int32_t var_ca8 = 2
int32_t var_ca4 = 0
void* eax_4 = sub_573400()
void var_c9c
int32_t eax_5 = sub_590990(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x3ea, &var_c9c)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e3eb1249e951961f51cdc52da251465e>,bool,enum CardID>::VTable
    * const var_cd4 = &std::_Func_impl_no_alloc<class <lambda_e3eb1249e951961f51cdc52da251465e>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_1c = eax_5
int32_t* var_cd0 = &var_ca8
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e3eb1249e951961f51cdc52da251465e>,bool,enum CardID>::VTable
    * const* var_cb0 = &var_cd4
void* var_ca0
int32_t* eax_6 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_ce8_1 = &var_ca0
int32_t var_cec_1 = 0
void var_d14
var_ca0 = &var_d14
int32_t var_cf0_1 = 0
var_8_1.b = 2

if (var_cb0 != 0)
    eax_6 = (*var_cb0)->vFunc_0(&var_d14)
    int32_t* var_cf0_2 = eax_6

var_8_1.b = 0
int32_t* eax_8 = GSI1::OffForSym(eax_6, eax_5, &var_c9c)
int32_t var_8_2 = 0xffffffff

if (var_cb0 != 0)
    (*var_cb0)->vFunc_4(var_cb0 != &var_cd4)
    int32_t var_cb0_1 = 0

sub_561a00(&var_c9c, nullptr)
void* result = sub_562100(eax_8, 0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
