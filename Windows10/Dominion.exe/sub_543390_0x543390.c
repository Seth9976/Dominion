// 函数: sub_543390
// 地址: 0x543390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76582b
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
int32_t var_30 = 0
int32_t var_cb0
uint32_t eax_4 = sub_5685f0(&var_cb0, 0, 0x3e9, &var_cb0, 2)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_497d8c761d5484574143b505d3585264>,bool,enum CardID>::VTable
    * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_497d8c761d5484574143b505d3585264>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_1938
__builtin_memcpy(&var_1938, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_497d8c761d5484574143b505d3585264>,bool,enum CardID>::VTable
    * const* var_1974 = &var_1998
void* var_193c
int32_t* eax_5 = &var_193c
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_193c
int32_t var_34_1 = 0
void var_5c
var_193c = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_1974 != 0)
    eax_5 = (*var_1974)->vFunc_0(&var_5c)
    int32_t* var_38_2 = eax_5

var_14_1.b = 0
int32_t var_cb8
int32_t eax_8 = GSI1::OffForSym(eax_5, var_cb8, &var_1938)
int32_t var_14_2 = 0xffffffff

if (var_1974 != 0)
    (*var_1974)->vFunc_4(var_1974 != &var_1998)

int64_t var_196c
__builtin_memset(&var_196c, 0, 0x2c)
int32_t var_30_3 = 0
char var_34_2 = 0
int32_t var_38_3 = 0x12
int128_t var_19c8 = 0xa8.o
int32_t var_1960
int128_t var_19b8 = var_1960.o
int64_t var_1950
int128_t var_19a8 = var_1950.o
int32_t* result = sub_563960(&var_cb0, 0, &var_1938, &var_cb0, eax_8, 0x19, &var_19c8, var_38_3, 
    var_34_2, var_30_3)
int32_t ecx_4 = __builtin_memcpy(&var_1938, result, 0xc84)

if (eax_8 != 0)
    int32_t var_30_4 = 0
    uint32_t eax_12 = sub_56b800()
    sub_5661e0(eax_12, 0x3e9, &var_1938, eax_12, ecx_4)
    var_cb0 = 4
    void var_cac
    memcpy(&var_cac, &var_1938, eax_8 << 2)
    int32_t var_2c_1 = eax_8
    result = sub_56bba0(&var_cb0, 0, sub_543120, &var_cb0, 1, 2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
