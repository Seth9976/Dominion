// 函数: sub_562d00
// 地址: 0x562d00
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
int32_t var_cb8 = 0x104
void var_19c8
int32_t eax_4 = sub_568780(&var_19c8, edx, 0x3ea, &var_19c8)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_86d77341cb13661f5befa60f8d6560d5>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_86d77341cb13661f5befa60f8d6560d5>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t* var_d0c = &var_cb8
uint32_t result_1
__builtin_memcpy(&result_1, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_86d77341cb13661f5befa60f8d6560d5>,bool,enum CardID>::VTable
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
int32_t var_30_2 = GSI1::OffForSym(eax_5, var_30_1, &result_1)

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
uint32_t result_2 = 0
char var_34_1 = 0
int32_t var_38_2 = 7
int128_t var_d40 = 0x21.o
int32_t var_cd8
int128_t var_d30 = var_cd8.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
void var_2650
int32_t ecx_4 = __builtin_memcpy(&result_1, 
    sub_563960(&var_2650, 0, &result_1, &var_2650, 1, 9, &var_d40, var_38_2, var_34_1, result_2), 
    0xc84)
uint32_t result = result_2

if (result != 0)
    if (result != 1)
        sub_591930()
    
    int32_t var_30_4 = ecx_4
    sub_5624a0(result_1, 0x3ea)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
