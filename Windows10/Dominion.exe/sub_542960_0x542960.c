// 函数: sub_542960
// 地址: 0x542960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7651fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_562880(eax_2, arg2, var_20)
int32_t* result_1 = result

if (result != 0)
    void* eax_3
    int32_t ecx_1
    eax_3, ecx_1 = sub_573400()
    int32_t var_30_1 = ecx_1
    void var_19c8
    uint32_t eax_4 = sub_577640(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19c8)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0e88969d8d1a058a4af16a2cfebcc7da>,bool,enum CardID>::VTable
        * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_0e88969d8d1a058a4af16a2cfebcc7da>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_cb0
    __builtin_memcpy(&var_cb0, &var_19c8, 0xc84)
    int32_t** var_d0c_1 = &result_1
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0e88969d8d1a058a4af16a2cfebcc7da>,bool,enum CardID>::VTable
        * const* var_cec_1 = &var_d10
    int32_t var_14_1 = 0
    void* var_cb4
    int32_t* var_30_2 = &var_cb4
    int32_t var_34_2 = 0
    void var_5c
    var_cb4 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_cec_1 != 0)
        int32_t var_38_2 = (*var_cec_1)->vFunc_0(&var_5c)
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_3 = GSI1::OffForSym(eax_4, eax_4, &var_cb0)
    
    if (var_cec_1 != 0)
        (*var_cec_1)->vFunc_4(var_cec_1 != &var_d10)
    
    int64_t var_ce4
    __builtin_memset(&var_ce4, 0, 0x2c)
    int128_t var_d40 = 0xa5.o
    int32_t var_cd8
    int128_t var_d30_1 = var_cd8.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    result = sub_563c40(&var_d40, 0xc, 0)
    
    if (result != 0)
        void* eax_11 = sub_573400()
        result = sub_583720(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
