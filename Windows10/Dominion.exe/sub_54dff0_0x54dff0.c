// 函数: sub_54dff0
// 地址: 0x54dff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764e1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1954
int32_t eax_4 = sub_568780(&var_1954, edx, 0x3ea, &var_1954)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ae928675fbc82363311b658c74b05054>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_ae928675fbc82363311b658c74b05054>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c9c
__builtin_memcpy(&var_c9c, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ae928675fbc82363311b658c74b05054>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_5 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_20_1 = &var_ca0
int32_t var_24 = 0
void var_4c
void* esi_1 = &var_4c
var_ca0 = &var_4c
int32_t var_28 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_5 = (*var_ca8)->vFunc_0(&var_4c)
    int32_t* var_28_1 = eax_5

var_8_1.b = 0
int32_t eax_7 = GSI1::OffForSym(eax_5, eax_2, &var_c9c)
int32_t var_8_2 = 0xffffffff
int32_t var_1c_1 = eax_7

if (var_ca8 != 0)
    esi_1 = *var_ca8
    eax_7 = (*(esi_1 + 0x10))(var_ca8 != &var_ccc)
    int32_t var_ca8_1 = 0

int32_t* result
int32_t ecx_4
result, ecx_4 = sub_56acc0(eax_7, 0x3ea, &var_c9c, 0xe, 4, 5)

if (result != 0)
    int32_t var_20_4 = ecx_4
    result = sub_54d5d0(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
