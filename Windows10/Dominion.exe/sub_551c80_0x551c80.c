// 函数: sub_551c80
// 地址: 0x551c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7651fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19c8
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19c8, 1)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7bae9b0193cbcdc428fd02432e489c5c>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_7bae9b0193cbcdc428fd02432e489c5c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19c8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7bae9b0193cbcdc428fd02432e489c5c>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cec != 0)
    int32_t var_38_1 = (*var_cec)->vFunc_0(&var_5c)

var_14_1.b = 0
void* result = GSI1::OffForSym(eax_4, eax_4, &var_cb0)
int32_t var_14_2 = 0xffffffff
void* result_1 = result
void* result_2 = result_1

if (var_cec != 0)
    result = (*var_cec)->vFunc_4(var_cec != &var_d10)

if (result_1 != 0)
    int64_t var_ce4
    __builtin_memset(&var_ce4, 0, 0x2c)
    int128_t var_d40 = 0x102.o
    int32_t var_cd8
    int128_t var_d30_1 = var_cd8.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    result = sub_566bb0(sub_563c40(&var_d40, 0x33, 0), 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
