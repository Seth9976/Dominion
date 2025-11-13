// 函数: sub_5629e0
// 地址: 0x5629e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7651fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19c8
int32_t eax_4 = sub_568780(&var_19c8, edx, 0x3ea, &var_19c8)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_56241eccd0bca619279646f872935638>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_56241eccd0bca619279646f872935638>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void arg_4
void* var_d0c = &arg_4
void var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_56241eccd0bca619279646f872935638>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
void* var_cb4
int32_t* eax_5 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_cb4
int32_t var_34 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cec != 0)
    eax_5 = (*var_cec)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_5

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0)

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
int128_t var_d40 = ecx.o
int32_t var_cd8
int128_t var_d30 = var_cd8.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
int32_t* result = sub_563c40(&var_d40, 7, 0)
sub_5624a0(result, 0x3ea)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
