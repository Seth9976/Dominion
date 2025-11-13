// 函数: sub_542bc0
// 地址: 0x542bc0
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
int32_t eax_4 = sub_568780(&var_1938, edx, 2, &var_1938)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f36938f35d2c7e04e208543789475dfd>,bool,enum CardID>::VTable
    * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_f36938f35d2c7e04e208543789475dfd>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f36938f35d2c7e04e208543789475dfd>,bool,enum CardID>::VTable
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
int32_t var_58
int32_t* var_54
uint32_t result = GSI1::OffForSym(eax_5, var_30_1, &var_cb0, var_5c, var_58, var_54)
int32_t var_14_2 = 0xffffffff
uint32_t result_1 = result
uint32_t result_2 = result_1

if (var_1974 != 0)
    result = (*var_1974)->vFunc_4(var_1974 != &var_1998)

if (result_1 != 0)
    int64_t var_196c
    __builtin_memset(&var_196c, 0, 0x2c)
    int128_t var_19c8 = 0xa6.o
    int32_t var_1960
    int128_t var_19b8_1 = var_1960.o
    int64_t var_1950
    int128_t var_19a8_1 = var_1950.o
    int32_t* eax_10 = sub_563c40(&var_19c8, 0x33, 0)
    void* eax_11 = sub_573400()
    uint32_t eax_12 = zx.d(eax_10.w)
    void* ecx_3 = *(eax_11 + 4)
    var_193c = ecx_3
    
    if (eax_12 u>= 0x320)
        sub_591930()
        ecx_3 = var_193c
    
    int32_t eax_13 = eax_12 * 0x64
    *(eax_13 + ecx_3 + 0x1a6c) |= 2
    int32_t eax_15 = *(*(eax_11 + 4) + 0x1504)
    
    if (eax_15 != 3 && eax_15 != 5 && eax_15 != 4 && eax_15 != 6)
        void* var_48
        __builtin_memset(&var_48, 0, 0x1c)
        ecx_3.b = eax_15 == 2
        int128_t* var_44
        int32_t var_40
        int32_t var_3c
        int32_t var_38_3
        int32_t var_34_2
        int32_t var_30_4
        sub_61b1b0(eax_15, 0x16, ecx_3.b, *(eax_11 + 0xc), eax_10, 4, 1, var_48, var_44, var_40, 
            var_3c, var_38_3, var_34_2, var_30_4)
    
    void* eax_16 = sub_566bb0(eax_10, 0)
    int32_t var_30_5 = 0
    int32_t var_34_3 = 1
    var_1938 = 1
    int32_t* var_1934 = eax_10
    int32_t var_cb4_1 = 1
    result = sub_56bd60(eax_16, &var_1938, sub_542e30, var_34_3, var_30_5)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
