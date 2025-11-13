// 函数: sub_5652d0
// 地址: 0x5652d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765d0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19c8
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19c8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2ec369da6366489c7cc1de0e2f1939e2>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_2ec369da6366489c7cc1de0e2f1939e2>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
uint32_t result_2
__builtin_memcpy(&result_2, &var_19c8, 0xc84)
int32_t arg_4
int32_t* var_d0c = &arg_4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2ec369da6366489c7cc1de0e2f1939e2>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cec != 0)
    int32_t var_38_1 = (*var_cec)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t eax_8 = GSI1::OffForSym(eax_4, eax_4, &result_2)
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = eax_8

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

uint32_t result

if (eax_8 == 0)
    result = 0
else
    int32_t eax_11 = arg_4
    int32_t var_cdc_1 = 0
    int64_t var_ce4_1 = 0
    int64_t var_cd4
    __builtin_memset(&var_cd4, 0, 0x1c)
    int32_t var_30_4 = 0
    char var_34_2 = 0
    int128_t var_d40 = 9.o
    int128_t var_d30_1 = eax_11.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    void var_2650
    __builtin_memcpy(&result_2, 
        sub_563960(&var_2650, 0, &result_2, &var_2650, 1, 7, &var_d40, 0xc, var_34_2, var_30_4), 
        0xc84)
    
    if (var_30_4 == 0)
        result = 0
    else
        uint32_t result_1 = result_2
        
        if (result_1 == 0)
            result = 0
        else
            void* eax_14 = sub_573400()
            
            if (sub_583720(eax_14, *(eax_14 + 0xc), *(eax_14 + 4), result_1, 0x476, nullptr, 0x476, 
                    0, 0, 4) == 0)
                result_1 = 0
            
            result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
