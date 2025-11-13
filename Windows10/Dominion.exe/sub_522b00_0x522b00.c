// 函数: sub_522b00
// 地址: 0x522b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7658e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2658)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19f0
uint32_t eax_3 = sub_5678e0(arg1, &var_19f0, 4, 0, 0, 0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2a831a1b95cfad38a94974b05c7536dd>,bool,enum CardID>::VTable
    * const var_d40 = &std::_Func_impl_no_alloc<class <lambda_2a831a1b95cfad38a94974b05c7536dd>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0
__builtin_memcpy(&var_cb0, eax_3, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2a831a1b95cfad38a94974b05c7536dd>,bool,enum CardID>::VTable
    * const* var_d1c = &var_d40
void* var_cb4
int32_t* eax_4 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_d1c != 0)
    eax_4 = (*var_d1c)->vFunc_0(&var_5c)
    int32_t* var_38_2 = eax_4

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_4, var_30_1, &var_cb0)

if (var_d1c != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2a831a1b95cfad38a94974b05c7536dd>,bool,enum CardID>::VTable
        * const* eax_9
    eax_9.b = var_d1c != &var_d40
    (*var_d1c)->vFunc_4(eax_9)

int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
int32_t var_30_4 = 0
char var_34_2 = 0
int32_t var_38_3 = 0x35
int128_t var_d18 = 0x56.o
int32_t var_cd8
int128_t var_d08 = var_cd8.o
int64_t var_cc8
int128_t var_cf8 = var_cc8.o
int32_t ecx_4
int32_t esi_2
esi_2, ecx_4 = __builtin_memcpy(&var_cb0, 
    sub_563960(&var_19f0, 0, &var_cb0, &var_19f0, 1, 1, &var_d18, var_38_3, var_34_2, var_30_4), 
    0xc84)

if (var_30_4 != 0)
    esi_2 = var_cb0
    
    if (esi_2 != 0)
        char var_30_5 = 0
        int32_t var_34_3 = ecx_4
        uint32_t eax_12 = sub_56b800()
        sub_566c60(eax_12, 2, esi_2, eax_12, var_30_5)

uint32_t eax_13 = sub_5678e0(esi_2, &var_19f0, 2, 0, 0, 0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e8d67ca4a5d216908c31c199643a9adc>,bool,enum CardID>::VTable
    * const var_d68 = &std::_Func_impl_no_alloc<class <lambda_e8d67ca4a5d216908c31c199643a9adc>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
__builtin_memcpy(&var_cb0, eax_13, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e8d67ca4a5d216908c31c199643a9adc>,bool,enum CardID>::VTable
    * const* var_d44 = &var_d68
void** eax_14 = &var_cb4
int32_t var_14_3 = 3
void** var_30_7 = &var_cb4
int32_t var_34_6 = 0
var_cb4 = &var_5c
int32_t var_38_5 = 0
var_14_3.b = 5

if (var_d44 != 0)
    eax_14 = (*var_d44)->vFunc_0(&var_5c)
    void** var_38_6 = eax_14

var_14_3.b = 3
int32_t var_14_4 = 0xffffffff
int32_t var_30_8 = GSI1::OffForSym(eax_14, var_30_7, &var_cb0)

if (var_d44 != 0)
    (*var_d44)->vFunc_4(var_d44 != &var_d68)

int64_t var_ce4_1
__builtin_memset(&var_ce4_1, 0, 0x2c)
int32_t var_30_10 = 0
char var_34_7 = 0
int32_t var_38_7 = 0x35
var_d18 = 0x57.o
int32_t var_cd8_1
int128_t var_d08_1 = var_cd8_1.o
int64_t var_cc8_1
int128_t var_cf8_1 = var_cc8_1.o
void var_2678
int32_t* result =
    sub_563960(&var_2678, 0, &var_cb0, &var_2678, 1, 1, &var_d18, var_38_7, var_34_7, var_30_10)
int32_t ecx_10 = __builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_10 != 0)
    int32_t esi_5 = var_cb0
    
    if (esi_5 != 0)
        char var_30_11 = 0
        int32_t var_34_8 = ecx_10
        uint32_t eax_21 = sub_56b800()
        result = sub_566c60(eax_21, 2, esi_5, eax_21, var_30_11)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
