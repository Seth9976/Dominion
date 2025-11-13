// 函数: sub_54dab0
// 地址: 0x54dab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_766951
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x3f68)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_3300
int32_t eax_4 = sub_568780(&var_3300, edx, 0x44d, &var_3300)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9064a81fd340c24e7f3315f6c4a129d8>,bool,enum CardID>::VTable
    * const var_2650 = &std::_Func_impl_no_alloc<class <lambda_9064a81fd340c24e7f3315f6c4a129d8>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_25c0
__builtin_memcpy(&var_25c0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9064a81fd340c24e7f3315f6c4a129d8>,bool,enum CardID>::VTable
    * const* var_262c = &var_2650
void* var_25c4
int32_t* eax_5 = &var_25c4
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_25c4
int32_t var_34 = 0
void var_5c
var_25c4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_262c != 0)
    eax_5 = (*var_262c)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_5

var_14_1.b = 0
int32_t var_1940
int32_t eax_8 = GSI1::OffForSym(eax_5, var_1940, &var_25c0)
int32_t var_14_2 = 0xffffffff

if (var_262c != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9064a81fd340c24e7f3315f6c4a129d8>,bool,enum CardID>::VTable
        * const* eax_9
    eax_9.b = var_262c != &var_2650
    (*var_262c)->vFunc_4(eax_9)

int64_t var_25f4
__builtin_memset(&var_25f4, 0, 0x2c)
int32_t var_30_3 = 0
char var_34_1 = 0
int32_t var_38_2 = 0xe
int128_t var_2628 = 0x11c.o
int32_t var_25e8
int128_t var_2618 = var_25e8.o
int64_t var_25d8
int128_t var_2608 = var_25d8.o
int32_t* eax_11 = sub_563960(&var_3300, 0, &var_25c0, &var_3300, eax_8, 0x10, &var_2628, var_38_2, 
    var_34_1, var_30_3)
void var_cb0
__builtin_memcpy(&var_cb0, eax_11, 0xc84)

if (var_30_3 != 0)
    int32_t eax_12 = sub_573400()
    int32_t var_30_4 = 2
    eax_11 = sub_579a20(eax_12, &var_cb0, *(eax_12 + 4), 0x44d)

int32_t eax_14 = sub_568780(&var_3300, 
    sub_566140(eax_11, 0x44d, &var_cb0, 0x44f, 4, 0, 0xb, nullptr, nullptr), 0x44d, &var_3300)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_de8ad66f3eaf779328f1377950c3a583>,bool,enum CardID>::VTable
    * const var_2678 = &std::_Func_impl_no_alloc<class <lambda_de8ad66f3eaf779328f1377950c3a583>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
__builtin_memcpy(&var_25c0, eax_14, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_de8ad66f3eaf779328f1377950c3a583>,bool,enum CardID>::VTable
    * const* var_2654 = &var_2678
void** eax_15 = &var_25c4
int32_t var_14_3 = 3
void** var_30_6 = &var_25c4
int32_t var_34_3 = 0
var_25c4 = &var_5c
int32_t var_38_4 = 0
var_14_3.b = 5

if (var_2654 != 0)
    eax_15 = (*var_2654)->vFunc_0(&var_5c)
    void** var_38_5 = eax_15

var_14_3.b = 3
int32_t eax_18 = GSI1::OffForSym(eax_15, eax_8, &var_25c0)
int32_t var_14_4 = 0xffffffff
int32_t var_1940_2 = eax_18

if (var_2654 != 0)
    (*var_2654)->vFunc_4(var_2654 != &var_2678)

int64_t var_25f4_1
__builtin_memset(&var_25f4_1, 0, 0x2c)
int32_t var_30_8 = 0
char var_34_4 = 0
int32_t var_38_6 = 0x34
var_2628 = 0x11d.o
int32_t var_25e8_1
int128_t var_2618_1 = var_25e8_1.o
int64_t var_25d8_1
int128_t var_2608_1 = var_25d8_1.o
void var_3f88
int32_t* eax_22 = sub_563960(&var_3f88, 0, &var_25c0, &var_3f88, eax_18, 0x10, &var_2628, var_38_6, 
    var_34_4, var_30_8)
void var_1938
__builtin_memcpy(&var_1938, eax_22, 0xc84)
int32_t var_cb8

if (var_cb8 != 0)
    int32_t eax_23 = sub_573400()
    int32_t var_30_9 = 2
    eax_22 = sub_579a20(eax_23, &var_1938, *(eax_23 + 4), 0x44d)

uint32_t result = sub_566140(eax_22, 0x44d, &var_1938, 0x450, 4, 0, 0xb, nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
