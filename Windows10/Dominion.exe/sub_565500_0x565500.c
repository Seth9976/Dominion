// 函数: sub_565500
// 地址: 0x565500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_767011
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2660)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_cbc = 4
int32_t var_cb8 = 0
void* eax_3 = sub_573400()
uint32_t result_2
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &result_2, 4)
uint32_t var_d78 = eax_4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_352fa3df9c3d41b6b991c5d15428203a>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_352fa3df9c3d41b6b991c5d15428203a>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &result_2, 0xc84)
int32_t* var_d14 = &var_cbc
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_352fa3df9c3d41b6b991c5d15428203a>,bool,enum CardID>::VTable
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
    eax_4 = var_d78

var_14_1.b = 0
int32_t eax_8 = GSI1::OffForSym(eax_4, eax_4, &var_cb0)
int32_t var_30_2 = eax_8

if (var_cf4 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_352fa3df9c3d41b6b991c5d15428203a>,bool,enum CardID>::VTable
        * const* eax_10
    eax_10.b = var_cf4 != &var_d18
    (*var_cf4)->vFunc_4(eax_10)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0c609ca708961ddb76f21e7fc96fab06>,bool,enum CardID>::VTable
    * const var_d40 = &std::_Func_impl_no_alloc<class <lambda_0c609ca708961ddb76f21e7fc96fab06>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t arg_4
int32_t* var_d3c = &arg_4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0c609ca708961ddb76f21e7fc96fab06>,bool,enum CardID>::VTable
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

uint32_t result

if (eax_15 == 0)
    result = 0
else
    int32_t eax_18 = arg_4
    int32_t var_ce4_1 = 0
    int64_t var_cec_1 = 0
    int64_t var_cdc
    __builtin_memset(&var_cdc, 0, 0x1c)
    int32_t var_30_7 = 0
    char var_34_3 = 0
    int128_t var_d70 = 9.o
    int128_t var_d60_1 = eax_18.o
    int64_t var_cd0
    int128_t var_d50_1 = var_cd0.o
    void var_2680
    __builtin_memcpy(&result_2, 
        sub_563960(&var_2680, 0, &var_cb0, &var_2680, 1, 7, &var_d70, 0xc, var_34_3, var_30_7), 
        0xc84)
    
    if (var_d78 == 0)
        result = 0
    else
        uint32_t result_1 = result_2
        
        if (result_1 == 0)
            result = 0
        else
            void* eax_21 = sub_573400()
            sub_583720(eax_21, *(eax_21 + 0xc), *(eax_21 + 4), result_1, 0x476, nullptr, 0x476, 0, 
                0, 4)
            result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
