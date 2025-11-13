// 函数: sub_4fa5e0
// 地址: 0x4fa5e0
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
sub_561af0(&ExceptionList, 0, 2, 0)
int32_t var_20_1 = 0
void var_1954
void var_c9c
__builtin_memcpy(&var_c9c, sub_5685f0(&var_1954, 0, 0x3e9, &var_1954, 0x20), 0xc84)
uint32_t var_cc8 = sub_56b800()
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2af886436c63691486eaa2a71e17431b>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_2af886436c63691486eaa2a71e17431b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2af886436c63691486eaa2a71e17431b>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_7 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_20_2 = &var_ca0
int32_t var_24_1 = 0
void var_4c
var_ca0 = &var_4c
int32_t var_28_1 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_7 = (*var_ca8)->_Copy(&var_4c)
    int32_t* var_28_2 = eax_7

var_8_1.b = 0
int32_t eax_9 = GSI1::OffForSym(eax_7, eax_2, &var_c9c)
int32_t var_8_2 = 0xffffffff
int32_t esi_1 = eax_9

if (var_ca8 != 0)
    eax_9 = (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)

sub_561af0(eax_9, 0, esi_1, 0)

if (esi_1 s> 0)
    sub_56e9c0(1)

struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6cc200ed693e15ad3a25c54d61e960d5>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_6cc200ed693e15ad3a25c54d61e960d5>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6cc200ed693e15ad3a25c54d61e960d5>, void>::VTable
    * const* var_20_5 = &var_44
uint32_t result = sub_5699b0(var_44)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
