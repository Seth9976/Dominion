// 函数: sub_54f4f0
// 地址: 0x54f4f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7651fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19c8
int32_t eax_4 = sub_568780(&var_19c8, edx, 2, &var_19c8)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7e8231a32bc535fee7e1278284361960>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_7e8231a32bc535fee7e1278284361960>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7e8231a32bc535fee7e1278284361960>,bool,enum CardID>::VTable
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
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7e8231a32bc535fee7e1278284361960>,bool,enum CardID>::VTable
        * const* eax_10
    eax_10.b = var_cec != &var_d10
    (*var_cec)->vFunc_4(eax_10)

int32_t var_ce8
__builtin_memset(&var_ce8, 0, 0x30)
int128_t var_d40 = var_ce8.o
int32_t var_cd8
int128_t var_d30 = var_cd8.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
int32_t* result = sub_563c40(&var_d40, 0xc, 0)

if (result != 0)
    void* eax_11 = sub_573400()
    sub_583720(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)
    int32_t var_30_6 = 5
    result = sub_564ce0(result)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
