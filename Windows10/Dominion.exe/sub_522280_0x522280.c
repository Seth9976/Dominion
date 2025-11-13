// 函数: sub_522280
// 地址: 0x522280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76582b
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
int32_t var_1938
int32_t eax_4 = sub_568780(&var_1938, edx, 0x3ea, &var_1938)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bd535ab9bc41210b5570c6302407573f>,bool,enum CardID>::VTable
    * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_bd535ab9bc41210b5570c6302407573f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bd535ab9bc41210b5570c6302407573f>,bool,enum CardID>::VTable
    * const* var_1974 = &var_1998
void* var_193c
int32_t* eax_5 = &var_193c
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_193c
int32_t var_34 = 0
void var_5c
var_193c = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_1974 != 0)
    eax_5 = (*var_1974)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_5

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0)

if (var_1974 != 0)
    (*var_1974)->vFunc_4(var_1974 != &var_1998)

int64_t var_196c
__builtin_memset(&var_196c, 0, 0x2c)
int32_t var_30_4 = 0
char var_34_1 = 0
int32_t var_38_2 = 0x1a
int128_t var_19c8 = 0x58.o
int32_t var_1960
int128_t var_19b8 = var_1960.o
int64_t var_1950
int128_t var_19a8 = var_1950.o
int32_t* result =
    sub_563960(&var_1938, 1, &var_cb0, &var_1938, 1, 0x19, &var_19c8, var_38_2, var_34_1, var_30_4)
__builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_4 != 0)
    sub_566140(result, 0x3ea, &var_cb0, 0x46d, nullptr, 0, 0xb, nullptr, nullptr)
    var_1938 = 4
    void var_1934
    memcpy(&var_1934, &var_cb0, var_30_4 << 2)
    int32_t var_cb4_1 = var_30_4
    result = sub_56bba0(&var_1938, 0, sub_5224c0, &var_1938, 0x4a, 2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
