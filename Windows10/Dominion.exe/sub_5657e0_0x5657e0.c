// 函数: sub_5657e0
// 地址: 0x5657e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_767071
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx
int32_t* edx
ecx, edx = __chkstk(0x19d8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19f8
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19f8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_1f3b905d2bb1d3c1b72eab24290faa7b>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_1f3b905d2bb1d3c1b72eab24290faa7b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19f8, 0xc84)
void arg_8
void* var_d14 = &arg_8
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_1f3b905d2bb1d3c1b72eab24290faa7b>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    int32_t var_38_1 = (*var_cf4)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t eax_8 = GSI1::OffForSym(eax_4, eax_4, &var_cb0)
int32_t var_30_2 = eax_8

if (var_cf4 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_1f3b905d2bb1d3c1b72eab24290faa7b>,bool,enum CardID>::VTable
        * const* eax_10
    eax_10.b = var_cf4 != &var_d18
    (*var_cf4)->vFunc_4(eax_10)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_091515146216ac976f26f4c0bb268dc9>,bool,enum CardID>::VTable
    * const var_d40 = &std::_Func_impl_no_alloc<class <lambda_091515146216ac976f26f4c0bb268dc9>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t arg_4
int32_t* var_d3c = &arg_4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_091515146216ac976f26f4c0bb268dc9>,bool,enum CardID>::VTable
    * const* var_d1c = &var_d40
int32_t var_14_2 = 3
void** var_30_4 = &var_cb4
int32_t var_34_2 = 0
void* eax_11 = &var_cb0
var_cb4 = &var_5c
int32_t var_38_2 = 0
var_14_2.b = 5

if (var_d1c != 0)
    int32_t var_38_3 = (*var_d1c)->vFunc_0(&var_5c)
    eax_11 = &var_cb0

var_14_2.b = 3
int32_t eax_15 = GSI1::OffForSym(eax_11, eax_8, &var_cb0)
int32_t var_14_3 = 0xffffffff
int32_t var_30_5 = eax_15

if (var_d1c != 0)
    (*var_d1c)->vFunc_4(var_d1c != &var_d40)

int32_t* result_1

if (eax_15 != 0)
    int32_t eax_19 = arg_4
    int64_t var_cec_1 = 0
    int64_t var_cdc
    __builtin_memset(&var_cdc, 0, 0x1c)
    int32_t var_ce4_1 = 0
    int128_t var_d70 = ecx.o
    int128_t var_d60_1 = eax_19.o
    int64_t var_cd0
    int128_t var_d50_1 = var_cd0.o
    result_1 = sub_563c40(&var_d70, arg3, arg2)

int32_t* result

if (eax_15 == 0 || result_1 == 0)
    result = nullptr
else
    void* eax_21 = sub_573400()
    
    if (sub_583720(eax_21, *(eax_21 + 0xc), *(eax_21 + 4), result_1, edx, nullptr, 0x476, 0, 0, 4)
            == 0)
        result_1 = nullptr
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
