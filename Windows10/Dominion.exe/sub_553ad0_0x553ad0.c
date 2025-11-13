// 函数: sub_553ad0
// 地址: 0x553ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765d0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19c8
int32_t eax_4 = sub_568780(&var_19c8, edx, 0x3ec, &var_19c8)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_5b791521578f094017b52dab3e5e888b>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_5b791521578f094017b52dab3e5e888b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_5b791521578f094017b52dab3e5e888b>,bool,enum CardID>::VTable
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
int32_t eax_8 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = eax_8

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

uint32_t result

if (eax_8 != 0)
    int64_t var_ce4
    __builtin_memset(&var_ce4, 0, 0x2c)
    int32_t var_30_4 = 0
    char var_34_1 = 0
    int32_t var_38_2 = 0xa
    int128_t var_d40 = 0x48.o
    int32_t var_cd8
    int128_t var_d30_1 = var_cd8.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    void var_2650
    int32_t* eax_12 = sub_563960(&var_2650, 0, &var_cb0, &var_2650, eax_8, 0x14, &var_d40, 
        var_38_2, var_34_1, var_30_4)
    __builtin_memcpy(&var_cb0, eax_12, 0xc84)
    result = sub_566140(eax_12, 0x3ec, &var_cb0, 0x3ea, nullptr, 0, 0xb, nullptr, nullptr)
else
    result = sub_56e9c0(nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
