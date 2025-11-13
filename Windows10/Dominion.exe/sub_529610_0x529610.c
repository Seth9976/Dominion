// 函数: sub_529610
// 地址: 0x529610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765a11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19d0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19f0
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19f0, 1)
void var_cb0
__builtin_memcpy(&var_cb0, &var_19f0, 0xc84)
void* var_cb4
void var_5c
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7d5354eb50a1352e665e3a78b219c6e5>,bool,enum CardID>::VTable
    * const* eax_11

if (*(*(sub_573400() + 4) + 0xd48) s< 0x17)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7d5354eb50a1352e665e3a78b219c6e5>,bool,enum CardID>::VTable
        * var_d38 = &std::_Func_impl_no_alloc<class <lambda_4a25a011d4e8141e0390b5d0051fd247>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7d5354eb50a1352e665e3a78b219c6e5>,bool,enum CardID>::VTable
        ** var_d14_1 = &var_d38
    void** eax_12 = &var_cb4
    int32_t var_14_3 = 3
    void** var_30_3 = &var_cb4
    int32_t var_34_2 = 0
    var_cb4 = &var_5c
    int32_t var_38_2 = 0
    var_14_3.b = 5
    
    if (var_d14_1 != 0)
        eax_12 = (*var_d14_1)->vFunc_0(&var_5c)
        void** var_38_3 = eax_12
    
    var_14_3.b = 3
    int32_t var_14_4 = 0xffffffff
    int32_t var_30_4 = GSI1::OffForSym(eax_12, eax_4, &var_cb0)
    
    if (var_d14_1 != 0)
        eax_11.b = var_d14_1 != &var_d38
        (*var_d14_1)->vFunc_4(zx.d(eax_11.b))
else
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7d5354eb50a1352e665e3a78b219c6e5>,bool,enum CardID>::VTable
        * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_7d5354eb50a1352e665e3a78b219c6e5>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7d5354eb50a1352e665e3a78b219c6e5>,bool,enum CardID>::VTable
        * const* var_cec_1 = &var_d10
    int32_t* eax_7 = &var_cb4
    int32_t var_14_1 = 0
    int32_t* var_30_1 = &var_cb4
    int32_t var_34_1 = 0
    var_cb4 = &var_5c
    int32_t var_38 = 0
    var_14_1.b = 2
    
    if (var_cec_1 != 0)
        eax_7 = (*var_cec_1)->vFunc_0(&var_5c)
        int32_t* var_38_1 = eax_7
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_2 = GSI1::OffForSym(eax_7, eax_4, &var_cb0)
    
    if (var_cec_1 != 0)
        eax_11.b = var_cec_1 != &var_d10
        (*var_cec_1)->vFunc_4(zx.d(eax_11.b))
int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
int128_t var_d68 = 0x8f.o
int32_t var_cd8
int128_t var_d58 = var_cd8.o
int64_t var_cc8
int128_t var_d48 = var_cc8.o
int32_t* result = sub_563c40(&var_d68, 0x33, 0)

if (result != 0)
    result = sub_566bb0(result, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
